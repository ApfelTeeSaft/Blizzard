﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NewsEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass NewsEntry.NewsEntry_C
// 0x0058 (0x0268 - 0x0210)
class UNewsEntry_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UIconTextButton_C*                      ButtonEntry;                                       // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextEntry;                                         // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   EntryText;                                         // 0x0228(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	UMulticastDelegateProperty_                   HandleEntrySelected;                               // 0x0240(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                   BodyText;                                          // 0x0250(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void BndEvt__ButtonEntry_K2Node_ComponentBoundEvent_201_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void ExecuteUbergraph_NewsEntry(int32 EntryPoint);
	void SetFocus();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NewsEntry_C">();
	}
	static class UNewsEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNewsEntry_C>();
	}
};
static_assert(alignof(UNewsEntry_C) == 0x000008, "Wrong alignment on UNewsEntry_C");
static_assert(sizeof(UNewsEntry_C) == 0x000268, "Wrong size on UNewsEntry_C");
static_assert(offsetof(UNewsEntry_C, UberGraphFrame) == 0x000210, "Member 'UNewsEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNewsEntry_C, ButtonEntry) == 0x000218, "Member 'UNewsEntry_C::ButtonEntry' has a wrong offset!");
static_assert(offsetof(UNewsEntry_C, TextEntry) == 0x000220, "Member 'UNewsEntry_C::TextEntry' has a wrong offset!");
static_assert(offsetof(UNewsEntry_C, EntryText) == 0x000228, "Member 'UNewsEntry_C::EntryText' has a wrong offset!");
static_assert(offsetof(UNewsEntry_C, HandleEntrySelected) == 0x000240, "Member 'UNewsEntry_C::HandleEntrySelected' has a wrong offset!");
static_assert(offsetof(UNewsEntry_C, BodyText) == 0x000250, "Member 'UNewsEntry_C::BodyText' has a wrong offset!");

}

