﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TT_SupplyDrop

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TT_SupplyDrop.TT_SupplyDrop_C
// 0x0000 (0x0168 - 0x0168)
class UTT_SupplyDrop_C final : public UFortGameplayAbilityTooltip
{
public:
	bool GetTextForTokenFromAbilityInstanceInternal(const class UGameplayAbility* AbilityInstance, const struct FGameplayTag& Tag, const class UFortTooltipContext* Context, const struct FGameplayTag& Token, class FText* OutText) const;
	void InitializeAbilityInstanceInternal(const class UGameplayAbility* AbilityInstance, const class UFortTooltipContext* Context) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TT_SupplyDrop_C">();
	}
	static class UTT_SupplyDrop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTT_SupplyDrop_C>();
	}
};
static_assert(alignof(UTT_SupplyDrop_C) == 0x000008, "Wrong alignment on UTT_SupplyDrop_C");
static_assert(sizeof(UTT_SupplyDrop_C) == 0x000168, "Wrong size on UTT_SupplyDrop_C");

}

