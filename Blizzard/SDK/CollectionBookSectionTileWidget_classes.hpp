﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CollectionBookSectionTileWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CollectionBookSectionTileWidget.CollectionBookSectionTileWidget_C
// 0x0030 (0x0828 - 0x07F8)
class UCollectionBookSectionTileWidget_C final : public UFortCollectionBookSectionTileWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x07F8(0x0008)(Transient, DuplicateTransient)
	class UCommonBorder*                          SlotBorder;                                        // 0x0800(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                 NormalTextStyle;                                   // 0x0808(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CompletedTextStyle;                                // 0x0810(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 NormalBorderStyle;                                 // 0x0818(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CompletedBorderStyle;                              // 0x0820(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CollectionBookSectionTileWidget(int32 EntryPoint);
	void OnSectionSlotUpdate(int32 NumFilledSlots, int32 NumSlots, EFortCollectionBookState SectionState);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CollectionBookSectionTileWidget_C">();
	}
	static class UCollectionBookSectionTileWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCollectionBookSectionTileWidget_C>();
	}
};
static_assert(alignof(UCollectionBookSectionTileWidget_C) == 0x000008, "Wrong alignment on UCollectionBookSectionTileWidget_C");
static_assert(sizeof(UCollectionBookSectionTileWidget_C) == 0x000828, "Wrong size on UCollectionBookSectionTileWidget_C");
static_assert(offsetof(UCollectionBookSectionTileWidget_C, UberGraphFrame) == 0x0007F8, "Member 'UCollectionBookSectionTileWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCollectionBookSectionTileWidget_C, SlotBorder) == 0x000800, "Member 'UCollectionBookSectionTileWidget_C::SlotBorder' has a wrong offset!");
static_assert(offsetof(UCollectionBookSectionTileWidget_C, NormalTextStyle) == 0x000808, "Member 'UCollectionBookSectionTileWidget_C::NormalTextStyle' has a wrong offset!");
static_assert(offsetof(UCollectionBookSectionTileWidget_C, CompletedTextStyle) == 0x000810, "Member 'UCollectionBookSectionTileWidget_C::CompletedTextStyle' has a wrong offset!");
static_assert(offsetof(UCollectionBookSectionTileWidget_C, NormalBorderStyle) == 0x000818, "Member 'UCollectionBookSectionTileWidget_C::NormalBorderStyle' has a wrong offset!");
static_assert(offsetof(UCollectionBookSectionTileWidget_C, CompletedBorderStyle) == 0x000820, "Member 'UCollectionBookSectionTileWidget_C::CompletedBorderStyle' has a wrong offset!");

}

