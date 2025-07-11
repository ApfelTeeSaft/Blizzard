﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Results_TeamSubtotalScore

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Results_TeamSubtotalScore.Results_TeamSubtotalScore_C
// 0x0020 (0x0230 - 0x0210)
class UResults_TeamSubtotalScore_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 ImageBackground;                                   // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                TextScore;                                         // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EFortUIScoreType                              ScoreType;                                         // 0x0228(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Results_TeamSubtotalScore(int32 EntryPoint);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void SetScore(int32 Score);
	void UpdateBackground();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Results_TeamSubtotalScore_C">();
	}
	static class UResults_TeamSubtotalScore_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UResults_TeamSubtotalScore_C>();
	}
};
static_assert(alignof(UResults_TeamSubtotalScore_C) == 0x000008, "Wrong alignment on UResults_TeamSubtotalScore_C");
static_assert(sizeof(UResults_TeamSubtotalScore_C) == 0x000230, "Wrong size on UResults_TeamSubtotalScore_C");
static_assert(offsetof(UResults_TeamSubtotalScore_C, UberGraphFrame) == 0x000210, "Member 'UResults_TeamSubtotalScore_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UResults_TeamSubtotalScore_C, ImageBackground) == 0x000218, "Member 'UResults_TeamSubtotalScore_C::ImageBackground' has a wrong offset!");
static_assert(offsetof(UResults_TeamSubtotalScore_C, TextScore) == 0x000220, "Member 'UResults_TeamSubtotalScore_C::TextScore' has a wrong offset!");
static_assert(offsetof(UResults_TeamSubtotalScore_C, ScoreType) == 0x000228, "Member 'UResults_TeamSubtotalScore_C::ScoreType' has a wrong offset!");

}

