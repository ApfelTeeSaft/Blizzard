﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemManagementCompareModeBox

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ItemManagementCompareModeBox.ItemManagementCompareModeBox_C.ExecuteUbergraph_ItemManagementCompareModeBox
// 0x0038 (0x0038 - 0x0000)
struct ItemManagementCompareModeBox_C_ExecuteUbergraph_ItemManagementCompareModeBox final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle;              // 0x0008(0x0010)(NoDestructor)
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate;              // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue1;      // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemManagementCompareModeBox_C_ExecuteUbergraph_ItemManagementCompareModeBox) == 0x000008, "Wrong alignment on ItemManagementCompareModeBox_C_ExecuteUbergraph_ItemManagementCompareModeBox");
static_assert(sizeof(ItemManagementCompareModeBox_C_ExecuteUbergraph_ItemManagementCompareModeBox) == 0x000038, "Wrong size on ItemManagementCompareModeBox_C_ExecuteUbergraph_ItemManagementCompareModeBox");
static_assert(offsetof(ItemManagementCompareModeBox_C_ExecuteUbergraph_ItemManagementCompareModeBox, EntryPoint) == 0x000000, "Member 'ItemManagementCompareModeBox_C_ExecuteUbergraph_ItemManagementCompareModeBox::EntryPoint' has a wrong offset!");
static_assert(offsetof(ItemManagementCompareModeBox_C_ExecuteUbergraph_ItemManagementCompareModeBox, K2Node_MakeStruct_DataTableRowHandle) == 0x000008, "Member 'ItemManagementCompareModeBox_C_ExecuteUbergraph_ItemManagementCompareModeBox::K2Node_MakeStruct_DataTableRowHandle' has a wrong offset!");
static_assert(offsetof(ItemManagementCompareModeBox_C_ExecuteUbergraph_ItemManagementCompareModeBox, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'ItemManagementCompareModeBox_C_ExecuteUbergraph_ItemManagementCompareModeBox::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ItemManagementCompareModeBox_C_ExecuteUbergraph_ItemManagementCompareModeBox, CallFunc_GetUINavigationManager_ReturnValue) == 0x000028, "Member 'ItemManagementCompareModeBox_C_ExecuteUbergraph_ItemManagementCompareModeBox::CallFunc_GetUINavigationManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemManagementCompareModeBox_C_ExecuteUbergraph_ItemManagementCompareModeBox, CallFunc_GetUINavigationManager_ReturnValue1) == 0x000030, "Member 'ItemManagementCompareModeBox_C_ExecuteUbergraph_ItemManagementCompareModeBox::CallFunc_GetUINavigationManager_ReturnValue1' has a wrong offset!");

// Function ItemManagementCompareModeBox.ItemManagementCompareModeBox_C.UpdateFocusedItems
// 0x0010 (0x0010 - 0x0000)
struct ItemManagementCompareModeBox_C_UpdateFocusedItems final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemManagementCompareModeBox_C_UpdateFocusedItems) == 0x000008, "Wrong alignment on ItemManagementCompareModeBox_C_UpdateFocusedItems");
static_assert(sizeof(ItemManagementCompareModeBox_C_UpdateFocusedItems) == 0x000010, "Wrong size on ItemManagementCompareModeBox_C_UpdateFocusedItems");
static_assert(offsetof(ItemManagementCompareModeBox_C_UpdateFocusedItems, Temp_bool_Variable) == 0x000000, "Member 'ItemManagementCompareModeBox_C_UpdateFocusedItems::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ItemManagementCompareModeBox_C_UpdateFocusedItems, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'ItemManagementCompareModeBox_C_UpdateFocusedItems::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemManagementCompareModeBox_C_UpdateFocusedItems, K2Node_Select_Default) == 0x000008, "Member 'ItemManagementCompareModeBox_C_UpdateFocusedItems::K2Node_Select_Default' has a wrong offset!");

// Function ItemManagementCompareModeBox.ItemManagementCompareModeBox_C.HandleBack
// 0x0001 (0x0001 - 0x0000)
struct ItemManagementCompareModeBox_C_HandleBack final
{
public:
	bool                                          Passthrough;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ItemManagementCompareModeBox_C_HandleBack) == 0x000001, "Wrong alignment on ItemManagementCompareModeBox_C_HandleBack");
static_assert(sizeof(ItemManagementCompareModeBox_C_HandleBack) == 0x000001, "Wrong size on ItemManagementCompareModeBox_C_HandleBack");
static_assert(offsetof(ItemManagementCompareModeBox_C_HandleBack, Passthrough) == 0x000000, "Member 'ItemManagementCompareModeBox_C_HandleBack::Passthrough' has a wrong offset!");

}

