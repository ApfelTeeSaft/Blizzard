﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LobbyGadgetButton

#include "Basic.hpp"

#include "LobbyGadgetButton_classes.hpp"
#include "LobbyGadgetButton_parameters.hpp"


namespace SDK
{

// Function LobbyGadgetButton.LobbyGadgetButton_C.ExecuteUbergraph_LobbyGadgetButton
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULobbyGadgetButton_C::ExecuteUbergraph_LobbyGadgetButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyGadgetButton_C", "ExecuteUbergraph_LobbyGadgetButton");

	Params::LobbyGadgetButton_C_ExecuteUbergraph_LobbyGadgetButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LobbyGadgetButton.LobbyGadgetButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_96_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULobbyGadgetButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_96_CommonButtonClicked__DelegateSignature(class UCommonButton* Button_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyGadgetButton_C", "BndEvt__Button_K2Node_ComponentBoundEvent_96_CommonButtonClicked__DelegateSignature");

	Params::LobbyGadgetButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_96_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button_0 = Button_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LobbyGadgetButton.LobbyGadgetButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULobbyGadgetButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature(class UCommonButton* Button_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyGadgetButton_C", "BndEvt__Button_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature");

	Params::LobbyGadgetButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button_0 = Button_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LobbyGadgetButton.LobbyGadgetButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobbyGadgetButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyGadgetButton_C", "PreConstruct");

	Params::LobbyGadgetButton_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LobbyGadgetButton.LobbyGadgetButton_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortWorldItem*                   WorldItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULobbyGadgetButton_C::Refresh(class UFortWorldItem* WorldItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyGadgetButton_C", "Refresh");

	Params::LobbyGadgetButton_C_Refresh Parms{};

	Parms.WorldItem = WorldItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LobbyGadgetButton.LobbyGadgetButton_C.GetGadgetItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortWorldItem**                  GadgetItem_0                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULobbyGadgetButton_C::GetGadgetItem(class UFortWorldItem** GadgetItem_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyGadgetButton_C", "GetGadgetItem");

	Params::LobbyGadgetButton_C_GetGadgetItem Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (GadgetItem_0 != nullptr)
		*GadgetItem_0 = Parms.GadgetItem_0;
}


// Function LobbyGadgetButton.LobbyGadgetButton_C.SetLocked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bLocked_0                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobbyGadgetButton_C::SetLocked(bool bLocked_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyGadgetButton_C", "SetLocked");

	Params::LobbyGadgetButton_C_SetLocked Parms{};

	Parms.bLocked_0 = bLocked_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LobbyGadgetButton.LobbyGadgetButton_C.GetLocked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                                   bLocked_0                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobbyGadgetButton_C::GetLocked(bool* bLocked_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyGadgetButton_C", "GetLocked");

	Params::LobbyGadgetButton_C_GetLocked Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bLocked_0 != nullptr)
		*bLocked_0 = Parms.bLocked_0;
}


// Function LobbyGadgetButton.LobbyGadgetButton_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)

void ULobbyGadgetButton_C::Focus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LobbyGadgetButton_C", "Focus");

	UObject::ProcessEvent(Func, nullptr);
}

}

