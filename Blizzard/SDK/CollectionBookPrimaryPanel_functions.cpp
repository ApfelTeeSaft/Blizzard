﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CollectionBookPrimaryPanel

#include "Basic.hpp"

#include "CollectionBookPrimaryPanel_classes.hpp"
#include "CollectionBookPrimaryPanel_parameters.hpp"


namespace SDK
{

// Function CollectionBookPrimaryPanel.CollectionBookPrimaryPanel_C.ExecuteUbergraph_CollectionBookPrimaryPanel
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookPrimaryPanel_C::ExecuteUbergraph_CollectionBookPrimaryPanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CollectionBookPrimaryPanel_C", "ExecuteUbergraph_CollectionBookPrimaryPanel");

	Params::CollectionBookPrimaryPanel_C_ExecuteUbergraph_CollectionBookPrimaryPanel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CollectionBookPrimaryPanel.CollectionBookPrimaryPanel_C.HandleDisplayInfoBox
// (BlueprintCallable, BlueprintEvent)

void UCollectionBookPrimaryPanel_C::HandleDisplayInfoBox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CollectionBookPrimaryPanel_C", "HandleDisplayInfoBox");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CollectionBookPrimaryPanel.CollectionBookPrimaryPanel_C.OnSummonInfoPanelExecuted
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   bPassThrough                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollectionBookPrimaryPanel_C::OnSummonInfoPanelExecuted(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CollectionBookPrimaryPanel_C", "OnSummonInfoPanelExecuted");

	Params::CollectionBookPrimaryPanel_C_OnSummonInfoPanelExecuted Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;
}

}

