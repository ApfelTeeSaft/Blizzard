﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_Grenade_WithTrajectory

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C
// 0x0260 (0x0D10 - 0x0AB0)
class UGA_Athena_Grenade_WithTrajectory_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AB0(0x0008)(Transient, DuplicateTransient)
	struct FGameplayTag                           EventActivation;                                   // 0x0AB8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           EventComplete;                                     // 0x0AC0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Prj_Grenade;                                       // 0x0AC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         GrenadeSpeedMin;                                   // 0x0AD0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         GrenadeSpeedMax;                                   // 0x0AD4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         GravityScale;                                      // 0x0AD8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_ADC[0x4];                                      // 0x0ADC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             GrenadeSound;                                      // 0x0AE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           EC_DefaultExplosion;                               // 0x0AE8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FFortGameplayEffectContainerSpec       EC_ReturnedEffect;                                 // 0x0AF0(0x0080)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         ExplosionRadius;                                   // 0x0B70(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AdditionalThrowAngle;                              // 0x0B74(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortFeedbackHandle                    GrenadeDialogFeedback;                             // 0x0B78(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          GrenadeAmmo;                                       // 0x0B90(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          PlasmaGrenades;                                    // 0x0B91(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Flashbang;                                         // 0x0B92(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B93[0x1];                                      // 0x0B93(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                GrenadeTargetingOriginOffset;                      // 0x0B94(0x000C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortProjectileBase*                    DummyProjectile;                                   // 0x0BA0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DummyShouldBounce;                                 // 0x0BA8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_BA9[0x3];                                      // 0x0BA9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DummyBounciness;                                   // 0x0BAC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DummyFriction;                                     // 0x0BB0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TrajectoryUpdateInterval;                          // 0x0BB4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DummyMaxSpeed;                                     // 0x0BB8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DummyGravity;                                      // 0x0BBC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DummyTimeStep;                                     // 0x0BC0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DummyExtent;                                       // 0x0BC4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InThrowWindup;                                     // 0x0BC8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_BC9[0x7];                                      // 0x0BC9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ProjectileTrajectory_C*             TrajectoryIndicator;                               // 0x0BD0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 TrajectoryIndicatorClass;                          // 0x0BD8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortGameplayAbilityMontageInfo        ThrowWindupMontage;                                // 0x0BE0(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          AbilityKeyPressed;                                 // 0x0C40(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C41[0x3];                                      // 0x0C41(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MaxSpeedPitch;                                     // 0x0C44(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MinSpeedPitch;                                     // 0x0C48(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C4C[0x4];                                      // 0x0C4C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEventData                     Event_Data;                                        // 0x0C50(0x00A8)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0CF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxTossPitch;                                      // 0x0D00(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxTrajectoryBounces;                              // 0x0D04(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PostThrowCancelDelay;                              // 0x0D08(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Athena_Grenade_WithTrajectory(int32 EntryPoint);
	void TossGrenade();
	void CleanupTrajectoryDisplay();
	void K2_OnEndAbility(bool bWasCancelled);
	void OnAbilityInputReleased();
	void Server_SpawnProjectile(const struct FVector& Location, const struct FRotator& Direction);
	void K2_ActivateAbility();
	void OnFinish_D7F9D67243A9BA307AFBF7839EC5CA1C();
	void OnFinish_C70D988C492A7EF3B105DC8DADDBD86D();
	void OnCompleted_758AC809498064C01C71318E141D1E46();
	void OnBlendOut_758AC809498064C01C71318E141D1E46();
	void OnInterrupted_758AC809498064C01C71318E141D1E46();
	void OnCancelled_758AC809498064C01C71318E141D1E46();
	void OnFinish_4B1D92B7427697E6BD9D58ACA0F87155();
	void OnFinish_E8F8DC5A465F19B633AF0E8888171F5A();
	void Triggered_B08560984B3818F6EECB3C9A92E61ADC(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_B08560984B3818F6EECB3C9A92E61ADC(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Completed_B08560984B3818F6EECB3C9A92E61ADC(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Created_40FE015D40E881984FE611B980B75D52(const struct FProjectileEventData& ProjectileData);
	void Touched_40FE015D40E881984FE611B980B75D52(const struct FProjectileEventData& ProjectileData);
	void Bounced_40FE015D40E881984FE611B980B75D52(const struct FProjectileEventData& ProjectileData);
	void Stopped_40FE015D40E881984FE611B980B75D52(const struct FProjectileEventData& ProjectileData);
	void Exploded_40FE015D40E881984FE611B980B75D52(const struct FProjectileEventData& ProjectileData);
	void Destroyed_40FE015D40E881984FE611B980B75D52(const struct FProjectileEventData& ProjectileData);
	void SetupGrenade(float AimPitch, class UClass** Base_Grenade, float* Projectile_Speed, struct FFortGameplayEffectContainerSpec* Explosion_Gameplay_Spec, float* Projectile_Gravity_Scale);
	void SetupDummyProjectile();
	void UpdateTrajectorySpline();

	void SpawnLocationAndRotation(struct FVector* OutLoc, struct FRotator* OutRot) const;
	void CalcGrenadeSpeedFromPitch(float AimPitch, float* GrenadeSpeed) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_Grenade_WithTrajectory_C">();
	}
	static class UGA_Athena_Grenade_WithTrajectory_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_Grenade_WithTrajectory_C>();
	}
};
static_assert(alignof(UGA_Athena_Grenade_WithTrajectory_C) == 0x000008, "Wrong alignment on UGA_Athena_Grenade_WithTrajectory_C");
static_assert(sizeof(UGA_Athena_Grenade_WithTrajectory_C) == 0x000D10, "Wrong size on UGA_Athena_Grenade_WithTrajectory_C");
static_assert(offsetof(UGA_Athena_Grenade_WithTrajectory_C, UberGraphFrame) == 0x000AB0, "Member 'UGA_Athena_Grenade_WithTrajectory_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_WithTrajectory_C, EventActivation) == 0x000AB8, "Member 'UGA_Athena_Grenade_WithTrajectory_C::EventActivation' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_WithTrajectory_C, EventComplete) == 0x000AC0, "Member 'UGA_Athena_Grenade_WithTrajectory_C::EventComplete' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_WithTrajectory_C, Prj_Grenade) == 0x000AC8, "Member 'UGA_Athena_Grenade_WithTrajectory_C::Prj_Grenade' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_WithTrajectory_C, GrenadeSpeedMin) == 0x000AD0, "Member 'UGA_Athena_Grenade_WithTrajectory_C::GrenadeSpeedMin' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_WithTrajectory_C, GrenadeSpeedMax) == 0x000AD4, "Member 'UGA_Athena_Grenade_WithTrajectory_C::GrenadeSpeedMax' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_WithTrajectory_C, GravityScale) == 0x000AD8, "Member 'UGA_Athena_Grenade_WithTrajectory_C::GravityScale' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_WithTrajectory_C, GrenadeSound) == 0x000AE0, "Member 'UGA_Athena_Grenade_WithTrajectory_C::GrenadeSound' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_WithTrajectory_C, EC_DefaultExplosion) == 0x000AE8, "Member 'UGA_Athena_Grenade_WithTrajectory_C::EC_DefaultExplosion' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_WithTrajectory_C, EC_ReturnedEffect) == 0x000AF0, "Member 'UGA_Athena_Grenade_WithTrajectory_C::EC_ReturnedEffect' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_WithTrajectory_C, ExplosionRadius) == 0x000B70, "Member 'UGA_Athena_Grenade_WithTrajectory_C::ExplosionRadius' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_WithTrajectory_C, AdditionalThrowAngle) == 0x000B74, "Member 'UGA_Athena_Grenade_WithTrajectory_C::AdditionalThrowAngle' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_WithTrajectory_C, GrenadeDialogFeedback) == 0x000B78, "Member 'UGA_Athena_Grenade_WithTrajectory_C::GrenadeDialogFeedback' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_WithTrajectory_C, GrenadeAmmo) == 0x000B90, "Member 'UGA_Athena_Grenade_WithTrajectory_C::GrenadeAmmo' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_WithTrajectory_C, PlasmaGrenades) == 0x000B91, "Member 'UGA_Athena_Grenade_WithTrajectory_C::PlasmaGrenades' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_WithTrajectory_C, Flashbang) == 0x000B92, "Member 'UGA_Athena_Grenade_WithTrajectory_C::Flashbang' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_WithTrajectory_C, GrenadeTargetingOriginOffset) == 0x000B94, "Member 'UGA_Athena_Grenade_WithTrajectory_C::GrenadeTargetingOriginOffset' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_WithTrajectory_C, DummyProjectile) == 0x000BA0, "Member 'UGA_Athena_Grenade_WithTrajectory_C::DummyProjectile' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_WithTrajectory_C, DummyShouldBounce) == 0x000BA8, "Member 'UGA_Athena_Grenade_WithTrajectory_C::DummyShouldBounce' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_WithTrajectory_C, DummyBounciness) == 0x000BAC, "Member 'UGA_Athena_Grenade_WithTrajectory_C::DummyBounciness' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_WithTrajectory_C, DummyFriction) == 0x000BB0, "Member 'UGA_Athena_Grenade_WithTrajectory_C::DummyFriction' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_WithTrajectory_C, TrajectoryUpdateInterval) == 0x000BB4, "Member 'UGA_Athena_Grenade_WithTrajectory_C::TrajectoryUpdateInterval' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_WithTrajectory_C, DummyMaxSpeed) == 0x000BB8, "Member 'UGA_Athena_Grenade_WithTrajectory_C::DummyMaxSpeed' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_WithTrajectory_C, DummyGravity) == 0x000BBC, "Member 'UGA_Athena_Grenade_WithTrajectory_C::DummyGravity' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_WithTrajectory_C, DummyTimeStep) == 0x000BC0, "Member 'UGA_Athena_Grenade_WithTrajectory_C::DummyTimeStep' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_WithTrajectory_C, DummyExtent) == 0x000BC4, "Member 'UGA_Athena_Grenade_WithTrajectory_C::DummyExtent' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_WithTrajectory_C, InThrowWindup) == 0x000BC8, "Member 'UGA_Athena_Grenade_WithTrajectory_C::InThrowWindup' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_WithTrajectory_C, TrajectoryIndicator) == 0x000BD0, "Member 'UGA_Athena_Grenade_WithTrajectory_C::TrajectoryIndicator' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_WithTrajectory_C, TrajectoryIndicatorClass) == 0x000BD8, "Member 'UGA_Athena_Grenade_WithTrajectory_C::TrajectoryIndicatorClass' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_WithTrajectory_C, ThrowWindupMontage) == 0x000BE0, "Member 'UGA_Athena_Grenade_WithTrajectory_C::ThrowWindupMontage' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_WithTrajectory_C, AbilityKeyPressed) == 0x000C40, "Member 'UGA_Athena_Grenade_WithTrajectory_C::AbilityKeyPressed' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_WithTrajectory_C, MaxSpeedPitch) == 0x000C44, "Member 'UGA_Athena_Grenade_WithTrajectory_C::MaxSpeedPitch' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_WithTrajectory_C, MinSpeedPitch) == 0x000C48, "Member 'UGA_Athena_Grenade_WithTrajectory_C::MinSpeedPitch' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_WithTrajectory_C, Event_Data) == 0x000C50, "Member 'UGA_Athena_Grenade_WithTrajectory_C::Event_Data' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_WithTrajectory_C, PlayerPawn) == 0x000CF8, "Member 'UGA_Athena_Grenade_WithTrajectory_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_WithTrajectory_C, MaxTossPitch) == 0x000D00, "Member 'UGA_Athena_Grenade_WithTrajectory_C::MaxTossPitch' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_WithTrajectory_C, MaxTrajectoryBounces) == 0x000D04, "Member 'UGA_Athena_Grenade_WithTrajectory_C::MaxTrajectoryBounces' has a wrong offset!");
static_assert(offsetof(UGA_Athena_Grenade_WithTrajectory_C, PostThrowCancelDelay) == 0x000D08, "Member 'UGA_Athena_Grenade_WithTrajectory_C::PostThrowCancelDelay' has a wrong offset!");

}

