﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_DefaultPlayer_Consumable

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"


namespace SDK::Params
{

// Function GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C.ExecuteUbergraph_GA_DefaultPlayer_Consumable
// 0x01B8 (0x01B8 - 0x0000)
struct GA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0008(0x00A8)(ConstParm)
	TDelegate<void(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate; // 0x00B0(0x0010)(ZeroConstructor, NoDestructor)
	class UFortConsumableItemDefinition*          K2Node_DynamicCast_AsFort_Consumable_Item_Definition; // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData12;                   // 0x00D0(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag12;               // 0x00F0(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           CallFunc_GetUseAnimation_ReturnValue;              // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetAnimPlayRate_ReturnValue;              // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_104[0x4];                                      // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue;        // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate1; // 0x0110(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_121[0x7];                                      // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData1;                    // 0x0128(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag1;                // 0x0148(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData;                     // 0x0150(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag;                 // 0x0170(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate12; // 0x0178(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayTag                           Temp_struct_Variable;                              // 0x0188(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable1;                             // 0x0190(0x0020)()
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable) == 0x000008, "Wrong alignment on GA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable");
static_assert(sizeof(GA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable) == 0x0001B8, "Wrong size on GA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable");
static_assert(offsetof(GA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable, EntryPoint) == 0x000000, "Member 'GA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable, K2Node_Event_EventData) == 0x000008, "Member 'GA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable, K2Node_CreateDelegate_OutputDelegate) == 0x0000B0, "Member 'GA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable, K2Node_DynamicCast_AsFort_Consumable_Item_Definition) == 0x0000C0, "Member 'GA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable::K2Node_DynamicCast_AsFort_Consumable_Item_Definition' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable, K2Node_DynamicCast_bSuccess) == 0x0000C8, "Member 'GA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable, K2Node_CustomEvent_TargetData12) == 0x0000D0, "Member 'GA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable::K2Node_CustomEvent_TargetData12' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable, K2Node_CustomEvent_ApplicationTag12) == 0x0000F0, "Member 'GA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable::K2Node_CustomEvent_ApplicationTag12' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable, CallFunc_GetUseAnimation_ReturnValue) == 0x0000F8, "Member 'GA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable::CallFunc_GetUseAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable, CallFunc_GetAnimPlayRate_ReturnValue) == 0x000100, "Member 'GA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable::CallFunc_GetAnimPlayRate_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable, CallFunc_PlayMontageWaitTarget_ReturnValue) == 0x000108, "Member 'GA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable::CallFunc_PlayMontageWaitTarget_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable, K2Node_CreateDelegate_OutputDelegate1) == 0x000110, "Member 'GA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable::K2Node_CreateDelegate_OutputDelegate1' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable, CallFunc_IsValid_ReturnValue) == 0x000120, "Member 'GA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable, K2Node_CustomEvent_TargetData1) == 0x000128, "Member 'GA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable::K2Node_CustomEvent_TargetData1' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable, K2Node_CustomEvent_ApplicationTag1) == 0x000148, "Member 'GA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable::K2Node_CustomEvent_ApplicationTag1' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable, K2Node_CustomEvent_TargetData) == 0x000150, "Member 'GA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable::K2Node_CustomEvent_TargetData' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable, K2Node_CustomEvent_ApplicationTag) == 0x000170, "Member 'GA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable::K2Node_CustomEvent_ApplicationTag' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable, K2Node_CreateDelegate_OutputDelegate12) == 0x000178, "Member 'GA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable::K2Node_CreateDelegate_OutputDelegate12' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable, Temp_struct_Variable) == 0x000188, "Member 'GA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable, Temp_struct_Variable1) == 0x000190, "Member 'GA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable::Temp_struct_Variable1' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable, CallFunc_K2_CommitAbility_ReturnValue) == 0x0001B0, "Member 'GA_DefaultPlayer_Consumable_C_ExecuteUbergraph_GA_DefaultPlayer_Consumable::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");

// Function GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C.Cancelled_A3A081314405D22C4EED5CB989DC8CB1
// 0x0028 (0x0028 - 0x0000)
struct GA_DefaultPlayer_Consumable_C_Cancelled_A3A081314405D22C4EED5CB989DC8CB1 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_DefaultPlayer_Consumable_C_Cancelled_A3A081314405D22C4EED5CB989DC8CB1) == 0x000008, "Wrong alignment on GA_DefaultPlayer_Consumable_C_Cancelled_A3A081314405D22C4EED5CB989DC8CB1");
static_assert(sizeof(GA_DefaultPlayer_Consumable_C_Cancelled_A3A081314405D22C4EED5CB989DC8CB1) == 0x000028, "Wrong size on GA_DefaultPlayer_Consumable_C_Cancelled_A3A081314405D22C4EED5CB989DC8CB1");
static_assert(offsetof(GA_DefaultPlayer_Consumable_C_Cancelled_A3A081314405D22C4EED5CB989DC8CB1, TargetData) == 0x000000, "Member 'GA_DefaultPlayer_Consumable_C_Cancelled_A3A081314405D22C4EED5CB989DC8CB1::TargetData' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_Consumable_C_Cancelled_A3A081314405D22C4EED5CB989DC8CB1, ApplicationTag) == 0x000020, "Member 'GA_DefaultPlayer_Consumable_C_Cancelled_A3A081314405D22C4EED5CB989DC8CB1::ApplicationTag' has a wrong offset!");

// Function GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C.Completed_A3A081314405D22C4EED5CB989DC8CB1
// 0x0028 (0x0028 - 0x0000)
struct GA_DefaultPlayer_Consumable_C_Completed_A3A081314405D22C4EED5CB989DC8CB1 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_DefaultPlayer_Consumable_C_Completed_A3A081314405D22C4EED5CB989DC8CB1) == 0x000008, "Wrong alignment on GA_DefaultPlayer_Consumable_C_Completed_A3A081314405D22C4EED5CB989DC8CB1");
static_assert(sizeof(GA_DefaultPlayer_Consumable_C_Completed_A3A081314405D22C4EED5CB989DC8CB1) == 0x000028, "Wrong size on GA_DefaultPlayer_Consumable_C_Completed_A3A081314405D22C4EED5CB989DC8CB1");
static_assert(offsetof(GA_DefaultPlayer_Consumable_C_Completed_A3A081314405D22C4EED5CB989DC8CB1, TargetData) == 0x000000, "Member 'GA_DefaultPlayer_Consumable_C_Completed_A3A081314405D22C4EED5CB989DC8CB1::TargetData' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_Consumable_C_Completed_A3A081314405D22C4EED5CB989DC8CB1, ApplicationTag) == 0x000020, "Member 'GA_DefaultPlayer_Consumable_C_Completed_A3A081314405D22C4EED5CB989DC8CB1::ApplicationTag' has a wrong offset!");

// Function GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C.K2_ActivateAbilityFromEvent
// 0x00A8 (0x00A8 - 0x0000)
struct GA_DefaultPlayer_Consumable_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00A8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_DefaultPlayer_Consumable_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GA_DefaultPlayer_Consumable_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_DefaultPlayer_Consumable_C_K2_ActivateAbilityFromEvent) == 0x0000A8, "Wrong size on GA_DefaultPlayer_Consumable_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_DefaultPlayer_Consumable_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GA_DefaultPlayer_Consumable_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

// Function GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C.Triggered_A3A081314405D22C4EED5CB989DC8CB1
// 0x0028 (0x0028 - 0x0000)
struct GA_DefaultPlayer_Consumable_C_Triggered_A3A081314405D22C4EED5CB989DC8CB1 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData;                                        // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_DefaultPlayer_Consumable_C_Triggered_A3A081314405D22C4EED5CB989DC8CB1) == 0x000008, "Wrong alignment on GA_DefaultPlayer_Consumable_C_Triggered_A3A081314405D22C4EED5CB989DC8CB1");
static_assert(sizeof(GA_DefaultPlayer_Consumable_C_Triggered_A3A081314405D22C4EED5CB989DC8CB1) == 0x000028, "Wrong size on GA_DefaultPlayer_Consumable_C_Triggered_A3A081314405D22C4EED5CB989DC8CB1");
static_assert(offsetof(GA_DefaultPlayer_Consumable_C_Triggered_A3A081314405D22C4EED5CB989DC8CB1, TargetData) == 0x000000, "Member 'GA_DefaultPlayer_Consumable_C_Triggered_A3A081314405D22C4EED5CB989DC8CB1::TargetData' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_Consumable_C_Triggered_A3A081314405D22C4EED5CB989DC8CB1, ApplicationTag) == 0x000020, "Member 'GA_DefaultPlayer_Consumable_C_Triggered_A3A081314405D22C4EED5CB989DC8CB1::ApplicationTag' has a wrong offset!");

}

