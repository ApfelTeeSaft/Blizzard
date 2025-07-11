﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaChallengeBundle_UpsellButton

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaChallengeBundle_UpsellButton.AthenaChallengeBundle_UpsellButton_C
// 0x0018 (0x0220 - 0x0208)
class UAthenaChallengeBundle_UpsellButton_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0208(0x0008)(Transient, DuplicateTransient)
	class UIconTextButton_C*                      PurchaseButton;                                    // 0x0210(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortChallengeBundleItemDefinition*     ChallengeItemDefinition;                           // 0x0218(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaChallengeBundle_UpsellButton(int32 EntryPoint);
	void BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_56_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void SetChallengeBundle(class UFortChallengeBundleItemDefinition* InChallengeItem);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaChallengeBundle_UpsellButton_C">();
	}
	static class UAthenaChallengeBundle_UpsellButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaChallengeBundle_UpsellButton_C>();
	}
};
static_assert(alignof(UAthenaChallengeBundle_UpsellButton_C) == 0x000008, "Wrong alignment on UAthenaChallengeBundle_UpsellButton_C");
static_assert(sizeof(UAthenaChallengeBundle_UpsellButton_C) == 0x000220, "Wrong size on UAthenaChallengeBundle_UpsellButton_C");
static_assert(offsetof(UAthenaChallengeBundle_UpsellButton_C, UberGraphFrame) == 0x000208, "Member 'UAthenaChallengeBundle_UpsellButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeBundle_UpsellButton_C, PurchaseButton) == 0x000210, "Member 'UAthenaChallengeBundle_UpsellButton_C::PurchaseButton' has a wrong offset!");
static_assert(offsetof(UAthenaChallengeBundle_UpsellButton_C, ChallengeItemDefinition) == 0x000218, "Member 'UAthenaChallengeBundle_UpsellButton_C::ChallengeItemDefinition' has a wrong offset!");

}

