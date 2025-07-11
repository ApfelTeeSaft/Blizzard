﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: XpBoostQuantities

#include "Basic.hpp"

#include "XpBoostQuantities_classes.hpp"
#include "XpBoostQuantities_parameters.hpp"


namespace SDK
{

// Function XpBoostQuantities.XpBoostQuantities_C.ExecuteUbergraph_XpBoostQuantities
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UXpBoostQuantities_C::ExecuteUbergraph_XpBoostQuantities(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpBoostQuantities_C", "ExecuteUbergraph_XpBoostQuantities");

	Params::XpBoostQuantities_C_ExecuteUbergraph_XpBoostQuantities Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function XpBoostQuantities.XpBoostQuantities_C.Xp Boost Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   BoostAmount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UXpBoostQuantities_C::Xp_Boost_Changed(int32 BoostAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpBoostQuantities_C", "Xp Boost Changed");

	Params::XpBoostQuantities_C_Xp_Boost_Changed Parms{};

	Parms.BoostAmount = BoostAmount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function XpBoostQuantities.XpBoostQuantities_C.HandleAccountUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FFortPublicAccountInfo&    NewInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UXpBoostQuantities_C::HandleAccountUpdate(const struct FFortPublicAccountInfo& NewInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpBoostQuantities_C", "HandleAccountUpdate");

	Params::XpBoostQuantities_C_HandleAccountUpdate Parms{};

	Parms.NewInfo = std::move(NewInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function XpBoostQuantities.XpBoostQuantities_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UXpBoostQuantities_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpBoostQuantities_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function XpBoostQuantities.XpBoostQuantities_C.UpdateXPQuantitiesInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UXpBoostQuantities_C::UpdateXPQuantitiesInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpBoostQuantities_C", "UpdateXPQuantitiesInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function XpBoostQuantities.XpBoostQuantities_C.ScaledBoostBalance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   AmountToLevel                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UXpBoostQuantities_C::ScaledBoostBalance(int32 AmountToLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpBoostQuantities_C", "ScaledBoostBalance");

	Params::XpBoostQuantities_C_ScaledBoostBalance Parms{};

	Parms.AmountToLevel = AmountToLevel;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function XpBoostQuantities.XpBoostQuantities_C.ScaledRestBalance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   AmountToLevel                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UXpBoostQuantities_C::ScaledRestBalance(int32 AmountToLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("XpBoostQuantities_C", "ScaledRestBalance");

	Params::XpBoostQuantities_C_ScaledRestBalance Parms{};

	Parms.AmountToLevel = AmountToLevel;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

