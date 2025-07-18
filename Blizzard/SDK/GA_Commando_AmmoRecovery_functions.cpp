﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Commando_AmmoRecovery

#include "Basic.hpp"

#include "GA_Commando_AmmoRecovery_classes.hpp"
#include "GA_Commando_AmmoRecovery_parameters.hpp"


namespace SDK
{

// Function GA_Commando_AmmoRecovery.GA_Commando_AmmoRecovery_C.ExecuteUbergraph_GA_Commando_AmmoRecovery
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Commando_AmmoRecovery_C::ExecuteUbergraph_GA_Commando_AmmoRecovery(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Commando_AmmoRecovery_C", "ExecuteUbergraph_GA_Commando_AmmoRecovery");

	Params::GA_Commando_AmmoRecovery_C_ExecuteUbergraph_GA_Commando_AmmoRecovery Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Commando_AmmoRecovery.GA_Commando_AmmoRecovery_C.SetupAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*          AbilitySystem                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Commando_AmmoRecovery_C::SetupAbility(class UAbilitySystemComponent* AbilitySystem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Commando_AmmoRecovery_C", "SetupAbility");

	Params::GA_Commando_AmmoRecovery_C_SetupAbility Parms{};

	Parms.AbilitySystem = AbilitySystem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Commando_AmmoRecovery.GA_Commando_AmmoRecovery_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// const struct FGameplayEventData&        EventData_0                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Commando_AmmoRecovery_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Commando_AmmoRecovery_C", "K2_ActivateAbilityFromEvent");

	Params::GA_Commando_AmmoRecovery_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData_0 = std::move(EventData_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Commando_AmmoRecovery.GA_Commando_AmmoRecovery_C.K2_ShouldAbilityRespondToEvent
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// const struct FGameplayAbilityActorInfo& ActorInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// const struct FGameplayEventData&        Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UGA_Commando_AmmoRecovery_C::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Commando_AmmoRecovery_C", "K2_ShouldAbilityRespondToEvent");

	Params::GA_Commando_AmmoRecovery_C_K2_ShouldAbilityRespondToEvent Parms{};

	Parms.ActorInfo = std::move(ActorInfo);
	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

