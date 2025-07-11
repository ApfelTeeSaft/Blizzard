﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_GM_Fury

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCNL_GM_Fury.GCNL_GM_Fury_C
// 0x00B0 (0x04F0 - 0x0440)
class AGCNL_GM_Fury_C final : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0440(0x0008)(Transient, DuplicateTransient)
	class UParticleSystemComponent*               FuryPS;                                            // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, struct FLinearColor>        VectorParameters;                                  // 0x0450(0x0050)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<class FName, float>                      ScalarParameters;                                  // 0x04A0(0x0050)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GCNL_GM_Fury(int32 EntryPoint);
	void OnEnemyDeath(class AActor* DeadActor, float Damage, class AFortPawn* InstigatedBy, const struct FVector& HitLocation, class AActor* DamageCauser);
	void BindOnDied(class AEnemyPawn_Parent_C* EnemyPawnParentReference);
	void UserConstructionScript();
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void DisableFuryPS();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_GM_Fury_C">();
	}
	static class AGCNL_GM_Fury_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_GM_Fury_C>();
	}
};
static_assert(alignof(AGCNL_GM_Fury_C) == 0x000010, "Wrong alignment on AGCNL_GM_Fury_C");
static_assert(sizeof(AGCNL_GM_Fury_C) == 0x0004F0, "Wrong size on AGCNL_GM_Fury_C");
static_assert(offsetof(AGCNL_GM_Fury_C, UberGraphFrame) == 0x000440, "Member 'AGCNL_GM_Fury_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCNL_GM_Fury_C, FuryPS) == 0x000448, "Member 'AGCNL_GM_Fury_C::FuryPS' has a wrong offset!");
static_assert(offsetof(AGCNL_GM_Fury_C, VectorParameters) == 0x000450, "Member 'AGCNL_GM_Fury_C::VectorParameters' has a wrong offset!");
static_assert(offsetof(AGCNL_GM_Fury_C, ScalarParameters) == 0x0004A0, "Member 'AGCNL_GM_Fury_C::ScalarParameters' has a wrong offset!");

}

