﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WM_PinManager

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass WM_PinManager.WM_PinManager_C
// 0x0010 (0x0348 - 0x0338)
class AWM_PinManager_C final : public AWorldMapPinManager
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0338(0x0008)(Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WM_PinManager(int32 EntryPoint);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	class AWorldMapPin* CreateWorldMapPin(const class FString& TheaterId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WM_PinManager_C">();
	}
	static class AWM_PinManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWM_PinManager_C>();
	}
};
static_assert(alignof(AWM_PinManager_C) == 0x000008, "Wrong alignment on AWM_PinManager_C");
static_assert(sizeof(AWM_PinManager_C) == 0x000348, "Wrong size on AWM_PinManager_C");
static_assert(offsetof(AWM_PinManager_C, UberGraphFrame) == 0x000338, "Member 'AWM_PinManager_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AWM_PinManager_C, DefaultSceneRoot) == 0x000340, "Member 'AWM_PinManager_C::DefaultSceneRoot' has a wrong offset!");

}

