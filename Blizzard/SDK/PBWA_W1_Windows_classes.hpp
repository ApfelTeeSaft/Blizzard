﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PBWA_W1_Windows

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PBWA_W1_Windows.PBWA_W1_Windows_C
// 0x0000 (0x0EA0 - 0x0EA0)
class APBWA_W1_Windows_C final : public ABuildingWall
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PBWA_W1_Windows_C">();
	}
	static class APBWA_W1_Windows_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APBWA_W1_Windows_C>();
	}
};
static_assert(alignof(APBWA_W1_Windows_C) == 0x000008, "Wrong alignment on APBWA_W1_Windows_C");
static_assert(sizeof(APBWA_W1_Windows_C) == 0x000EA0, "Wrong size on APBWA_W1_Windows_C");

}

