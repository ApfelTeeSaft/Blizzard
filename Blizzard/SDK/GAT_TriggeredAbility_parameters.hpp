﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAT_TriggeredAbility

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GAT_TriggeredAbility.GAT_TriggeredAbility_C.ExecuteUbergraph_GAT_TriggeredAbility
// 0x00B0 (0x00B0 - 0x0000)
struct GAT_TriggeredAbility_C_ExecuteUbergraph_GAT_TriggeredAbility final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0008(0x00A8)(ConstParm)
};
static_assert(alignof(GAT_TriggeredAbility_C_ExecuteUbergraph_GAT_TriggeredAbility) == 0x000008, "Wrong alignment on GAT_TriggeredAbility_C_ExecuteUbergraph_GAT_TriggeredAbility");
static_assert(sizeof(GAT_TriggeredAbility_C_ExecuteUbergraph_GAT_TriggeredAbility) == 0x0000B0, "Wrong size on GAT_TriggeredAbility_C_ExecuteUbergraph_GAT_TriggeredAbility");
static_assert(offsetof(GAT_TriggeredAbility_C_ExecuteUbergraph_GAT_TriggeredAbility, EntryPoint) == 0x000000, "Member 'GAT_TriggeredAbility_C_ExecuteUbergraph_GAT_TriggeredAbility::EntryPoint' has a wrong offset!");
static_assert(offsetof(GAT_TriggeredAbility_C_ExecuteUbergraph_GAT_TriggeredAbility, K2Node_Event_EventData) == 0x000008, "Member 'GAT_TriggeredAbility_C_ExecuteUbergraph_GAT_TriggeredAbility::K2Node_Event_EventData' has a wrong offset!");

// Function GAT_TriggeredAbility.GAT_TriggeredAbility_C.K2_ActivateAbilityFromEvent
// 0x00A8 (0x00A8 - 0x0000)
struct GAT_TriggeredAbility_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00A8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GAT_TriggeredAbility_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GAT_TriggeredAbility_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GAT_TriggeredAbility_C_K2_ActivateAbilityFromEvent) == 0x0000A8, "Wrong size on GAT_TriggeredAbility_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GAT_TriggeredAbility_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GAT_TriggeredAbility_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

}

