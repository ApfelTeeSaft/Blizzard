﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: s_pool_floor

#include "Basic.hpp"

#include "_WaterMeshBlueprintMaster_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass s_pool_floor.s_pool_floor_C
// 0x0000 (0x03E0 - 0x03E0)
class As_pool_floor_C final : public A_WaterMeshBlueprintMaster_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"s_pool_floor_C">();
	}
	static class As_pool_floor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<As_pool_floor_C>();
	}
};
static_assert(alignof(As_pool_floor_C) == 0x000008, "Wrong alignment on As_pool_floor_C");
static_assert(sizeof(As_pool_floor_C) == 0x0003E0, "Wrong size on As_pool_floor_C");

}

