﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NewsEntry

#include "Basic.hpp"

#include "NewsEntry_classes.hpp"
#include "NewsEntry_parameters.hpp"


namespace SDK
{

// Function NewsEntry.NewsEntry_C.BndEvt__ButtonEntry_K2Node_ComponentBoundEvent_201_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewsEntry_C::BndEvt__ButtonEntry_K2Node_ComponentBoundEvent_201_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewsEntry_C", "BndEvt__ButtonEntry_K2Node_ComponentBoundEvent_201_CommonButtonClicked__DelegateSignature");

	Params::NewsEntry_C_BndEvt__ButtonEntry_K2Node_ComponentBoundEvent_201_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NewsEntry.NewsEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNewsEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewsEntry_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewsEntry.NewsEntry_C.ExecuteUbergraph_NewsEntry
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewsEntry_C::ExecuteUbergraph_NewsEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewsEntry_C", "ExecuteUbergraph_NewsEntry");

	Params::NewsEntry_C_ExecuteUbergraph_NewsEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NewsEntry.NewsEntry_C.SetFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UNewsEntry_C::SetFocus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewsEntry_C", "SetFocus");

	UObject::ProcessEvent(Func, nullptr);
}

}

