﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ObjectivesPage

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function ObjectivesPage.ObjectivesPage_C.ExecuteUbergraph_ObjectivesPage
// 0x00D0 (0x00D0 - 0x0000)
struct ObjectivesPage_C_ExecuteUbergraph_ObjectivesPage final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const TArray<class UFortGameplayModifierItemDefinition*>& AppliedModifiers)> K2Node_CreateDelegate_OutputDelegate; // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class UCommonButton* AssociatedButton, int32 ButtonIndex)> K2Node_CreateDelegate_OutputDelegate1; // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	class UCommonButtonGroup*                     CallFunc_SpawnObject_ReturnValue;                  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate12;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_GetSelectedButtonIndex_ReturnValue;       // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          CallFunc_GetButtonAtIndex_ReturnValue;             // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle;              // 0x0050(0x0010)(NoDestructor)
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate123;           // 0x0060(0x0010)(ZeroConstructor, NoDestructor)
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle1;             // 0x0070(0x0010)(NoDestructor)
	TDelegate<void(bool* bPassThrough)>           K2Node_CreateDelegate_OutputDelegate1234;          // 0x0080(0x0010)(ZeroConstructor, NoDestructor)
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle12;            // 0x0090(0x0010)(NoDestructor)
	bool                                          CallFunc_MissionHasModifiers_MissionHasModifiers;  // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue;                   // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortGameplayModifierItemDefinition*> K2Node_CustomEvent_AppliedModifiers;          // 0x00B8(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ObjectivesPage_C_ExecuteUbergraph_ObjectivesPage) == 0x000008, "Wrong alignment on ObjectivesPage_C_ExecuteUbergraph_ObjectivesPage");
static_assert(sizeof(ObjectivesPage_C_ExecuteUbergraph_ObjectivesPage) == 0x0000D0, "Wrong size on ObjectivesPage_C_ExecuteUbergraph_ObjectivesPage");
static_assert(offsetof(ObjectivesPage_C_ExecuteUbergraph_ObjectivesPage, EntryPoint) == 0x000000, "Member 'ObjectivesPage_C_ExecuteUbergraph_ObjectivesPage::EntryPoint' has a wrong offset!");
static_assert(offsetof(ObjectivesPage_C_ExecuteUbergraph_ObjectivesPage, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'ObjectivesPage_C_ExecuteUbergraph_ObjectivesPage::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ObjectivesPage_C_ExecuteUbergraph_ObjectivesPage, K2Node_CreateDelegate_OutputDelegate1) == 0x000018, "Member 'ObjectivesPage_C_ExecuteUbergraph_ObjectivesPage::K2Node_CreateDelegate_OutputDelegate1' has a wrong offset!");
static_assert(offsetof(ObjectivesPage_C_ExecuteUbergraph_ObjectivesPage, CallFunc_SpawnObject_ReturnValue) == 0x000028, "Member 'ObjectivesPage_C_ExecuteUbergraph_ObjectivesPage::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(ObjectivesPage_C_ExecuteUbergraph_ObjectivesPage, K2Node_CreateDelegate_OutputDelegate12) == 0x000030, "Member 'ObjectivesPage_C_ExecuteUbergraph_ObjectivesPage::K2Node_CreateDelegate_OutputDelegate12' has a wrong offset!");
static_assert(offsetof(ObjectivesPage_C_ExecuteUbergraph_ObjectivesPage, CallFunc_GetSelectedButtonIndex_ReturnValue) == 0x000040, "Member 'ObjectivesPage_C_ExecuteUbergraph_ObjectivesPage::CallFunc_GetSelectedButtonIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(ObjectivesPage_C_ExecuteUbergraph_ObjectivesPage, CallFunc_GetButtonAtIndex_ReturnValue) == 0x000048, "Member 'ObjectivesPage_C_ExecuteUbergraph_ObjectivesPage::CallFunc_GetButtonAtIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(ObjectivesPage_C_ExecuteUbergraph_ObjectivesPage, K2Node_MakeStruct_DataTableRowHandle) == 0x000050, "Member 'ObjectivesPage_C_ExecuteUbergraph_ObjectivesPage::K2Node_MakeStruct_DataTableRowHandle' has a wrong offset!");
static_assert(offsetof(ObjectivesPage_C_ExecuteUbergraph_ObjectivesPage, K2Node_CreateDelegate_OutputDelegate123) == 0x000060, "Member 'ObjectivesPage_C_ExecuteUbergraph_ObjectivesPage::K2Node_CreateDelegate_OutputDelegate123' has a wrong offset!");
static_assert(offsetof(ObjectivesPage_C_ExecuteUbergraph_ObjectivesPage, K2Node_MakeStruct_DataTableRowHandle1) == 0x000070, "Member 'ObjectivesPage_C_ExecuteUbergraph_ObjectivesPage::K2Node_MakeStruct_DataTableRowHandle1' has a wrong offset!");
static_assert(offsetof(ObjectivesPage_C_ExecuteUbergraph_ObjectivesPage, K2Node_CreateDelegate_OutputDelegate1234) == 0x000080, "Member 'ObjectivesPage_C_ExecuteUbergraph_ObjectivesPage::K2Node_CreateDelegate_OutputDelegate1234' has a wrong offset!");
static_assert(offsetof(ObjectivesPage_C_ExecuteUbergraph_ObjectivesPage, K2Node_MakeStruct_DataTableRowHandle12) == 0x000090, "Member 'ObjectivesPage_C_ExecuteUbergraph_ObjectivesPage::K2Node_MakeStruct_DataTableRowHandle12' has a wrong offset!");
static_assert(offsetof(ObjectivesPage_C_ExecuteUbergraph_ObjectivesPage, CallFunc_MissionHasModifiers_MissionHasModifiers) == 0x0000A0, "Member 'ObjectivesPage_C_ExecuteUbergraph_ObjectivesPage::CallFunc_MissionHasModifiers_MissionHasModifiers' has a wrong offset!");
static_assert(offsetof(ObjectivesPage_C_ExecuteUbergraph_ObjectivesPage, CallFunc_GetUINavigationManager_ReturnValue) == 0x0000A8, "Member 'ObjectivesPage_C_ExecuteUbergraph_ObjectivesPage::CallFunc_GetUINavigationManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ObjectivesPage_C_ExecuteUbergraph_ObjectivesPage, CallFunc_GetContext_ReturnValue) == 0x0000B0, "Member 'ObjectivesPage_C_ExecuteUbergraph_ObjectivesPage::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(ObjectivesPage_C_ExecuteUbergraph_ObjectivesPage, K2Node_CustomEvent_AppliedModifiers) == 0x0000B8, "Member 'ObjectivesPage_C_ExecuteUbergraph_ObjectivesPage::K2Node_CustomEvent_AppliedModifiers' has a wrong offset!");
static_assert(offsetof(ObjectivesPage_C_ExecuteUbergraph_ObjectivesPage, CallFunc_Array_Length_ReturnValue) == 0x0000C8, "Member 'ObjectivesPage_C_ExecuteUbergraph_ObjectivesPage::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ObjectivesPage_C_ExecuteUbergraph_ObjectivesPage, CallFunc_Greater_IntInt_ReturnValue) == 0x0000CC, "Member 'ObjectivesPage_C_ExecuteUbergraph_ObjectivesPage::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function ObjectivesPage.ObjectivesPage_C.OnActiveGameplayModifiersChanged_Event_0
// 0x0010 (0x0010 - 0x0000)
struct ObjectivesPage_C_OnActiveGameplayModifiersChanged_Event_0 final
{
public:
	TArray<class UFortGameplayModifierItemDefinition*> AppliedModifiers;                             // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};
static_assert(alignof(ObjectivesPage_C_OnActiveGameplayModifiersChanged_Event_0) == 0x000008, "Wrong alignment on ObjectivesPage_C_OnActiveGameplayModifiersChanged_Event_0");
static_assert(sizeof(ObjectivesPage_C_OnActiveGameplayModifiersChanged_Event_0) == 0x000010, "Wrong size on ObjectivesPage_C_OnActiveGameplayModifiersChanged_Event_0");
static_assert(offsetof(ObjectivesPage_C_OnActiveGameplayModifiersChanged_Event_0, AppliedModifiers) == 0x000000, "Member 'ObjectivesPage_C_OnActiveGameplayModifiersChanged_Event_0::AppliedModifiers' has a wrong offset!");

// Function ObjectivesPage.ObjectivesPage_C.HandleBack
// 0x0010 (0x0010 - 0x0000)
struct ObjectivesPage_C_HandleBack final
{
public:
	bool                                          Passthrough;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ObjectivesPage_C_HandleBack) == 0x000008, "Wrong alignment on ObjectivesPage_C_HandleBack");
static_assert(sizeof(ObjectivesPage_C_HandleBack) == 0x000010, "Wrong size on ObjectivesPage_C_HandleBack");
static_assert(offsetof(ObjectivesPage_C_HandleBack, Passthrough) == 0x000000, "Member 'ObjectivesPage_C_HandleBack::Passthrough' has a wrong offset!");
static_assert(offsetof(ObjectivesPage_C_HandleBack, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'ObjectivesPage_C_HandleBack::CallFunc_GetContext_ReturnValue' has a wrong offset!");

// Function ObjectivesPage.ObjectivesPage_C.HandleSelectedButtonChanged
// 0x0010 (0x0010 - 0x0000)
struct ObjectivesPage_C_HandleSelectedButtonChanged final
{
public:
	class UCommonButton*                          InButton;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InButtonIndex;                                     // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ObjectivesPage_C_HandleSelectedButtonChanged) == 0x000008, "Wrong alignment on ObjectivesPage_C_HandleSelectedButtonChanged");
static_assert(sizeof(ObjectivesPage_C_HandleSelectedButtonChanged) == 0x000010, "Wrong size on ObjectivesPage_C_HandleSelectedButtonChanged");
static_assert(offsetof(ObjectivesPage_C_HandleSelectedButtonChanged, InButton) == 0x000000, "Member 'ObjectivesPage_C_HandleSelectedButtonChanged::InButton' has a wrong offset!");
static_assert(offsetof(ObjectivesPage_C_HandleSelectedButtonChanged, InButtonIndex) == 0x000008, "Member 'ObjectivesPage_C_HandleSelectedButtonChanged::InButtonIndex' has a wrong offset!");

// Function ObjectivesPage.ObjectivesPage_C.HandleInventory
// 0x0010 (0x0010 - 0x0000)
struct ObjectivesPage_C_HandleInventory final
{
public:
	bool                                          Passthrough;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ObjectivesPage_C_HandleInventory) == 0x000008, "Wrong alignment on ObjectivesPage_C_HandleInventory");
static_assert(sizeof(ObjectivesPage_C_HandleInventory) == 0x000010, "Wrong size on ObjectivesPage_C_HandleInventory");
static_assert(offsetof(ObjectivesPage_C_HandleInventory, Passthrough) == 0x000000, "Member 'ObjectivesPage_C_HandleInventory::Passthrough' has a wrong offset!");
static_assert(offsetof(ObjectivesPage_C_HandleInventory, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'ObjectivesPage_C_HandleInventory::CallFunc_GetContext_ReturnValue' has a wrong offset!");

// Function ObjectivesPage.ObjectivesPage_C.ConfigureModifiersView
// 0x0030 (0x0030 - 0x0000)
struct ObjectivesPage_C_ConfigureModifiersView final
{
public:
	bool                                          ShowModifiers;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateZone*                     K2Node_DynamicCast_AsFort_Game_State_Zone;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UFortGameplayModifierItemDefinition*> CallFunc_GetActiveModifiers_OutActiveModifiers; // 0x0020(0x0010)(ZeroConstructor, ReferenceParm)
};
static_assert(alignof(ObjectivesPage_C_ConfigureModifiersView) == 0x000008, "Wrong alignment on ObjectivesPage_C_ConfigureModifiersView");
static_assert(sizeof(ObjectivesPage_C_ConfigureModifiersView) == 0x000030, "Wrong size on ObjectivesPage_C_ConfigureModifiersView");
static_assert(offsetof(ObjectivesPage_C_ConfigureModifiersView, ShowModifiers) == 0x000000, "Member 'ObjectivesPage_C_ConfigureModifiersView::ShowModifiers' has a wrong offset!");
static_assert(offsetof(ObjectivesPage_C_ConfigureModifiersView, CallFunc_GetGameState_ReturnValue) == 0x000008, "Member 'ObjectivesPage_C_ConfigureModifiersView::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(ObjectivesPage_C_ConfigureModifiersView, K2Node_DynamicCast_AsFort_Game_State_Zone) == 0x000010, "Member 'ObjectivesPage_C_ConfigureModifiersView::K2Node_DynamicCast_AsFort_Game_State_Zone' has a wrong offset!");
static_assert(offsetof(ObjectivesPage_C_ConfigureModifiersView, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'ObjectivesPage_C_ConfigureModifiersView::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ObjectivesPage_C_ConfigureModifiersView, CallFunc_GetActiveModifiers_OutActiveModifiers) == 0x000020, "Member 'ObjectivesPage_C_ConfigureModifiersView::CallFunc_GetActiveModifiers_OutActiveModifiers' has a wrong offset!");

// Function ObjectivesPage.ObjectivesPage_C.MissionHasModifiers
// 0x0020 (0x0020 - 0x0000)
struct ObjectivesPage_C_MissionHasModifiers final
{
public:
	bool                                          MissionHasModifiers_0;                             // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateZone*                     K2Node_DynamicCast_AsFort_Game_State_Zone;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasActiveGameplayModifiers_ReturnValue;   // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ObjectivesPage_C_MissionHasModifiers) == 0x000008, "Wrong alignment on ObjectivesPage_C_MissionHasModifiers");
static_assert(sizeof(ObjectivesPage_C_MissionHasModifiers) == 0x000020, "Wrong size on ObjectivesPage_C_MissionHasModifiers");
static_assert(offsetof(ObjectivesPage_C_MissionHasModifiers, MissionHasModifiers_0) == 0x000000, "Member 'ObjectivesPage_C_MissionHasModifiers::MissionHasModifiers_0' has a wrong offset!");
static_assert(offsetof(ObjectivesPage_C_MissionHasModifiers, CallFunc_GetGameState_ReturnValue) == 0x000008, "Member 'ObjectivesPage_C_MissionHasModifiers::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(ObjectivesPage_C_MissionHasModifiers, K2Node_DynamicCast_AsFort_Game_State_Zone) == 0x000010, "Member 'ObjectivesPage_C_MissionHasModifiers::K2Node_DynamicCast_AsFort_Game_State_Zone' has a wrong offset!");
static_assert(offsetof(ObjectivesPage_C_MissionHasModifiers, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'ObjectivesPage_C_MissionHasModifiers::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ObjectivesPage_C_MissionHasModifiers, CallFunc_HasActiveGameplayModifiers_ReturnValue) == 0x000019, "Member 'ObjectivesPage_C_MissionHasModifiers::CallFunc_HasActiveGameplayModifiers_ReturnValue' has a wrong offset!");

}

