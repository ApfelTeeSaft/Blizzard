﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ScoreBadgeProviderMission

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass ScoreBadgeProviderMission.ScoreBadgeProviderMission_C
// 0x0000 (0x0000 - 0x0000)
class IScoreBadgeProviderMission_C final
{
public:
	void GetScoreBadgeInfos(EStatCategory ScoreCategory, TArray<struct FCollectionMissionBadgeDisplayInfo>* BadgeInfos);
	void GetTotalScore(EStatCategory ScoreCategory, int32* Score);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ScoreBadgeProviderMission_C">();
	}
	static class IScoreBadgeProviderMission_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IScoreBadgeProviderMission_C>();
	}

	class UObject* AsUObject()
	{
		return reinterpret_cast<UObject*>(this);
	}
	const class UObject* AsUObject() const
	{
		return reinterpret_cast<const UObject*>(this);
	}
};
static_assert(alignof(IScoreBadgeProviderMission_C) == 0x000001, "Wrong alignment on IScoreBadgeProviderMission_C");
static_assert(sizeof(IScoreBadgeProviderMission_C) == 0x000001, "Wrong size on IScoreBadgeProviderMission_C");

}

