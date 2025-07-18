﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ErrorWindow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ErrorWindow.ErrorWindow_C
// 0x0068 (0x0468 - 0x0400)
class UErrorWindow_C final : public UFortErrorWindow
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0400(0x0008)(Transient, DuplicateTransient)
	class UIconTextButton_C*                      CloseButton;                                       // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                            Lightbox;                                          // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      LogoutButton;                                      // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           MessageList;                                       // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Title;                                             // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UErrorEntry_C*>                  ShownErrorEntries;                                 // 0x0438(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                          bShouldLogout;                                     // 0x0448(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_449[0x7];                                      // 0x0449(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFortErrorInfo>                 ShownErrorInfos;                                   // 0x0450(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                          bIntroOutroEnabled;                                // 0x0460(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_ErrorWindow(int32 EntryPoint);
	void OutroEnded();
	void IntroEnded();
	void OnBeginIntro();
	void OnBeginOutro();
	void Destruct();
	void Construct();
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_165_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void AddError(struct FFortErrorInfo& ErrorInfo, bool First_Error);
	void Initialize();
	void GetShouldLogout(bool* Return_Value);
	void CloseErrorWindow();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ErrorWindow_C">();
	}
	static class UErrorWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UErrorWindow_C>();
	}
};
static_assert(alignof(UErrorWindow_C) == 0x000008, "Wrong alignment on UErrorWindow_C");
static_assert(sizeof(UErrorWindow_C) == 0x000468, "Wrong size on UErrorWindow_C");
static_assert(offsetof(UErrorWindow_C, UberGraphFrame) == 0x000400, "Member 'UErrorWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UErrorWindow_C, CloseButton) == 0x000408, "Member 'UErrorWindow_C::CloseButton' has a wrong offset!");
static_assert(offsetof(UErrorWindow_C, Image_0) == 0x000410, "Member 'UErrorWindow_C::Image_0' has a wrong offset!");
static_assert(offsetof(UErrorWindow_C, Lightbox) == 0x000418, "Member 'UErrorWindow_C::Lightbox' has a wrong offset!");
static_assert(offsetof(UErrorWindow_C, LogoutButton) == 0x000420, "Member 'UErrorWindow_C::LogoutButton' has a wrong offset!");
static_assert(offsetof(UErrorWindow_C, MessageList) == 0x000428, "Member 'UErrorWindow_C::MessageList' has a wrong offset!");
static_assert(offsetof(UErrorWindow_C, Title) == 0x000430, "Member 'UErrorWindow_C::Title' has a wrong offset!");
static_assert(offsetof(UErrorWindow_C, ShownErrorEntries) == 0x000438, "Member 'UErrorWindow_C::ShownErrorEntries' has a wrong offset!");
static_assert(offsetof(UErrorWindow_C, bShouldLogout) == 0x000448, "Member 'UErrorWindow_C::bShouldLogout' has a wrong offset!");
static_assert(offsetof(UErrorWindow_C, ShownErrorInfos) == 0x000450, "Member 'UErrorWindow_C::ShownErrorInfos' has a wrong offset!");
static_assert(offsetof(UErrorWindow_C, bIntroOutroEnabled) == 0x000460, "Member 'UErrorWindow_C::bIntroOutroEnabled' has a wrong offset!");

}

