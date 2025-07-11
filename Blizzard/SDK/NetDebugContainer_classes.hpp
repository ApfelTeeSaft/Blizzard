﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NetDebugContainer

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass NetDebugContainer.NetDebugContainer_C
// 0x0018 (0x0250 - 0x0238)
class UNetDebugContainer_C final : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0238(0x0008)(Transient, DuplicateTransient)
	class UInvalidationBox*                       InvalidationBox_0;                                 // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNetDebugUI_C*                          NetDebugUI;                                        // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_NetDebugContainer(int32 EntryPoint);
	void OnVisibilitySetEvent(ESlateVisibility InVisibility);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NetDebugContainer_C">();
	}
	static class UNetDebugContainer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetDebugContainer_C>();
	}
};
static_assert(alignof(UNetDebugContainer_C) == 0x000008, "Wrong alignment on UNetDebugContainer_C");
static_assert(sizeof(UNetDebugContainer_C) == 0x000250, "Wrong size on UNetDebugContainer_C");
static_assert(offsetof(UNetDebugContainer_C, UberGraphFrame) == 0x000238, "Member 'UNetDebugContainer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNetDebugContainer_C, InvalidationBox_0) == 0x000240, "Member 'UNetDebugContainer_C::InvalidationBox_0' has a wrong offset!");
static_assert(offsetof(UNetDebugContainer_C, NetDebugUI) == 0x000248, "Member 'UNetDebugContainer_C::NetDebugUI' has a wrong offset!");

}

