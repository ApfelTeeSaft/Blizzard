﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_DefaultPlayer_BuildingCreated

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_DefaultPlayer_BuildingCreated.GA_DefaultPlayer_BuildingCreated_C.ExecuteUbergraph_GA_DefaultPlayer_BuildingCreated
// 0x00E0 (0x00E0 - 0x0000)
struct GA_DefaultPlayer_BuildingCreated_C_ExecuteUbergraph_GA_DefaultPlayer_BuildingCreated final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     K2Node_Event_EventData;                            // 0x0008(0x00A8)(ConstParm)
	struct FGameplayAbilityTargetDataHandle       CallFunc_AbilityTargetDataFromActor_ReturnValue;   // 0x00B0(0x0020)()
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_ApplyGameplayEffectContainer_ReturnValue; // 0x00D0(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
};
static_assert(alignof(GA_DefaultPlayer_BuildingCreated_C_ExecuteUbergraph_GA_DefaultPlayer_BuildingCreated) == 0x000008, "Wrong alignment on GA_DefaultPlayer_BuildingCreated_C_ExecuteUbergraph_GA_DefaultPlayer_BuildingCreated");
static_assert(sizeof(GA_DefaultPlayer_BuildingCreated_C_ExecuteUbergraph_GA_DefaultPlayer_BuildingCreated) == 0x0000E0, "Wrong size on GA_DefaultPlayer_BuildingCreated_C_ExecuteUbergraph_GA_DefaultPlayer_BuildingCreated");
static_assert(offsetof(GA_DefaultPlayer_BuildingCreated_C_ExecuteUbergraph_GA_DefaultPlayer_BuildingCreated, EntryPoint) == 0x000000, "Member 'GA_DefaultPlayer_BuildingCreated_C_ExecuteUbergraph_GA_DefaultPlayer_BuildingCreated::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_BuildingCreated_C_ExecuteUbergraph_GA_DefaultPlayer_BuildingCreated, K2Node_Event_EventData) == 0x000008, "Member 'GA_DefaultPlayer_BuildingCreated_C_ExecuteUbergraph_GA_DefaultPlayer_BuildingCreated::K2Node_Event_EventData' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_BuildingCreated_C_ExecuteUbergraph_GA_DefaultPlayer_BuildingCreated, CallFunc_AbilityTargetDataFromActor_ReturnValue) == 0x0000B0, "Member 'GA_DefaultPlayer_BuildingCreated_C_ExecuteUbergraph_GA_DefaultPlayer_BuildingCreated::CallFunc_AbilityTargetDataFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_DefaultPlayer_BuildingCreated_C_ExecuteUbergraph_GA_DefaultPlayer_BuildingCreated, CallFunc_ApplyGameplayEffectContainer_ReturnValue) == 0x0000D0, "Member 'GA_DefaultPlayer_BuildingCreated_C_ExecuteUbergraph_GA_DefaultPlayer_BuildingCreated::CallFunc_ApplyGameplayEffectContainer_ReturnValue' has a wrong offset!");

// Function GA_DefaultPlayer_BuildingCreated.GA_DefaultPlayer_BuildingCreated_C.K2_ActivateAbilityFromEvent
// 0x00A8 (0x00A8 - 0x0000)
struct GA_DefaultPlayer_BuildingCreated_C_K2_ActivateAbilityFromEvent final
{
public:
	struct FGameplayEventData                     EventData;                                         // 0x0000(0x00A8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(GA_DefaultPlayer_BuildingCreated_C_K2_ActivateAbilityFromEvent) == 0x000008, "Wrong alignment on GA_DefaultPlayer_BuildingCreated_C_K2_ActivateAbilityFromEvent");
static_assert(sizeof(GA_DefaultPlayer_BuildingCreated_C_K2_ActivateAbilityFromEvent) == 0x0000A8, "Wrong size on GA_DefaultPlayer_BuildingCreated_C_K2_ActivateAbilityFromEvent");
static_assert(offsetof(GA_DefaultPlayer_BuildingCreated_C_K2_ActivateAbilityFromEvent, EventData) == 0x000000, "Member 'GA_DefaultPlayer_BuildingCreated_C_K2_ActivateAbilityFromEvent::EventData' has a wrong offset!");

}

