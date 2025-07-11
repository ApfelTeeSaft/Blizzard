﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaMatchmakingPlay

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaMatchmakingPlay.AthenaMatchmakingPlay_C
// 0x0050 (0x0378 - 0x0328)
class UAthenaMatchmakingPlay_C final : public UFortAthenaMatchmakingWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0328(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       NewModeSelected;                                   // 0x0330(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      B_ChangeGameMode;                                  // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          CB_LTM_Bang;                                       // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CT_CurGameMode;                                    // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       GameModeDescription;                               // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MatchmakingSpinner;                                // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      TouchButtonChangeGameMode;                         // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   PlaylistsUpdated;                                  // 0x0368(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ExecuteUbergraph_AthenaMatchmakingPlay(int32 EntryPoint);
	void BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__TouchButtonChangeGameMode_K2Node_ComponentBoundEvent_95_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnPlayButtonUpdated(bool bShowPlayButton);
	void OnAvailablePlaylistsUpdated();
	void RefreshBang();
	void BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void NewModeSelected_Display();
	void BndEvt__FillSquadButton_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__TeamFillRotator_K2Node_ComponentBoundEvent_128_OnRotated__DelegateSignature(int32 Value);
	void BndEvt__PlaylistRotator_K2Node_ComponentBoundEvent_83_OnRotated__DelegateSignature(int32 Value);
	void SetCancelButtonState(bool bIsMatchmaking);
	void Construct();
	void SetPlayButtonState(bool bCanMatchmake);
	void SetAutoFillOptions();
	void PlaylistChange(bool bDirection);
	void FillChange(bool bDirection);
	void OpenPlayOptions();
	void CheckForLTMBangs(bool* BangAvail);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaMatchmakingPlay_C">();
	}
	static class UAthenaMatchmakingPlay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaMatchmakingPlay_C>();
	}
};
static_assert(alignof(UAthenaMatchmakingPlay_C) == 0x000008, "Wrong alignment on UAthenaMatchmakingPlay_C");
static_assert(sizeof(UAthenaMatchmakingPlay_C) == 0x000378, "Wrong size on UAthenaMatchmakingPlay_C");
static_assert(offsetof(UAthenaMatchmakingPlay_C, UberGraphFrame) == 0x000328, "Member 'UAthenaMatchmakingPlay_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingPlay_C, NewModeSelected) == 0x000330, "Member 'UAthenaMatchmakingPlay_C::NewModeSelected' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingPlay_C, B_ChangeGameMode) == 0x000338, "Member 'UAthenaMatchmakingPlay_C::B_ChangeGameMode' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingPlay_C, CB_LTM_Bang) == 0x000340, "Member 'UAthenaMatchmakingPlay_C::CB_LTM_Bang' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingPlay_C, CT_CurGameMode) == 0x000348, "Member 'UAthenaMatchmakingPlay_C::CT_CurGameMode' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingPlay_C, GameModeDescription) == 0x000350, "Member 'UAthenaMatchmakingPlay_C::GameModeDescription' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingPlay_C, MatchmakingSpinner) == 0x000358, "Member 'UAthenaMatchmakingPlay_C::MatchmakingSpinner' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingPlay_C, TouchButtonChangeGameMode) == 0x000360, "Member 'UAthenaMatchmakingPlay_C::TouchButtonChangeGameMode' has a wrong offset!");
static_assert(offsetof(UAthenaMatchmakingPlay_C, PlaylistsUpdated) == 0x000368, "Member 'UAthenaMatchmakingPlay_C::PlaylistsUpdated' has a wrong offset!");

}

