﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MissionGen_AthenaSquad

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MissionGen_AthenaSquad.MissionGen_AthenaSquad_C
// 0x0000 (0x0628 - 0x0628)
class UMissionGen_AthenaSquad_C final : public UFortMissionGenerator
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MissionGen_AthenaSquad_C">();
	}
	static class UMissionGen_AthenaSquad_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMissionGen_AthenaSquad_C>();
	}
};
static_assert(alignof(UMissionGen_AthenaSquad_C) == 0x000008, "Wrong alignment on UMissionGen_AthenaSquad_C");
static_assert(sizeof(UMissionGen_AthenaSquad_C) == 0x000628, "Wrong size on UMissionGen_AthenaSquad_C");

}

