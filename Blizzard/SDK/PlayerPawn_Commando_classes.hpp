﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerPawn_Commando

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "PlayerPawn_Generic_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PlayerPawn_Commando.PlayerPawn_Commando_C
// 0x0140 (0x1E30 - 0x1CF0)
class APlayerPawn_Commando_C final : public APlayerPawn_Generic_C
{
public:
	uint8                                         Pad_1CE4[0x4];                                     // 0x1CE4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_PlayerPawn_Commando_C;              // 0x1CE8(0x0008)(Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 TargetHead;                                        // 0x1CF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 TargetBody;                                        // 0x1CF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>             PawnHeadMaterials_0;                               // 0x1D00(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>             PawnBodyMaterials_0;                               // 0x1D10(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystem*                        P_IncendiaryRound;                                 // 0x1D20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        P_MakeItRain;                                      // 0x1D28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_FlakVest;                                       // 0x1D30(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayEventData                     Event_Data;                                        // 0x1D50(0x00A8)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                           EventSpawnEffect;                                  // 0x1DF8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         ShockwaveRefractionRingHeight;                     // 0x1E00(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E04[0x4];                                     // 0x1E04(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        P_Shockwave;                                       // 0x1E08(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                   ShockwaveForceFeedback;                            // 0x1E10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 ShockwaveCameraShake;                              // 0x1E18(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMale;                                            // 0x1E20(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E21[0x7];                                     // 0x1E21(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_GoinCommandoWeapon_C*                MenuGoingCommandowWeapon;                          // 0x1E28(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PlayerPawn_Commando(int32 EntryPoint);
	void GameplayCue_Abilities_Applied_Commando_MakeItRain(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void CheckForGameState();
	void ReceiveDestroyed();
	void SelectPawn(class UAnimInstance* AnimInst);
	void ReceiveBeginPlay();
	void SetMenuScreenClassName();
	void GameplayCue_Abilities_Applied_Commando_IncendiaryRounds(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Commando_Shockwave(EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void ReceivePossessed(class AController* NewController);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerPawn_Commando_C">();
	}
	static class APlayerPawn_Commando_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APlayerPawn_Commando_C>();
	}
};
static_assert(alignof(APlayerPawn_Commando_C) == 0x000010, "Wrong alignment on APlayerPawn_Commando_C");
static_assert(sizeof(APlayerPawn_Commando_C) == 0x001E30, "Wrong size on APlayerPawn_Commando_C");
static_assert(offsetof(APlayerPawn_Commando_C, UberGraphFrame_PlayerPawn_Commando_C) == 0x001CE8, "Member 'APlayerPawn_Commando_C::UberGraphFrame_PlayerPawn_Commando_C' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Commando_C, TargetHead) == 0x001CF0, "Member 'APlayerPawn_Commando_C::TargetHead' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Commando_C, TargetBody) == 0x001CF8, "Member 'APlayerPawn_Commando_C::TargetBody' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Commando_C, PawnHeadMaterials_0) == 0x001D00, "Member 'APlayerPawn_Commando_C::PawnHeadMaterials_0' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Commando_C, PawnBodyMaterials_0) == 0x001D10, "Member 'APlayerPawn_Commando_C::PawnBodyMaterials_0' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Commando_C, P_IncendiaryRound) == 0x001D20, "Member 'APlayerPawn_Commando_C::P_IncendiaryRound' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Commando_C, P_MakeItRain) == 0x001D28, "Member 'APlayerPawn_Commando_C::P_MakeItRain' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Commando_C, TC_FlakVest) == 0x001D30, "Member 'APlayerPawn_Commando_C::TC_FlakVest' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Commando_C, Event_Data) == 0x001D50, "Member 'APlayerPawn_Commando_C::Event_Data' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Commando_C, EventSpawnEffect) == 0x001DF8, "Member 'APlayerPawn_Commando_C::EventSpawnEffect' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Commando_C, ShockwaveRefractionRingHeight) == 0x001E00, "Member 'APlayerPawn_Commando_C::ShockwaveRefractionRingHeight' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Commando_C, P_Shockwave) == 0x001E08, "Member 'APlayerPawn_Commando_C::P_Shockwave' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Commando_C, ShockwaveForceFeedback) == 0x001E10, "Member 'APlayerPawn_Commando_C::ShockwaveForceFeedback' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Commando_C, ShockwaveCameraShake) == 0x001E18, "Member 'APlayerPawn_Commando_C::ShockwaveCameraShake' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Commando_C, IsMale) == 0x001E20, "Member 'APlayerPawn_Commando_C::IsMale' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Commando_C, MenuGoingCommandowWeapon) == 0x001E28, "Member 'APlayerPawn_Commando_C::MenuGoingCommandowWeapon' has a wrong offset!");

}

