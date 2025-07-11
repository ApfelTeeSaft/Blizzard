﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Hex_OutpostCC

#include "Basic.hpp"

#include "BP_Hex_OutpostCC_classes.hpp"
#include "BP_Hex_OutpostCC_parameters.hpp"


namespace SDK
{

// Function BP_Hex_OutpostCC.BP_Hex_OutpostCC_C.ExecuteUbergraph_BP_Hex_OutpostCC
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Hex_OutpostCC_C::ExecuteUbergraph_BP_Hex_OutpostCC(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Hex_OutpostCC_C", "ExecuteUbergraph_BP_Hex_OutpostCC");

	Params::BP_Hex_OutpostCC_C_ExecuteUbergraph_BP_Hex_OutpostCC Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Hex_OutpostCC.BP_Hex_OutpostCC_C.ActivateOutpost
// (BlueprintCallable, BlueprintEvent)

void ABP_Hex_OutpostCC_C::ActivateOutpost()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Hex_OutpostCC_C", "ActivateOutpost");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Hex_OutpostCC.BP_Hex_OutpostCC_C.HandleOnPlayerInfoChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FUniqueNetIdRepl&          UniqueId                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void ABP_Hex_OutpostCC_C::HandleOnPlayerInfoChanged(const struct FUniqueNetIdRepl& UniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Hex_OutpostCC_C", "HandleOnPlayerInfoChanged");

	Params::BP_Hex_OutpostCC_C_HandleOnPlayerInfoChanged Parms{};

	Parms.UniqueId = std::move(UniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Hex_OutpostCC.BP_Hex_OutpostCC_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Hex_OutpostCC_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Hex_OutpostCC_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Hex_OutpostCC.BP_Hex_OutpostCC_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Hex_OutpostCC_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Hex_OutpostCC_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

