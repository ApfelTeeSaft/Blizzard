﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WaveModifiersTile

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WaveModifiersTile.WaveModifiersTile_C.ExecuteUbergraph_WaveModifiersTile
// 0x00C8 (0x00C8 - 0x0000)
struct WaveModifiersTile_C_ExecuteUbergraph_WaveModifiersTile final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_Event_InData;                               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                              K2Node_DynamicCast_AsFort_Item;                    // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            CallFunc_GetItemSmallPreviewImageBrush_ReturnValue; // 0x0020(0x0078)()
	class FText                                   CallFunc_GetDescription_ReturnValue;               // 0x0098(0x0018)()
	class FText                                   CallFunc_GetDisplayName_ReturnValue;               // 0x00B0(0x0018)()
};
static_assert(alignof(WaveModifiersTile_C_ExecuteUbergraph_WaveModifiersTile) == 0x000008, "Wrong alignment on WaveModifiersTile_C_ExecuteUbergraph_WaveModifiersTile");
static_assert(sizeof(WaveModifiersTile_C_ExecuteUbergraph_WaveModifiersTile) == 0x0000C8, "Wrong size on WaveModifiersTile_C_ExecuteUbergraph_WaveModifiersTile");
static_assert(offsetof(WaveModifiersTile_C_ExecuteUbergraph_WaveModifiersTile, EntryPoint) == 0x000000, "Member 'WaveModifiersTile_C_ExecuteUbergraph_WaveModifiersTile::EntryPoint' has a wrong offset!");
static_assert(offsetof(WaveModifiersTile_C_ExecuteUbergraph_WaveModifiersTile, K2Node_Event_InData) == 0x000008, "Member 'WaveModifiersTile_C_ExecuteUbergraph_WaveModifiersTile::K2Node_Event_InData' has a wrong offset!");
static_assert(offsetof(WaveModifiersTile_C_ExecuteUbergraph_WaveModifiersTile, K2Node_DynamicCast_AsFort_Item) == 0x000010, "Member 'WaveModifiersTile_C_ExecuteUbergraph_WaveModifiersTile::K2Node_DynamicCast_AsFort_Item' has a wrong offset!");
static_assert(offsetof(WaveModifiersTile_C_ExecuteUbergraph_WaveModifiersTile, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WaveModifiersTile_C_ExecuteUbergraph_WaveModifiersTile::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WaveModifiersTile_C_ExecuteUbergraph_WaveModifiersTile, CallFunc_GetItemSmallPreviewImageBrush_ReturnValue) == 0x000020, "Member 'WaveModifiersTile_C_ExecuteUbergraph_WaveModifiersTile::CallFunc_GetItemSmallPreviewImageBrush_ReturnValue' has a wrong offset!");
static_assert(offsetof(WaveModifiersTile_C_ExecuteUbergraph_WaveModifiersTile, CallFunc_GetDescription_ReturnValue) == 0x000098, "Member 'WaveModifiersTile_C_ExecuteUbergraph_WaveModifiersTile::CallFunc_GetDescription_ReturnValue' has a wrong offset!");
static_assert(offsetof(WaveModifiersTile_C_ExecuteUbergraph_WaveModifiersTile, CallFunc_GetDisplayName_ReturnValue) == 0x0000B0, "Member 'WaveModifiersTile_C_ExecuteUbergraph_WaveModifiersTile::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");

// Function WaveModifiersTile.WaveModifiersTile_C.SetData
// 0x0008 (0x0008 - 0x0000)
struct WaveModifiersTile_C_SetData final
{
public:
	class UObject*                                InData;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WaveModifiersTile_C_SetData) == 0x000008, "Wrong alignment on WaveModifiersTile_C_SetData");
static_assert(sizeof(WaveModifiersTile_C_SetData) == 0x000008, "Wrong size on WaveModifiersTile_C_SetData");
static_assert(offsetof(WaveModifiersTile_C_SetData, InData) == 0x000000, "Member 'WaveModifiersTile_C_SetData::InData' has a wrong offset!");

// Function WaveModifiersTile.WaveModifiersTile_C.SetModifierItem
// 0x00B8 (0x00B8 - 0x0000)
struct WaveModifiersTile_C_SetModifierItem final
{
public:
	class UFortItem*                              ModifierItem;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            CallFunc_GetItemSmallPreviewImageBrush_ReturnValue; // 0x0010(0x0078)()
	class FText                                   CallFunc_GetDescription_ReturnValue;               // 0x0088(0x0018)()
	class FText                                   CallFunc_GetDisplayName_ReturnValue;               // 0x00A0(0x0018)()
};
static_assert(alignof(WaveModifiersTile_C_SetModifierItem) == 0x000008, "Wrong alignment on WaveModifiersTile_C_SetModifierItem");
static_assert(sizeof(WaveModifiersTile_C_SetModifierItem) == 0x0000B8, "Wrong size on WaveModifiersTile_C_SetModifierItem");
static_assert(offsetof(WaveModifiersTile_C_SetModifierItem, ModifierItem) == 0x000000, "Member 'WaveModifiersTile_C_SetModifierItem::ModifierItem' has a wrong offset!");
static_assert(offsetof(WaveModifiersTile_C_SetModifierItem, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WaveModifiersTile_C_SetModifierItem::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WaveModifiersTile_C_SetModifierItem, CallFunc_GetItemSmallPreviewImageBrush_ReturnValue) == 0x000010, "Member 'WaveModifiersTile_C_SetModifierItem::CallFunc_GetItemSmallPreviewImageBrush_ReturnValue' has a wrong offset!");
static_assert(offsetof(WaveModifiersTile_C_SetModifierItem, CallFunc_GetDescription_ReturnValue) == 0x000088, "Member 'WaveModifiersTile_C_SetModifierItem::CallFunc_GetDescription_ReturnValue' has a wrong offset!");
static_assert(offsetof(WaveModifiersTile_C_SetModifierItem, CallFunc_GetDisplayName_ReturnValue) == 0x0000A0, "Member 'WaveModifiersTile_C_SetModifierItem::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");

}

