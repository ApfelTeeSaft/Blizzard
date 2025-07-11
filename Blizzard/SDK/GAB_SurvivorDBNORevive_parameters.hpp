﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAB_SurvivorDBNORevive

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GAB_SurvivorDBNORevive.GAB_SurvivorDBNORevive_C.ExecuteUbergraph_GAB_SurvivorDBNORevive
// 0x0130 (0x0130 - 0x0000)
struct GAB_SurvivorDBNORevive_C_ExecuteUbergraph_GAB_SurvivorDBNORevive final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate1;             // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate12;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate123;           // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_bWasCancelled;                        // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52[0x6];                                       // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0058(0x00A8)(ConstParm)
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue1;           // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_PlayMontageAndWait*        CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue12;          // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortAIPawn*                            K2Node_DynamicCast_AsFort_AIPawn;                  // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_122[0x6];                                      // 0x0122(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPawn*                              CallFunc_GetActivatingPawn_ReturnValue123;         // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GAB_SurvivorDBNORevive_C_ExecuteUbergraph_GAB_SurvivorDBNORevive) == 0x000008, "Wrong alignment on GAB_SurvivorDBNORevive_C_ExecuteUbergraph_GAB_SurvivorDBNORevive");
static_assert(sizeof(GAB_SurvivorDBNORevive_C_ExecuteUbergraph_GAB_SurvivorDBNORevive) == 0x000130, "Wrong size on GAB_SurvivorDBNORevive_C_ExecuteUbergraph_GAB_SurvivorDBNORevive");
static_assert(offsetof(GAB_SurvivorDBNORevive_C_ExecuteUbergraph_GAB_SurvivorDBNORevive, EntryPoint) == 0x000000, "Member 'GAB_SurvivorDBNORevive_C_ExecuteUbergraph_GAB_SurvivorDBNORevive::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAB_SurvivorDBNORevive_C_ExecuteUbergraph_GAB_SurvivorDBNORevive, CallFunc_GetActivatingPawn_ReturnValue) == 0x000008, "Member 'GAB_SurvivorDBNORevive_C_ExecuteUbergraph_GAB_SurvivorDBNORevive::CallFunc_GetActivatingPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurvivorDBNORevive_C_ExecuteUbergraph_GAB_SurvivorDBNORevive, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'GAB_SurvivorDBNORevive_C_ExecuteUbergraph_GAB_SurvivorDBNORevive::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GAB_SurvivorDBNORevive_C_ExecuteUbergraph_GAB_SurvivorDBNORevive, K2Node_CreateDelegate_OutputDelegate1) == 0x000020, "Member 'GAB_SurvivorDBNORevive_C_ExecuteUbergraph_GAB_SurvivorDBNORevive::K2Node_CreateDelegate_OutputDelegate1' has a wrong offset!");
static_assert(offsetof(GAB_SurvivorDBNORevive_C_ExecuteUbergraph_GAB_SurvivorDBNORevive, K2Node_CreateDelegate_OutputDelegate12) == 0x000030, "Member 'GAB_SurvivorDBNORevive_C_ExecuteUbergraph_GAB_SurvivorDBNORevive::K2Node_CreateDelegate_OutputDelegate12' has a wrong offset!");
static_assert(offsetof(GAB_SurvivorDBNORevive_C_ExecuteUbergraph_GAB_SurvivorDBNORevive, K2Node_CreateDelegate_OutputDelegate123) == 0x000040, "Member 'GAB_SurvivorDBNORevive_C_ExecuteUbergraph_GAB_SurvivorDBNORevive::K2Node_CreateDelegate_OutputDelegate123' has a wrong offset!");
static_assert(offsetof(GAB_SurvivorDBNORevive_C_ExecuteUbergraph_GAB_SurvivorDBNORevive, K2Node_Event_bWasCancelled) == 0x000050, "Member 'GAB_SurvivorDBNORevive_C_ExecuteUbergraph_GAB_SurvivorDBNORevive::K2Node_Event_bWasCancelled' has a wrong offset!");
static_assert(offsetof(GAB_SurvivorDBNORevive_C_ExecuteUbergraph_GAB_SurvivorDBNORevive, CallFunc_K2_CommitAbility_ReturnValue) == 0x000051, "Member 'GAB_SurvivorDBNORevive_C_ExecuteUbergraph_GAB_SurvivorDBNORevive::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurvivorDBNORevive_C_ExecuteUbergraph_GAB_SurvivorDBNORevive, K2Node_Event_EventData) == 0x000058, "Member 'GAB_SurvivorDBNORevive_C_ExecuteUbergraph_GAB_SurvivorDBNORevive::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GAB_SurvivorDBNORevive_C_ExecuteUbergraph_GAB_SurvivorDBNORevive, CallFunc_GetActivatingPawn_ReturnValue1) == 0x000100, "Member 'GAB_SurvivorDBNORevive_C_ExecuteUbergraph_GAB_SurvivorDBNORevive::CallFunc_GetActivatingPawn_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GAB_SurvivorDBNORevive_C_ExecuteUbergraph_GAB_SurvivorDBNORevive, CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue) == 0x000108, "Member 'GAB_SurvivorDBNORevive_C_ExecuteUbergraph_GAB_SurvivorDBNORevive::CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurvivorDBNORevive_C_ExecuteUbergraph_GAB_SurvivorDBNORevive, CallFunc_GetActivatingPawn_ReturnValue12) == 0x000110, "Member 'GAB_SurvivorDBNORevive_C_ExecuteUbergraph_GAB_SurvivorDBNORevive::CallFunc_GetActivatingPawn_ReturnValue12' has a wrong offset!");
static_assert(offsetof(GAB_SurvivorDBNORevive_C_ExecuteUbergraph_GAB_SurvivorDBNORevive, K2Node_DynamicCast_AsFort_AIPawn) == 0x000118, "Member 'GAB_SurvivorDBNORevive_C_ExecuteUbergraph_GAB_SurvivorDBNORevive::K2Node_DynamicCast_AsFort_AIPawn' has a wrong offset!");
static_assert(offsetof(GAB_SurvivorDBNORevive_C_ExecuteUbergraph_GAB_SurvivorDBNORevive, K2Node_DynamicCast_bSuccess) == 0x000120, "Member 'GAB_SurvivorDBNORevive_C_ExecuteUbergraph_GAB_SurvivorDBNORevive::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GAB_SurvivorDBNORevive_C_ExecuteUbergraph_GAB_SurvivorDBNORevive, CallFunc_IsValid_ReturnValue) == 0x000121, "Member 'GAB_SurvivorDBNORevive_C_ExecuteUbergraph_GAB_SurvivorDBNORevive::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GAB_SurvivorDBNORevive_C_ExecuteUbergraph_GAB_SurvivorDBNORevive, CallFunc_GetActivatingPawn_ReturnValue123) == 0x000128, "Member 'GAB_SurvivorDBNORevive_C_ExecuteUbergraph_GAB_SurvivorDBNORevive::CallFunc_GetActivatingPawn_ReturnValue123' has a wrong offset!");

// Function GAB_SurvivorDBNORevive.GAB_SurvivorDBNORevive_C.K2_ActivateAbilityFromEvent
// 0x00A8 (0x00A8 - 0x0000)
struct GAB_SurvivorDBNORevive_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00A8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GAB_SurvivorDBNORevive_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GAB_SurvivorDBNORevive_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GAB_SurvivorDBNORevive_C_K2_ActivateAbilityFromEvent) == 0x0000A8, "Wrong size on GAB_SurvivorDBNORevive_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GAB_SurvivorDBNORevive_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GAB_SurvivorDBNORevive_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

// Function GAB_SurvivorDBNORevive.GAB_SurvivorDBNORevive_C.K2_OnEndAbility
// 0x0001 (0x0001 - 0x0000)
struct GAB_SurvivorDBNORevive_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GAB_SurvivorDBNORevive_C_K2_OnEndAbility) == 0x000001, "Wrong alignment on GAB_SurvivorDBNORevive_C_K2_OnEndAbility");
static_assert(sizeof(GAB_SurvivorDBNORevive_C_K2_OnEndAbility) == 0x000001, "Wrong size on GAB_SurvivorDBNORevive_C_K2_OnEndAbility");
static_assert(offsetof(GAB_SurvivorDBNORevive_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GAB_SurvivorDBNORevive_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");

}

