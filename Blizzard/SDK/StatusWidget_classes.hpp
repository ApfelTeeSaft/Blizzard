﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StatusWidget

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StatusWidget.StatusWidget_C
// 0x0000 (0x0220 - 0x0220)
class UStatusWidget_C final : public UFortLoginStatus
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StatusWidget_C">();
	}
	static class UStatusWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStatusWidget_C>();
	}
};
static_assert(alignof(UStatusWidget_C) == 0x000008, "Wrong alignment on UStatusWidget_C");
static_assert(sizeof(UStatusWidget_C) == 0x000220, "Wrong size on UStatusWidget_C");

}

