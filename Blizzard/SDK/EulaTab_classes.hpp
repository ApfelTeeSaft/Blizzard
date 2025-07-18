﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EulaTab

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EulaTab.EulaTab_C
// 0x0040 (0x0250 - 0x0210)
class UEulaTab_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UWidgetSwitcher*                        EulaSpinnerSwitcher;                               // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortRichTextBlock*                     FortRichTextBlock_0;                               // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ProgressSpinner;                                   // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_4;                                       // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   FailedToDownloadEulaText;                          // 0x0238(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_EulaTab(int32 EntryPoint);
	void OnEulaDownloadComplete(bool bSuccessful, const class FText& EULAText);
	void Activate_Scroll_Box();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EulaTab_C">();
	}
	static class UEulaTab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEulaTab_C>();
	}
};
static_assert(alignof(UEulaTab_C) == 0x000008, "Wrong alignment on UEulaTab_C");
static_assert(sizeof(UEulaTab_C) == 0x000250, "Wrong size on UEulaTab_C");
static_assert(offsetof(UEulaTab_C, UberGraphFrame) == 0x000210, "Member 'UEulaTab_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEulaTab_C, EulaSpinnerSwitcher) == 0x000218, "Member 'UEulaTab_C::EulaSpinnerSwitcher' has a wrong offset!");
static_assert(offsetof(UEulaTab_C, FortRichTextBlock_0) == 0x000220, "Member 'UEulaTab_C::FortRichTextBlock_0' has a wrong offset!");
static_assert(offsetof(UEulaTab_C, ProgressSpinner) == 0x000228, "Member 'UEulaTab_C::ProgressSpinner' has a wrong offset!");
static_assert(offsetof(UEulaTab_C, ScrollBox_4) == 0x000230, "Member 'UEulaTab_C::ScrollBox_4' has a wrong offset!");
static_assert(offsetof(UEulaTab_C, FailedToDownloadEulaText) == 0x000238, "Member 'UEulaTab_C::FailedToDownloadEulaText' has a wrong offset!");

}

