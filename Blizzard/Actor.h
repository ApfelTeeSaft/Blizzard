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
		try
		{
			Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "=== Starting Actor Namespace Initialization ===");

			// Initialize SpawnActorInternal
			try
			{
				Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "Initializing SpawnActorInternal...");
				auto spawnActorAddress = Globals::GetAddress(0x20B1240);
				if (spawnActorAddress == 0)
				{
					Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "SpawnActorInternal address resolution failed");
					return;
				}
				Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "SpawnActorInternal address: 0x%llX", spawnActorAddress);

				SpawnActorInternal = decltype(SpawnActorInternal)(spawnActorAddress);
				if (!SpawnActorInternal)
				{
					Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "SpawnActorInternal function pointer is null");
					return;
				}
				Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "SpawnActorInternal initialized successfully");
			}
			catch (...)
			{
				Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Exception during SpawnActorInternal initialization");
				return;
			}

			// Initialize InternalTryActivateAbility
			try
			{
				Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "Initializing InternalTryActivateAbility...");
				auto activateAbilityAddress = Globals::GetAddress(0x4DD2F0);
				if (activateAbilityAddress == 0)
				{
					Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "InternalTryActivateAbility address resolution failed");
					return;
				}
				Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "InternalTryActivateAbility address: 0x%llX", activateAbilityAddress);

				InternalTryActivateAbility = decltype(InternalTryActivateAbility)(activateAbilityAddress);
				if (!InternalTryActivateAbility)
				{
					Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "InternalTryActivateAbility function pointer is null");
					return;
				}
				Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "InternalTryActivateAbility initialized successfully");
			}
			catch (...)
			{
				Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Exception during InternalTryActivateAbility initialization");
				return;
			}

			Logging::SafeLog(ELogEvent::Info, ELogType::Athena, "=== ACTOR NAMESPACE INITIALIZATION COMPLETED SUCCESSFULLY ===");
		}
		catch (...)
		{
			Logging::SafeLog(ELogEvent::Error, ELogType::Athena, "Critical exception in ActorNamespace::Initialize");
		}
	}
}