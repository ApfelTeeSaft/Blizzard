﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PBWA_BG_BalconyI

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PBWA_BG_BalconyI.PBWA_BG_BalconyI_C
// 0x0008 (0x0DC0 - 0x0DB8)
class APBWA_BG_BalconyI_C final : public ABuildingFloor
{
public:
	uint8                                         Pad_DB8[0x8];                                      // 0x0DB8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PBWA_BG_BalconyI_C">();
	}
	static class APBWA_BG_BalconyI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APBWA_BG_BalconyI_C>();
	}
};
static_assert(alignof(APBWA_BG_BalconyI_C) == 0x000008, "Wrong alignment on APBWA_BG_BalconyI_C");
static_assert(sizeof(APBWA_BG_BalconyI_C) == 0x000DC0, "Wrong size on APBWA_BG_BalconyI_C");

}

