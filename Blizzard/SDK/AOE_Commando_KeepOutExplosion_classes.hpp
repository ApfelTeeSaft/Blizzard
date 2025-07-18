﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AOE_Commando_KeepOutExplosion

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C
// 0x0328 (0x0938 - 0x0610)
class AAOE_Commando_KeepOutExplosion_C final : public AFortAreaOfEffectCloud
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0610(0x0008)(Transient, DuplicateTransient)
	class UAudioComponent*                        AOE_Audio_Effect;                                  // 0x0618(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_Grenade_Linger;                                  // 0x0620(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       DamageArea;                                        // 0x0628(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0630(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Radius;                                            // 0x0638(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_63C[0x4];                                      // 0x063C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSoundAttenuationSettings              AOE_Sound_Attenuation_Based_On_Radius;             // 0x0640(0x02F0)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                             AOE_Electric_Sound;                                // 0x0930(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AOE_Commando_KeepOutExplosion(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void Send_Info(float Radius_0);
	void UserConstructionScript();
	void OnRep_Radius();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AOE_Commando_KeepOutExplosion_C">();
	}
	static class AAOE_Commando_KeepOutExplosion_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAOE_Commando_KeepOutExplosion_C>();
	}
};
static_assert(alignof(AAOE_Commando_KeepOutExplosion_C) == 0x000008, "Wrong alignment on AAOE_Commando_KeepOutExplosion_C");
static_assert(sizeof(AAOE_Commando_KeepOutExplosion_C) == 0x000938, "Wrong size on AAOE_Commando_KeepOutExplosion_C");
static_assert(offsetof(AAOE_Commando_KeepOutExplosion_C, UberGraphFrame) == 0x000610, "Member 'AAOE_Commando_KeepOutExplosion_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AAOE_Commando_KeepOutExplosion_C, AOE_Audio_Effect) == 0x000618, "Member 'AAOE_Commando_KeepOutExplosion_C::AOE_Audio_Effect' has a wrong offset!");
static_assert(offsetof(AAOE_Commando_KeepOutExplosion_C, P_Grenade_Linger) == 0x000620, "Member 'AAOE_Commando_KeepOutExplosion_C::P_Grenade_Linger' has a wrong offset!");
static_assert(offsetof(AAOE_Commando_KeepOutExplosion_C, DamageArea) == 0x000628, "Member 'AAOE_Commando_KeepOutExplosion_C::DamageArea' has a wrong offset!");
static_assert(offsetof(AAOE_Commando_KeepOutExplosion_C, DefaultSceneRoot) == 0x000630, "Member 'AAOE_Commando_KeepOutExplosion_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AAOE_Commando_KeepOutExplosion_C, Radius) == 0x000638, "Member 'AAOE_Commando_KeepOutExplosion_C::Radius' has a wrong offset!");
static_assert(offsetof(AAOE_Commando_KeepOutExplosion_C, AOE_Sound_Attenuation_Based_On_Radius) == 0x000640, "Member 'AAOE_Commando_KeepOutExplosion_C::AOE_Sound_Attenuation_Based_On_Radius' has a wrong offset!");
static_assert(offsetof(AAOE_Commando_KeepOutExplosion_C, AOE_Electric_Sound) == 0x000930, "Member 'AAOE_Commando_KeepOutExplosion_C::AOE_Electric_Sound' has a wrong offset!");

}

