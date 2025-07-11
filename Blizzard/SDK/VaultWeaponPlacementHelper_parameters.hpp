﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VaultWeaponPlacementHelper

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ExecuteUbergraph_VaultWeaponPlacementHelper
// 0x0004 (0x0004 - 0x0000)
struct VaultWeaponPlacementHelper_C_ExecuteUbergraph_VaultWeaponPlacementHelper final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VaultWeaponPlacementHelper_C_ExecuteUbergraph_VaultWeaponPlacementHelper) == 0x000004, "Wrong alignment on VaultWeaponPlacementHelper_C_ExecuteUbergraph_VaultWeaponPlacementHelper");
static_assert(sizeof(VaultWeaponPlacementHelper_C_ExecuteUbergraph_VaultWeaponPlacementHelper) == 0x000004, "Wrong size on VaultWeaponPlacementHelper_C_ExecuteUbergraph_VaultWeaponPlacementHelper");
static_assert(offsetof(VaultWeaponPlacementHelper_C_ExecuteUbergraph_VaultWeaponPlacementHelper, EntryPoint) == 0x000000, "Member 'VaultWeaponPlacementHelper_C_ExecuteUbergraph_VaultWeaponPlacementHelper::EntryPoint' has a wrong offset!");

// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnLobbyPlayerHovered
// 0x0008 (0x0008 - 0x0000)
struct VaultWeaponPlacementHelper_C_OnLobbyPlayerHovered final
{
public:
	int32                                         PlayerIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(VaultWeaponPlacementHelper_C_OnLobbyPlayerHovered) == 0x000004, "Wrong alignment on VaultWeaponPlacementHelper_C_OnLobbyPlayerHovered");
static_assert(sizeof(VaultWeaponPlacementHelper_C_OnLobbyPlayerHovered) == 0x000008, "Wrong size on VaultWeaponPlacementHelper_C_OnLobbyPlayerHovered");
static_assert(offsetof(VaultWeaponPlacementHelper_C_OnLobbyPlayerHovered, PlayerIndex) == 0x000000, "Member 'VaultWeaponPlacementHelper_C_OnLobbyPlayerHovered::PlayerIndex' has a wrong offset!");
static_assert(offsetof(VaultWeaponPlacementHelper_C_OnLobbyPlayerHovered, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000004, "Member 'VaultWeaponPlacementHelper_C_OnLobbyPlayerHovered::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnLobbyPlayerSelected
// 0x0004 (0x0004 - 0x0000)
struct VaultWeaponPlacementHelper_C_OnLobbyPlayerSelected final
{
public:
	int32                                         PlayerIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VaultWeaponPlacementHelper_C_OnLobbyPlayerSelected) == 0x000004, "Wrong alignment on VaultWeaponPlacementHelper_C_OnLobbyPlayerSelected");
static_assert(sizeof(VaultWeaponPlacementHelper_C_OnLobbyPlayerSelected) == 0x000004, "Wrong size on VaultWeaponPlacementHelper_C_OnLobbyPlayerSelected");
static_assert(offsetof(VaultWeaponPlacementHelper_C_OnLobbyPlayerSelected, PlayerIndex) == 0x000000, "Member 'VaultWeaponPlacementHelper_C_OnLobbyPlayerSelected::PlayerIndex' has a wrong offset!");

// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.InitializeContextEvents
// 0x00B8 (0x00B8 - 0x0000)
struct VaultWeaponPlacementHelper_C_InitializeContextEvents final
{
public:
	TDelegate<void(int32 PlayerIndex)>            K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 PlayerIndex)>            K2Node_CreateDelegate_OutputDelegate1;             // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const struct FFortTeamMemberInfo& NewTeamMemberInfo)> K2Node_CreateDelegate_OutputDelegate12; // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const struct FFortTeamMemberInfo& TeamMemberInfo)> K2Node_CreateDelegate_OutputDelegate123; // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue1;                  // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate1234;          // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera)> K2Node_CreateDelegate_OutputDelegate12345; // 0x0060(0x0010)(ZeroConstructor, NoDestructor)
	class UFortMatchmakingContext*                CallFunc_GetContext_ReturnValue12;                 // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue123;                // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 PlayerIndex)>            K2Node_CreateDelegate_OutputDelegate123456;        // 0x0080(0x0010)(ZeroConstructor, NoDestructor)
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue1234;               // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortUITeamInfo*                        CallFunc_GetLocalPlayerTeam_ReturnValue;           // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 PlayerIndex)>            K2Node_CreateDelegate_OutputDelegate1234567;       // 0x00A0(0x0010)(ZeroConstructor, NoDestructor)
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue12345;              // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VaultWeaponPlacementHelper_C_InitializeContextEvents) == 0x000008, "Wrong alignment on VaultWeaponPlacementHelper_C_InitializeContextEvents");
static_assert(sizeof(VaultWeaponPlacementHelper_C_InitializeContextEvents) == 0x0000B8, "Wrong size on VaultWeaponPlacementHelper_C_InitializeContextEvents");
static_assert(offsetof(VaultWeaponPlacementHelper_C_InitializeContextEvents, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'VaultWeaponPlacementHelper_C_InitializeContextEvents::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(VaultWeaponPlacementHelper_C_InitializeContextEvents, K2Node_CreateDelegate_OutputDelegate1) == 0x000010, "Member 'VaultWeaponPlacementHelper_C_InitializeContextEvents::K2Node_CreateDelegate_OutputDelegate1' has a wrong offset!");
static_assert(offsetof(VaultWeaponPlacementHelper_C_InitializeContextEvents, K2Node_CreateDelegate_OutputDelegate12) == 0x000020, "Member 'VaultWeaponPlacementHelper_C_InitializeContextEvents::K2Node_CreateDelegate_OutputDelegate12' has a wrong offset!");
static_assert(offsetof(VaultWeaponPlacementHelper_C_InitializeContextEvents, K2Node_CreateDelegate_OutputDelegate123) == 0x000030, "Member 'VaultWeaponPlacementHelper_C_InitializeContextEvents::K2Node_CreateDelegate_OutputDelegate123' has a wrong offset!");
static_assert(offsetof(VaultWeaponPlacementHelper_C_InitializeContextEvents, CallFunc_GetContext_ReturnValue) == 0x000040, "Member 'VaultWeaponPlacementHelper_C_InitializeContextEvents::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultWeaponPlacementHelper_C_InitializeContextEvents, CallFunc_GetContext_ReturnValue1) == 0x000048, "Member 'VaultWeaponPlacementHelper_C_InitializeContextEvents::CallFunc_GetContext_ReturnValue1' has a wrong offset!");
static_assert(offsetof(VaultWeaponPlacementHelper_C_InitializeContextEvents, K2Node_CreateDelegate_OutputDelegate1234) == 0x000050, "Member 'VaultWeaponPlacementHelper_C_InitializeContextEvents::K2Node_CreateDelegate_OutputDelegate1234' has a wrong offset!");
static_assert(offsetof(VaultWeaponPlacementHelper_C_InitializeContextEvents, K2Node_CreateDelegate_OutputDelegate12345) == 0x000060, "Member 'VaultWeaponPlacementHelper_C_InitializeContextEvents::K2Node_CreateDelegate_OutputDelegate12345' has a wrong offset!");
static_assert(offsetof(VaultWeaponPlacementHelper_C_InitializeContextEvents, CallFunc_GetContext_ReturnValue12) == 0x000070, "Member 'VaultWeaponPlacementHelper_C_InitializeContextEvents::CallFunc_GetContext_ReturnValue12' has a wrong offset!");
static_assert(offsetof(VaultWeaponPlacementHelper_C_InitializeContextEvents, CallFunc_GetContext_ReturnValue123) == 0x000078, "Member 'VaultWeaponPlacementHelper_C_InitializeContextEvents::CallFunc_GetContext_ReturnValue123' has a wrong offset!");
static_assert(offsetof(VaultWeaponPlacementHelper_C_InitializeContextEvents, K2Node_CreateDelegate_OutputDelegate123456) == 0x000080, "Member 'VaultWeaponPlacementHelper_C_InitializeContextEvents::K2Node_CreateDelegate_OutputDelegate123456' has a wrong offset!");
static_assert(offsetof(VaultWeaponPlacementHelper_C_InitializeContextEvents, CallFunc_GetContext_ReturnValue1234) == 0x000090, "Member 'VaultWeaponPlacementHelper_C_InitializeContextEvents::CallFunc_GetContext_ReturnValue1234' has a wrong offset!");
static_assert(offsetof(VaultWeaponPlacementHelper_C_InitializeContextEvents, CallFunc_GetLocalPlayerTeam_ReturnValue) == 0x000098, "Member 'VaultWeaponPlacementHelper_C_InitializeContextEvents::CallFunc_GetLocalPlayerTeam_ReturnValue' has a wrong offset!");
static_assert(offsetof(VaultWeaponPlacementHelper_C_InitializeContextEvents, K2Node_CreateDelegate_OutputDelegate1234567) == 0x0000A0, "Member 'VaultWeaponPlacementHelper_C_InitializeContextEvents::K2Node_CreateDelegate_OutputDelegate1234567' has a wrong offset!");
static_assert(offsetof(VaultWeaponPlacementHelper_C_InitializeContextEvents, CallFunc_GetContext_ReturnValue12345) == 0x0000B0, "Member 'VaultWeaponPlacementHelper_C_InitializeContextEvents::CallFunc_GetContext_ReturnValue12345' has a wrong offset!");

// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnFrontEndCameraChanged
// 0x0003 (0x0003 - 0x0000)
struct VaultWeaponPlacementHelper_C_OnFrontEndCameraChanged final
{
public:
	EFrontEndCamera                               NewCamera;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFrontEndCamera                               OldCamera;                                         // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(VaultWeaponPlacementHelper_C_OnFrontEndCameraChanged) == 0x000001, "Wrong alignment on VaultWeaponPlacementHelper_C_OnFrontEndCameraChanged");
static_assert(sizeof(VaultWeaponPlacementHelper_C_OnFrontEndCameraChanged) == 0x000003, "Wrong size on VaultWeaponPlacementHelper_C_OnFrontEndCameraChanged");
static_assert(offsetof(VaultWeaponPlacementHelper_C_OnFrontEndCameraChanged, NewCamera) == 0x000000, "Member 'VaultWeaponPlacementHelper_C_OnFrontEndCameraChanged::NewCamera' has a wrong offset!");
static_assert(offsetof(VaultWeaponPlacementHelper_C_OnFrontEndCameraChanged, OldCamera) == 0x000001, "Member 'VaultWeaponPlacementHelper_C_OnFrontEndCameraChanged::OldCamera' has a wrong offset!");
static_assert(offsetof(VaultWeaponPlacementHelper_C_OnFrontEndCameraChanged, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'VaultWeaponPlacementHelper_C_OnFrontEndCameraChanged::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnTeamMemberAdded
// 0x01B0 (0x01B0 - 0x0000)
struct VaultWeaponPlacementHelper_C_OnTeamMemberAdded final
{
public:
	struct FFortTeamMemberInfo                    TeamMemberInfo;                                    // 0x0000(0x01A8)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(VaultWeaponPlacementHelper_C_OnTeamMemberAdded) == 0x000008, "Wrong alignment on VaultWeaponPlacementHelper_C_OnTeamMemberAdded");
static_assert(sizeof(VaultWeaponPlacementHelper_C_OnTeamMemberAdded) == 0x0001B0, "Wrong size on VaultWeaponPlacementHelper_C_OnTeamMemberAdded");
static_assert(offsetof(VaultWeaponPlacementHelper_C_OnTeamMemberAdded, TeamMemberInfo) == 0x000000, "Member 'VaultWeaponPlacementHelper_C_OnTeamMemberAdded::TeamMemberInfo' has a wrong offset!");
static_assert(offsetof(VaultWeaponPlacementHelper_C_OnTeamMemberAdded, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0001A8, "Member 'VaultWeaponPlacementHelper_C_OnTeamMemberAdded::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnTeamMemberRemoved
// 0x0004 (0x0004 - 0x0000)
struct VaultWeaponPlacementHelper_C_OnTeamMemberRemoved final
{
public:
	int32                                         TeamMemberInfo;                                    // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VaultWeaponPlacementHelper_C_OnTeamMemberRemoved) == 0x000004, "Wrong alignment on VaultWeaponPlacementHelper_C_OnTeamMemberRemoved");
static_assert(sizeof(VaultWeaponPlacementHelper_C_OnTeamMemberRemoved) == 0x000004, "Wrong size on VaultWeaponPlacementHelper_C_OnTeamMemberRemoved");
static_assert(offsetof(VaultWeaponPlacementHelper_C_OnTeamMemberRemoved, TeamMemberInfo) == 0x000000, "Member 'VaultWeaponPlacementHelper_C_OnTeamMemberRemoved::TeamMemberInfo' has a wrong offset!");

// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnTeamMemberStateChanged
// 0x01B0 (0x01B0 - 0x0000)
struct VaultWeaponPlacementHelper_C_OnTeamMemberStateChanged final
{
public:
	struct FFortTeamMemberInfo                    TeamMemberInfo;                                    // 0x0000(0x01A8)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(VaultWeaponPlacementHelper_C_OnTeamMemberStateChanged) == 0x000008, "Wrong alignment on VaultWeaponPlacementHelper_C_OnTeamMemberStateChanged");
static_assert(sizeof(VaultWeaponPlacementHelper_C_OnTeamMemberStateChanged) == 0x0001B0, "Wrong size on VaultWeaponPlacementHelper_C_OnTeamMemberStateChanged");
static_assert(offsetof(VaultWeaponPlacementHelper_C_OnTeamMemberStateChanged, TeamMemberInfo) == 0x000000, "Member 'VaultWeaponPlacementHelper_C_OnTeamMemberStateChanged::TeamMemberInfo' has a wrong offset!");
static_assert(offsetof(VaultWeaponPlacementHelper_C_OnTeamMemberStateChanged, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0001A8, "Member 'VaultWeaponPlacementHelper_C_OnTeamMemberStateChanged::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.GetFrontendAnimInstance
// 0x0008 (0x0008 - 0x0000)
struct VaultWeaponPlacementHelper_C_GetFrontendAnimInstance final
{
public:
	class UFrontendAnimInstance*                  AsFrontend_Anim_Instance;                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VaultWeaponPlacementHelper_C_GetFrontendAnimInstance) == 0x000008, "Wrong alignment on VaultWeaponPlacementHelper_C_GetFrontendAnimInstance");
static_assert(sizeof(VaultWeaponPlacementHelper_C_GetFrontendAnimInstance) == 0x000008, "Wrong size on VaultWeaponPlacementHelper_C_GetFrontendAnimInstance");
static_assert(offsetof(VaultWeaponPlacementHelper_C_GetFrontendAnimInstance, AsFrontend_Anim_Instance) == 0x000000, "Member 'VaultWeaponPlacementHelper_C_GetFrontendAnimInstance::AsFrontend_Anim_Instance' has a wrong offset!");

// Function VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnLobbyPlayerUnhovered
// 0x0008 (0x0008 - 0x0000)
struct VaultWeaponPlacementHelper_C_OnLobbyPlayerUnhovered final
{
public:
	int32                                         PlayerIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(VaultWeaponPlacementHelper_C_OnLobbyPlayerUnhovered) == 0x000004, "Wrong alignment on VaultWeaponPlacementHelper_C_OnLobbyPlayerUnhovered");
static_assert(sizeof(VaultWeaponPlacementHelper_C_OnLobbyPlayerUnhovered) == 0x000008, "Wrong size on VaultWeaponPlacementHelper_C_OnLobbyPlayerUnhovered");
static_assert(offsetof(VaultWeaponPlacementHelper_C_OnLobbyPlayerUnhovered, PlayerIndex) == 0x000000, "Member 'VaultWeaponPlacementHelper_C_OnLobbyPlayerUnhovered::PlayerIndex' has a wrong offset!");
static_assert(offsetof(VaultWeaponPlacementHelper_C_OnLobbyPlayerUnhovered, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000004, "Member 'VaultWeaponPlacementHelper_C_OnLobbyPlayerUnhovered::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

}

