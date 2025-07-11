﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AccountLinkingWindow

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AccountLinkingWindow.AccountLinkingWindow_C
// 0x01E8 (0x0608 - 0x0420)
class UAccountLinkingWindow_C final : public UFortAccountLinkingWindow
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0420(0x0008)(Transient, DuplicateTransient)
	class UIconTextButton_C*                      ButtonLogIn;                                       // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ButtonLogInFromPurchase;                           // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ButtonNoThanks;                                    // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ButtonPurchasePack;                                // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ButtonSIGNUP;                                      // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ButtonSkipSignInLogIn;                             // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ButtonSkipSignInNoThanks;                          // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ButtonSkipSignInSignup;                            // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCircularThrobber*                      CircularThrobberArtificialDelay;                   // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       CommonTextSignInText;                              // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBackgroundBlur*                        HaveEpicAccountBlur;                               // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      IconTextButton;                                    // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageLowerSpacer;                                  // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  MainWidgetSwitcher;                                // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBackgroundBlur*                        PurchasePackBlur;                                  // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      RedeemCodeButton;                                  // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBackgroundBlur*                        SkipSignInBlur;                                    // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBoxBuyAccess;                              // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBoxHaveEpicAccount;                        // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBoxSkipSignIn;                             // 0x04C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcherNoThanksSwitcher;                    // 0x04C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   OpeningStoreText;                                  // 0x04D0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   CheckingPurchasesText;                             // 0x04E8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   PurchasePackText;                                  // 0x0500(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   PurchaseFreePackText;                              // 0x0518(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   CreatingAccountText;                               // 0x0530(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   CreateHeadlessAccountFailedText;                   // 0x0548(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   ProceedingWithoutLinkingAccountsText;              // 0x0560(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	UMulticastDelegateProperty_                   OnRequestAutoLogin;                                // 0x0578(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   OnAccountLinkingComplete;                          // 0x0588(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   OnRequestSignIn;                                   // 0x0598(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   OnAccountLinkingFailed;                            // 0x05A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   OnPushStatus;                                      // 0x05B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   OnPopStatus;                                       // 0x05C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   OnViewEula;                                        // 0x05D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bLinkedAccountNeedsPurchase;                       // 0x05E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5E9[0x7];                                      // 0x05E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   OpeningCodeRedemption;                             // 0x05F0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_AccountLinkingWindow(int32 EntryPoint);
	void BndEvt__ButtonPurchasePack_K2Node_ComponentBoundEvent_175_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void HandleNewPurchaseReceipt();
	void Destruct();
	void BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_305_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnActivated();
	void BndEvt__IconTextButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void StartSignup();
	void ArtificialDelayExpired();
	void ShowSkipSignInScreen();
	void ShowHaveEpicAccountScreen();
	void ShowBuyAccessScreen();
	void BndEvt__ButtonSkipSignInNoThanks_K2Node_ComponentBoundEvent_483_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonSkipSignInLogIn_K2Node_ComponentBoundEvent_463_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonSkipSignInSignIn_K2Node_ComponentBoundEvent_444_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonSignUp_K2Node_ComponentBoundEvent_416_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonLogIn_K2Node_ComponentBoundEvent_431_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonNoThanks_K2Node_ComponentBoundEvent_447_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonLogInFromPurchase_K2Node_ComponentBoundEvent_464_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnShowLinkOrBuyAccessScreen_6FD0DEB74DEF4060FC743CB004F3E654();
	void OnShowHaveEpicAccountScreen_6FD0DEB74DEF4060FC743CB004F3E654();
	void OnCodeRedeemComplete_E9B5F30942BE3B295E62309A2EB8DA8D();
	void OnCodeRedeemCanceled_E9B5F30942BE3B295E62309A2EB8DA8D();
	void OnPurchased_3B76089F4EB5000544C7BD8B10E707CF();
	void OnNotPurchased_3B76089F4EB5000544C7BD8B10E707CF();
	void OnAccountCreated_9EEEC6E44BF7A7C172929DA05184702A();
	void OnAccountNotCreated_9EEEC6E44BF7A7C172929DA05184702A();
	void OnAccountCreatedAndLinked_2B6C467D495BF62E436C79B3550FE868();
	void OnAccountCreatedButNotLinked_2B6C467D495BF62E436C79B3550FE868();
	void OnAccountNotCreated_2B6C467D495BF62E436C79B3550FE868();
	void SetLinkedAccountNeedsPurchase(bool bInLinkedAccountNeedsPurchase);
	void HideLinkOptions();
	void SetupLinkText();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AccountLinkingWindow_C">();
	}
	static class UAccountLinkingWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAccountLinkingWindow_C>();
	}
};
static_assert(alignof(UAccountLinkingWindow_C) == 0x000008, "Wrong alignment on UAccountLinkingWindow_C");
static_assert(sizeof(UAccountLinkingWindow_C) == 0x000608, "Wrong size on UAccountLinkingWindow_C");
static_assert(offsetof(UAccountLinkingWindow_C, UberGraphFrame) == 0x000420, "Member 'UAccountLinkingWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAccountLinkingWindow_C, ButtonLogIn) == 0x000428, "Member 'UAccountLinkingWindow_C::ButtonLogIn' has a wrong offset!");
static_assert(offsetof(UAccountLinkingWindow_C, ButtonLogInFromPurchase) == 0x000430, "Member 'UAccountLinkingWindow_C::ButtonLogInFromPurchase' has a wrong offset!");
static_assert(offsetof(UAccountLinkingWindow_C, ButtonNoThanks) == 0x000438, "Member 'UAccountLinkingWindow_C::ButtonNoThanks' has a wrong offset!");
static_assert(offsetof(UAccountLinkingWindow_C, ButtonPurchasePack) == 0x000440, "Member 'UAccountLinkingWindow_C::ButtonPurchasePack' has a wrong offset!");
static_assert(offsetof(UAccountLinkingWindow_C, ButtonSIGNUP) == 0x000448, "Member 'UAccountLinkingWindow_C::ButtonSIGNUP' has a wrong offset!");
static_assert(offsetof(UAccountLinkingWindow_C, ButtonSkipSignInLogIn) == 0x000450, "Member 'UAccountLinkingWindow_C::ButtonSkipSignInLogIn' has a wrong offset!");
static_assert(offsetof(UAccountLinkingWindow_C, ButtonSkipSignInNoThanks) == 0x000458, "Member 'UAccountLinkingWindow_C::ButtonSkipSignInNoThanks' has a wrong offset!");
static_assert(offsetof(UAccountLinkingWindow_C, ButtonSkipSignInSignup) == 0x000460, "Member 'UAccountLinkingWindow_C::ButtonSkipSignInSignup' has a wrong offset!");
static_assert(offsetof(UAccountLinkingWindow_C, CircularThrobberArtificialDelay) == 0x000468, "Member 'UAccountLinkingWindow_C::CircularThrobberArtificialDelay' has a wrong offset!");
static_assert(offsetof(UAccountLinkingWindow_C, CommonTextSignInText) == 0x000470, "Member 'UAccountLinkingWindow_C::CommonTextSignInText' has a wrong offset!");
static_assert(offsetof(UAccountLinkingWindow_C, HaveEpicAccountBlur) == 0x000478, "Member 'UAccountLinkingWindow_C::HaveEpicAccountBlur' has a wrong offset!");
static_assert(offsetof(UAccountLinkingWindow_C, IconTextButton) == 0x000480, "Member 'UAccountLinkingWindow_C::IconTextButton' has a wrong offset!");
static_assert(offsetof(UAccountLinkingWindow_C, ImageLowerSpacer) == 0x000488, "Member 'UAccountLinkingWindow_C::ImageLowerSpacer' has a wrong offset!");
static_assert(offsetof(UAccountLinkingWindow_C, MainWidgetSwitcher) == 0x000490, "Member 'UAccountLinkingWindow_C::MainWidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UAccountLinkingWindow_C, PurchasePackBlur) == 0x000498, "Member 'UAccountLinkingWindow_C::PurchasePackBlur' has a wrong offset!");
static_assert(offsetof(UAccountLinkingWindow_C, RedeemCodeButton) == 0x0004A0, "Member 'UAccountLinkingWindow_C::RedeemCodeButton' has a wrong offset!");
static_assert(offsetof(UAccountLinkingWindow_C, SkipSignInBlur) == 0x0004A8, "Member 'UAccountLinkingWindow_C::SkipSignInBlur' has a wrong offset!");
static_assert(offsetof(UAccountLinkingWindow_C, VerticalBoxBuyAccess) == 0x0004B0, "Member 'UAccountLinkingWindow_C::VerticalBoxBuyAccess' has a wrong offset!");
static_assert(offsetof(UAccountLinkingWindow_C, VerticalBoxHaveEpicAccount) == 0x0004B8, "Member 'UAccountLinkingWindow_C::VerticalBoxHaveEpicAccount' has a wrong offset!");
static_assert(offsetof(UAccountLinkingWindow_C, VerticalBoxSkipSignIn) == 0x0004C0, "Member 'UAccountLinkingWindow_C::VerticalBoxSkipSignIn' has a wrong offset!");
static_assert(offsetof(UAccountLinkingWindow_C, WidgetSwitcherNoThanksSwitcher) == 0x0004C8, "Member 'UAccountLinkingWindow_C::WidgetSwitcherNoThanksSwitcher' has a wrong offset!");
static_assert(offsetof(UAccountLinkingWindow_C, OpeningStoreText) == 0x0004D0, "Member 'UAccountLinkingWindow_C::OpeningStoreText' has a wrong offset!");
static_assert(offsetof(UAccountLinkingWindow_C, CheckingPurchasesText) == 0x0004E8, "Member 'UAccountLinkingWindow_C::CheckingPurchasesText' has a wrong offset!");
static_assert(offsetof(UAccountLinkingWindow_C, PurchasePackText) == 0x000500, "Member 'UAccountLinkingWindow_C::PurchasePackText' has a wrong offset!");
static_assert(offsetof(UAccountLinkingWindow_C, PurchaseFreePackText) == 0x000518, "Member 'UAccountLinkingWindow_C::PurchaseFreePackText' has a wrong offset!");
static_assert(offsetof(UAccountLinkingWindow_C, CreatingAccountText) == 0x000530, "Member 'UAccountLinkingWindow_C::CreatingAccountText' has a wrong offset!");
static_assert(offsetof(UAccountLinkingWindow_C, CreateHeadlessAccountFailedText) == 0x000548, "Member 'UAccountLinkingWindow_C::CreateHeadlessAccountFailedText' has a wrong offset!");
static_assert(offsetof(UAccountLinkingWindow_C, ProceedingWithoutLinkingAccountsText) == 0x000560, "Member 'UAccountLinkingWindow_C::ProceedingWithoutLinkingAccountsText' has a wrong offset!");
static_assert(offsetof(UAccountLinkingWindow_C, OnRequestAutoLogin) == 0x000578, "Member 'UAccountLinkingWindow_C::OnRequestAutoLogin' has a wrong offset!");
static_assert(offsetof(UAccountLinkingWindow_C, OnAccountLinkingComplete) == 0x000588, "Member 'UAccountLinkingWindow_C::OnAccountLinkingComplete' has a wrong offset!");
static_assert(offsetof(UAccountLinkingWindow_C, OnRequestSignIn) == 0x000598, "Member 'UAccountLinkingWindow_C::OnRequestSignIn' has a wrong offset!");
static_assert(offsetof(UAccountLinkingWindow_C, OnAccountLinkingFailed) == 0x0005A8, "Member 'UAccountLinkingWindow_C::OnAccountLinkingFailed' has a wrong offset!");
static_assert(offsetof(UAccountLinkingWindow_C, OnPushStatus) == 0x0005B8, "Member 'UAccountLinkingWindow_C::OnPushStatus' has a wrong offset!");
static_assert(offsetof(UAccountLinkingWindow_C, OnPopStatus) == 0x0005C8, "Member 'UAccountLinkingWindow_C::OnPopStatus' has a wrong offset!");
static_assert(offsetof(UAccountLinkingWindow_C, OnViewEula) == 0x0005D8, "Member 'UAccountLinkingWindow_C::OnViewEula' has a wrong offset!");
static_assert(offsetof(UAccountLinkingWindow_C, bLinkedAccountNeedsPurchase) == 0x0005E8, "Member 'UAccountLinkingWindow_C::bLinkedAccountNeedsPurchase' has a wrong offset!");
static_assert(offsetof(UAccountLinkingWindow_C, OpeningCodeRedemption) == 0x0005F0, "Member 'UAccountLinkingWindow_C::OpeningCodeRedemption' has a wrong offset!");

}

