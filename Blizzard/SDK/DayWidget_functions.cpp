﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DayWidget

#include "Basic.hpp"

#include "DayWidget_classes.hpp"
#include "DayWidget_parameters.hpp"


namespace SDK
{

// Function DayWidget.DayWidget_C.ExecuteUbergraph_DayWidget
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDayWidget_C::ExecuteUbergraph_DayWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DayWidget_C", "ExecuteUbergraph_DayWidget");

	Params::DayWidget_C_ExecuteUbergraph_DayWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DayWidget.DayWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDayWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DayWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DayWidget.DayWidget_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UDayWidget_C::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DayWidget_C", "Update");

	UObject::ProcessEvent(Func, nullptr);
}

}

