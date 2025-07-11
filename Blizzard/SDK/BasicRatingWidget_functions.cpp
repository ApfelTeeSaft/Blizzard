﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BasicRatingWidget

#include "Basic.hpp"

#include "BasicRatingWidget_classes.hpp"
#include "BasicRatingWidget_parameters.hpp"


namespace SDK
{

// Function BasicRatingWidget.BasicRatingWidget_C.ExecuteUbergraph_BasicRatingWidget
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasicRatingWidget_C::ExecuteUbergraph_BasicRatingWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasicRatingWidget_C", "ExecuteUbergraph_BasicRatingWidget");

	Params::BasicRatingWidget_C_ExecuteUbergraph_BasicRatingWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BasicRatingWidget.BasicRatingWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBasicRatingWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasicRatingWidget_C", "PreConstruct");

	Params::BasicRatingWidget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BasicRatingWidget.BasicRatingWidget_C.GetBorderVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility*                       Visibility_0                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasicRatingWidget_C::GetBorderVisibility(ESlateVisibility* Visibility_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasicRatingWidget_C", "GetBorderVisibility");

	Params::BasicRatingWidget_C_GetBorderVisibility Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Visibility_0 != nullptr)
		*Visibility_0 = Parms.Visibility_0;
}


// Function BasicRatingWidget.BasicRatingWidget_C.Update Power Rating Value
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Rating                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasicRatingWidget_C::Update_Power_Rating_Value(int32 Rating)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasicRatingWidget_C", "Update Power Rating Value");

	Params::BasicRatingWidget_C_Update_Power_Rating_Value Parms{};

	Parms.Rating = Rating;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BasicRatingWidget.BasicRatingWidget_C.Update Border Color
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FLinearColor&              Color1                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FLinearColor&              Color2                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasicRatingWidget_C::Update_Border_Color(const struct FLinearColor& Color1, const struct FLinearColor& Color2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasicRatingWidget_C", "Update Border Color");

	Params::BasicRatingWidget_C_Update_Border_Color Parms{};

	Parms.Color1 = std::move(Color1);
	Parms.Color2 = std::move(Color2);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BasicRatingWidget.BasicRatingWidget_C.Get Current Rating
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                                  CurrentNumericValue                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasicRatingWidget_C::Get_Current_Rating(float* CurrentNumericValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasicRatingWidget_C", "Get Current Rating");

	Params::BasicRatingWidget_C_Get_Current_Rating Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentNumericValue != nullptr)
		*CurrentNumericValue = Parms.CurrentNumericValue;
}


// Function BasicRatingWidget.BasicRatingWidget_C.Update Power Rating Style
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           InStyle                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasicRatingWidget_C::Update_Power_Rating_Style(class UClass* InStyle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasicRatingWidget_C", "Update Power Rating Style");

	Params::BasicRatingWidget_C_Update_Power_Rating_Style Parms{};

	Parms.InStyle = InStyle;

	UObject::ProcessEvent(Func, &Parms);
}

}

