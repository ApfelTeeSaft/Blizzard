﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaQuickBarSlot

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "QuickbarSlot_classes.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaQuickBarSlot.AthenaQuickBarSlot_C
// 0x0008 (0x0360 - 0x0358)
class UAthenaQuickBarSlot_C final : public UQuickbarSlot_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_AthenaQuickBarSlot_C;               // 0x0358(0x0008)(Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_AthenaQuickBarSlot(int32 EntryPoint);
	void UpdateKeyBindingText_SpecialCases();
	struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	void UpdateKeyBindingText();

	void GetKeyBindingAction_Gamepad(class FName* KeyBindingAction) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaQuickBarSlot_C">();
	}
	static class UAthenaQuickBarSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaQuickBarSlot_C>();
	}
};
static_assert(alignof(UAthenaQuickBarSlot_C) == 0x000008, "Wrong alignment on UAthenaQuickBarSlot_C");
static_assert(sizeof(UAthenaQuickBarSlot_C) == 0x000360, "Wrong size on UAthenaQuickBarSlot_C");
static_assert(offsetof(UAthenaQuickBarSlot_C, UberGraphFrame_AthenaQuickBarSlot_C) == 0x000358, "Member 'UAthenaQuickBarSlot_C::UberGraphFrame_AthenaQuickBarSlot_C' has a wrong offset!");

}

