﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GET_Cooldown

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GET_Cooldown.GET_Cooldown_C
// 0x0000 (0x0670 - 0x0670)
class UGET_Cooldown_C : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GET_Cooldown_C">();
	}
	static class UGET_Cooldown_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGET_Cooldown_C>();
	}
};
static_assert(alignof(UGET_Cooldown_C) == 0x000010, "Wrong alignment on UGET_Cooldown_C");
static_assert(sizeof(UGET_Cooldown_C) == 0x000670, "Wrong size on UGET_Cooldown_C");

}

