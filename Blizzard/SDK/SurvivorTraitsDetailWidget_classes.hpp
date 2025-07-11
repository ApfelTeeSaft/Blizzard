﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SurvivorTraitsDetailWidget

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SurvivorTraitsDetailWidget.SurvivorTraitsDetailWidget_C
// 0x0058 (0x02B0 - 0x0258)
class USurvivorTraitsDetailWidget_C final : public UFortItemDetailElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0258(0x0008)(Transient, DuplicateTransient)
	class UImage*                                 DotRule;                                           // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemCategoryIndicator*             FortItemCategoryIndicator2Icon;                    // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemCategoryIndicator*             FortItemCategoryIndicatorIcon;                     // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               ParentSizeBox;                                     // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          SecondaryBorder;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemCategoryIndicator*             SecondaryCategoryIndicator;                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          TertiaryBorder;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemCategoryIndicator*             TertiaryCategoryIndicator;                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextPersonality;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextTertiaryHeader;                                // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SurvivorTraitsDetailWidget(int32 EntryPoint);
	void HandlePostDifferentItemToDetailSet();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SurvivorTraitsDetailWidget_C">();
	}
	static class USurvivorTraitsDetailWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USurvivorTraitsDetailWidget_C>();
	}
};
static_assert(alignof(USurvivorTraitsDetailWidget_C) == 0x000008, "Wrong alignment on USurvivorTraitsDetailWidget_C");
static_assert(sizeof(USurvivorTraitsDetailWidget_C) == 0x0002B0, "Wrong size on USurvivorTraitsDetailWidget_C");
static_assert(offsetof(USurvivorTraitsDetailWidget_C, UberGraphFrame) == 0x000258, "Member 'USurvivorTraitsDetailWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USurvivorTraitsDetailWidget_C, DotRule) == 0x000260, "Member 'USurvivorTraitsDetailWidget_C::DotRule' has a wrong offset!");
static_assert(offsetof(USurvivorTraitsDetailWidget_C, FortItemCategoryIndicator2Icon) == 0x000268, "Member 'USurvivorTraitsDetailWidget_C::FortItemCategoryIndicator2Icon' has a wrong offset!");
static_assert(offsetof(USurvivorTraitsDetailWidget_C, FortItemCategoryIndicatorIcon) == 0x000270, "Member 'USurvivorTraitsDetailWidget_C::FortItemCategoryIndicatorIcon' has a wrong offset!");
static_assert(offsetof(USurvivorTraitsDetailWidget_C, ParentSizeBox) == 0x000278, "Member 'USurvivorTraitsDetailWidget_C::ParentSizeBox' has a wrong offset!");
static_assert(offsetof(USurvivorTraitsDetailWidget_C, SecondaryBorder) == 0x000280, "Member 'USurvivorTraitsDetailWidget_C::SecondaryBorder' has a wrong offset!");
static_assert(offsetof(USurvivorTraitsDetailWidget_C, SecondaryCategoryIndicator) == 0x000288, "Member 'USurvivorTraitsDetailWidget_C::SecondaryCategoryIndicator' has a wrong offset!");
static_assert(offsetof(USurvivorTraitsDetailWidget_C, TertiaryBorder) == 0x000290, "Member 'USurvivorTraitsDetailWidget_C::TertiaryBorder' has a wrong offset!");
static_assert(offsetof(USurvivorTraitsDetailWidget_C, TertiaryCategoryIndicator) == 0x000298, "Member 'USurvivorTraitsDetailWidget_C::TertiaryCategoryIndicator' has a wrong offset!");
static_assert(offsetof(USurvivorTraitsDetailWidget_C, TextPersonality) == 0x0002A0, "Member 'USurvivorTraitsDetailWidget_C::TextPersonality' has a wrong offset!");
static_assert(offsetof(USurvivorTraitsDetailWidget_C, TextTertiaryHeader) == 0x0002A8, "Member 'USurvivorTraitsDetailWidget_C::TextTertiaryHeader' has a wrong offset!");

}

