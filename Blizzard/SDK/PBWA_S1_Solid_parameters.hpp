﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PBWA_S1_Solid

#include "Basic.hpp"


namespace SDK::Params
{

// Function PBWA_S1_Solid.PBWA_S1_Solid_C.ExecuteUbergraph_PBWA_S1_Solid
// 0x0010 (0x0010 - 0x0000)
struct PBWA_S1_Solid_C_ExecuteUbergraph_PBWA_S1_Solid final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UMaterialInterface*               Temp_object_Variable;                              // 0x0008(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PBWA_S1_Solid_C_ExecuteUbergraph_PBWA_S1_Solid) == 0x000008, "Wrong alignment on PBWA_S1_Solid_C_ExecuteUbergraph_PBWA_S1_Solid");
static_assert(sizeof(PBWA_S1_Solid_C_ExecuteUbergraph_PBWA_S1_Solid) == 0x000010, "Wrong size on PBWA_S1_Solid_C_ExecuteUbergraph_PBWA_S1_Solid");
static_assert(offsetof(PBWA_S1_Solid_C_ExecuteUbergraph_PBWA_S1_Solid, EntryPoint) == 0x000000, "Member 'PBWA_S1_Solid_C_ExecuteUbergraph_PBWA_S1_Solid::EntryPoint' has a wrong offset!");
static_assert(offsetof(PBWA_S1_Solid_C_ExecuteUbergraph_PBWA_S1_Solid, Temp_object_Variable) == 0x000008, "Member 'PBWA_S1_Solid_C_ExecuteUbergraph_PBWA_S1_Solid::Temp_object_Variable' has a wrong offset!");

// Function PBWA_S1_Solid.PBWA_S1_Solid_C.UserConstructionScript
// 0x000C (0x000C - 0x0000)
struct PBWA_S1_Solid_C_UserConstructionScript final
{
public:
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PBWA_S1_Solid_C_UserConstructionScript) == 0x000004, "Wrong alignment on PBWA_S1_Solid_C_UserConstructionScript");
static_assert(sizeof(PBWA_S1_Solid_C_UserConstructionScript) == 0x00000C, "Wrong size on PBWA_S1_Solid_C_UserConstructionScript");
static_assert(offsetof(PBWA_S1_Solid_C_UserConstructionScript, CallFunc_HasAuthority_ReturnValue) == 0x000000, "Member 'PBWA_S1_Solid_C_UserConstructionScript::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(PBWA_S1_Solid_C_UserConstructionScript, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000004, "Member 'PBWA_S1_Solid_C_UserConstructionScript::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(PBWA_S1_Solid_C_UserConstructionScript, CallFunc_Less_IntInt_ReturnValue) == 0x000008, "Member 'PBWA_S1_Solid_C_UserConstructionScript::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

