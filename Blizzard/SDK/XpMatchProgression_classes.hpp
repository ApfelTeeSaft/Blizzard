﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: XpMatchProgression

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass XpMatchProgression.XpMatchProgression_C
// 0x0050 (0x0260 - 0x0210)
class UXpMatchProgression_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class USmallLevelUpReward_C*                  LevelUpReward;                                     // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaPlayerLevel_C*                   PlayerLevelBar;                                    // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UXpReasonFeedItem_C*                    TotalScore;                                        // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UXpReasonFeedItem_C*                    TotalXp;                                           // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UXpReasonFeed_C*                        XpReasonFeed;                                      // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FAthenaMatchXpReward>           XpRewards;                                         // 0x0240(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                         XpRewardIndex;                                     // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PlayingLeveling;                                   // 0x0254(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_255[0x3];                                      // 0x0255(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAthenaPlayerMatchReport*               Report;                                            // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_XpMatchProgression(int32 EntryPoint);
	void BndEvt__PlayerLevelBar_K2Node_ComponentBoundEvent_3_LevelChanged__DelegateSignature(int32 Level);
	void Destruct();
	void Finished_Playing_Animation();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Play_Xp_Rewards(class UAthenaPlayerMatchReport* Report_0);
	void SetPlayerState(class AFortPlayerControllerAthena* PlayerController, const struct FAthenaLevelInfo& AthenaLevelInfo);
	void TickRewardAnimation();
	bool IsReadyForNextXpEvent();
	void UpdateRewardForLevel(int32 SeasonLevel);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"XpMatchProgression_C">();
	}
	static class UXpMatchProgression_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UXpMatchProgression_C>();
	}
};
static_assert(alignof(UXpMatchProgression_C) == 0x000008, "Wrong alignment on UXpMatchProgression_C");
static_assert(sizeof(UXpMatchProgression_C) == 0x000260, "Wrong size on UXpMatchProgression_C");
static_assert(offsetof(UXpMatchProgression_C, UberGraphFrame) == 0x000210, "Member 'UXpMatchProgression_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UXpMatchProgression_C, LevelUpReward) == 0x000218, "Member 'UXpMatchProgression_C::LevelUpReward' has a wrong offset!");
static_assert(offsetof(UXpMatchProgression_C, PlayerLevelBar) == 0x000220, "Member 'UXpMatchProgression_C::PlayerLevelBar' has a wrong offset!");
static_assert(offsetof(UXpMatchProgression_C, TotalScore) == 0x000228, "Member 'UXpMatchProgression_C::TotalScore' has a wrong offset!");
static_assert(offsetof(UXpMatchProgression_C, TotalXp) == 0x000230, "Member 'UXpMatchProgression_C::TotalXp' has a wrong offset!");
static_assert(offsetof(UXpMatchProgression_C, XpReasonFeed) == 0x000238, "Member 'UXpMatchProgression_C::XpReasonFeed' has a wrong offset!");
static_assert(offsetof(UXpMatchProgression_C, XpRewards) == 0x000240, "Member 'UXpMatchProgression_C::XpRewards' has a wrong offset!");
static_assert(offsetof(UXpMatchProgression_C, XpRewardIndex) == 0x000250, "Member 'UXpMatchProgression_C::XpRewardIndex' has a wrong offset!");
static_assert(offsetof(UXpMatchProgression_C, PlayingLeveling) == 0x000254, "Member 'UXpMatchProgression_C::PlayingLeveling' has a wrong offset!");
static_assert(offsetof(UXpMatchProgression_C, Report) == 0x000258, "Member 'UXpMatchProgression_C::Report' has a wrong offset!");

}

