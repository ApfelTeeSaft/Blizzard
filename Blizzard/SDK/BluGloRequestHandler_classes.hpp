﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BluGloRequestHandler

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BluGloRequestHandler.BluGloRequestHandler_C
// 0x0048 (0x00C0 - 0x0078)
class UBluGloRequestHandler_C final : public UEnvQueryInstanceBlueprintWrapper
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0078(0x0008)(Transient, DuplicateTransient)
	UMulticastDelegateProperty_                   OnBluGloQueryFinished;                             // 0x0080(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         NumBluGloToSpawn;                                  // 0x0090(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 ActorToSpawnFrom;                                  // 0x0098(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LocationToSpawnFrom;                               // 0x00A0(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        LocationsToSpawnTo;                                // 0x00B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BluGloRequestHandler(int32 EntryPoint);
	void InitializeBluGloRequestHandler(int32 NumBluGloToSpawn_0, class AActor* ActorToSpawnFrom_0, const struct FVector& LocationToSpawnFromIfActorInvalid);
	void EQSQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus);
	void BuildLocationsFromQueryLocations(TArray<struct FVector>& QueryResultLocations);
	void BuildLocationsRandomly();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BluGloRequestHandler_C">();
	}
	static class UBluGloRequestHandler_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBluGloRequestHandler_C>();
	}
};
static_assert(alignof(UBluGloRequestHandler_C) == 0x000008, "Wrong alignment on UBluGloRequestHandler_C");
static_assert(sizeof(UBluGloRequestHandler_C) == 0x0000C0, "Wrong size on UBluGloRequestHandler_C");
static_assert(offsetof(UBluGloRequestHandler_C, UberGraphFrame) == 0x000078, "Member 'UBluGloRequestHandler_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBluGloRequestHandler_C, OnBluGloQueryFinished) == 0x000080, "Member 'UBluGloRequestHandler_C::OnBluGloQueryFinished' has a wrong offset!");
static_assert(offsetof(UBluGloRequestHandler_C, NumBluGloToSpawn) == 0x000090, "Member 'UBluGloRequestHandler_C::NumBluGloToSpawn' has a wrong offset!");
static_assert(offsetof(UBluGloRequestHandler_C, ActorToSpawnFrom) == 0x000098, "Member 'UBluGloRequestHandler_C::ActorToSpawnFrom' has a wrong offset!");
static_assert(offsetof(UBluGloRequestHandler_C, LocationToSpawnFrom) == 0x0000A0, "Member 'UBluGloRequestHandler_C::LocationToSpawnFrom' has a wrong offset!");
static_assert(offsetof(UBluGloRequestHandler_C, LocationsToSpawnTo) == 0x0000B0, "Member 'UBluGloRequestHandler_C::LocationsToSpawnTo' has a wrong offset!");

}

