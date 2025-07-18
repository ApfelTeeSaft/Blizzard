﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VaultCharacterLightingBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass VaultCharacterLightingBP.VaultCharacterLightingBP_C
// 0x0090 (0x03A8 - 0x0318)
class AVaultCharacterLightingBP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0318(0x0008)(Transient, DuplicateTransient)
	class UArrowComponent*                        Arrow;                                             // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDirectionalLightComponent*             DirectionalLightMobile;                            // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkyLightComponent*                     SkyLightLowSettings;                               // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkyLightComponent*                     SkyLight;                                          // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    LightComponent010;                                 // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    LightComponent09;                                  // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    LightComponent08;                                  // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    LightComponent07;                                  // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    LightComponent06;                                  // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    LightComponent05;                                  // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    LightComponent04;                                  // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    LightComponent03;                                  // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    LightComponent02;                                  // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    LightComponent01;                                  // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    LightComponent0;                                   // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        SharedRoot;                                        // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          DebugMobile_Lighting;                              // 0x03A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_VaultCharacterLightingBP(int32 EntryPoint);
	void ReceiveBeginPlay();
	void LightControl(bool NewParam);
	void UserConstructionScript();
	void SwitchMobileLighting(bool Visibilty);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VaultCharacterLightingBP_C">();
	}
	static class AVaultCharacterLightingBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AVaultCharacterLightingBP_C>();
	}
};
static_assert(alignof(AVaultCharacterLightingBP_C) == 0x000008, "Wrong alignment on AVaultCharacterLightingBP_C");
static_assert(sizeof(AVaultCharacterLightingBP_C) == 0x0003A8, "Wrong size on AVaultCharacterLightingBP_C");
static_assert(offsetof(AVaultCharacterLightingBP_C, UberGraphFrame) == 0x000318, "Member 'AVaultCharacterLightingBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AVaultCharacterLightingBP_C, Arrow) == 0x000320, "Member 'AVaultCharacterLightingBP_C::Arrow' has a wrong offset!");
static_assert(offsetof(AVaultCharacterLightingBP_C, DirectionalLightMobile) == 0x000328, "Member 'AVaultCharacterLightingBP_C::DirectionalLightMobile' has a wrong offset!");
static_assert(offsetof(AVaultCharacterLightingBP_C, SkyLightLowSettings) == 0x000330, "Member 'AVaultCharacterLightingBP_C::SkyLightLowSettings' has a wrong offset!");
static_assert(offsetof(AVaultCharacterLightingBP_C, SkyLight) == 0x000338, "Member 'AVaultCharacterLightingBP_C::SkyLight' has a wrong offset!");
static_assert(offsetof(AVaultCharacterLightingBP_C, LightComponent010) == 0x000340, "Member 'AVaultCharacterLightingBP_C::LightComponent010' has a wrong offset!");
static_assert(offsetof(AVaultCharacterLightingBP_C, LightComponent09) == 0x000348, "Member 'AVaultCharacterLightingBP_C::LightComponent09' has a wrong offset!");
static_assert(offsetof(AVaultCharacterLightingBP_C, LightComponent08) == 0x000350, "Member 'AVaultCharacterLightingBP_C::LightComponent08' has a wrong offset!");
static_assert(offsetof(AVaultCharacterLightingBP_C, LightComponent07) == 0x000358, "Member 'AVaultCharacterLightingBP_C::LightComponent07' has a wrong offset!");
static_assert(offsetof(AVaultCharacterLightingBP_C, LightComponent06) == 0x000360, "Member 'AVaultCharacterLightingBP_C::LightComponent06' has a wrong offset!");
static_assert(offsetof(AVaultCharacterLightingBP_C, LightComponent05) == 0x000368, "Member 'AVaultCharacterLightingBP_C::LightComponent05' has a wrong offset!");
static_assert(offsetof(AVaultCharacterLightingBP_C, LightComponent04) == 0x000370, "Member 'AVaultCharacterLightingBP_C::LightComponent04' has a wrong offset!");
static_assert(offsetof(AVaultCharacterLightingBP_C, LightComponent03) == 0x000378, "Member 'AVaultCharacterLightingBP_C::LightComponent03' has a wrong offset!");
static_assert(offsetof(AVaultCharacterLightingBP_C, LightComponent02) == 0x000380, "Member 'AVaultCharacterLightingBP_C::LightComponent02' has a wrong offset!");
static_assert(offsetof(AVaultCharacterLightingBP_C, LightComponent01) == 0x000388, "Member 'AVaultCharacterLightingBP_C::LightComponent01' has a wrong offset!");
static_assert(offsetof(AVaultCharacterLightingBP_C, LightComponent0) == 0x000390, "Member 'AVaultCharacterLightingBP_C::LightComponent0' has a wrong offset!");
static_assert(offsetof(AVaultCharacterLightingBP_C, SharedRoot) == 0x000398, "Member 'AVaultCharacterLightingBP_C::SharedRoot' has a wrong offset!");
static_assert(offsetof(AVaultCharacterLightingBP_C, DebugMobile_Lighting) == 0x0003A0, "Member 'AVaultCharacterLightingBP_C::DebugMobile_Lighting' has a wrong offset!");

}

