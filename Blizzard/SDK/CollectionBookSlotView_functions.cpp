﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CollectionBookSlotView

#include "Basic.hpp"

#include "CollectionBookSlotView_classes.hpp"
#include "CollectionBookSlotView_parameters.hpp"


namespace SDK
{

// Function CollectionBookSlotView.CollectionBookSlotView_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCollectionBookSlotView_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CollectionBookSlotView_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CollectionBookSlotView.CollectionBookSlotView_C.ExecuteUbergraph_CollectionBookSlotView
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookSlotView_C::ExecuteUbergraph_CollectionBookSlotView(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CollectionBookSlotView_C", "ExecuteUbergraph_CollectionBookSlotView");

	Params::CollectionBookSlotView_C_ExecuteUbergraph_CollectionBookSlotView Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

