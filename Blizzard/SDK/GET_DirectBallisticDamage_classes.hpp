﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GET_DirectBallisticDamage

#include "Basic.hpp"

#include "GET_DirectPhysicalDamage_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GET_DirectBallisticDamage.GET_DirectBallisticDamage_C
// 0x0000 (0x0670 - 0x0670)
class UGET_DirectBallisticDamage_C : public UGET_DirectPhysicalDamage_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GET_DirectBallisticDamage_C">();
	}
	static class UGET_DirectBallisticDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGET_DirectBallisticDamage_C>();
	}
};
static_assert(alignof(UGET_DirectBallisticDamage_C) == 0x000010, "Wrong alignment on UGET_DirectBallisticDamage_C");
static_assert(sizeof(UGET_DirectBallisticDamage_C) == 0x000670, "Wrong size on UGET_DirectBallisticDamage_C");

}

