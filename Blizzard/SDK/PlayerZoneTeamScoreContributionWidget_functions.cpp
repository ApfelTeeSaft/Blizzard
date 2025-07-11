﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerZoneTeamScoreContributionWidget

#include "Basic.hpp"

#include "PlayerZoneTeamScoreContributionWidget_classes.hpp"
#include "PlayerZoneTeamScoreContributionWidget_parameters.hpp"


namespace SDK
{

// Function PlayerZoneTeamScoreContributionWidget.PlayerZoneTeamScoreContributionWidget_C.ExecuteUbergraph_PlayerZoneTeamScoreContributionWidget
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerZoneTeamScoreContributionWidget_C::ExecuteUbergraph_PlayerZoneTeamScoreContributionWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerZoneTeamScoreContributionWidget_C", "ExecuteUbergraph_PlayerZoneTeamScoreContributionWidget");

	Params::PlayerZoneTeamScoreContributionWidget_C_ExecuteUbergraph_PlayerZoneTeamScoreContributionWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PlayerZoneTeamScoreContributionWidget.PlayerZoneTeamScoreContributionWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerZoneTeamScoreContributionWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerZoneTeamScoreContributionWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerZoneTeamScoreContributionWidget.PlayerZoneTeamScoreContributionWidget_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPlayerZoneTeamScoreContributionWidget_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerZoneTeamScoreContributionWidget_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PlayerZoneTeamScoreContributionWidget.PlayerZoneTeamScoreContributionWidget_C.Update Contribution LERP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   LERP_Factor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerZoneTeamScoreContributionWidget_C::Update_Contribution_LERP(float LERP_Factor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PlayerZoneTeamScoreContributionWidget_C", "Update Contribution LERP");

	Params::PlayerZoneTeamScoreContributionWidget_C_Update_Contribution_LERP Parms{};

	Parms.LERP_Factor = LERP_Factor;

	UObject::ProcessEvent(Func, &Parms);
}

}

