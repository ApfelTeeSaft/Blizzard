﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAT_GenericActiveAbilityNoCommit

#include "Basic.hpp"

#include "GAT_GenericActiveAbilityNoCommit_classes.hpp"
#include "GAT_GenericActiveAbilityNoCommit_parameters.hpp"


namespace SDK
{

// Function GAT_GenericActiveAbilityNoCommit.GAT_GenericActiveAbilityNoCommit_C.ExecuteUbergraph_GAT_GenericActiveAbilityNoCommit
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAT_GenericActiveAbilityNoCommit_C::ExecuteUbergraph_GAT_GenericActiveAbilityNoCommit(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_GenericActiveAbilityNoCommit_C", "ExecuteUbergraph_GAT_GenericActiveAbilityNoCommit");

	Params::GAT_GenericActiveAbilityNoCommit_C_ExecuteUbergraph_GAT_GenericActiveAbilityNoCommit Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAT_GenericActiveAbilityNoCommit.GAT_GenericActiveAbilityNoCommit_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAT_GenericActiveAbilityNoCommit_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_GenericActiveAbilityNoCommit_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

}

