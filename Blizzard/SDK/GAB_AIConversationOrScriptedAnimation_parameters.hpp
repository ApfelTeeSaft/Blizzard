﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_AIConversationOrScriptedAnimation

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GAB_AIConversationOrScriptedAnimation.GAB_AIConversationOrScriptedAnimation_C.ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation
// 0x01A8 (0x01A8 - 0x0000)
struct GAB_AIConversationOrScriptedAnimation_C_ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0008(0x00A8)(ConstParm)
	TDelegate<void(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate; // 0x00B0(0x0010)(ZeroConstructor, NoDestructor)
	class UAnimMontage*                           K2Node_DynamicCast_AsAnim_Montage;                 // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData12;                   // 0x00D0(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag12;               // 0x00F0(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue;        // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate1; // 0x0100(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_111[0x7];                                      // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData1;                    // 0x0118(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag1;                // 0x0138(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData;                     // 0x0140(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag;                 // 0x0160(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate12; // 0x0168(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayTag                           Temp_struct_Variable;                              // 0x0178(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable1;                             // 0x0180(0x0020)()
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GAB_AIConversationOrScriptedAnimation_C_ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation) == 0x000008, "Wrong alignment on GAB_AIConversationOrScriptedAnimation_C_ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation");
static_assert(sizeof(GAB_AIConversationOrScriptedAnimation_C_ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation) == 0x0001A8, "Wrong size on GAB_AIConversationOrScriptedAnimation_C_ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation");
static_assert(offsetof(GAB_AIConversationOrScriptedAnimation_C_ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation, EntryPoint) == 0x000000, "Member 'GAB_AIConversationOrScriptedAnimation_C_ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAB_AIConversationOrScriptedAnimation_C_ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation, K2Node_Event_EventData) == 0x000008, "Member 'GAB_AIConversationOrScriptedAnimation_C_ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GAB_AIConversationOrScriptedAnimation_C_ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation, K2Node_CreateDelegate_OutputDelegate) == 0x0000B0, "Member 'GAB_AIConversationOrScriptedAnimation_C_ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GAB_AIConversationOrScriptedAnimation_C_ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation, K2Node_DynamicCast_AsAnim_Montage) == 0x0000C0, "Member 'GAB_AIConversationOrScriptedAnimation_C_ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation::K2Node_DynamicCast_AsAnim_Montage' has a wrong offset!");
static_assert(offsetof(GAB_AIConversationOrScriptedAnimation_C_ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation, K2Node_DynamicCast_bSuccess) == 0x0000C8, "Member 'GAB_AIConversationOrScriptedAnimation_C_ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GAB_AIConversationOrScriptedAnimation_C_ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation, K2Node_CustomEvent_TargetData12) == 0x0000D0, "Member 'GAB_AIConversationOrScriptedAnimation_C_ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation::K2Node_CustomEvent_TargetData12' has a wrong offset!");
static_assert(offsetof(GAB_AIConversationOrScriptedAnimation_C_ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation, K2Node_CustomEvent_ApplicationTag12) == 0x0000F0, "Member 'GAB_AIConversationOrScriptedAnimation_C_ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation::K2Node_CustomEvent_ApplicationTag12' has a wrong offset!");
static_assert(offsetof(GAB_AIConversationOrScriptedAnimation_C_ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation, CallFunc_PlayMontageWaitTarget_ReturnValue) == 0x0000F8, "Member 'GAB_AIConversationOrScriptedAnimation_C_ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation::CallFunc_PlayMontageWaitTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AIConversationOrScriptedAnimation_C_ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation, K2Node_CreateDelegate_OutputDelegate1) == 0x000100, "Member 'GAB_AIConversationOrScriptedAnimation_C_ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation::K2Node_CreateDelegate_OutputDelegate1' has a wrong offset!");
static_assert(offsetof(GAB_AIConversationOrScriptedAnimation_C_ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation, CallFunc_IsValid_ReturnValue) == 0x000110, "Member 'GAB_AIConversationOrScriptedAnimation_C_ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_AIConversationOrScriptedAnimation_C_ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation, K2Node_CustomEvent_TargetData1) == 0x000118, "Member 'GAB_AIConversationOrScriptedAnimation_C_ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation::K2Node_CustomEvent_TargetData1' has a wrong offset!");
static_assert(offsetof(GAB_AIConversationOrScriptedAnimation_C_ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation, K2Node_CustomEvent_ApplicationTag1) == 0x000138, "Member 'GAB_AIConversationOrScriptedAnimation_C_ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation::K2Node_CustomEvent_ApplicationTag1' has a wrong offset!");
static_assert(offsetof(GAB_AIConversationOrScriptedAnimation_C_ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation, K2Node_CustomEvent_TargetData) == 0x000140, "Member 'GAB_AIConversationOrScriptedAnimation_C_ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation::K2Node_CustomEvent_TargetData' has a wrong offset!");
static_assert(offsetof(GAB_AIConversationOrScriptedAnimation_C_ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation, K2Node_CustomEvent_ApplicationTag) == 0x000160, "Member 'GAB_AIConversationOrScriptedAnimation_C_ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation::K2Node_CustomEvent_ApplicationTag' has a wrong offset!");
static_assert(offsetof(GAB_AIConversationOrScriptedAnimation_C_ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation, K2Node_CreateDelegate_OutputDelegate12) == 0x000168, "Member 'GAB_AIConversationOrScriptedAnimation_C_ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation::K2Node_CreateDelegate_OutputDelegate12' has a wrong offset!");
static_assert(offsetof(GAB_AIConversationOrScriptedAnimation_C_ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation, Temp_struct_Variable) == 0x000178, "Member 'GAB_AIConversationOrScriptedAnimation_C_ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GAB_AIConversationOrScriptedAnimation_C_ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation, Temp_struct_Variable1) == 0x000180, "Member 'GAB_AIConversationOrScriptedAnimation_C_ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation::Temp_struct_Variable1' has a wrong offset!");
static_assert(offsetof(GAB_AIConversationOrScriptedAnimation_C_ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation, CallFunc_K2_CommitAbility_ReturnValue) == 0x0001A0, "Member 'GAB_AIConversationOrScriptedAnimation_C_ExecuteUbergraph_GAB_AIConversationOrScriptedAnimation::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");

// Function GAB_AIConversationOrScriptedAnimation.GAB_AIConversationOrScriptedAnimation_C.Cancelled_0DEF95174D4614F4567B4E8B836FDE6F
// 0x0028 (0x0028 - 0x0000)
struct GAB_AIConversationOrScriptedAnimation_C_Cancelled_0DEF95174D4614F4567B4E8B836FDE6F final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAB_AIConversationOrScriptedAnimation_C_Cancelled_0DEF95174D4614F4567B4E8B836FDE6F) == 0x000008, "Wrong alignment on GAB_AIConversationOrScriptedAnimation_C_Cancelled_0DEF95174D4614F4567B4E8B836FDE6F");
static_assert(sizeof(GAB_AIConversationOrScriptedAnimation_C_Cancelled_0DEF95174D4614F4567B4E8B836FDE6F) == 0x000028, "Wrong size on GAB_AIConversationOrScriptedAnimation_C_Cancelled_0DEF95174D4614F4567B4E8B836FDE6F");
static_assert(offsetof(GAB_AIConversationOrScriptedAnimation_C_Cancelled_0DEF95174D4614F4567B4E8B836FDE6F, TargetData) == 0x000000, "Member 'GAB_AIConversationOrScriptedAnimation_C_Cancelled_0DEF95174D4614F4567B4E8B836FDE6F::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_AIConversationOrScriptedAnimation_C_Cancelled_0DEF95174D4614F4567B4E8B836FDE6F, ApplicationTag) == 0x000020, "Member 'GAB_AIConversationOrScriptedAnimation_C_Cancelled_0DEF95174D4614F4567B4E8B836FDE6F::ApplicationTag' has a wrong offset!");

// Function GAB_AIConversationOrScriptedAnimation.GAB_AIConversationOrScriptedAnimation_C.Completed_0DEF95174D4614F4567B4E8B836FDE6F
// 0x0028 (0x0028 - 0x0000)
struct GAB_AIConversationOrScriptedAnimation_C_Completed_0DEF95174D4614F4567B4E8B836FDE6F final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAB_AIConversationOrScriptedAnimation_C_Completed_0DEF95174D4614F4567B4E8B836FDE6F) == 0x000008, "Wrong alignment on GAB_AIConversationOrScriptedAnimation_C_Completed_0DEF95174D4614F4567B4E8B836FDE6F");
static_assert(sizeof(GAB_AIConversationOrScriptedAnimation_C_Completed_0DEF95174D4614F4567B4E8B836FDE6F) == 0x000028, "Wrong size on GAB_AIConversationOrScriptedAnimation_C_Completed_0DEF95174D4614F4567B4E8B836FDE6F");
static_assert(offsetof(GAB_AIConversationOrScriptedAnimation_C_Completed_0DEF95174D4614F4567B4E8B836FDE6F, TargetData) == 0x000000, "Member 'GAB_AIConversationOrScriptedAnimation_C_Completed_0DEF95174D4614F4567B4E8B836FDE6F::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_AIConversationOrScriptedAnimation_C_Completed_0DEF95174D4614F4567B4E8B836FDE6F, ApplicationTag) == 0x000020, "Member 'GAB_AIConversationOrScriptedAnimation_C_Completed_0DEF95174D4614F4567B4E8B836FDE6F::ApplicationTag' has a wrong offset!");

// Function GAB_AIConversationOrScriptedAnimation.GAB_AIConversationOrScriptedAnimation_C.K2_ActivateAbilityFromEvent
// 0x00A8 (0x00A8 - 0x0000)
struct GAB_AIConversationOrScriptedAnimation_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00A8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GAB_AIConversationOrScriptedAnimation_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GAB_AIConversationOrScriptedAnimation_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GAB_AIConversationOrScriptedAnimation_C_K2_ActivateAbilityFromEvent) == 0x0000A8, "Wrong size on GAB_AIConversationOrScriptedAnimation_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GAB_AIConversationOrScriptedAnimation_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GAB_AIConversationOrScriptedAnimation_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

// Function GAB_AIConversationOrScriptedAnimation.GAB_AIConversationOrScriptedAnimation_C.Triggered_0DEF95174D4614F4567B4E8B836FDE6F
// 0x0028 (0x0028 - 0x0000)
struct GAB_AIConversationOrScriptedAnimation_C_Triggered_0DEF95174D4614F4567B4E8B836FDE6F final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAB_AIConversationOrScriptedAnimation_C_Triggered_0DEF95174D4614F4567B4E8B836FDE6F) == 0x000008, "Wrong alignment on GAB_AIConversationOrScriptedAnimation_C_Triggered_0DEF95174D4614F4567B4E8B836FDE6F");
static_assert(sizeof(GAB_AIConversationOrScriptedAnimation_C_Triggered_0DEF95174D4614F4567B4E8B836FDE6F) == 0x000028, "Wrong size on GAB_AIConversationOrScriptedAnimation_C_Triggered_0DEF95174D4614F4567B4E8B836FDE6F");
static_assert(offsetof(GAB_AIConversationOrScriptedAnimation_C_Triggered_0DEF95174D4614F4567B4E8B836FDE6F, TargetData) == 0x000000, "Member 'GAB_AIConversationOrScriptedAnimation_C_Triggered_0DEF95174D4614F4567B4E8B836FDE6F::TargetData' has a wrong offset!");
static_assert(offsetof(GAB_AIConversationOrScriptedAnimation_C_Triggered_0DEF95174D4614F4567B4E8B836FDE6F, ApplicationTag) == 0x000020, "Member 'GAB_AIConversationOrScriptedAnimation_C_Triggered_0DEF95174D4614F4567B4E8B836FDE6F::ApplicationTag' has a wrong offset!");

}

