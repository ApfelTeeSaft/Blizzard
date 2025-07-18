﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Frontend_Lobby

#include "Basic.hpp"

#include "Frontend_Lobby_classes.hpp"
#include "Frontend_Lobby_parameters.hpp"


namespace SDK
{

// Function Frontend_Lobby.Frontend_Lobby_C.ExecuteUbergraph_Frontend_Lobby
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFrontend_Lobby_C::ExecuteUbergraph_Frontend_Lobby(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Frontend_Lobby_C", "ExecuteUbergraph_Frontend_Lobby");

	Params::Frontend_Lobby_C_ExecuteUbergraph_Frontend_Lobby Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Frontend_Lobby.Frontend_Lobby_C.OnBackgroundChanged
// (BlueprintCallable, BlueprintEvent)

void AFrontend_Lobby_C::OnBackgroundChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Frontend_Lobby_C", "OnBackgroundChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Frontend_Lobby.Frontend_Lobby_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AFrontend_Lobby_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Frontend_Lobby_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

