﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Survivor

#include "Basic.hpp"

#include "Survivor_classes.hpp"
#include "Survivor_parameters.hpp"


namespace SDK
{

// Function Survivor.Survivor_C.ExecuteUbergraph_Survivor
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASurvivor_C::ExecuteUbergraph_Survivor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Survivor_C", "ExecuteUbergraph_Survivor");

	Params::Survivor_C_ExecuteUbergraph_Survivor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Survivor.Survivor_C.ShowInteractionBang
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASurvivor_C::ShowInteractionBang(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Survivor_C", "ShowInteractionBang");

	Params::Survivor_C_ShowInteractionBang Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Survivor.Survivor_C.GameplayCue.Teleport.Out
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGameplayCueEvent                       EventType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayCueParameters&    Parameters                                             (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void ASurvivor_C::GameplayCue_Teleport_Out(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Survivor_C", "GameplayCue.Teleport.Out");

	Params::Survivor_C_GameplayCue_Teleport_Out Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Survivor.Survivor_C.GameplayCue.Teleport.In
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGameplayCueEvent                       EventType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayCueParameters&    Parameters                                             (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void ASurvivor_C::GameplayCue_Teleport_In(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Survivor_C", "GameplayCue.Teleport.In");

	Params::Survivor_C_GameplayCue_Teleport_In Parms{};

	Parms.EventType = EventType;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Survivor.Survivor_C.PlayTeleportIn
// (BlueprintCallable, BlueprintEvent)

void ASurvivor_C::PlayTeleportIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Survivor_C", "PlayTeleportIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Survivor.Survivor_C.PlayTeleportOut
// (BlueprintCallable, BlueprintEvent)

void ASurvivor_C::PlayTeleportOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Survivor_C", "PlayTeleportOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Survivor.Survivor_C.OnAppearanceOverridden
// (Event, Protected, BlueprintEvent)

void ASurvivor_C::OnAppearanceOverridden()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Survivor_C", "OnAppearanceOverridden");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Survivor.Survivor_C.MIDsInitialized
// (BlueprintCallable, BlueprintEvent)

void ASurvivor_C::MIDsInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Survivor_C", "MIDsInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Survivor.Survivor_C.AdditiveHitReactDelay
// (BlueprintCallable, BlueprintEvent)

void ASurvivor_C::AdditiveHitReactDelay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Survivor_C", "AdditiveHitReactDelay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Survivor.Survivor_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASurvivor_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Survivor_C", "ReceiveEndPlay");

	Params::Survivor_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Survivor.Survivor_C.OnSurvivorDowned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortAIPawn*                      DownedAI                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                      DownedInstigator                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASurvivor_C::OnSurvivorDowned(class AFortAIPawn* DownedAI, class AController* DownedInstigator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Survivor_C", "OnSurvivorDowned");

	Params::Survivor_C_OnSurvivorDowned Parms{};

	Parms.DownedAI = DownedAI;
	Parms.DownedInstigator = DownedInstigator;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Survivor.Survivor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASurvivor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Survivor_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Survivor.Survivor_C.OnClearSentence
// (Event, Protected, BlueprintEvent)

void ASurvivor_C::OnClearSentence()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Survivor_C", "OnClearSentence");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Survivor.Survivor_C.OnDisplaySentence
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// const class FText&                      SpeechText                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ASurvivor_C::OnDisplaySentence(const class FText& SpeechText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Survivor_C", "OnDisplaySentence");

	Params::Survivor_C_OnDisplaySentence Parms{};

	Parms.SpeechText = std::move(SpeechText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Survivor.Survivor_C.Unlock
// (BlueprintCallable, BlueprintEvent)

void ASurvivor_C::Unlock()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Survivor_C", "Unlock");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Survivor.Survivor_C.Lock
// (BlueprintCallable, BlueprintEvent)

void ASurvivor_C::Lock()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Survivor_C", "Lock");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Survivor.Survivor_C.SurvivorSetLockedInPlace
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    LockedInPlace                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASurvivor_C::SurvivorSetLockedInPlace(bool LockedInPlace)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Survivor_C", "SurvivorSetLockedInPlace");

	Params::Survivor_C_SurvivorSetLockedInPlace Parms{};

	Parms.LockedInPlace = LockedInPlace;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Survivor.Survivor_C.StartCowering
// (BlueprintCallable, BlueprintEvent)

void ASurvivor_C::StartCowering()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Survivor_C", "StartCowering");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Survivor.Survivor_C.StopCowering
// (BlueprintCallable, BlueprintEvent)

void ASurvivor_C::StopCowering()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Survivor_C", "StopCowering");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Survivor.Survivor_C.OnDamageServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayTagContainer&     DamageTags                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// const struct FVector&                   Momentum                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FHitResult&                HitInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                      InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayEffectContextHandle&EffectContext                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ASurvivor_C::OnDamageServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Survivor_C", "OnDamageServer");

	Params::Survivor_C_OnDamageServer Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Survivor.Survivor_C.OnDamagePlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayTagContainer&     DamageTags                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// const struct FVector&                   Momentum                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FHitResult&                HitInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                        InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayEffectContextHandle&EffectContext                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ASurvivor_C::OnDamagePlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Survivor_C", "OnDamagePlayEffects");

	Params::Survivor_C_OnDamagePlayEffects Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Survivor.Survivor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASurvivor_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Survivor_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Survivor.Survivor_C.OnRep_bToggleInteractChannel
// (BlueprintCallable, BlueprintEvent)

void ASurvivor_C::OnRep_bToggleInteractChannel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Survivor_C", "OnRep_bToggleInteractChannel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Survivor.Survivor_C.Set Interact Channel Response
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ShouldInteractChannelBeActive                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASurvivor_C::Set_Interact_Channel_Response(bool ShouldInteractChannelBeActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Survivor_C", "Set Interact Channel Response");

	Params::Survivor_C_Set_Interact_Channel_Response Parms{};

	Parms.ShouldInteractChannelBeActive = ShouldInteractChannelBeActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Survivor.Survivor_C.SetLastHitInfoOnBlackboard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESurvivorHitInfoType                    SurvivorHitInfoType                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASurvivor_C::SetLastHitInfoOnBlackboard(ESurvivorHitInfoType SurvivorHitInfoType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Survivor_C", "SetLastHitInfoOnBlackboard");

	Params::Survivor_C_SetLastHitInfoOnBlackboard Parms{};

	Parms.SurvivorHitInfoType = SurvivorHitInfoType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Survivor.Survivor_C.InitializeMIDs
// (Public, BlueprintCallable, BlueprintEvent)

void ASurvivor_C::InitializeMIDs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Survivor_C", "InitializeMIDs");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Survivor.Survivor_C.OnRep_TeleportEffectModeReplicated
// (BlueprintCallable, BlueprintEvent)

void ASurvivor_C::OnRep_TeleportEffectModeReplicated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Survivor_C", "OnRep_TeleportEffectModeReplicated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Survivor.Survivor_C.InteractionBangVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASurvivor_C::InteractionBangVisibility(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Survivor_C", "InteractionBangVisibility");

	Params::Survivor_C_InteractionBangVisibility Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Survivor.Survivor_C.OnRep_InteractionBangEnabled
// (BlueprintCallable, BlueprintEvent)

void ASurvivor_C::OnRep_InteractionBangEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Survivor_C", "OnRep_InteractionBangEnabled");

	UObject::ProcessEvent(Func, nullptr);
}

}

