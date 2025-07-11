﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WasSurvivorHitRecently

#include "Basic.hpp"

#include "SurvivorHitInfoType_structs.hpp"
#include "AIModule_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass WasSurvivorHitRecently.WasSurvivorHitRecently_C
// 0x0008 (0x00A8 - 0x00A0)
class UWasSurvivorHitRecently_C final : public UBTDecorator_BlueprintBase
{
public:
	ESurvivorHitInfoType                          SurvivorHitInfoType;                               // 0x00A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A1[0x3];                                       // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         RecentlyValue;                                     // 0x00A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WasSurvivorHitRecently_C">();
	}
	static class UWasSurvivorHitRecently_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWasSurvivorHitRecently_C>();
	}
};
static_assert(alignof(UWasSurvivorHitRecently_C) == 0x000008, "Wrong alignment on UWasSurvivorHitRecently_C");
static_assert(sizeof(UWasSurvivorHitRecently_C) == 0x0000A8, "Wrong size on UWasSurvivorHitRecently_C");
static_assert(offsetof(UWasSurvivorHitRecently_C, SurvivorHitInfoType) == 0x0000A0, "Member 'UWasSurvivorHitRecently_C::SurvivorHitInfoType' has a wrong offset!");
static_assert(offsetof(UWasSurvivorHitRecently_C, RecentlyValue) == 0x0000A4, "Member 'UWasSurvivorHitRecently_C::RecentlyValue' has a wrong offset!");

}

