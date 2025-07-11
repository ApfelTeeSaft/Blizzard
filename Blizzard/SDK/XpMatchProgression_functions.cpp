﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: XpMatchProgression

#include "Basic.hpp"

#include "XpMatchProgression_classes.hpp"
#include "XpMatchProgression_parameters.hpp"


namespace SDK
{

// Function XpMatchProgression.XpMatchProgression_C.ExecuteUbergraph_XpMatchProgression
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UXpMatchProgression_C::ExecuteUbergraph_XpMatchProgression(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpMatchProgression_C", "ExecuteUbergraph_XpMatchProgression");

	Params::XpMatchProgression_C_ExecuteUbergraph_XpMatchProgression Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function XpMatchProgression.XpMatchProgression_C.BndEvt__PlayerLevelBar_K2Node_ComponentBoundEvent_3_LevelChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UXpMatchProgression_C::BndEvt__PlayerLevelBar_K2Node_ComponentBoundEvent_3_LevelChanged__DelegateSignature(int32 Level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpMatchProgression_C", "BndEvt__PlayerLevelBar_K2Node_ComponentBoundEvent_3_LevelChanged__DelegateSignature");

	Params::XpMatchProgression_C_BndEvt__PlayerLevelBar_K2Node_ComponentBoundEvent_3_LevelChanged__DelegateSignature Parms{};

	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);
}


// Function XpMatchProgression.XpMatchProgression_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UXpMatchProgression_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpMatchProgression_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function XpMatchProgression.XpMatchProgression_C.Finished Playing Animation
// (BlueprintCallable, BlueprintEvent)

void UXpMatchProgression_C::Finished_Playing_Animation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpMatchProgression_C", "Finished Playing Animation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function XpMatchProgression.XpMatchProgression_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// const struct FGeometry&                 MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UXpMatchProgression_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpMatchProgression_C", "Tick");

	Params::XpMatchProgression_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function XpMatchProgression.XpMatchProgression_C.Play Xp Rewards
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaPlayerMatchReport*         Report_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UXpMatchProgression_C::Play_Xp_Rewards(class UAthenaPlayerMatchReport* Report_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpMatchProgression_C", "Play Xp Rewards");

	Params::XpMatchProgression_C_Play_Xp_Rewards Parms{};

	Parms.Report_0 = Report_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function XpMatchProgression.XpMatchProgression_C.SetPlayerState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerControllerAthena*      PlayerController                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FAthenaLevelInfo&          AthenaLevelInfo                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UXpMatchProgression_C::SetPlayerState(class AFortPlayerControllerAthena* PlayerController, const struct FAthenaLevelInfo& AthenaLevelInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpMatchProgression_C", "SetPlayerState");

	Params::XpMatchProgression_C_SetPlayerState Parms{};

	Parms.PlayerController = PlayerController;
	Parms.AthenaLevelInfo = std::move(AthenaLevelInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function XpMatchProgression.XpMatchProgression_C.TickRewardAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UXpMatchProgression_C::TickRewardAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpMatchProgression_C", "TickRewardAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function XpMatchProgression.XpMatchProgression_C.IsReadyForNextXpEvent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UXpMatchProgression_C::IsReadyForNextXpEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpMatchProgression_C", "IsReadyForNextXpEvent");

	Params::XpMatchProgression_C_IsReadyForNextXpEvent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function XpMatchProgression.XpMatchProgression_C.UpdateRewardForLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SeasonLevel                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UXpMatchProgression_C::UpdateRewardForLevel(int32 SeasonLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpMatchProgression_C", "UpdateRewardForLevel");

	Params::XpMatchProgression_C_UpdateRewardForLevel Parms{};

	Parms.SeasonLevel = SeasonLevel;

	UObject::ProcessEvent(Func, &Parms);
}

}

