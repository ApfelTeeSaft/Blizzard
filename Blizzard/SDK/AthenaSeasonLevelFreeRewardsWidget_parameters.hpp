﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaSeasonLevelFreeRewardsWidget

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function AthenaSeasonLevelFreeRewardsWidget.AthenaSeasonLevelFreeRewardsWidget_C.ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget
// 0x00B8 (0x00B8 - 0x0000)
struct AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortSeasonPassLevelInfo*               CallFunc_GetLevelInfo_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFreeClaimed_ReturnValue;                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFreeUnlocked_ReturnValue;               // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsFreeClaimed_ReturnValue1;               // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F[0x1];                                       // 0x001F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortSeasonPassLevelInfo*               CallFunc_GetLevelInfo_ReturnValue1;                // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable1;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UFortItem*>                      CallFunc_GetRewardItems_ReturnValue;               // 0x0038(0x0010)(ZeroConstructor, ReferenceParm)
	int32                                         CallFunc_Add_IntInt_ReturnValue1;                  // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortSeasonPassLevelInfo*               CallFunc_GetLevelInfo_ReturnValue12;               // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFreeClaimed_ReturnValue12;              // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsFreeUnlocked_ReturnValue1;              // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsFreeClaimed_ReturnValue123;             // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue1;                 // 0x0063(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0064(0x0010)(IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable1;                    // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                              CallFunc_Array_Get_Item;                           // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_FreeUnlocked;                         // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_PaidUnlocked;                         // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A[0x6];                                       // 0x008A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAthenaSeasonReward_C*                  CallFunc_Create_ReturnValue;                       // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaSeasonReward_C*                  CallFunc_Array_Get_Item1;                          // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue1;                // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue1;                 // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A5[0x3];                                       // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGridSlot*                              CallFunc_AddChildToGrid_ReturnValue;               // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget) == 0x000008, "Wrong alignment on AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget");
static_assert(sizeof(AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget) == 0x0000B8, "Wrong size on AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget");
static_assert(offsetof(AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget, EntryPoint) == 0x000000, "Member 'AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget, CallFunc_GetLevelInfo_ReturnValue) == 0x000008, "Member 'AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget::CallFunc_GetLevelInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget, CallFunc_IsFreeClaimed_ReturnValue) == 0x000014, "Member 'AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget::CallFunc_IsFreeClaimed_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget, CallFunc_IsFreeUnlocked_ReturnValue) == 0x00001C, "Member 'AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget::CallFunc_IsFreeUnlocked_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget, CallFunc_IsFreeClaimed_ReturnValue1) == 0x00001D, "Member 'AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget::CallFunc_IsFreeClaimed_ReturnValue1' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget, CallFunc_Not_PreBool_ReturnValue) == 0x00001E, "Member 'AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget, Temp_int_Array_Index_Variable) == 0x000020, "Member 'AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget, CallFunc_GetLevelInfo_ReturnValue1) == 0x000028, "Member 'AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget::CallFunc_GetLevelInfo_ReturnValue1' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget, Temp_int_Loop_Counter_Variable1) == 0x000030, "Member 'AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget::Temp_int_Loop_Counter_Variable1' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget, CallFunc_GetRewardItems_ReturnValue) == 0x000038, "Member 'AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget::CallFunc_GetRewardItems_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget, CallFunc_Add_IntInt_ReturnValue1) == 0x000048, "Member 'AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget::CallFunc_Add_IntInt_ReturnValue1' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget, CallFunc_Array_Length_ReturnValue) == 0x00004C, "Member 'AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget, CallFunc_GetLevelInfo_ReturnValue12) == 0x000058, "Member 'AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget::CallFunc_GetLevelInfo_ReturnValue12' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget, CallFunc_IsFreeClaimed_ReturnValue12) == 0x000060, "Member 'AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget::CallFunc_IsFreeClaimed_ReturnValue12' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget, CallFunc_IsFreeUnlocked_ReturnValue1) == 0x000061, "Member 'AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget::CallFunc_IsFreeUnlocked_ReturnValue1' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget, CallFunc_IsFreeClaimed_ReturnValue123) == 0x000062, "Member 'AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget::CallFunc_IsFreeClaimed_ReturnValue123' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget, CallFunc_Not_PreBool_ReturnValue1) == 0x000063, "Member 'AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget::CallFunc_Not_PreBool_ReturnValue1' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget, K2Node_MakeStruct_Margin) == 0x000064, "Member 'AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget, Temp_int_Array_Index_Variable1) == 0x000074, "Member 'AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget::Temp_int_Array_Index_Variable1' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget, CallFunc_Array_Get_Item) == 0x000078, "Member 'AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget, CallFunc_Percent_IntInt_ReturnValue) == 0x000080, "Member 'AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget, CallFunc_Divide_IntInt_ReturnValue) == 0x000084, "Member 'AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget, K2Node_Event_FreeUnlocked) == 0x000088, "Member 'AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget::K2Node_Event_FreeUnlocked' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget, K2Node_Event_PaidUnlocked) == 0x000089, "Member 'AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget::K2Node_Event_PaidUnlocked' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget, CallFunc_Create_ReturnValue) == 0x000090, "Member 'AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget, CallFunc_Array_Get_Item1) == 0x000098, "Member 'AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget::CallFunc_Array_Get_Item1' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget, CallFunc_Array_Length_ReturnValue1) == 0x0000A0, "Member 'AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget::CallFunc_Array_Length_ReturnValue1' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget, CallFunc_Less_IntInt_ReturnValue1) == 0x0000A4, "Member 'AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget::CallFunc_Less_IntInt_ReturnValue1' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget, CallFunc_Array_Add_ReturnValue) == 0x0000A8, "Member 'AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget, CallFunc_AddChildToGrid_ReturnValue) == 0x0000B0, "Member 'AthenaSeasonLevelFreeRewardsWidget_C_ExecuteUbergraph_AthenaSeasonLevelFreeRewardsWidget::CallFunc_AddChildToGrid_ReturnValue' has a wrong offset!");

// Function AthenaSeasonLevelFreeRewardsWidget.AthenaSeasonLevelFreeRewardsWidget_C.OnLockedStatusChanged
// 0x0002 (0x0002 - 0x0000)
struct AthenaSeasonLevelFreeRewardsWidget_C_OnLockedStatusChanged final
{
public:
	bool                                          FreeUnlocked;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          PaidUnlocked;                                      // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaSeasonLevelFreeRewardsWidget_C_OnLockedStatusChanged) == 0x000001, "Wrong alignment on AthenaSeasonLevelFreeRewardsWidget_C_OnLockedStatusChanged");
static_assert(sizeof(AthenaSeasonLevelFreeRewardsWidget_C_OnLockedStatusChanged) == 0x000002, "Wrong size on AthenaSeasonLevelFreeRewardsWidget_C_OnLockedStatusChanged");
static_assert(offsetof(AthenaSeasonLevelFreeRewardsWidget_C_OnLockedStatusChanged, FreeUnlocked) == 0x000000, "Member 'AthenaSeasonLevelFreeRewardsWidget_C_OnLockedStatusChanged::FreeUnlocked' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelFreeRewardsWidget_C_OnLockedStatusChanged, PaidUnlocked) == 0x000001, "Member 'AthenaSeasonLevelFreeRewardsWidget_C_OnLockedStatusChanged::PaidUnlocked' has a wrong offset!");

// Function AthenaSeasonLevelFreeRewardsWidget.AthenaSeasonLevelFreeRewardsWidget_C.UpdateStyling
// 0x0030 (0x0030 - 0x0000)
struct AthenaSeasonLevelFreeRewardsWidget_C_UpdateStyling final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable;                               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable1;                              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortSeasonPassLevelInfo*               CallFunc_GetLevelInfo_ReturnValue;                 // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFreeUnlocked_ReturnValue;               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_Select_Default;                             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaSeasonLevelFreeRewardsWidget_C_UpdateStyling) == 0x000008, "Wrong alignment on AthenaSeasonLevelFreeRewardsWidget_C_UpdateStyling");
static_assert(sizeof(AthenaSeasonLevelFreeRewardsWidget_C_UpdateStyling) == 0x000030, "Wrong size on AthenaSeasonLevelFreeRewardsWidget_C_UpdateStyling");
static_assert(offsetof(AthenaSeasonLevelFreeRewardsWidget_C_UpdateStyling, Temp_bool_Variable) == 0x000000, "Member 'AthenaSeasonLevelFreeRewardsWidget_C_UpdateStyling::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelFreeRewardsWidget_C_UpdateStyling, Temp_class_Variable) == 0x000008, "Member 'AthenaSeasonLevelFreeRewardsWidget_C_UpdateStyling::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelFreeRewardsWidget_C_UpdateStyling, Temp_class_Variable1) == 0x000010, "Member 'AthenaSeasonLevelFreeRewardsWidget_C_UpdateStyling::Temp_class_Variable1' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelFreeRewardsWidget_C_UpdateStyling, CallFunc_GetLevelInfo_ReturnValue) == 0x000018, "Member 'AthenaSeasonLevelFreeRewardsWidget_C_UpdateStyling::CallFunc_GetLevelInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelFreeRewardsWidget_C_UpdateStyling, CallFunc_IsFreeUnlocked_ReturnValue) == 0x000020, "Member 'AthenaSeasonLevelFreeRewardsWidget_C_UpdateStyling::CallFunc_IsFreeUnlocked_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonLevelFreeRewardsWidget_C_UpdateStyling, K2Node_Select_Default) == 0x000028, "Member 'AthenaSeasonLevelFreeRewardsWidget_C_UpdateStyling::K2Node_Select_Default' has a wrong offset!");

}

