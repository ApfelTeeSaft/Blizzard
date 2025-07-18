﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Hex_CriticalMission

#include "Basic.hpp"

#include "BP_Hex_CriticalMission_classes.hpp"
#include "BP_Hex_CriticalMission_parameters.hpp"


namespace SDK
{

// Function BP_Hex_CriticalMission.BP_Hex_CriticalMission_C.ExecuteUbergraph_BP_Hex_CriticalMission
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Hex_CriticalMission_C::ExecuteUbergraph_BP_Hex_CriticalMission(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Hex_CriticalMission_C", "ExecuteUbergraph_BP_Hex_CriticalMission");

	Params::BP_Hex_CriticalMission_C_ExecuteUbergraph_BP_Hex_CriticalMission Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Hex_CriticalMission.BP_Hex_CriticalMission_C.ActivateCriticalMission
// (BlueprintCallable, BlueprintEvent)

void ABP_Hex_CriticalMission_C::ActivateCriticalMission()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Hex_CriticalMission_C", "ActivateCriticalMission");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Hex_CriticalMission.BP_Hex_CriticalMission_C.DeactivateCriticalMission
// (BlueprintCallable, BlueprintEvent)

void ABP_Hex_CriticalMission_C::DeactivateCriticalMission()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Hex_CriticalMission_C", "DeactivateCriticalMission");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Hex_CriticalMission.BP_Hex_CriticalMission_C.Rotate__UpdateFunc
// (BlueprintEvent)

void ABP_Hex_CriticalMission_C::Rotate__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Hex_CriticalMission_C", "Rotate__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Hex_CriticalMission.BP_Hex_CriticalMission_C.Rotate__FinishedFunc
// (BlueprintEvent)

void ABP_Hex_CriticalMission_C::Rotate__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Hex_CriticalMission_C", "Rotate__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Hex_CriticalMission.BP_Hex_CriticalMission_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Hex_CriticalMission_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Hex_CriticalMission_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

