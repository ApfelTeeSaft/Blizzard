﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SocialImportPanel

#include "Basic.hpp"

#include "SocialImportPanel_classes.hpp"
#include "SocialImportPanel_parameters.hpp"


namespace SDK
{

// Function SocialImportPanel.SocialImportPanel_C.ExecuteUbergraph_SocialImportPanel
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USocialImportPanel_C::ExecuteUbergraph_SocialImportPanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialImportPanel_C", "ExecuteUbergraph_SocialImportPanel");

	Params::SocialImportPanel_C_ExecuteUbergraph_SocialImportPanel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SocialImportPanel.SocialImportPanel_C.OnPanelTypeSet
// (Event, Public, BlueprintEvent)
// Parameters:
// ESocialImportPanelType                  NewType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USocialImportPanel_C::OnPanelTypeSet(ESocialImportPanelType NewType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialImportPanel_C", "OnPanelTypeSet");

	Params::SocialImportPanel_C_OnPanelTypeSet Parms{};

	Parms.NewType = NewType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SocialImportPanel.SocialImportPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USocialImportPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialImportPanel_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SocialImportPanel.SocialImportPanel_C.OnClaimViewRequested
// (Event, Public, BlueprintEvent)

void USocialImportPanel_C::OnClaimViewRequested()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialImportPanel_C", "OnClaimViewRequested");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SocialImportPanel.SocialImportPanel_C.OnImportViewRequested
// (Event, Public, BlueprintEvent)

void USocialImportPanel_C::OnImportViewRequested()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialImportPanel_C", "OnImportViewRequested");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SocialImportPanel.SocialImportPanel_C.OnLauncherImportOpened
// (Event, Public, BlueprintEvent)

void USocialImportPanel_C::OnLauncherImportOpened()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialImportPanel_C", "OnLauncherImportOpened");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SocialImportPanel.SocialImportPanel_C.OnWaitingViewRequested
// (Event, Public, BlueprintEvent)

void USocialImportPanel_C::OnWaitingViewRequested()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialImportPanel_C", "OnWaitingViewRequested");

	UObject::ProcessEvent(Func, nullptr);
}

}

