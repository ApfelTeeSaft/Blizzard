﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaHUDBottomBar

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaHUDBottomBar.AthenaHUDBottomBar_C
// 0x0020 (0x0230 - 0x0210)
class UAthenaHUDBottomBar_C final : public UCommonUserWidget
{
public:
	class UInputReflector_C*                      InputReflector;                                    // 0x0210(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_1;                                        // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FMargin                                DefaultButtonMargin;                               // 0x0220(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaHUDBottomBar_C">();
	}
	static class UAthenaHUDBottomBar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaHUDBottomBar_C>();
	}
};
static_assert(alignof(UAthenaHUDBottomBar_C) == 0x000008, "Wrong alignment on UAthenaHUDBottomBar_C");
static_assert(sizeof(UAthenaHUDBottomBar_C) == 0x000230, "Wrong size on UAthenaHUDBottomBar_C");
static_assert(offsetof(UAthenaHUDBottomBar_C, InputReflector) == 0x000210, "Member 'UAthenaHUDBottomBar_C::InputReflector' has a wrong offset!");
static_assert(offsetof(UAthenaHUDBottomBar_C, SafeZone_1) == 0x000218, "Member 'UAthenaHUDBottomBar_C::SafeZone_1' has a wrong offset!");
static_assert(offsetof(UAthenaHUDBottomBar_C, DefaultButtonMargin) == 0x000220, "Member 'UAthenaHUDBottomBar_C::DefaultButtonMargin' has a wrong offset!");

}

