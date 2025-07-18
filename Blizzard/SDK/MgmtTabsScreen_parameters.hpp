﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MgmtTabsScreen

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"


namespace SDK::Params
{

// Function MgmtTabsScreen.MgmtTabsScreen_C.ExecuteUbergraph_MgmtTabsScreen
// 0x00D0 (0x00D0 - 0x0000)
struct MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable1;                               // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable12;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable123;                             // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortUIFeatureState                           Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EFortUIFeature ChangedFeature, EFortUIFeatureState NewState, EFortUIFeatureStateReason StateReason)> K2Node_CreateDelegate_OutputDelegate; // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Variable1234;                            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable12345;                           // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable123456;                          // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable1234567;                         // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetWidgetAtIndex_ReturnValue;             // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemManagementScreen*              K2Node_DynamicCast_AsFort_Item_Management_Screen;  // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_ComponentBoundEvent_TabId;                  // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          K2Node_ComponentBoundEvent_TabButton;              // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconTabButton_C*                       K2Node_DynamicCast_AsIcon_Tab_Button;              // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess1;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool bCursorModeEnabled, class FName ActionName, class UUserWidget* CursorModeContentWidget)> K2Node_CreateDelegate_OutputDelegate1; // 0x0068(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate12;            // 0x0078(0x0010)(ZeroConstructor, NoDestructor)
	EFortUIFeatureState                           Temp_byte_Variable1;                               // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortUIFeature                                K2Node_CustomEvent_ChangedFeature1;                // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortUIFeatureState                           K2Node_CustomEvent_NewState1;                      // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortUIFeatureStateReason                     K2Node_CustomEvent_StateReason1;                   // 0x008B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default;                             // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D[0x3];                                       // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EFortUIFeature ChangedFeature, EFortUIFeatureState NewState, EFortUIFeatureStateReason StateReason)> K2Node_CreateDelegate_OutputDelegate123; // 0x0090(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class FName TabName)>          K2Node_CreateDelegate_OutputDelegate1234;          // 0x00A0(0x0010)(ZeroConstructor, NoDestructor)
	class UFortGlobalUIContext*                   CallFunc_GetContext_ReturnValue1;                  // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue12;                 // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue123;                // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortUIFeature                                K2Node_CustomEvent_ChangedFeature;                 // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortUIFeatureState                           K2Node_CustomEvent_NewState;                       // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortUIFeatureStateReason                     K2Node_CustomEvent_StateReason;                    // 0x00CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select1_Default;                            // 0x00CB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen) == 0x000008, "Wrong alignment on MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen");
static_assert(sizeof(MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen) == 0x0000D0, "Wrong size on MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen");
static_assert(offsetof(MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen, EntryPoint) == 0x000000, "Member 'MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen::EntryPoint' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen, Temp_bool_Variable) == 0x000004, "Member 'MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen, Temp_bool_Variable1) == 0x000005, "Member 'MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen::Temp_bool_Variable1' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen, Temp_bool_Variable12) == 0x000006, "Member 'MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen::Temp_bool_Variable12' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen, Temp_bool_Variable123) == 0x000007, "Member 'MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen::Temp_bool_Variable123' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen, Temp_byte_Variable) == 0x000010, "Member 'MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen, K2Node_CreateDelegate_OutputDelegate) == 0x000018, "Member 'MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen, Temp_bool_Variable1234) == 0x000028, "Member 'MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen::Temp_bool_Variable1234' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen, Temp_bool_Variable12345) == 0x000029, "Member 'MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen::Temp_bool_Variable12345' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen, Temp_bool_Variable123456) == 0x00002A, "Member 'MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen::Temp_bool_Variable123456' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen, Temp_bool_Variable1234567) == 0x00002B, "Member 'MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen::Temp_bool_Variable1234567' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen, CallFunc_GetWidgetAtIndex_ReturnValue) == 0x000030, "Member 'MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen::CallFunc_GetWidgetAtIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen, K2Node_DynamicCast_AsFort_Item_Management_Screen) == 0x000038, "Member 'MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen::K2Node_DynamicCast_AsFort_Item_Management_Screen' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen, K2Node_ComponentBoundEvent_TabId) == 0x000048, "Member 'MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen::K2Node_ComponentBoundEvent_TabId' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen, K2Node_ComponentBoundEvent_TabButton) == 0x000050, "Member 'MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen::K2Node_ComponentBoundEvent_TabButton' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen, K2Node_DynamicCast_AsIcon_Tab_Button) == 0x000058, "Member 'MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen::K2Node_DynamicCast_AsIcon_Tab_Button' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen, K2Node_DynamicCast_bSuccess1) == 0x000060, "Member 'MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen::K2Node_DynamicCast_bSuccess1' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen, K2Node_CreateDelegate_OutputDelegate1) == 0x000068, "Member 'MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen::K2Node_CreateDelegate_OutputDelegate1' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen, K2Node_CreateDelegate_OutputDelegate12) == 0x000078, "Member 'MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen::K2Node_CreateDelegate_OutputDelegate12' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen, Temp_byte_Variable1) == 0x000088, "Member 'MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen, K2Node_CustomEvent_ChangedFeature1) == 0x000089, "Member 'MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen::K2Node_CustomEvent_ChangedFeature1' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen, K2Node_CustomEvent_NewState1) == 0x00008A, "Member 'MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen::K2Node_CustomEvent_NewState1' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen, K2Node_CustomEvent_StateReason1) == 0x00008B, "Member 'MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen::K2Node_CustomEvent_StateReason1' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen, K2Node_Select_Default) == 0x00008C, "Member 'MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen, K2Node_CreateDelegate_OutputDelegate123) == 0x000090, "Member 'MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen::K2Node_CreateDelegate_OutputDelegate123' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen, K2Node_CreateDelegate_OutputDelegate1234) == 0x0000A0, "Member 'MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen::K2Node_CreateDelegate_OutputDelegate1234' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen, CallFunc_GetContext_ReturnValue1) == 0x0000B0, "Member 'MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen::CallFunc_GetContext_ReturnValue1' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen, CallFunc_GetContext_ReturnValue12) == 0x0000B8, "Member 'MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen::CallFunc_GetContext_ReturnValue12' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen, CallFunc_GetContext_ReturnValue123) == 0x0000C0, "Member 'MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen::CallFunc_GetContext_ReturnValue123' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen, K2Node_CustomEvent_ChangedFeature) == 0x0000C8, "Member 'MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen::K2Node_CustomEvent_ChangedFeature' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen, K2Node_CustomEvent_NewState) == 0x0000C9, "Member 'MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen::K2Node_CustomEvent_NewState' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen, K2Node_CustomEvent_StateReason) == 0x0000CA, "Member 'MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen::K2Node_CustomEvent_StateReason' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen, K2Node_Select1_Default) == 0x0000CB, "Member 'MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen::K2Node_Select1_Default' has a wrong offset!");

// Function MgmtTabsScreen.MgmtTabsScreen_C.HandleShowObjectives
// 0x0003 (0x0003 - 0x0000)
struct MgmtTabsScreen_C_HandleShowObjectives final
{
public:
	EFortUIFeature                                ChangedFeature;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortUIFeatureState                           NewState;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortUIFeatureStateReason                     StateReason;                                       // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MgmtTabsScreen_C_HandleShowObjectives) == 0x000001, "Wrong alignment on MgmtTabsScreen_C_HandleShowObjectives");
static_assert(sizeof(MgmtTabsScreen_C_HandleShowObjectives) == 0x000003, "Wrong size on MgmtTabsScreen_C_HandleShowObjectives");
static_assert(offsetof(MgmtTabsScreen_C_HandleShowObjectives, ChangedFeature) == 0x000000, "Member 'MgmtTabsScreen_C_HandleShowObjectives::ChangedFeature' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_HandleShowObjectives, NewState) == 0x000001, "Member 'MgmtTabsScreen_C_HandleShowObjectives::NewState' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_HandleShowObjectives, StateReason) == 0x000002, "Member 'MgmtTabsScreen_C_HandleShowObjectives::StateReason' has a wrong offset!");

// Function MgmtTabsScreen.MgmtTabsScreen_C.HandleShowQuests
// 0x0003 (0x0003 - 0x0000)
struct MgmtTabsScreen_C_HandleShowQuests final
{
public:
	EFortUIFeature                                ChangedFeature;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortUIFeatureState                           NewState;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortUIFeatureStateReason                     StateReason;                                       // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MgmtTabsScreen_C_HandleShowQuests) == 0x000001, "Wrong alignment on MgmtTabsScreen_C_HandleShowQuests");
static_assert(sizeof(MgmtTabsScreen_C_HandleShowQuests) == 0x000003, "Wrong size on MgmtTabsScreen_C_HandleShowQuests");
static_assert(offsetof(MgmtTabsScreen_C_HandleShowQuests, ChangedFeature) == 0x000000, "Member 'MgmtTabsScreen_C_HandleShowQuests::ChangedFeature' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_HandleShowQuests, NewState) == 0x000001, "Member 'MgmtTabsScreen_C_HandleShowQuests::NewState' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_HandleShowQuests, StateReason) == 0x000002, "Member 'MgmtTabsScreen_C_HandleShowQuests::StateReason' has a wrong offset!");

// Function MgmtTabsScreen.MgmtTabsScreen_C.BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct MgmtTabsScreen_C_BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature final
{
public:
	class FName                                   TabId;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                          TabButton;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MgmtTabsScreen_C_BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature) == 0x000008, "Wrong alignment on MgmtTabsScreen_C_BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature");
static_assert(sizeof(MgmtTabsScreen_C_BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature) == 0x000010, "Wrong size on MgmtTabsScreen_C_BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature");
static_assert(offsetof(MgmtTabsScreen_C_BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature, TabId) == 0x000000, "Member 'MgmtTabsScreen_C_BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature::TabId' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature, TabButton) == 0x000008, "Member 'MgmtTabsScreen_C_BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature::TabButton' has a wrong offset!");

// Function MgmtTabsScreen.MgmtTabsScreen_C.HandleCursorModeChanged
// 0x0020 (0x0020 - 0x0000)
struct MgmtTabsScreen_C_HandleCursorModeChanged final
{
public:
	bool                                          IsEnabled;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   ActionName;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CursorModeContentCustomWidget;                     // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SelectTabByID_ReturnValue;                // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MgmtTabsScreen_C_HandleCursorModeChanged) == 0x000008, "Wrong alignment on MgmtTabsScreen_C_HandleCursorModeChanged");
static_assert(sizeof(MgmtTabsScreen_C_HandleCursorModeChanged) == 0x000020, "Wrong size on MgmtTabsScreen_C_HandleCursorModeChanged");
static_assert(offsetof(MgmtTabsScreen_C_HandleCursorModeChanged, IsEnabled) == 0x000000, "Member 'MgmtTabsScreen_C_HandleCursorModeChanged::IsEnabled' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_HandleCursorModeChanged, ActionName) == 0x000008, "Member 'MgmtTabsScreen_C_HandleCursorModeChanged::ActionName' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_HandleCursorModeChanged, CursorModeContentCustomWidget) == 0x000010, "Member 'MgmtTabsScreen_C_HandleCursorModeChanged::CursorModeContentCustomWidget' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_HandleCursorModeChanged, K2Node_SwitchName_CmpSuccess) == 0x000018, "Member 'MgmtTabsScreen_C_HandleCursorModeChanged::K2Node_SwitchName_CmpSuccess' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_HandleCursorModeChanged, CallFunc_SelectTabByID_ReturnValue) == 0x000019, "Member 'MgmtTabsScreen_C_HandleCursorModeChanged::CallFunc_SelectTabByID_ReturnValue' has a wrong offset!");

// Function MgmtTabsScreen.MgmtTabsScreen_C.HandleDamageReceived
// 0x0010 (0x0010 - 0x0000)
struct MgmtTabsScreen_C_HandleDamageReceived final
{
public:
	class UFortHUDContext*                        CallFunc_GetContext_ReturnValue;                   // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInCursorMode_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MgmtTabsScreen_C_HandleDamageReceived) == 0x000008, "Wrong alignment on MgmtTabsScreen_C_HandleDamageReceived");
static_assert(sizeof(MgmtTabsScreen_C_HandleDamageReceived) == 0x000010, "Wrong size on MgmtTabsScreen_C_HandleDamageReceived");
static_assert(offsetof(MgmtTabsScreen_C_HandleDamageReceived, CallFunc_GetContext_ReturnValue) == 0x000000, "Member 'MgmtTabsScreen_C_HandleDamageReceived::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_HandleDamageReceived, CallFunc_IsInCursorMode_ReturnValue) == 0x000008, "Member 'MgmtTabsScreen_C_HandleDamageReceived::CallFunc_IsInCursorMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_HandleDamageReceived, CallFunc_IsAnimationPlaying_ReturnValue) == 0x000009, "Member 'MgmtTabsScreen_C_HandleDamageReceived::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_HandleDamageReceived, CallFunc_Not_PreBool_ReturnValue) == 0x00000A, "Member 'MgmtTabsScreen_C_HandleDamageReceived::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_HandleDamageReceived, CallFunc_BooleanAND_ReturnValue) == 0x00000B, "Member 'MgmtTabsScreen_C_HandleDamageReceived::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function MgmtTabsScreen.MgmtTabsScreen_C.HandleMgmtMenuTabChangeRequested
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) MgmtTabsScreen_C_HandleMgmtMenuTabChangeRequested final
{
public:
	class FName                                   TabName;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SelectTabByID_ReturnValue;                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MgmtTabsScreen_C_HandleMgmtMenuTabChangeRequested) == 0x000008, "Wrong alignment on MgmtTabsScreen_C_HandleMgmtMenuTabChangeRequested");
static_assert(sizeof(MgmtTabsScreen_C_HandleMgmtMenuTabChangeRequested) == 0x000010, "Wrong size on MgmtTabsScreen_C_HandleMgmtMenuTabChangeRequested");
static_assert(offsetof(MgmtTabsScreen_C_HandleMgmtMenuTabChangeRequested, TabName) == 0x000000, "Member 'MgmtTabsScreen_C_HandleMgmtMenuTabChangeRequested::TabName' has a wrong offset!");
static_assert(offsetof(MgmtTabsScreen_C_HandleMgmtMenuTabChangeRequested, CallFunc_SelectTabByID_ReturnValue) == 0x000008, "Member 'MgmtTabsScreen_C_HandleMgmtMenuTabChangeRequested::CallFunc_SelectTabByID_ReturnValue' has a wrong offset!");

}

