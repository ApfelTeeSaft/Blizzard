﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MgmtTabsScreen

#include "Basic.hpp"

#include "MgmtTabsScreen_classes.hpp"
#include "MgmtTabsScreen_parameters.hpp"


namespace SDK
{

// Function MgmtTabsScreen.MgmtTabsScreen_C.ExecuteUbergraph_MgmtTabsScreen
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMgmtTabsScreen_C::ExecuteUbergraph_MgmtTabsScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MgmtTabsScreen_C", "ExecuteUbergraph_MgmtTabsScreen");

	Params::MgmtTabsScreen_C_ExecuteUbergraph_MgmtTabsScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MgmtTabsScreen.MgmtTabsScreen_C.HandleShowObjectives
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortUIFeature                          ChangedFeature                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFortUIFeatureState                     NewState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFortUIFeatureStateReason               StateReason                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMgmtTabsScreen_C::HandleShowObjectives(EFortUIFeature ChangedFeature, EFortUIFeatureState NewState, EFortUIFeatureStateReason StateReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MgmtTabsScreen_C", "HandleShowObjectives");

	Params::MgmtTabsScreen_C_HandleShowObjectives Parms{};

	Parms.ChangedFeature = ChangedFeature;
	Parms.NewState = NewState;
	Parms.StateReason = StateReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MgmtTabsScreen.MgmtTabsScreen_C.HandleShowQuests
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortUIFeature                          ChangedFeature                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFortUIFeatureState                     NewState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFortUIFeatureStateReason               StateReason                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMgmtTabsScreen_C::HandleShowQuests(EFortUIFeature ChangedFeature, EFortUIFeatureState NewState, EFortUIFeatureStateReason StateReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MgmtTabsScreen_C", "HandleShowQuests");

	Params::MgmtTabsScreen_C_HandleShowQuests Parms{};

	Parms.ChangedFeature = ChangedFeature;
	Parms.NewState = NewState;
	Parms.StateReason = StateReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MgmtTabsScreen.MgmtTabsScreen_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMgmtTabsScreen_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MgmtTabsScreen_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MgmtTabsScreen.MgmtTabsScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMgmtTabsScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MgmtTabsScreen_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MgmtTabsScreen.MgmtTabsScreen_C.BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                             TabId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*                    TabButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMgmtTabsScreen_C::BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MgmtTabsScreen_C", "BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature");

	Params::MgmtTabsScreen_C_BndEvt__TopTabList_K2Node_ComponentBoundEvent_0_OnTabButtonCreated__DelegateSignature Parms{};

	Parms.TabId = TabId;
	Parms.TabButton = TabButton;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MgmtTabsScreen.MgmtTabsScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UMgmtTabsScreen_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MgmtTabsScreen_C", "OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MgmtTabsScreen.MgmtTabsScreen_C.HandleCursorModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnabled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                             ActionName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      CursorModeContentCustomWidget                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMgmtTabsScreen_C::HandleCursorModeChanged(bool IsEnabled, class FName ActionName, class UUserWidget* CursorModeContentCustomWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MgmtTabsScreen_C", "HandleCursorModeChanged");

	Params::MgmtTabsScreen_C_HandleCursorModeChanged Parms{};

	Parms.IsEnabled = IsEnabled;
	Parms.ActionName = ActionName;
	Parms.CursorModeContentCustomWidget = CursorModeContentCustomWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MgmtTabsScreen.MgmtTabsScreen_C.HandleDamageReceived
// (Public, BlueprintCallable, BlueprintEvent)

void UMgmtTabsScreen_C::HandleDamageReceived()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MgmtTabsScreen_C", "HandleDamageReceived");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MgmtTabsScreen.MgmtTabsScreen_C.HandleMgmtMenuTabChangeRequested
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             TabName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMgmtTabsScreen_C::HandleMgmtMenuTabChangeRequested(class FName TabName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MgmtTabsScreen_C", "HandleMgmtMenuTabChangeRequested");

	Params::MgmtTabsScreen_C_HandleMgmtMenuTabChangeRequested Parms{};

	Parms.TabName = TabName;

	UObject::ProcessEvent(Func, &Parms);
}

}

