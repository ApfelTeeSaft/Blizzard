﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MicIndicator

#include "Basic.hpp"


namespace SDK::Params
{

// Function MicIndicator.MicIndicator_C.ExecuteUbergraph_MicIndicator
// 0x000C (0x000C - 0x0000)
struct MicIndicator_C_ExecuteUbergraph_MicIndicator final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsTalking;                           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bIsMuted;                             // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MicIndicator_C_ExecuteUbergraph_MicIndicator) == 0x000004, "Wrong alignment on MicIndicator_C_ExecuteUbergraph_MicIndicator");
static_assert(sizeof(MicIndicator_C_ExecuteUbergraph_MicIndicator) == 0x00000C, "Wrong size on MicIndicator_C_ExecuteUbergraph_MicIndicator");
static_assert(offsetof(MicIndicator_C_ExecuteUbergraph_MicIndicator, EntryPoint) == 0x000000, "Member 'MicIndicator_C_ExecuteUbergraph_MicIndicator::EntryPoint' has a wrong offset!");
static_assert(offsetof(MicIndicator_C_ExecuteUbergraph_MicIndicator, CallFunc_SelectInt_ReturnValue) == 0x000004, "Member 'MicIndicator_C_ExecuteUbergraph_MicIndicator::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MicIndicator_C_ExecuteUbergraph_MicIndicator, K2Node_Event_bIsTalking) == 0x000008, "Member 'MicIndicator_C_ExecuteUbergraph_MicIndicator::K2Node_Event_bIsTalking' has a wrong offset!");
static_assert(offsetof(MicIndicator_C_ExecuteUbergraph_MicIndicator, K2Node_Event_bIsMuted) == 0x000009, "Member 'MicIndicator_C_ExecuteUbergraph_MicIndicator::K2Node_Event_bIsMuted' has a wrong offset!");

// Function MicIndicator.MicIndicator_C.OnPlayerMuted
// 0x0001 (0x0001 - 0x0000)
struct MicIndicator_C_OnPlayerMuted final
{
public:
	bool                                          bIsMuted_0;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MicIndicator_C_OnPlayerMuted) == 0x000001, "Wrong alignment on MicIndicator_C_OnPlayerMuted");
static_assert(sizeof(MicIndicator_C_OnPlayerMuted) == 0x000001, "Wrong size on MicIndicator_C_OnPlayerMuted");
static_assert(offsetof(MicIndicator_C_OnPlayerMuted, bIsMuted_0) == 0x000000, "Member 'MicIndicator_C_OnPlayerMuted::bIsMuted_0' has a wrong offset!");

// Function MicIndicator.MicIndicator_C.OnPlayerTalkingChanged
// 0x0001 (0x0001 - 0x0000)
struct MicIndicator_C_OnPlayerTalkingChanged final
{
public:
	bool                                          bIsTalking_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MicIndicator_C_OnPlayerTalkingChanged) == 0x000001, "Wrong alignment on MicIndicator_C_OnPlayerTalkingChanged");
static_assert(sizeof(MicIndicator_C_OnPlayerTalkingChanged) == 0x000001, "Wrong size on MicIndicator_C_OnPlayerTalkingChanged");
static_assert(offsetof(MicIndicator_C_OnPlayerTalkingChanged, bIsTalking_0) == 0x000000, "Member 'MicIndicator_C_OnPlayerTalkingChanged::bIsTalking_0' has a wrong offset!");

}

