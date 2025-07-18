﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAT_TriggeredAbility

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GAT_TriggeredAbility.GAT_TriggeredAbility_C
// 0x0010 (0x0AC0 - 0x0AB0)
class UGAT_TriggeredAbility_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0AB0(0x0008)(Transient, DuplicateTransient)
	struct FGameplayTag                           TC_AbilitiesGenericTriggeredAbilityActivate;       // 0x0AB8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GAT_TriggeredAbility(int32 EntryPoint);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GAT_TriggeredAbility_C">();
	}
	static class UGAT_TriggeredAbility_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGAT_TriggeredAbility_C>();
	}
};
static_assert(alignof(UGAT_TriggeredAbility_C) == 0x000008, "Wrong alignment on UGAT_TriggeredAbility_C");
static_assert(sizeof(UGAT_TriggeredAbility_C) == 0x000AC0, "Wrong size on UGAT_TriggeredAbility_C");
static_assert(offsetof(UGAT_TriggeredAbility_C, UberGraphFrame) == 0x000AB0, "Member 'UGAT_TriggeredAbility_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGAT_TriggeredAbility_C, TC_AbilitiesGenericTriggeredAbilityActivate) == 0x000AB8, "Member 'UGAT_TriggeredAbility_C::TC_AbilitiesGenericTriggeredAbilityActivate' has a wrong offset!");

}

