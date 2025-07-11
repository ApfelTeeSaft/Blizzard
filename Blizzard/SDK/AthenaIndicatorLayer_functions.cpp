﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaIndicatorLayer

#include "Basic.hpp"

#include "AthenaIndicatorLayer_classes.hpp"
#include "AthenaIndicatorLayer_parameters.hpp"


namespace SDK
{

// Function AthenaIndicatorLayer.AthenaIndicatorLayer_C.ExecuteUbergraph_AthenaIndicatorLayer
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaIndicatorLayer_C::ExecuteUbergraph_AthenaIndicatorLayer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaIndicatorLayer_C", "ExecuteUbergraph_AthenaIndicatorLayer");

	Params::AthenaIndicatorLayer_C_ExecuteUbergraph_AthenaIndicatorLayer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaIndicatorLayer.AthenaIndicatorLayer_C.SquadIndicatorsChanged
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// const TArray<class AFortPlayerStateAthena*>&PlayerStates                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaIndicatorLayer_C::SquadIndicatorsChanged(const TArray<class AFortPlayerStateAthena*>& PlayerStates)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaIndicatorLayer_C", "SquadIndicatorsChanged");

	Params::AthenaIndicatorLayer_C_SquadIndicatorsChanged Parms{};

	Parms.PlayerStates = std::move(PlayerStates);

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaIndicatorLayer.AthenaIndicatorLayer_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaIndicatorLayer_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaIndicatorLayer_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaIndicatorLayer.AthenaIndicatorLayer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaIndicatorLayer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaIndicatorLayer_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaIndicatorLayer.AthenaIndicatorLayer_C.AddSquadMemberIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*           Player_State                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Team_Member_Index                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaIndicatorLayer_C::AddSquadMemberIndicator(class AFortPlayerStateAthena* Player_State, int32 Team_Member_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaIndicatorLayer_C", "AddSquadMemberIndicator");

	Params::AthenaIndicatorLayer_C_AddSquadMemberIndicator Parms{};

	Parms.Player_State = Player_State;
	Parms.Team_Member_Index = Team_Member_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaIndicatorLayer.AthenaIndicatorLayer_C.CreateInterestIndicatorWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaIndicatorLayer_C::CreateInterestIndicatorWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaIndicatorLayer_C", "CreateInterestIndicatorWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaIndicatorLayer.AthenaIndicatorLayer_C.HandleOnPointOfInterestAdded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           PointOfInterest                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const class FText&                      DisplayText                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*                       DisplayImage                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaIndicatorLayer_C::HandleOnPointOfInterestAdded(class AActor* PointOfInterest, const class FText& DisplayText, class UTexture2D* DisplayImage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaIndicatorLayer_C", "HandleOnPointOfInterestAdded");

	Params::AthenaIndicatorLayer_C_HandleOnPointOfInterestAdded Parms{};

	Parms.PointOfInterest = PointOfInterest;
	Parms.DisplayText = std::move(DisplayText);
	Parms.DisplayImage = DisplayImage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaIndicatorLayer.AthenaIndicatorLayer_C.HandleOnPointOfInterestRemoved
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           PointOfInterest                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaIndicatorLayer_C::HandleOnPointOfInterestRemoved(class AActor* PointOfInterest)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaIndicatorLayer_C", "HandleOnPointOfInterestRemoved");

	Params::AthenaIndicatorLayer_C_HandleOnPointOfInterestRemoved Parms{};

	Parms.PointOfInterest = PointOfInterest;

	UObject::ProcessEvent(Func, &Parms);
}

}

