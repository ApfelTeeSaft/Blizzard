﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Hex_Outpost_Theater3

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_Hex_Outpost_Theater3.BP_Hex_Outpost_Theater3_C.ExecuteUbergraph_BP_Hex_Outpost_Theater3
// 0x0068 (0x0068 - 0x0000)
struct BP_Hex_Outpost_Theater3_C_ExecuteUbergraph_BP_Hex_Outpost_Theater3 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FUniqueNetIdRepl& UniqueId)> K2Node_CreateDelegate_OutputDelegate;   // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	struct FUniqueNetIdRepl                       K2Node_CustomEvent_UniqueId;                       // 0x0018(0x0028)(ConstParm, HasGetValueTypeHash)
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue;                  // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHomeBaseContext*                       CallFunc_GetContext_ReturnValue;                   // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_Hex_Outpost_Theater3_C_ExecuteUbergraph_BP_Hex_Outpost_Theater3) == 0x000008, "Wrong alignment on BP_Hex_Outpost_Theater3_C_ExecuteUbergraph_BP_Hex_Outpost_Theater3");
static_assert(sizeof(BP_Hex_Outpost_Theater3_C_ExecuteUbergraph_BP_Hex_Outpost_Theater3) == 0x000068, "Wrong size on BP_Hex_Outpost_Theater3_C_ExecuteUbergraph_BP_Hex_Outpost_Theater3");
static_assert(offsetof(BP_Hex_Outpost_Theater3_C_ExecuteUbergraph_BP_Hex_Outpost_Theater3, EntryPoint) == 0x000000, "Member 'BP_Hex_Outpost_Theater3_C_ExecuteUbergraph_BP_Hex_Outpost_Theater3::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Hex_Outpost_Theater3_C_ExecuteUbergraph_BP_Hex_Outpost_Theater3, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'BP_Hex_Outpost_Theater3_C_ExecuteUbergraph_BP_Hex_Outpost_Theater3::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Hex_Outpost_Theater3_C_ExecuteUbergraph_BP_Hex_Outpost_Theater3, K2Node_CustomEvent_UniqueId) == 0x000018, "Member 'BP_Hex_Outpost_Theater3_C_ExecuteUbergraph_BP_Hex_Outpost_Theater3::K2Node_CustomEvent_UniqueId' has a wrong offset!");
static_assert(offsetof(BP_Hex_Outpost_Theater3_C_ExecuteUbergraph_BP_Hex_Outpost_Theater3, CallFunc_GetMaterial_ReturnValue) == 0x000040, "Member 'BP_Hex_Outpost_Theater3_C_ExecuteUbergraph_BP_Hex_Outpost_Theater3::CallFunc_GetMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Hex_Outpost_Theater3_C_ExecuteUbergraph_BP_Hex_Outpost_Theater3, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'BP_Hex_Outpost_Theater3_C_ExecuteUbergraph_BP_Hex_Outpost_Theater3::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Hex_Outpost_Theater3_C_ExecuteUbergraph_BP_Hex_Outpost_Theater3, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000050, "Member 'BP_Hex_Outpost_Theater3_C_ExecuteUbergraph_BP_Hex_Outpost_Theater3::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Hex_Outpost_Theater3_C_ExecuteUbergraph_BP_Hex_Outpost_Theater3, CallFunc_GetContext_ReturnValue) == 0x000058, "Member 'BP_Hex_Outpost_Theater3_C_ExecuteUbergraph_BP_Hex_Outpost_Theater3::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Hex_Outpost_Theater3_C_ExecuteUbergraph_BP_Hex_Outpost_Theater3, CallFunc_IsValid_ReturnValue1) == 0x000060, "Member 'BP_Hex_Outpost_Theater3_C_ExecuteUbergraph_BP_Hex_Outpost_Theater3::CallFunc_IsValid_ReturnValue1' has a wrong offset!");

// Function BP_Hex_Outpost_Theater3.BP_Hex_Outpost_Theater3_C.HandleOnPlayerInfoChanged
// 0x0028 (0x0028 - 0x0000)
struct BP_Hex_Outpost_Theater3_C_HandleOnPlayerInfoChanged final
{
public:
	struct FUniqueNetIdRepl                       UniqueId;                                          // 0x0000(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(BP_Hex_Outpost_Theater3_C_HandleOnPlayerInfoChanged) == 0x000008, "Wrong alignment on BP_Hex_Outpost_Theater3_C_HandleOnPlayerInfoChanged");
static_assert(sizeof(BP_Hex_Outpost_Theater3_C_HandleOnPlayerInfoChanged) == 0x000028, "Wrong size on BP_Hex_Outpost_Theater3_C_HandleOnPlayerInfoChanged");
static_assert(offsetof(BP_Hex_Outpost_Theater3_C_HandleOnPlayerInfoChanged, UniqueId) == 0x000000, "Member 'BP_Hex_Outpost_Theater3_C_HandleOnPlayerInfoChanged::UniqueId' has a wrong offset!");

}

