﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DefaultSkillNode

#include "Basic.hpp"

#include "DefaultSkillNode_classes.hpp"
#include "DefaultSkillNode_parameters.hpp"


namespace SDK
{

// Function DefaultSkillNode.DefaultSkillNode_C.ExecuteUbergraph_DefaultSkillNode
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDefaultSkillNode_C::ExecuteUbergraph_DefaultSkillNode(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DefaultSkillNode_C", "ExecuteUbergraph_DefaultSkillNode");

	Params::DefaultSkillNode_C_ExecuteUbergraph_DefaultSkillNode Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DefaultSkillNode.DefaultSkillNode_C.OnDeselected
// (Event, Protected, BlueprintEvent)

void UDefaultSkillNode_C::OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DefaultSkillNode_C", "OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DefaultSkillNode.DefaultSkillNode_C.OnSelected
// (Event, Protected, BlueprintEvent)

void UDefaultSkillNode_C::OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DefaultSkillNode_C", "OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DefaultSkillNode.DefaultSkillNode_C.OnHovered
// (Event, Protected, BlueprintEvent)

void UDefaultSkillNode_C::OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DefaultSkillNode_C", "OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DefaultSkillNode.DefaultSkillNode_C.OnUnhovered
// (Event, Protected, BlueprintEvent)

void UDefaultSkillNode_C::OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DefaultSkillNode_C", "OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DefaultSkillNode.DefaultSkillNode_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDefaultSkillNode_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DefaultSkillNode_C", "PreConstruct");

	Params::DefaultSkillNode_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DefaultSkillNode.DefaultSkillNode_C.HandleSkillTreeNodeStateChanged
// (Event, Protected, BlueprintEvent)

void UDefaultSkillNode_C::HandleSkillTreeNodeStateChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DefaultSkillNode_C", "HandleSkillTreeNodeStateChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DefaultSkillNode.DefaultSkillNode_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDefaultSkillNode_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DefaultSkillNode_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DefaultSkillNode.DefaultSkillNode_C.UpdateFromNodeState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UDefaultSkillNode_C::UpdateFromNodeState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DefaultSkillNode_C", "UpdateFromNodeState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DefaultSkillNode.DefaultSkillNode_C.UpdateFromNodeData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UDefaultSkillNode_C::UpdateFromNodeData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DefaultSkillNode_C", "UpdateFromNodeData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DefaultSkillNode.DefaultSkillNode_C.StepHoverGlowInterpolation
// (Public, BlueprintCallable, BlueprintEvent)

void UDefaultSkillNode_C::StepHoverGlowInterpolation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DefaultSkillNode_C", "StepHoverGlowInterpolation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DefaultSkillNode.DefaultSkillNode_C.StepSelectionGlowInterpolation
// (Public, BlueprintCallable, BlueprintEvent)

void UDefaultSkillNode_C::StepSelectionGlowInterpolation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DefaultSkillNode_C", "StepSelectionGlowInterpolation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DefaultSkillNode.DefaultSkillNode_C.UpdateHoverGlow
// (Public, BlueprintCallable, BlueprintEvent)

void UDefaultSkillNode_C::UpdateHoverGlow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DefaultSkillNode_C", "UpdateHoverGlow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DefaultSkillNode.DefaultSkillNode_C.UpdateSelectionGlow
// (Public, BlueprintCallable, BlueprintEvent)

void UDefaultSkillNode_C::UpdateSelectionGlow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DefaultSkillNode_C", "UpdateSelectionGlow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DefaultSkillNode.DefaultSkillNode_C.UpdateFromButtonState
// (Public, BlueprintCallable, BlueprintEvent)

void UDefaultSkillNode_C::UpdateFromButtonState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DefaultSkillNode_C", "UpdateFromButtonState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DefaultSkillNode.DefaultSkillNode_C.SetBackgroundColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UDefaultSkillNode_C::SetBackgroundColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DefaultSkillNode_C", "SetBackgroundColor");

	UObject::ProcessEvent(Func, nullptr);
}

}

