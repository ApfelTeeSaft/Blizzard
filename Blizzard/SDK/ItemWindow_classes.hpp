﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemWindow

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemWindow.ItemWindow_C
// 0x00C8 (0x04B0 - 0x03E8)
class UItemWindow_C final : public UFortActivatablePanel
{
public:
	uint8                                         Pad_3E8[0x8];                                      // 0x03E8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03F0(0x0008)(Transient, DuplicateTransient)
	class UIconTextButton_C*                      CloseButton;                                       // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortItemIcon*                          EntryIcon;                                         // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       EntryText;                                         // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                 FortItemCard_M_0;                                  // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeItemCard*                 FortItemCard_XXSSchematicItemCard;                 // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ItemButtonBox;                                     // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                            Lightbox;                                          // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_1;                                         // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxDetails;                                    // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher;                                          // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  SwitcherRewardType;                                // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Title;                                             // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonButtonGroup*                     Item_Buttons;                                      // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Common_Button_Group_Type;                          // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UFortItemDefinition*>            Item_Definitions;                                  // 0x0468(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FMargin                                ItemEntryPadding;                                  // 0x0478(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UFortItem*                              CurrentItemDef;                                    // 0x0488(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                    ItemDef;                                           // 0x0490(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                              InfoItemDef;                                       // 0x0498(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemEntry_C*                           LastEntry;                                         // 0x04A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LastIndex;                                         // 0x04A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ItemWindow(int32 EntryPoint);
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_37_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void Destruct();
	void OnSelectedButtonChanged_Event_0(class UCommonButton* AssociatedButton, int32 ButtonIndex);
	void AddInfo(TArray<class UFortItemDefinition*>& Info_Items, const class FText& Title_0);
	void Initialize();
	void HandleButton(class UWidget* Content, int32 Index_0);
	void InternalToExternalRarity(EFortRarity InRarity, class FText* ExternalRarity);
	void Set_Description_Text(class UFortItemDefinition* Item_Definition, class UCommonTextBlock* Text_Box_to_Set);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemWindow_C">();
	}
	static class UItemWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemWindow_C>();
	}
};
static_assert(alignof(UItemWindow_C) == 0x000008, "Wrong alignment on UItemWindow_C");
static_assert(sizeof(UItemWindow_C) == 0x0004B0, "Wrong size on UItemWindow_C");
static_assert(offsetof(UItemWindow_C, UberGraphFrame) == 0x0003F0, "Member 'UItemWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemWindow_C, CloseButton) == 0x0003F8, "Member 'UItemWindow_C::CloseButton' has a wrong offset!");
static_assert(offsetof(UItemWindow_C, EntryIcon) == 0x000400, "Member 'UItemWindow_C::EntryIcon' has a wrong offset!");
static_assert(offsetof(UItemWindow_C, EntryText) == 0x000408, "Member 'UItemWindow_C::EntryText' has a wrong offset!");
static_assert(offsetof(UItemWindow_C, FortItemCard_M_0) == 0x000410, "Member 'UItemWindow_C::FortItemCard_M_0' has a wrong offset!");
static_assert(offsetof(UItemWindow_C, FortItemCard_XXSSchematicItemCard) == 0x000418, "Member 'UItemWindow_C::FortItemCard_XXSSchematicItemCard' has a wrong offset!");
static_assert(offsetof(UItemWindow_C, ItemButtonBox) == 0x000420, "Member 'UItemWindow_C::ItemButtonBox' has a wrong offset!");
static_assert(offsetof(UItemWindow_C, Lightbox) == 0x000428, "Member 'UItemWindow_C::Lightbox' has a wrong offset!");
static_assert(offsetof(UItemWindow_C, SizeBox_1) == 0x000430, "Member 'UItemWindow_C::SizeBox_1' has a wrong offset!");
static_assert(offsetof(UItemWindow_C, SizeBoxDetails) == 0x000438, "Member 'UItemWindow_C::SizeBoxDetails' has a wrong offset!");
static_assert(offsetof(UItemWindow_C, Switcher) == 0x000440, "Member 'UItemWindow_C::Switcher' has a wrong offset!");
static_assert(offsetof(UItemWindow_C, SwitcherRewardType) == 0x000448, "Member 'UItemWindow_C::SwitcherRewardType' has a wrong offset!");
static_assert(offsetof(UItemWindow_C, Title) == 0x000450, "Member 'UItemWindow_C::Title' has a wrong offset!");
static_assert(offsetof(UItemWindow_C, Item_Buttons) == 0x000458, "Member 'UItemWindow_C::Item_Buttons' has a wrong offset!");
static_assert(offsetof(UItemWindow_C, Common_Button_Group_Type) == 0x000460, "Member 'UItemWindow_C::Common_Button_Group_Type' has a wrong offset!");
static_assert(offsetof(UItemWindow_C, Item_Definitions) == 0x000468, "Member 'UItemWindow_C::Item_Definitions' has a wrong offset!");
static_assert(offsetof(UItemWindow_C, ItemEntryPadding) == 0x000478, "Member 'UItemWindow_C::ItemEntryPadding' has a wrong offset!");
static_assert(offsetof(UItemWindow_C, CurrentItemDef) == 0x000488, "Member 'UItemWindow_C::CurrentItemDef' has a wrong offset!");
static_assert(offsetof(UItemWindow_C, ItemDef) == 0x000490, "Member 'UItemWindow_C::ItemDef' has a wrong offset!");
static_assert(offsetof(UItemWindow_C, InfoItemDef) == 0x000498, "Member 'UItemWindow_C::InfoItemDef' has a wrong offset!");
static_assert(offsetof(UItemWindow_C, LastEntry) == 0x0004A0, "Member 'UItemWindow_C::LastEntry' has a wrong offset!");
static_assert(offsetof(UItemWindow_C, LastIndex) == 0x0004A8, "Member 'UItemWindow_C::LastIndex' has a wrong offset!");

}

