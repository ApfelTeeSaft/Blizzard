﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WM_PinManager

#include "Basic.hpp"

#include "WM_PinManager_classes.hpp"
#include "WM_PinManager_parameters.hpp"


namespace SDK
{

// Function WM_PinManager.WM_PinManager_C.ExecuteUbergraph_WM_PinManager
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWM_PinManager_C::ExecuteUbergraph_WM_PinManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WM_PinManager_C", "ExecuteUbergraph_WM_PinManager");

	Params::WM_PinManager_C_ExecuteUbergraph_WM_PinManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WM_PinManager.WM_PinManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWM_PinManager_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WM_PinManager_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WM_PinManager.WM_PinManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWM_PinManager_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WM_PinManager_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WM_PinManager.WM_PinManager_C.CreateWorldMapPin
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const class FString&                    TheaterId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class AWorldMapPin*                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AWorldMapPin* AWM_PinManager_C::CreateWorldMapPin(const class FString& TheaterId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WM_PinManager_C", "CreateWorldMapPin");

	Params::WM_PinManager_C_CreateWorldMapPin Parms{};

	Parms.TheaterId = std::move(TheaterId);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

