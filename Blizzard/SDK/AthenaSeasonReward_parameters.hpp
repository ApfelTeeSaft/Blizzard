﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaSeasonReward

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function AthenaSeasonReward.AthenaSeasonReward_C.ExecuteUbergraph_AthenaSeasonReward
// 0x0018 (0x0018 - 0x0000)
struct AthenaSeasonReward_C_ExecuteUbergraph_AthenaSeasonReward final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaSeasonReward_C_ExecuteUbergraph_AthenaSeasonReward) == 0x000008, "Wrong alignment on AthenaSeasonReward_C_ExecuteUbergraph_AthenaSeasonReward");
static_assert(sizeof(AthenaSeasonReward_C_ExecuteUbergraph_AthenaSeasonReward) == 0x000018, "Wrong size on AthenaSeasonReward_C_ExecuteUbergraph_AthenaSeasonReward");
static_assert(offsetof(AthenaSeasonReward_C_ExecuteUbergraph_AthenaSeasonReward, EntryPoint) == 0x000000, "Member 'AthenaSeasonReward_C_ExecuteUbergraph_AthenaSeasonReward::EntryPoint' has a wrong offset!");
static_assert(offsetof(AthenaSeasonReward_C_ExecuteUbergraph_AthenaSeasonReward, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'AthenaSeasonReward_C_ExecuteUbergraph_AthenaSeasonReward::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(AthenaSeasonReward_C_ExecuteUbergraph_AthenaSeasonReward, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'AthenaSeasonReward_C_ExecuteUbergraph_AthenaSeasonReward::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function AthenaSeasonReward.AthenaSeasonReward_C.Setup
// 0x0010 (0x0010 - 0x0000)
struct AthenaSeasonReward_C_Setup final
{
public:
	class UFortItem*                              ItemToRepresent;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Claimed;                                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Locked;                                            // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LevelAchieved;                                     // 0x000A(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AthenaSeasonReward_C_Setup) == 0x000008, "Wrong alignment on AthenaSeasonReward_C_Setup");
static_assert(sizeof(AthenaSeasonReward_C_Setup) == 0x000010, "Wrong size on AthenaSeasonReward_C_Setup");
static_assert(offsetof(AthenaSeasonReward_C_Setup, ItemToRepresent) == 0x000000, "Member 'AthenaSeasonReward_C_Setup::ItemToRepresent' has a wrong offset!");
static_assert(offsetof(AthenaSeasonReward_C_Setup, Claimed) == 0x000008, "Member 'AthenaSeasonReward_C_Setup::Claimed' has a wrong offset!");
static_assert(offsetof(AthenaSeasonReward_C_Setup, Locked) == 0x000009, "Member 'AthenaSeasonReward_C_Setup::Locked' has a wrong offset!");
static_assert(offsetof(AthenaSeasonReward_C_Setup, LevelAchieved) == 0x00000A, "Member 'AthenaSeasonReward_C_Setup::LevelAchieved' has a wrong offset!");

// Function AthenaSeasonReward.AthenaSeasonReward_C.SetState
// 0x003C (0x003C - 0x0000)
struct AthenaSeasonReward_C_SetState final
{
public:
	bool                                          Claimed;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Locked;                                            // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LevelAchieved;                                     // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         Temp_float_Variable;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable1;                              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable1;                               // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable12;                             // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable123;                            // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable12;                              // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select1_Default;                            // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable123;                             // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select12_Default;                           // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable12;                              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable123;                             // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select123_Default;                          // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B[0x1];                                       // 0x002B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable1234;                           // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable12345;                          // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable1234;                            // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select1234_Default;                         // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AthenaSeasonReward_C_SetState) == 0x000004, "Wrong alignment on AthenaSeasonReward_C_SetState");
static_assert(sizeof(AthenaSeasonReward_C_SetState) == 0x00003C, "Wrong size on AthenaSeasonReward_C_SetState");
static_assert(offsetof(AthenaSeasonReward_C_SetState, Claimed) == 0x000000, "Member 'AthenaSeasonReward_C_SetState::Claimed' has a wrong offset!");
static_assert(offsetof(AthenaSeasonReward_C_SetState, Locked) == 0x000001, "Member 'AthenaSeasonReward_C_SetState::Locked' has a wrong offset!");
static_assert(offsetof(AthenaSeasonReward_C_SetState, LevelAchieved) == 0x000002, "Member 'AthenaSeasonReward_C_SetState::LevelAchieved' has a wrong offset!");
static_assert(offsetof(AthenaSeasonReward_C_SetState, Temp_bool_Variable) == 0x000003, "Member 'AthenaSeasonReward_C_SetState::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AthenaSeasonReward_C_SetState, Temp_float_Variable) == 0x000004, "Member 'AthenaSeasonReward_C_SetState::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(AthenaSeasonReward_C_SetState, Temp_float_Variable1) == 0x000008, "Member 'AthenaSeasonReward_C_SetState::Temp_float_Variable1' has a wrong offset!");
static_assert(offsetof(AthenaSeasonReward_C_SetState, Temp_bool_Variable1) == 0x00000C, "Member 'AthenaSeasonReward_C_SetState::Temp_bool_Variable1' has a wrong offset!");
static_assert(offsetof(AthenaSeasonReward_C_SetState, K2Node_Select_Default) == 0x000010, "Member 'AthenaSeasonReward_C_SetState::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AthenaSeasonReward_C_SetState, Temp_float_Variable12) == 0x000014, "Member 'AthenaSeasonReward_C_SetState::Temp_float_Variable12' has a wrong offset!");
static_assert(offsetof(AthenaSeasonReward_C_SetState, Temp_float_Variable123) == 0x000018, "Member 'AthenaSeasonReward_C_SetState::Temp_float_Variable123' has a wrong offset!");
static_assert(offsetof(AthenaSeasonReward_C_SetState, Temp_bool_Variable12) == 0x00001C, "Member 'AthenaSeasonReward_C_SetState::Temp_bool_Variable12' has a wrong offset!");
static_assert(offsetof(AthenaSeasonReward_C_SetState, K2Node_Select1_Default) == 0x000020, "Member 'AthenaSeasonReward_C_SetState::K2Node_Select1_Default' has a wrong offset!");
static_assert(offsetof(AthenaSeasonReward_C_SetState, Temp_byte_Variable) == 0x000024, "Member 'AthenaSeasonReward_C_SetState::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(AthenaSeasonReward_C_SetState, Temp_byte_Variable1) == 0x000025, "Member 'AthenaSeasonReward_C_SetState::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(AthenaSeasonReward_C_SetState, Temp_bool_Variable123) == 0x000026, "Member 'AthenaSeasonReward_C_SetState::Temp_bool_Variable123' has a wrong offset!");
static_assert(offsetof(AthenaSeasonReward_C_SetState, K2Node_Select12_Default) == 0x000027, "Member 'AthenaSeasonReward_C_SetState::K2Node_Select12_Default' has a wrong offset!");
static_assert(offsetof(AthenaSeasonReward_C_SetState, Temp_byte_Variable12) == 0x000028, "Member 'AthenaSeasonReward_C_SetState::Temp_byte_Variable12' has a wrong offset!");
static_assert(offsetof(AthenaSeasonReward_C_SetState, Temp_byte_Variable123) == 0x000029, "Member 'AthenaSeasonReward_C_SetState::Temp_byte_Variable123' has a wrong offset!");
static_assert(offsetof(AthenaSeasonReward_C_SetState, K2Node_Select123_Default) == 0x00002A, "Member 'AthenaSeasonReward_C_SetState::K2Node_Select123_Default' has a wrong offset!");
static_assert(offsetof(AthenaSeasonReward_C_SetState, Temp_float_Variable1234) == 0x00002C, "Member 'AthenaSeasonReward_C_SetState::Temp_float_Variable1234' has a wrong offset!");
static_assert(offsetof(AthenaSeasonReward_C_SetState, Temp_float_Variable12345) == 0x000030, "Member 'AthenaSeasonReward_C_SetState::Temp_float_Variable12345' has a wrong offset!");
static_assert(offsetof(AthenaSeasonReward_C_SetState, Temp_bool_Variable1234) == 0x000034, "Member 'AthenaSeasonReward_C_SetState::Temp_bool_Variable1234' has a wrong offset!");
static_assert(offsetof(AthenaSeasonReward_C_SetState, K2Node_Select1234_Default) == 0x000038, "Member 'AthenaSeasonReward_C_SetState::K2Node_Select1234_Default' has a wrong offset!");

}

