﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaChallengeBundle_UpsellButton

#include "Basic.hpp"

#include "AthenaChallengeBundle_UpsellButton_classes.hpp"
#include "AthenaChallengeBundle_UpsellButton_parameters.hpp"


namespace SDK
{

// Function AthenaChallengeBundle_UpsellButton.AthenaChallengeBundle_UpsellButton_C.ExecuteUbergraph_AthenaChallengeBundle_UpsellButton
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaChallengeBundle_UpsellButton_C::ExecuteUbergraph_AthenaChallengeBundle_UpsellButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeBundle_UpsellButton_C", "ExecuteUbergraph_AthenaChallengeBundle_UpsellButton");

	Params::AthenaChallengeBundle_UpsellButton_C_ExecuteUbergraph_AthenaChallengeBundle_UpsellButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaChallengeBundle_UpsellButton.AthenaChallengeBundle_UpsellButton_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_56_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaChallengeBundle_UpsellButton_C::BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_56_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeBundle_UpsellButton_C", "BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_56_CommonButtonClicked__DelegateSignature");

	Params::AthenaChallengeBundle_UpsellButton_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_56_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaChallengeBundle_UpsellButton.AthenaChallengeBundle_UpsellButton_C.SetChallengeBundle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortChallengeBundleItemDefinition*InChallengeItem                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaChallengeBundle_UpsellButton_C::SetChallengeBundle(class UFortChallengeBundleItemDefinition* InChallengeItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaChallengeBundle_UpsellButton_C", "SetChallengeBundle");

	Params::AthenaChallengeBundle_UpsellButton_C_SetChallengeBundle Parms{};

	Parms.InChallengeItem = InChallengeItem;

	UObject::ProcessEvent(Func, &Parms);
}

}

