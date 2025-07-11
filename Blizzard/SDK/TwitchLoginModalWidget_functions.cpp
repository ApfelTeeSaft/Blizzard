﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TwitchLoginModalWidget

#include "Basic.hpp"

#include "TwitchLoginModalWidget_classes.hpp"
#include "TwitchLoginModalWidget_parameters.hpp"


namespace SDK
{

// Function TwitchLoginModalWidget.TwitchLoginModalWidget_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_72_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTwitchLoginModalWidget_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_72_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TwitchLoginModalWidget_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_72_CommonButtonClicked__DelegateSignature");

	Params::TwitchLoginModalWidget_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_72_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TwitchLoginModalWidget.TwitchLoginModalWidget_C.ExecuteUbergraph_TwitchLoginModalWidget
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTwitchLoginModalWidget_C::ExecuteUbergraph_TwitchLoginModalWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TwitchLoginModalWidget_C", "ExecuteUbergraph_TwitchLoginModalWidget");

	Params::TwitchLoginModalWidget_C_ExecuteUbergraph_TwitchLoginModalWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

