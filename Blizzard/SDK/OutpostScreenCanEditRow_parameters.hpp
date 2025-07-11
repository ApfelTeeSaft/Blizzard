﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OutpostScreenCanEditRow

#include "Basic.hpp"


namespace SDK::Params
{

// Function OutpostScreenCanEditRow.OutpostScreenCanEditRow_C.ExecuteUbergraph_OutpostScreenCanEditRow
// 0x0010 (0x0010 - 0x0000)
struct OutpostScreenCanEditRow_C_ExecuteUbergraph_OutpostScreenCanEditRow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetSelected_ReturnValue;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButton*                          K2Node_ComponentBoundEvent_Button;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OutpostScreenCanEditRow_C_ExecuteUbergraph_OutpostScreenCanEditRow) == 0x000008, "Wrong alignment on OutpostScreenCanEditRow_C_ExecuteUbergraph_OutpostScreenCanEditRow");
static_assert(sizeof(OutpostScreenCanEditRow_C_ExecuteUbergraph_OutpostScreenCanEditRow) == 0x000010, "Wrong size on OutpostScreenCanEditRow_C_ExecuteUbergraph_OutpostScreenCanEditRow");
static_assert(offsetof(OutpostScreenCanEditRow_C_ExecuteUbergraph_OutpostScreenCanEditRow, EntryPoint) == 0x000000, "Member 'OutpostScreenCanEditRow_C_ExecuteUbergraph_OutpostScreenCanEditRow::EntryPoint' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditRow_C_ExecuteUbergraph_OutpostScreenCanEditRow, CallFunc_GetSelected_ReturnValue) == 0x000004, "Member 'OutpostScreenCanEditRow_C_ExecuteUbergraph_OutpostScreenCanEditRow::CallFunc_GetSelected_ReturnValue' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditRow_C_ExecuteUbergraph_OutpostScreenCanEditRow, K2Node_ComponentBoundEvent_Button) == 0x000008, "Member 'OutpostScreenCanEditRow_C_ExecuteUbergraph_OutpostScreenCanEditRow::K2Node_ComponentBoundEvent_Button' has a wrong offset!");

// Function OutpostScreenCanEditRow.OutpostScreenCanEditRow_C.BndEvt__CanEditButton_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct OutpostScreenCanEditRow_C_BndEvt__CanEditButton_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature final
{
public:
	class UCommonButton*                          Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OutpostScreenCanEditRow_C_BndEvt__CanEditButton_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong alignment on OutpostScreenCanEditRow_C_BndEvt__CanEditButton_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature");
static_assert(sizeof(OutpostScreenCanEditRow_C_BndEvt__CanEditButton_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature) == 0x000008, "Wrong size on OutpostScreenCanEditRow_C_BndEvt__CanEditButton_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature");
static_assert(offsetof(OutpostScreenCanEditRow_C_BndEvt__CanEditButton_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature, Button) == 0x000000, "Member 'OutpostScreenCanEditRow_C_BndEvt__CanEditButton_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature::Button' has a wrong offset!");

// Function OutpostScreenCanEditRow.OutpostScreenCanEditRow_C.Init
// 0x0040 (0x0040 - 0x0000)
struct OutpostScreenCanEditRow_C_Init final
{
public:
	class AFortPlayerStateOutpost*                InPlayer;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerStateOutpost*                InOutpostOwner;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanEditOutpost_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerName_ReturnValue;                // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
};
static_assert(alignof(OutpostScreenCanEditRow_C_Init) == 0x000008, "Wrong alignment on OutpostScreenCanEditRow_C_Init");
static_assert(sizeof(OutpostScreenCanEditRow_C_Init) == 0x000040, "Wrong size on OutpostScreenCanEditRow_C_Init");
static_assert(offsetof(OutpostScreenCanEditRow_C_Init, InPlayer) == 0x000000, "Member 'OutpostScreenCanEditRow_C_Init::InPlayer' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditRow_C_Init, InOutpostOwner) == 0x000008, "Member 'OutpostScreenCanEditRow_C_Init::InOutpostOwner' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditRow_C_Init, CallFunc_CanEditOutpost_ReturnValue) == 0x000010, "Member 'OutpostScreenCanEditRow_C_Init::CallFunc_CanEditOutpost_ReturnValue' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditRow_C_Init, CallFunc_GetPlayerName_ReturnValue) == 0x000018, "Member 'OutpostScreenCanEditRow_C_Init::CallFunc_GetPlayerName_ReturnValue' has a wrong offset!");
static_assert(offsetof(OutpostScreenCanEditRow_C_Init, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'OutpostScreenCanEditRow_C_Init::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function OutpostScreenCanEditRow.OutpostScreenCanEditRow_C.CenterWidget
// 0x0008 (0x0008 - 0x0000)
struct OutpostScreenCanEditRow_C_CenterWidget final
{
public:
	class UFortUINavigationManager*               CallFunc_GetUINavigationManager_ReturnValue;       // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(OutpostScreenCanEditRow_C_CenterWidget) == 0x000008, "Wrong alignment on OutpostScreenCanEditRow_C_CenterWidget");
static_assert(sizeof(OutpostScreenCanEditRow_C_CenterWidget) == 0x000008, "Wrong size on OutpostScreenCanEditRow_C_CenterWidget");
static_assert(offsetof(OutpostScreenCanEditRow_C_CenterWidget, CallFunc_GetUINavigationManager_ReturnValue) == 0x000000, "Member 'OutpostScreenCanEditRow_C_CenterWidget::CallFunc_GetUINavigationManager_ReturnValue' has a wrong offset!");

}

