﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaLobbyPlayerPanelActions

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C
// 0x01F8 (0x0408 - 0x0210)
class UAthenaLobbyPlayerPanelActions_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0210(0x0008)(Transient, DuplicateTransient)
	class UVerticalBox*                           BoxActions;                                        // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ButtonAddFriend;                                   // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ButtonInviteParty;                                 // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ButtonManage;                                      // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ButtonMute;                                        // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      ViewProfileButton;                                 // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      HoveredActionButton;                               // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnGadgetsClicked;                                  // 0x0250(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FFortTeamMemberInfo                    TeamMemberInfo;                                    // 0x0260(0x01A8)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void ExecuteUbergraph_AthenaLobbyPlayerPanelActions(int32 EntryPoint);
	void BndEvt__ButtonMute_K2Node_ComponentBoundEvent_46_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonInviteParty_K2Node_ComponentBoundEvent_121_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonAddFriend_K2Node_ComponentBoundEvent_103_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ButtonManage_K2Node_ComponentBoundEvent_86_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnButtonHovered(class UCommonButton* Button);
	void Initialize();
	void Refresh();
	void IsLocalPlayer(bool* bIsLocalPlayer);
	void IsMissionLocalPlayersOutpost(bool* isLocalPlayersOutpost);
	void CanFriend(bool* bCanFriend);
	void CanInviteToParty(bool* bCanInviteToParty);
	void IsInvitationPending(bool* bIsInvitationPending);
	void CanManage(bool* bCanManage);
	void GetFirstActiveActionButton(class UIconTextButton_C** IconTextButton);
	void HasValidActions(bool* bHasValidActions);
	void Focus();
	void InitializeContextEvents();
	void OnPartyInvitesCountChanged(int32 InvitesCount);
	void OnActiveFriendsCountUpdated(int32 ActiveFriendsCount);
	void SetTeamMemberInfo(const struct FFortTeamMemberInfo& TeamMemberInfo_0);
	bool IsTeamMemberLocalPlayer();
	void CanViewProfile(bool* CanView);
	void OnMutingChanged(const struct FUniqueNetIdRepl& NewParam, bool NewParam1);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaLobbyPlayerPanelActions_C">();
	}
	static class UAthenaLobbyPlayerPanelActions_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaLobbyPlayerPanelActions_C>();
	}
};
static_assert(alignof(UAthenaLobbyPlayerPanelActions_C) == 0x000008, "Wrong alignment on UAthenaLobbyPlayerPanelActions_C");
static_assert(sizeof(UAthenaLobbyPlayerPanelActions_C) == 0x000408, "Wrong size on UAthenaLobbyPlayerPanelActions_C");
static_assert(offsetof(UAthenaLobbyPlayerPanelActions_C, UberGraphFrame) == 0x000210, "Member 'UAthenaLobbyPlayerPanelActions_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAthenaLobbyPlayerPanelActions_C, BoxActions) == 0x000218, "Member 'UAthenaLobbyPlayerPanelActions_C::BoxActions' has a wrong offset!");
static_assert(offsetof(UAthenaLobbyPlayerPanelActions_C, ButtonAddFriend) == 0x000220, "Member 'UAthenaLobbyPlayerPanelActions_C::ButtonAddFriend' has a wrong offset!");
static_assert(offsetof(UAthenaLobbyPlayerPanelActions_C, ButtonInviteParty) == 0x000228, "Member 'UAthenaLobbyPlayerPanelActions_C::ButtonInviteParty' has a wrong offset!");
static_assert(offsetof(UAthenaLobbyPlayerPanelActions_C, ButtonManage) == 0x000230, "Member 'UAthenaLobbyPlayerPanelActions_C::ButtonManage' has a wrong offset!");
static_assert(offsetof(UAthenaLobbyPlayerPanelActions_C, ButtonMute) == 0x000238, "Member 'UAthenaLobbyPlayerPanelActions_C::ButtonMute' has a wrong offset!");
static_assert(offsetof(UAthenaLobbyPlayerPanelActions_C, ViewProfileButton) == 0x000240, "Member 'UAthenaLobbyPlayerPanelActions_C::ViewProfileButton' has a wrong offset!");
static_assert(offsetof(UAthenaLobbyPlayerPanelActions_C, HoveredActionButton) == 0x000248, "Member 'UAthenaLobbyPlayerPanelActions_C::HoveredActionButton' has a wrong offset!");
static_assert(offsetof(UAthenaLobbyPlayerPanelActions_C, OnGadgetsClicked) == 0x000250, "Member 'UAthenaLobbyPlayerPanelActions_C::OnGadgetsClicked' has a wrong offset!");
static_assert(offsetof(UAthenaLobbyPlayerPanelActions_C, TeamMemberInfo) == 0x000260, "Member 'UAthenaLobbyPlayerPanelActions_C::TeamMemberInfo' has a wrong offset!");

}

