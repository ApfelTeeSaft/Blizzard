﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StoreCardReveal_Parent

#include "Basic.hpp"

#include "StoreCardReveal_Parent_classes.hpp"
#include "StoreCardReveal_Parent_parameters.hpp"


namespace SDK
{

// Function StoreCardReveal_Parent.StoreCardReveal_Parent_C.ExecuteUbergraph_StoreCardReveal_Parent
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AStoreCardReveal_Parent_C::ExecuteUbergraph_StoreCardReveal_Parent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreCardReveal_Parent_C", "ExecuteUbergraph_StoreCardReveal_Parent");

	Params::StoreCardReveal_Parent_C_ExecuteUbergraph_StoreCardReveal_Parent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StoreCardReveal_Parent.StoreCardReveal_Parent_C.InitiatePinata
// (BlueprintCallable, BlueprintEvent)

void AStoreCardReveal_Parent_C::InitiatePinata()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreCardReveal_Parent_C", "InitiatePinata");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StoreCardReveal_Parent.StoreCardReveal_Parent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AStoreCardReveal_Parent_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StoreCardReveal_Parent_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

