﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EquippedItem_Bandolier

#include "Basic.hpp"

#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EquippedItem-Bandolier.EquippedItem-Bandolier_C
// 0x0018 (0x0228 - 0x0210)
class UEquippedItem_Bandolier_C final : public UCommonUserWidget
{
public:
	class UImage*                                 _Image__Current;                                   // 0x0210(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 _Image__Max;                                       // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         MaxDisplayCapacity;                                // 0x0220(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UpdateCurrent(int32 Current, class UFortAmmoItemDefinition* AmmoData);
	void UpdateCapacity(int32 Capacity, class UFortAmmoItemDefinition* AmmoData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EquippedItem-Bandolier_C">();
	}
	static class UEquippedItem_Bandolier_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEquippedItem_Bandolier_C>();
	}
};
static_assert(alignof(UEquippedItem_Bandolier_C) == 0x000008, "Wrong alignment on UEquippedItem_Bandolier_C");
static_assert(sizeof(UEquippedItem_Bandolier_C) == 0x000228, "Wrong size on UEquippedItem_Bandolier_C");
static_assert(offsetof(UEquippedItem_Bandolier_C, _Image__Current) == 0x000210, "Member 'UEquippedItem_Bandolier_C::_Image__Current' has a wrong offset!");
static_assert(offsetof(UEquippedItem_Bandolier_C, _Image__Max) == 0x000218, "Member 'UEquippedItem_Bandolier_C::_Image__Max' has a wrong offset!");
static_assert(offsetof(UEquippedItem_Bandolier_C, MaxDisplayCapacity) == 0x000220, "Member 'UEquippedItem_Bandolier_C::MaxDisplayCapacity' has a wrong offset!");

}

