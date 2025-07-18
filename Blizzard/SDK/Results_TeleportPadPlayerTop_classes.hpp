﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Results_TeleportPadPlayerTop

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Results_TeleportPadPlayerTop.Results_TeleportPadPlayerTop_C
// 0x0040 (0x0250 - 0x0210)
class UResults_TeleportPadPlayerTop_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim_Intro;                                        // 0x0218(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim_IntroName;                                    // 0x0220(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerBanner_C*                        PlayerBanner;                                      // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPowerWidget_C*                         PowerWidget;                                       // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                           ProgressBar;                                       // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextName;                                          // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextXPAmount;                                      // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Results_TeleportPadPlayerTop(int32 EntryPoint);
	void Intro();
	void PreConstruct(bool IsDesignTime);
	void Initialize(const struct FUniqueNetIdRepl& UniqueNetID, class UFortUIScoreReport* ScoreReport, int32 ScoreReportIndex);
	void IntroName();
	void Play_Anim_Intro();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Results_TeleportPadPlayerTop_C">();
	}
	static class UResults_TeleportPadPlayerTop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UResults_TeleportPadPlayerTop_C>();
	}
};
static_assert(alignof(UResults_TeleportPadPlayerTop_C) == 0x000008, "Wrong alignment on UResults_TeleportPadPlayerTop_C");
static_assert(sizeof(UResults_TeleportPadPlayerTop_C) == 0x000250, "Wrong size on UResults_TeleportPadPlayerTop_C");
static_assert(offsetof(UResults_TeleportPadPlayerTop_C, UberGraphFrame) == 0x000210, "Member 'UResults_TeleportPadPlayerTop_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UResults_TeleportPadPlayerTop_C, Anim_Intro) == 0x000218, "Member 'UResults_TeleportPadPlayerTop_C::Anim_Intro' has a wrong offset!");
static_assert(offsetof(UResults_TeleportPadPlayerTop_C, Anim_IntroName) == 0x000220, "Member 'UResults_TeleportPadPlayerTop_C::Anim_IntroName' has a wrong offset!");
static_assert(offsetof(UResults_TeleportPadPlayerTop_C, PlayerBanner) == 0x000228, "Member 'UResults_TeleportPadPlayerTop_C::PlayerBanner' has a wrong offset!");
static_assert(offsetof(UResults_TeleportPadPlayerTop_C, PowerWidget) == 0x000230, "Member 'UResults_TeleportPadPlayerTop_C::PowerWidget' has a wrong offset!");
static_assert(offsetof(UResults_TeleportPadPlayerTop_C, ProgressBar) == 0x000238, "Member 'UResults_TeleportPadPlayerTop_C::ProgressBar' has a wrong offset!");
static_assert(offsetof(UResults_TeleportPadPlayerTop_C, TextName) == 0x000240, "Member 'UResults_TeleportPadPlayerTop_C::TextName' has a wrong offset!");
static_assert(offsetof(UResults_TeleportPadPlayerTop_C, TextXPAmount) == 0x000248, "Member 'UResults_TeleportPadPlayerTop_C::TextXPAmount' has a wrong offset!");

}

