﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BasicProgressBar

#include "Basic.hpp"

#include "BasicProgressBar_classes.hpp"
#include "BasicProgressBar_parameters.hpp"


namespace SDK
{

// Function BasicProgressBar.BasicProgressBar_C.ExecuteUbergraph_BasicProgressBar
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasicProgressBar_C::ExecuteUbergraph_BasicProgressBar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasicProgressBar_C", "ExecuteUbergraph_BasicProgressBar");

	Params::BasicProgressBar_C_ExecuteUbergraph_BasicProgressBar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BasicProgressBar.BasicProgressBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBasicProgressBar_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasicProgressBar_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BasicProgressBar.BasicProgressBar_C.Toggle Timer for Secondary Bar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnabled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   TimerDuration                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    LoopTimer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBasicProgressBar_C::Toggle_Timer_for_Secondary_Bar(bool IsEnabled, float TimerDuration, bool LoopTimer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasicProgressBar_C", "Toggle Timer for Secondary Bar");

	Params::BasicProgressBar_C_Toggle_Timer_for_Secondary_Bar Parms{};

	Parms.IsEnabled = IsEnabled;
	Parms.TimerDuration = TimerDuration;
	Parms.LoopTimer = LoopTimer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BasicProgressBar.BasicProgressBar_C.UpdateHealthBar
// (Public, BlueprintCallable, BlueprintEvent)

void UBasicProgressBar_C::UpdateHealthBar()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasicProgressBar_C", "UpdateHealthBar");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BasicProgressBar.BasicProgressBar_C.SetPrimaryBarValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasicProgressBar_C::SetPrimaryBarValue(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasicProgressBar_C", "SetPrimaryBarValue");

	Params::BasicProgressBar_C_SetPrimaryBarValue Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BasicProgressBar.BasicProgressBar_C.DecrementPrimaryByPercentage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   NewHealthPercentage                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasicProgressBar_C::DecrementPrimaryByPercentage(float NewHealthPercentage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasicProgressBar_C", "DecrementPrimaryByPercentage");

	Params::BasicProgressBar_C_DecrementPrimaryByPercentage Parms{};

	Parms.NewHealthPercentage = NewHealthPercentage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BasicProgressBar.BasicProgressBar_C.SetSecondaryBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasicProgressBar_C::SetSecondaryBar(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasicProgressBar_C", "SetSecondaryBar");

	Params::BasicProgressBar_C_SetSecondaryBar Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}

}

