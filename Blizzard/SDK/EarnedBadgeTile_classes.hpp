﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EarnedBadgeTile

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EarnedBadgeTile.EarnedBadgeTile_C
// 0x0058 (0x0268 - 0x0210)
class UEarnedBadgeTile_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UFortNumericTextBlock*                  BadgeCount;                                        // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       BadgeDescription;                                  // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemIcon*                          BadgeIcon;                                         // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       BadgeTitle;                                        // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CompleteCheck;                                     // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          ListItemBorder;                                    // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortBadgeItemDefinition*               BadgeItemDefinition;                               // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         Count;                                             // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bEarnedBadge;                                      // 0x0254(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_255[0x3];                                      // 0x0255(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           DarkenBadge;                                       // 0x0258(0x0010)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_EarnedBadgeTile(int32 EntryPoint);
	void Construct();
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EarnedBadgeTile_C">();
	}
	static class UEarnedBadgeTile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEarnedBadgeTile_C>();
	}
};
static_assert(alignof(UEarnedBadgeTile_C) == 0x000008, "Wrong alignment on UEarnedBadgeTile_C");
static_assert(sizeof(UEarnedBadgeTile_C) == 0x000268, "Wrong size on UEarnedBadgeTile_C");
static_assert(offsetof(UEarnedBadgeTile_C, UberGraphFrame) == 0x000210, "Member 'UEarnedBadgeTile_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEarnedBadgeTile_C, BadgeCount) == 0x000218, "Member 'UEarnedBadgeTile_C::BadgeCount' has a wrong offset!");
static_assert(offsetof(UEarnedBadgeTile_C, BadgeDescription) == 0x000220, "Member 'UEarnedBadgeTile_C::BadgeDescription' has a wrong offset!");
static_assert(offsetof(UEarnedBadgeTile_C, BadgeIcon) == 0x000228, "Member 'UEarnedBadgeTile_C::BadgeIcon' has a wrong offset!");
static_assert(offsetof(UEarnedBadgeTile_C, BadgeTitle) == 0x000230, "Member 'UEarnedBadgeTile_C::BadgeTitle' has a wrong offset!");
static_assert(offsetof(UEarnedBadgeTile_C, CompleteCheck) == 0x000238, "Member 'UEarnedBadgeTile_C::CompleteCheck' has a wrong offset!");
static_assert(offsetof(UEarnedBadgeTile_C, ListItemBorder) == 0x000240, "Member 'UEarnedBadgeTile_C::ListItemBorder' has a wrong offset!");
static_assert(offsetof(UEarnedBadgeTile_C, BadgeItemDefinition) == 0x000248, "Member 'UEarnedBadgeTile_C::BadgeItemDefinition' has a wrong offset!");
static_assert(offsetof(UEarnedBadgeTile_C, Count) == 0x000250, "Member 'UEarnedBadgeTile_C::Count' has a wrong offset!");
static_assert(offsetof(UEarnedBadgeTile_C, bEarnedBadge) == 0x000254, "Member 'UEarnedBadgeTile_C::bEarnedBadge' has a wrong offset!");
static_assert(offsetof(UEarnedBadgeTile_C, DarkenBadge) == 0x000258, "Member 'UEarnedBadgeTile_C::DarkenBadge' has a wrong offset!");

}

