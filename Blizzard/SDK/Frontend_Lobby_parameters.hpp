﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Frontend_Lobby

#include "Basic.hpp"


namespace SDK::Params
{

// Function Frontend_Lobby.Frontend_Lobby_C.ExecuteUbergraph_Frontend_Lobby
// 0x0038 (0x0038 - 0x0000)
struct Frontend_Lobby_C_ExecuteUbergraph_Frontend_Lobby final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue1;           // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortFrontEndContext*                   CallFunc_GetContext_ReturnValue1;                  // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetLobbyBackgroundLevelName_ReturnValue;  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(Frontend_Lobby_C_ExecuteUbergraph_Frontend_Lobby) == 0x000008, "Wrong alignment on Frontend_Lobby_C_ExecuteUbergraph_Frontend_Lobby");
static_assert(sizeof(Frontend_Lobby_C_ExecuteUbergraph_Frontend_Lobby) == 0x000038, "Wrong size on Frontend_Lobby_C_ExecuteUbergraph_Frontend_Lobby");
static_assert(offsetof(Frontend_Lobby_C_ExecuteUbergraph_Frontend_Lobby, EntryPoint) == 0x000000, "Member 'Frontend_Lobby_C_ExecuteUbergraph_Frontend_Lobby::EntryPoint' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_C_ExecuteUbergraph_Frontend_Lobby, CallFunc_GetContext_ReturnValue) == 0x000008, "Member 'Frontend_Lobby_C_ExecuteUbergraph_Frontend_Lobby::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_C_ExecuteUbergraph_Frontend_Lobby, CallFunc_NotEqual_NameName_ReturnValue) == 0x000010, "Member 'Frontend_Lobby_C_ExecuteUbergraph_Frontend_Lobby::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_C_ExecuteUbergraph_Frontend_Lobby, CallFunc_NotEqual_NameName_ReturnValue1) == 0x000011, "Member 'Frontend_Lobby_C_ExecuteUbergraph_Frontend_Lobby::CallFunc_NotEqual_NameName_ReturnValue1' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_C_ExecuteUbergraph_Frontend_Lobby, CallFunc_GetContext_ReturnValue1) == 0x000018, "Member 'Frontend_Lobby_C_ExecuteUbergraph_Frontend_Lobby::CallFunc_GetContext_ReturnValue1' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_C_ExecuteUbergraph_Frontend_Lobby, CallFunc_GetLobbyBackgroundLevelName_ReturnValue) == 0x000020, "Member 'Frontend_Lobby_C_ExecuteUbergraph_Frontend_Lobby::CallFunc_GetLobbyBackgroundLevelName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Frontend_Lobby_C_ExecuteUbergraph_Frontend_Lobby, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'Frontend_Lobby_C_ExecuteUbergraph_Frontend_Lobby::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

}

