﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TabGameOptionsMain

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TabGameOptionsMain.TabGameOptionsMain_C
// 0x0010 (0x0268 - 0x0258)
class UTabGameOptionsMain_C final : public UFortGameOptions
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0258(0x0008)(Transient, DuplicateTransient)
	class UCommonTextBlock*                       TooltipDisplayReference;                           // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_TabGameOptionsMain(int32 EntryPoint);
	void BndEvt__OptionsListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
	void Setting_Value_Changed(float Slider_Value);
	void BndEvt__OptionsListView_K2Node_ComponentBoundEvent_4_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget);
	void CenterOnTab();
	void Construct();
	void UpdateOptionsTab();
	void UpdatePossibleLanguages();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TabGameOptionsMain_C">();
	}
	static class UTabGameOptionsMain_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTabGameOptionsMain_C>();
	}
};
static_assert(alignof(UTabGameOptionsMain_C) == 0x000008, "Wrong alignment on UTabGameOptionsMain_C");
static_assert(sizeof(UTabGameOptionsMain_C) == 0x000268, "Wrong size on UTabGameOptionsMain_C");
static_assert(offsetof(UTabGameOptionsMain_C, UberGraphFrame) == 0x000258, "Member 'UTabGameOptionsMain_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTabGameOptionsMain_C, TooltipDisplayReference) == 0x000260, "Member 'UTabGameOptionsMain_C::TooltipDisplayReference' has a wrong offset!");

}

