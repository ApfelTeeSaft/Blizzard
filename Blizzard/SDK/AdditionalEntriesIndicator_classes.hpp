﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AdditionalEntriesIndicator

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AdditionalEntriesIndicator.AdditionalEntriesIndicator_C
// 0x0008 (0x0218 - 0x0210)
class UAdditionalEntriesIndicator_C final : public UCommonUserWidget
{
public:
	class UImage*                                 Image_0;                                           // 0x0210(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AdditionalEntriesIndicator_C">();
	}
	static class UAdditionalEntriesIndicator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAdditionalEntriesIndicator_C>();
	}
};
static_assert(alignof(UAdditionalEntriesIndicator_C) == 0x000008, "Wrong alignment on UAdditionalEntriesIndicator_C");
static_assert(sizeof(UAdditionalEntriesIndicator_C) == 0x000218, "Wrong size on UAdditionalEntriesIndicator_C");
static_assert(offsetof(UAdditionalEntriesIndicator_C, Image_0) == 0x000210, "Member 'UAdditionalEntriesIndicator_C::Image_0' has a wrong offset!");

}

