﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PackResource

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PackResource.PackResource_C
// 0x0030 (0x0240 - 0x0210)
class UPackResource_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UCommonBorder*                          Background;                                        // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageResourceIcon;                                 // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonNumericTextBlock*                NumericTextCount;                                  // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EFortResourceType                             ResourceType;                                      // 0x0230(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_231[0x3];                                      // 0x0231(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ResourceCount;                                     // 0x0234(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ActiveResource;                                    // 0x0238(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_PackResource(int32 EntryPoint);
	void Construct();
	void UpdateCount();
	void UpdateType(EFortResourceType ResourceType_0);
	void TryUpdateBackground();
	void TryUpdateCount();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PackResource_C">();
	}
	static class UPackResource_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPackResource_C>();
	}
};
static_assert(alignof(UPackResource_C) == 0x000008, "Wrong alignment on UPackResource_C");
static_assert(sizeof(UPackResource_C) == 0x000240, "Wrong size on UPackResource_C");
static_assert(offsetof(UPackResource_C, UberGraphFrame) == 0x000210, "Member 'UPackResource_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPackResource_C, Background) == 0x000218, "Member 'UPackResource_C::Background' has a wrong offset!");
static_assert(offsetof(UPackResource_C, ImageResourceIcon) == 0x000220, "Member 'UPackResource_C::ImageResourceIcon' has a wrong offset!");
static_assert(offsetof(UPackResource_C, NumericTextCount) == 0x000228, "Member 'UPackResource_C::NumericTextCount' has a wrong offset!");
static_assert(offsetof(UPackResource_C, ResourceType) == 0x000230, "Member 'UPackResource_C::ResourceType' has a wrong offset!");
static_assert(offsetof(UPackResource_C, ResourceCount) == 0x000234, "Member 'UPackResource_C::ResourceCount' has a wrong offset!");
static_assert(offsetof(UPackResource_C, ActiveResource) == 0x000238, "Member 'UPackResource_C::ActiveResource' has a wrong offset!");

}

