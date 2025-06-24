#pragma once
#include "SDK.hpp"
#include "FN_Basic.hpp"
#include "Globals.h"

namespace ActorNamespace
{
	bool (*InternalTryActivateAbility)(SDK::UAbilitySystemComponent*, SDK::FGameplayAbilitySpecHandle, SDK::FPredictionKey, SDK::UGameplayAbility**, void*, const SDK::FGameplayEventData* TriggerEventData);
	SDK::AActor* (*SpawnActorInternal)(SDK::UWorld*, SDK::UClass*, SDK::FTransform, SDK::FActorSpawnParameters);

	inline SDK::FQuat RotatorToQuat(const SDK::FRotator& Rotation)
	{
		auto DEG_TO_RAD = 3.14159 / 180;
		auto DIVIDE_BY_2 = DEG_TO_RAD / 2;
		auto SP = sin(Rotation.Pitch * DIVIDE_BY_2);
		auto CP = cos(Rotation.Pitch * DIVIDE_BY_2);
		auto SY = sin(Rotation.Yaw * DIVIDE_BY_2);
		auto CY = cos(Rotation.Yaw * DIVIDE_BY_2);
		auto SR = sin(Rotation.Roll * DIVIDE_BY_2);
		auto CR = cos(Rotation.Roll * DIVIDE_BY_2);

		SDK::FQuat Quat;
		Quat.X = CR * SP * SY - SR * CP * CY;
		Quat.Y = -CR * SP * CY - SR * CP * SY;
		Quat.Z = CR * CP * SY - SR * SP * CY;
		Quat.W = CR * CP * CY + SR * SP * SY;
		return Quat;
	}

	template<typename T = SDK::AActor>
	T* SpawnActor(SDK::FVector Location, SDK::FRotator Rotation, SDK::UClass* ActorClass)
	{
		SDK::FTransform Transform;
		Transform.Rotation = RotatorToQuat(Rotation);
		Transform.Scale3D = { 1, 1, 1 };
		Transform.Translation = Location;
		return (T*)SpawnActorInternal(Globals::GetWorld(), ActorClass, Transform, SDK::FActorSpawnParameters());
	}

	template<typename T = SDK::AActor>
	T* SpawnActor(SDK::UClass* ActorClass, SDK::FVector Location, SDK::FRotator Rotation = {})
	{
		SDK::FTransform Transform;
		Transform.Rotation = RotatorToQuat(Rotation);
		Transform.Scale3D = { 1, 1, 1 };
		Transform.Translation = Location;
		return (T*)SpawnActorInternal(Globals::GetWorld(), ActorClass, Transform, SDK::FActorSpawnParameters());
	}

	template<typename T = SDK::AActor>
	T* SpawnActor(SDK::UClass* ActorClass, SDK::FVector Location)
	{
		return SpawnActor<T>(ActorClass, Location, SDK::FRotator{});
	}

	void Initialize()
	{
		SpawnActorInternal = decltype(SpawnActorInternal)(Globals::GetAddress(0x20B1240));
		InternalTryActivateAbility = decltype(InternalTryActivateAbility)(Globals::GetAddress(0x4DD2F0));

		auto NewCheatManager = SDK::UGameplayStatics::GetDefaultObj()->SpawnObject(SDK::UCheatManager::StaticClass(), Globals::GetEngine()->GameInstance->LocalPlayers[0]->PlayerController);
		Globals::GetEngine()->GameInstance->LocalPlayers[0]->PlayerController->CheatManager = (SDK::UCheatManager*)(NewCheatManager);
	}
}