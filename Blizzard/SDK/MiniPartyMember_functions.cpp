﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MiniPartyMember

#include "Basic.hpp"

#include "MiniPartyMember_classes.hpp"
#include "MiniPartyMember_parameters.hpp"


namespace SDK
{

// Function MiniPartyMember.MiniPartyMember_C.ExecuteUbergraph_MiniPartyMember
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniPartyMember_C::ExecuteUbergraph_MiniPartyMember(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniPartyMember_C", "ExecuteUbergraph_MiniPartyMember");

	Params::MiniPartyMember_C_ExecuteUbergraph_MiniPartyMember Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniPartyMember.MiniPartyMember_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMiniPartyMember_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniPartyMember_C", "PreConstruct");

	Params::MiniPartyMember_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniPartyMember.MiniPartyMember_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniPartyMember_C::BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniPartyMember_C", "BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature");

	Params::MiniPartyMember_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_55_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniPartyMember.MiniPartyMember_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniPartyMember_C::BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniPartyMember_C", "BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature");

	Params::MiniPartyMember_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniPartyMember.MiniPartyMember_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMiniPartyMember_C::BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniPartyMember_C", "BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature");

	Params::MiniPartyMember_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniPartyMember.MiniPartyMember_C.OnPlayerInfoChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// const struct FFortTeamMemberInfo&       NewInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UMiniPartyMember_C::OnPlayerInfoChanged(const struct FFortTeamMemberInfo& NewInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniPartyMember_C", "OnPlayerInfoChanged");

	Params::MiniPartyMember_C_OnPlayerInfoChanged Parms{};

	Parms.NewInfo = std::move(NewInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MiniPartyMember.MiniPartyMember_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMiniPartyMember_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniPartyMember_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MiniPartyMember.MiniPartyMember_C.ShowConnecting
// (Public, BlueprintCallable, BlueprintEvent)

void UMiniPartyMember_C::ShowConnecting()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniPartyMember_C", "ShowConnecting");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MiniPartyMember.MiniPartyMember_C.ShowConnected
// (Public, BlueprintCallable, BlueprintEvent)

void UMiniPartyMember_C::ShowConnected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniPartyMember_C", "ShowConnected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MiniPartyMember.MiniPartyMember_C.ShowOpen
// (Public, BlueprintCallable, BlueprintEvent)

void UMiniPartyMember_C::ShowOpen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniPartyMember_C", "ShowOpen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MiniPartyMember.MiniPartyMember_C.UpdateMemberInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo&             NewMemberInfo                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMiniPartyMember_C::UpdateMemberInfo(struct FFortTeamMemberInfo& NewMemberInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniPartyMember_C", "UpdateMemberInfo");

	Params::MiniPartyMember_C_UpdateMemberInfo Parms{};

	Parms.NewMemberInfo = std::move(NewMemberInfo);

	UObject::ProcessEvent(Func, &Parms);

	NewMemberInfo = std::move(Parms.NewMemberInfo);
}


// Function MiniPartyMember.MiniPartyMember_C.GetLeaderVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UMiniPartyMember_C::GetLeaderVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniPartyMember_C", "GetLeaderVisibility");

	Params::MiniPartyMember_C_GetLeaderVisibility Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MiniPartyMember.MiniPartyMember_C.OpenPartyFinder
// (Public, BlueprintCallable, BlueprintEvent)

void UMiniPartyMember_C::OpenPartyFinder()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniPartyMember_C", "OpenPartyFinder");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MiniPartyMember.MiniPartyMember_C.HandleMouseHoverVisualState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Hover                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMiniPartyMember_C::HandleMouseHoverVisualState(bool Hover)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MiniPartyMember_C", "HandleMouseHoverVisualState");

	Params::MiniPartyMember_C_HandleMouseHoverVisualState Parms{};

	Parms.Hover = Hover;

	UObject::ProcessEvent(Func, &Parms);
}

}

