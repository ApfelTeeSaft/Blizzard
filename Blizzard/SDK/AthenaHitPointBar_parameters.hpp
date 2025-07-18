﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaHitPointBar

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AthenaHitPointBar.AthenaHitPointBar_C.ExecuteUbergraph_AthenaHitPointBar
// 0x0030 (0x0030 - 0x0000)
struct AthenaHitPointBar_C_ExecuteUbergraph_AthenaHitPointBar final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor)
	float                                         K2Node_Event_Value1;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_Value;                                // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortHitPointModificationReason               K2Node_Event_Reason;                               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDBNO;                               // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMobileGame_ReturnValue;                 // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaHitPointBar_C_ExecuteUbergraph_AthenaHitPointBar) == 0x000008, "Wrong alignment on AthenaHitPointBar_C_ExecuteUbergraph_AthenaHitPointBar");
static_assert(sizeof(AthenaHitPointBar_C_ExecuteUbergraph_AthenaHitPointBar) == 0x000030, "Wrong size on AthenaHitPointBar_C_ExecuteUbergraph_AthenaHitPointBar");
static_assert(offsetof(AthenaHitPointBar_C_ExecuteUbergraph_AthenaHitPointBar, EntryPoint) == 0x000000, "Member 'AthenaHitPointBar_C_ExecuteUbergraph_AthenaHitPointBar::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_ExecuteUbergraph_AthenaHitPointBar, K2Node_Event_IsDesignTime) == 0x000004, "Member 'AthenaHitPointBar_C_ExecuteUbergraph_AthenaHitPointBar::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_ExecuteUbergraph_AthenaHitPointBar, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'AthenaHitPointBar_C_ExecuteUbergraph_AthenaHitPointBar::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_ExecuteUbergraph_AthenaHitPointBar, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'AthenaHitPointBar_C_ExecuteUbergraph_AthenaHitPointBar::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_ExecuteUbergraph_AthenaHitPointBar, K2Node_Event_Value1) == 0x000020, "Member 'AthenaHitPointBar_C_ExecuteUbergraph_AthenaHitPointBar::K2Node_Event_Value1' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_ExecuteUbergraph_AthenaHitPointBar, K2Node_Event_Value) == 0x000024, "Member 'AthenaHitPointBar_C_ExecuteUbergraph_AthenaHitPointBar::K2Node_Event_Value' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_ExecuteUbergraph_AthenaHitPointBar, K2Node_Event_Reason) == 0x000028, "Member 'AthenaHitPointBar_C_ExecuteUbergraph_AthenaHitPointBar::K2Node_Event_Reason' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_ExecuteUbergraph_AthenaHitPointBar, K2Node_Event_IsDBNO) == 0x000029, "Member 'AthenaHitPointBar_C_ExecuteUbergraph_AthenaHitPointBar::K2Node_Event_IsDBNO' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_ExecuteUbergraph_AthenaHitPointBar, CallFunc_IsMobileGame_ReturnValue) == 0x00002A, "Member 'AthenaHitPointBar_C_ExecuteUbergraph_AthenaHitPointBar::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");

// Function AthenaHitPointBar.AthenaHitPointBar_C.OnDBNOStateChanged
// 0x0001 (0x0001 - 0x0000)
struct AthenaHitPointBar_C_OnDBNOStateChanged final
{
public:
	bool                                          IsDBNO;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaHitPointBar_C_OnDBNOStateChanged) == 0x000001, "Wrong alignment on AthenaHitPointBar_C_OnDBNOStateChanged");
static_assert(sizeof(AthenaHitPointBar_C_OnDBNOStateChanged) == 0x000001, "Wrong size on AthenaHitPointBar_C_OnDBNOStateChanged");
static_assert(offsetof(AthenaHitPointBar_C_OnDBNOStateChanged, IsDBNO) == 0x000000, "Member 'AthenaHitPointBar_C_OnDBNOStateChanged::IsDBNO' has a wrong offset!");

// Function AthenaHitPointBar.AthenaHitPointBar_C.OnValueChangedWithReason
// 0x0008 (0x0008 - 0x0000)
struct AthenaHitPointBar_C_OnValueChangedWithReason final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortHitPointModificationReason               Reason;                                            // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaHitPointBar_C_OnValueChangedWithReason) == 0x000004, "Wrong alignment on AthenaHitPointBar_C_OnValueChangedWithReason");
static_assert(sizeof(AthenaHitPointBar_C_OnValueChangedWithReason) == 0x000008, "Wrong size on AthenaHitPointBar_C_OnValueChangedWithReason");
static_assert(offsetof(AthenaHitPointBar_C_OnValueChangedWithReason, Value) == 0x000000, "Member 'AthenaHitPointBar_C_OnValueChangedWithReason::Value' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_OnValueChangedWithReason, Reason) == 0x000004, "Member 'AthenaHitPointBar_C_OnValueChangedWithReason::Reason' has a wrong offset!");

// Function AthenaHitPointBar.AthenaHitPointBar_C.OnMaxValueChanged
// 0x0004 (0x0004 - 0x0000)
struct AthenaHitPointBar_C_OnMaxValueChanged final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaHitPointBar_C_OnMaxValueChanged) == 0x000004, "Wrong alignment on AthenaHitPointBar_C_OnMaxValueChanged");
static_assert(sizeof(AthenaHitPointBar_C_OnMaxValueChanged) == 0x000004, "Wrong size on AthenaHitPointBar_C_OnMaxValueChanged");
static_assert(offsetof(AthenaHitPointBar_C_OnMaxValueChanged, Value) == 0x000000, "Member 'AthenaHitPointBar_C_OnMaxValueChanged::Value' has a wrong offset!");

// Function AthenaHitPointBar.AthenaHitPointBar_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct AthenaHitPointBar_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaHitPointBar_C_PreConstruct) == 0x000001, "Wrong alignment on AthenaHitPointBar_C_PreConstruct");
static_assert(sizeof(AthenaHitPointBar_C_PreConstruct) == 0x000001, "Wrong size on AthenaHitPointBar_C_PreConstruct");
static_assert(offsetof(AthenaHitPointBar_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'AthenaHitPointBar_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function AthenaHitPointBar.AthenaHitPointBar_C.UpdateMaxValue
// 0x0020 (0x0020 - 0x0000)
struct AthenaHitPointBar_C_UpdateMaxValue final
{
public:
	float                                         Max;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMobileGame_ReturnValue;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0008(0x0018)()
};
static_assert(alignof(AthenaHitPointBar_C_UpdateMaxValue) == 0x000008, "Wrong alignment on AthenaHitPointBar_C_UpdateMaxValue");
static_assert(sizeof(AthenaHitPointBar_C_UpdateMaxValue) == 0x000020, "Wrong size on AthenaHitPointBar_C_UpdateMaxValue");
static_assert(offsetof(AthenaHitPointBar_C_UpdateMaxValue, Max) == 0x000000, "Member 'AthenaHitPointBar_C_UpdateMaxValue::Max' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_UpdateMaxValue, CallFunc_IsMobileGame_ReturnValue) == 0x000004, "Member 'AthenaHitPointBar_C_UpdateMaxValue::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_UpdateMaxValue, CallFunc_Conv_FloatToText_ReturnValue) == 0x000008, "Member 'AthenaHitPointBar_C_UpdateMaxValue::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");

// Function AthenaHitPointBar.AthenaHitPointBar_C.UpdateCurrentValue
// 0x0028 (0x0028 - 0x0000)
struct AthenaHitPointBar_C_UpdateCurrentValue final
{
public:
	float                                         Current;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortHitPointModificationReason               Reason;                                            // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMobileGame_ReturnValue;                 // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_FMax_ReturnValue;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0010(0x0018)()
};
static_assert(alignof(AthenaHitPointBar_C_UpdateCurrentValue) == 0x000008, "Wrong alignment on AthenaHitPointBar_C_UpdateCurrentValue");
static_assert(sizeof(AthenaHitPointBar_C_UpdateCurrentValue) == 0x000028, "Wrong size on AthenaHitPointBar_C_UpdateCurrentValue");
static_assert(offsetof(AthenaHitPointBar_C_UpdateCurrentValue, Current) == 0x000000, "Member 'AthenaHitPointBar_C_UpdateCurrentValue::Current' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_UpdateCurrentValue, Reason) == 0x000004, "Member 'AthenaHitPointBar_C_UpdateCurrentValue::Reason' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_UpdateCurrentValue, K2Node_SwitchEnum_CmpSuccess) == 0x000005, "Member 'AthenaHitPointBar_C_UpdateCurrentValue::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_UpdateCurrentValue, CallFunc_IsMobileGame_ReturnValue) == 0x000006, "Member 'AthenaHitPointBar_C_UpdateCurrentValue::CallFunc_IsMobileGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_UpdateCurrentValue, CallFunc_FMax_ReturnValue) == 0x000008, "Member 'AthenaHitPointBar_C_UpdateCurrentValue::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_UpdateCurrentValue, CallFunc_Conv_FloatToText_ReturnValue) == 0x000010, "Member 'AthenaHitPointBar_C_UpdateCurrentValue::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");

// Function AthenaHitPointBar.AthenaHitPointBar_C.Update Fill Bar
// 0x0008 (0x0008 - 0x0000)
struct AthenaHitPointBar_C_Update_Fill_Bar final
{
public:
	float                                         CallFunc_FMax_ReturnValue;                         // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaHitPointBar_C_Update_Fill_Bar) == 0x000004, "Wrong alignment on AthenaHitPointBar_C_Update_Fill_Bar");
static_assert(sizeof(AthenaHitPointBar_C_Update_Fill_Bar) == 0x000008, "Wrong size on AthenaHitPointBar_C_Update_Fill_Bar");
static_assert(offsetof(AthenaHitPointBar_C_Update_Fill_Bar, CallFunc_FMax_ReturnValue) == 0x000000, "Member 'AthenaHitPointBar_C_Update_Fill_Bar::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_Update_Fill_Bar, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000004, "Member 'AthenaHitPointBar_C_Update_Fill_Bar::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");

// Function AthenaHitPointBar.AthenaHitPointBar_C.Initialize Bar
// 0x0178 (0x0178 - 0x0000)
struct AthenaHitPointBar_C_Initialize_Bar final
{
public:
	EHealthBarType                                Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0004(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable1;                             // 0x0014(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable12;                            // 0x0024(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHealthBarType                                Temp_byte_Variable1;                               // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable123;                           // 0x0038(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable1234;                          // 0x0048(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable12345;                         // 0x0058(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHealthBarType                                Temp_byte_Variable12;                              // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable;                               // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable1;                              // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable12;                             // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHealthBarType                                Temp_byte_Variable123;                             // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89[0x3];                                       // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable123456;                        // 0x008C(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable1234567;                       // 0x009C(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable12345678;                      // 0x00AC(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHealthBarType                                Temp_byte_Variable1234;                            // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BD[0x3];                                       // 0x00BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable123456789;                     // 0x00C0(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable12345678910;                   // 0x00D0(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable1234567891011;                 // 0x00E0(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISlateTextureAtlasInterface> Temp_interface_Variable;                     // 0x00F0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EHealthBarType                                Temp_byte_Variable12345;                           // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_101[0x7];                                      // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISlateTextureAtlasInterface> K2Node_Select_Default;                       // 0x0108(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                           K2Node_Select1_Default;                            // 0x0118(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_Select12_Default;                           // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select123_Default;                          // 0x0130(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select1234_Default;                         // 0x0140(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select12345_Default;                        // 0x0150(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0160(0x0010)(IsPlainOldData, NoDestructor)
	class UOverlaySlot*                           CallFunc_SlotAsOverlaySlot_ReturnValue;            // 0x0170(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaHitPointBar_C_Initialize_Bar) == 0x000008, "Wrong alignment on AthenaHitPointBar_C_Initialize_Bar");
static_assert(sizeof(AthenaHitPointBar_C_Initialize_Bar) == 0x000178, "Wrong size on AthenaHitPointBar_C_Initialize_Bar");
static_assert(offsetof(AthenaHitPointBar_C_Initialize_Bar, Temp_byte_Variable) == 0x000000, "Member 'AthenaHitPointBar_C_Initialize_Bar::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_Initialize_Bar, Temp_struct_Variable) == 0x000004, "Member 'AthenaHitPointBar_C_Initialize_Bar::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_Initialize_Bar, Temp_struct_Variable1) == 0x000014, "Member 'AthenaHitPointBar_C_Initialize_Bar::Temp_struct_Variable1' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_Initialize_Bar, Temp_struct_Variable12) == 0x000024, "Member 'AthenaHitPointBar_C_Initialize_Bar::Temp_struct_Variable12' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_Initialize_Bar, Temp_byte_Variable1) == 0x000034, "Member 'AthenaHitPointBar_C_Initialize_Bar::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_Initialize_Bar, Temp_struct_Variable123) == 0x000038, "Member 'AthenaHitPointBar_C_Initialize_Bar::Temp_struct_Variable123' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_Initialize_Bar, Temp_struct_Variable1234) == 0x000048, "Member 'AthenaHitPointBar_C_Initialize_Bar::Temp_struct_Variable1234' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_Initialize_Bar, Temp_struct_Variable12345) == 0x000058, "Member 'AthenaHitPointBar_C_Initialize_Bar::Temp_struct_Variable12345' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_Initialize_Bar, Temp_byte_Variable12) == 0x000068, "Member 'AthenaHitPointBar_C_Initialize_Bar::Temp_byte_Variable12' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_Initialize_Bar, Temp_class_Variable) == 0x000070, "Member 'AthenaHitPointBar_C_Initialize_Bar::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_Initialize_Bar, Temp_class_Variable1) == 0x000078, "Member 'AthenaHitPointBar_C_Initialize_Bar::Temp_class_Variable1' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_Initialize_Bar, Temp_class_Variable12) == 0x000080, "Member 'AthenaHitPointBar_C_Initialize_Bar::Temp_class_Variable12' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_Initialize_Bar, Temp_byte_Variable123) == 0x000088, "Member 'AthenaHitPointBar_C_Initialize_Bar::Temp_byte_Variable123' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_Initialize_Bar, Temp_struct_Variable123456) == 0x00008C, "Member 'AthenaHitPointBar_C_Initialize_Bar::Temp_struct_Variable123456' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_Initialize_Bar, Temp_struct_Variable1234567) == 0x00009C, "Member 'AthenaHitPointBar_C_Initialize_Bar::Temp_struct_Variable1234567' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_Initialize_Bar, Temp_struct_Variable12345678) == 0x0000AC, "Member 'AthenaHitPointBar_C_Initialize_Bar::Temp_struct_Variable12345678' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_Initialize_Bar, Temp_byte_Variable1234) == 0x0000BC, "Member 'AthenaHitPointBar_C_Initialize_Bar::Temp_byte_Variable1234' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_Initialize_Bar, Temp_struct_Variable123456789) == 0x0000C0, "Member 'AthenaHitPointBar_C_Initialize_Bar::Temp_struct_Variable123456789' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_Initialize_Bar, Temp_struct_Variable12345678910) == 0x0000D0, "Member 'AthenaHitPointBar_C_Initialize_Bar::Temp_struct_Variable12345678910' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_Initialize_Bar, Temp_struct_Variable1234567891011) == 0x0000E0, "Member 'AthenaHitPointBar_C_Initialize_Bar::Temp_struct_Variable1234567891011' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_Initialize_Bar, Temp_interface_Variable) == 0x0000F0, "Member 'AthenaHitPointBar_C_Initialize_Bar::Temp_interface_Variable' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_Initialize_Bar, Temp_byte_Variable12345) == 0x000100, "Member 'AthenaHitPointBar_C_Initialize_Bar::Temp_byte_Variable12345' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_Initialize_Bar, K2Node_Select_Default) == 0x000108, "Member 'AthenaHitPointBar_C_Initialize_Bar::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_Initialize_Bar, K2Node_Select1_Default) == 0x000118, "Member 'AthenaHitPointBar_C_Initialize_Bar::K2Node_Select1_Default' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_Initialize_Bar, K2Node_Select12_Default) == 0x000128, "Member 'AthenaHitPointBar_C_Initialize_Bar::K2Node_Select12_Default' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_Initialize_Bar, K2Node_Select123_Default) == 0x000130, "Member 'AthenaHitPointBar_C_Initialize_Bar::K2Node_Select123_Default' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_Initialize_Bar, K2Node_Select1234_Default) == 0x000140, "Member 'AthenaHitPointBar_C_Initialize_Bar::K2Node_Select1234_Default' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_Initialize_Bar, K2Node_Select12345_Default) == 0x000150, "Member 'AthenaHitPointBar_C_Initialize_Bar::K2Node_Select12345_Default' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_Initialize_Bar, K2Node_MakeStruct_Margin) == 0x000160, "Member 'AthenaHitPointBar_C_Initialize_Bar::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_Initialize_Bar, CallFunc_SlotAsOverlaySlot_ReturnValue) == 0x000170, "Member 'AthenaHitPointBar_C_Initialize_Bar::CallFunc_SlotAsOverlaySlot_ReturnValue' has a wrong offset!");

// Function AthenaHitPointBar.AthenaHitPointBar_C.Update Delta Bar
// 0x0008 (0x0008 - 0x0000)
struct AthenaHitPointBar_C_Update_Delta_Bar final
{
public:
	float                                         CallFunc_FMax_ReturnValue;                         // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaHitPointBar_C_Update_Delta_Bar) == 0x000004, "Wrong alignment on AthenaHitPointBar_C_Update_Delta_Bar");
static_assert(sizeof(AthenaHitPointBar_C_Update_Delta_Bar) == 0x000008, "Wrong size on AthenaHitPointBar_C_Update_Delta_Bar");
static_assert(offsetof(AthenaHitPointBar_C_Update_Delta_Bar, CallFunc_FMax_ReturnValue) == 0x000000, "Member 'AthenaHitPointBar_C_Update_Delta_Bar::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_Update_Delta_Bar, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000004, "Member 'AthenaHitPointBar_C_Update_Delta_Bar::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");

// Function AthenaHitPointBar.AthenaHitPointBar_C.Update
// 0x0008 (0x0008 - 0x0000)
struct AthenaHitPointBar_C_Update final
{
public:
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaHitPointBar_C_Update) == 0x000004, "Wrong alignment on AthenaHitPointBar_C_Update");
static_assert(sizeof(AthenaHitPointBar_C_Update) == 0x000008, "Wrong size on AthenaHitPointBar_C_Update");
static_assert(offsetof(AthenaHitPointBar_C_Update, CallFunc_NearlyEqual_FloatFloat_ReturnValue) == 0x000000, "Member 'AthenaHitPointBar_C_Update::CallFunc_NearlyEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_Update, CallFunc_Lerp_ReturnValue) == 0x000004, "Member 'AthenaHitPointBar_C_Update::CallFunc_Lerp_ReturnValue' has a wrong offset!");

// Function AthenaHitPointBar.AthenaHitPointBar_C.UpdateHealthType
// 0x0018 (0x0018 - 0x0000)
struct AthenaHitPointBar_C_UpdateHealthType final
{
public:
	class APawn*                                  CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena;      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDBNO_ReturnValue;                       // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaHitPointBar_C_UpdateHealthType) == 0x000008, "Wrong alignment on AthenaHitPointBar_C_UpdateHealthType");
static_assert(sizeof(AthenaHitPointBar_C_UpdateHealthType) == 0x000018, "Wrong size on AthenaHitPointBar_C_UpdateHealthType");
static_assert(offsetof(AthenaHitPointBar_C_UpdateHealthType, CallFunc_GetOwningPlayerPawn_ReturnValue) == 0x000000, "Member 'AthenaHitPointBar_C_UpdateHealthType::CallFunc_GetOwningPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_UpdateHealthType, K2Node_DynamicCast_AsFort_Player_Pawn_Athena) == 0x000008, "Member 'AthenaHitPointBar_C_UpdateHealthType::K2Node_DynamicCast_AsFort_Player_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_UpdateHealthType, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'AthenaHitPointBar_C_UpdateHealthType::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_UpdateHealthType, CallFunc_IsDBNO_ReturnValue) == 0x000011, "Member 'AthenaHitPointBar_C_UpdateHealthType::CallFunc_IsDBNO_ReturnValue' has a wrong offset!");

// Function AthenaHitPointBar.AthenaHitPointBar_C.UpdateDBNOState
// 0x0003 (0x0003 - 0x0000)
struct AthenaHitPointBar_C_UpdateDBNOState final
{
public:
	bool                                          bIsDBNO;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaHitPointBar_C_UpdateDBNOState) == 0x000001, "Wrong alignment on AthenaHitPointBar_C_UpdateDBNOState");
static_assert(sizeof(AthenaHitPointBar_C_UpdateDBNOState) == 0x000003, "Wrong size on AthenaHitPointBar_C_UpdateDBNOState");
static_assert(offsetof(AthenaHitPointBar_C_UpdateDBNOState, bIsDBNO) == 0x000000, "Member 'AthenaHitPointBar_C_UpdateDBNOState::bIsDBNO' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_UpdateDBNOState, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'AthenaHitPointBar_C_UpdateDBNOState::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(AthenaHitPointBar_C_UpdateDBNOState, CallFunc_EqualEqual_BoolBool_ReturnValue) == 0x000002, "Member 'AthenaHitPointBar_C_UpdateDBNOState::CallFunc_EqualEqual_BoolBool_ReturnValue' has a wrong offset!");

}

