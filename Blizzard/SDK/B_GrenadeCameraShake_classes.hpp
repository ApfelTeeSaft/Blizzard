﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_GrenadeCameraShake

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_GrenadeCameraShake.B_GrenadeCameraShake_C
// 0x0000 (0x0160 - 0x0160)
class UB_GrenadeCameraShake_C final : public UCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_GrenadeCameraShake_C">();
	}
	static class UB_GrenadeCameraShake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UB_GrenadeCameraShake_C>();
	}
};
static_assert(alignof(UB_GrenadeCameraShake_C) == 0x000008, "Wrong alignment on UB_GrenadeCameraShake_C");
static_assert(sizeof(UB_GrenadeCameraShake_C) == 0x000160, "Wrong size on UB_GrenadeCameraShake_C");

}

