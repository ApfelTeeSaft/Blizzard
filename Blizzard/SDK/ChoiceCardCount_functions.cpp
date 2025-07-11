﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChoiceCardCount

#include "Basic.hpp"

#include "ChoiceCardCount_classes.hpp"
#include "ChoiceCardCount_parameters.hpp"


namespace SDK
{

// Function ChoiceCardCount.ChoiceCardCount_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InventoryCount                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChoiceCardCount_C::UpdateText(int32 InventoryCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChoiceCardCount_C", "UpdateText");

	Params::ChoiceCardCount_C_UpdateText Parms{};

	Parms.InventoryCount = InventoryCount;

	UObject::ProcessEvent(Func, &Parms);
}

}

