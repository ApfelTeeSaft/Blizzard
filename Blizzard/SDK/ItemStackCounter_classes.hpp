﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemStackCounter

#include "Basic.hpp"

#include "CommonUI_classes.hpp"
#include "FortniteGame_structs.hpp"
#include "UMG_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemStackCounter.ItemStackCounter_C
// 0x0570 (0x0780 - 0x0210)
class UItemStackCounter_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class USizeBox*                               _SizeBox_;                                         // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                          BorderBase;                                        // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextCounter;                                       // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortMultiSizeBrush                    MultiSizeBase;                                     // 0x0230(0x02D0)(Edit, BlueprintVisible)
	struct FFortMultiSizeFont                     MultiSizeFont;                                     // 0x0500(0x0210)(Edit, BlueprintVisible)
	struct FFortMultiSizeMargin                   MultiSizeMargin;                                   // 0x0710(0x0060)(Edit, BlueprintVisible, NoDestructor)
	EFortBrushSize                                Brush_Size;                                        // 0x0770(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_771[0x3];                                      // 0x0771(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Count;                                             // 0x0774(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AlwaysVisible;                                     // 0x0778(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          TruncateValue;                                     // 0x0779(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	ESlateVisibility                              VisibilityWithNoStack;                             // 0x077A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ItemStackCounter(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void Update(EFortBrushSize Brush_Size_0, int32 Count_0);
	void Set_Stack_Count(int32 Count_0);
	void Refresh_Visibility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemStackCounter_C">();
	}
	static class UItemStackCounter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemStackCounter_C>();
	}
};
static_assert(alignof(UItemStackCounter_C) == 0x000008, "Wrong alignment on UItemStackCounter_C");
static_assert(sizeof(UItemStackCounter_C) == 0x000780, "Wrong size on UItemStackCounter_C");
static_assert(offsetof(UItemStackCounter_C, UberGraphFrame) == 0x000210, "Member 'UItemStackCounter_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UItemStackCounter_C, _SizeBox_) == 0x000218, "Member 'UItemStackCounter_C::_SizeBox_' has a wrong offset!");
static_assert(offsetof(UItemStackCounter_C, BorderBase) == 0x000220, "Member 'UItemStackCounter_C::BorderBase' has a wrong offset!");
static_assert(offsetof(UItemStackCounter_C, TextCounter) == 0x000228, "Member 'UItemStackCounter_C::TextCounter' has a wrong offset!");
static_assert(offsetof(UItemStackCounter_C, MultiSizeBase) == 0x000230, "Member 'UItemStackCounter_C::MultiSizeBase' has a wrong offset!");
static_assert(offsetof(UItemStackCounter_C, MultiSizeFont) == 0x000500, "Member 'UItemStackCounter_C::MultiSizeFont' has a wrong offset!");
static_assert(offsetof(UItemStackCounter_C, MultiSizeMargin) == 0x000710, "Member 'UItemStackCounter_C::MultiSizeMargin' has a wrong offset!");
static_assert(offsetof(UItemStackCounter_C, Brush_Size) == 0x000770, "Member 'UItemStackCounter_C::Brush_Size' has a wrong offset!");
static_assert(offsetof(UItemStackCounter_C, Count) == 0x000774, "Member 'UItemStackCounter_C::Count' has a wrong offset!");
static_assert(offsetof(UItemStackCounter_C, AlwaysVisible) == 0x000778, "Member 'UItemStackCounter_C::AlwaysVisible' has a wrong offset!");
static_assert(offsetof(UItemStackCounter_C, TruncateValue) == 0x000779, "Member 'UItemStackCounter_C::TruncateValue' has a wrong offset!");
static_assert(offsetof(UItemStackCounter_C, VisibilityWithNoStack) == 0x00077A, "Member 'UItemStackCounter_C::VisibilityWithNoStack' has a wrong offset!");

}

