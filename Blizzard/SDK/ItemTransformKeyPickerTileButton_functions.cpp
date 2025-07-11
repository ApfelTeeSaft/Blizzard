﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemTransformKeyPickerTileButton

#include "Basic.hpp"

#include "ItemTransformKeyPickerTileButton_classes.hpp"
#include "ItemTransformKeyPickerTileButton_parameters.hpp"


namespace SDK
{

// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.ExecuteUbergraph_ItemTransformKeyPickerTileButton
// (HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformKeyPickerTileButton_C::ExecuteUbergraph_ItemTransformKeyPickerTileButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemTransformKeyPickerTileButton_C", "ExecuteUbergraph_ItemTransformKeyPickerTileButton");

	Params::ItemTransformKeyPickerTileButton_C_ExecuteUbergraph_ItemTransformKeyPickerTileButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.OnHovered
// (Event, Protected, BlueprintEvent)

void UItemTransformKeyPickerTileButton_C::OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemTransformKeyPickerTileButton_C", "OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.OnSelected
// (Event, Protected, BlueprintEvent)

void UItemTransformKeyPickerTileButton_C::OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemTransformKeyPickerTileButton_C", "OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.SetData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          InData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonListView*                  OwningList                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformKeyPickerTileButton_C::SetData(class UObject* InData, class UCommonListView* OwningList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemTransformKeyPickerTileButton_C", "SetData");

	Params::ItemTransformKeyPickerTileButton_C_SetData Parms{};

	Parms.InData = InData;
	Parms.OwningList = OwningList;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Update Bang State
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemTransformKeyPickerTileButton_C::Update_Bang_State()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemTransformKeyPickerTileButton_C", "Update Bang State");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Get Transform Key
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortAccountItem**                AsFort_Account_Item                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformKeyPickerTileButton_C::Get_Transform_Key(class UFortAccountItem** AsFort_Account_Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemTransformKeyPickerTileButton_C", "Get Transform Key");

	Params::ItemTransformKeyPickerTileButton_C_Get_Transform_Key Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AsFort_Account_Item != nullptr)
		*AsFort_Account_Item = Parms.AsFort_Account_Item;
}


// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Is Transform Key Consumable
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                                   bConsumedOnConversion                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemTransformKeyPickerTileButton_C::Is_Transform_Key_Consumable(bool* bConsumedOnConversion)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemTransformKeyPickerTileButton_C", "Is Transform Key Consumable");

	Params::ItemTransformKeyPickerTileButton_C_Is_Transform_Key_Consumable Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bConsumedOnConversion != nullptr)
		*bConsumedOnConversion = Parms.bConsumedOnConversion;
}


// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Mark Item As Seen
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemTransformKeyPickerTileButton_C::Mark_Item_As_Seen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemTransformKeyPickerTileButton_C", "Mark Item As Seen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Get Transform Key Catalysts
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer            ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FGameplayTagContainer UItemTransformKeyPickerTileButton_C::Get_Transform_Key_Catalysts()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemTransformKeyPickerTileButton_C", "Get Transform Key Catalysts");

	Params::ItemTransformKeyPickerTileButton_C_Get_Transform_Key_Catalysts Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ItemTransformKeyPickerTileButton.ItemTransformKeyPickerTileButton_C.Get Fort PC
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AFortPlayerController**           FortPC                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemTransformKeyPickerTileButton_C::Get_Fort_PC(class AFortPlayerController** FortPC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemTransformKeyPickerTileButton_C", "Get Fort PC");

	Params::ItemTransformKeyPickerTileButton_C_Get_Fort_PC Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (FortPC != nullptr)
		*FortPC = Parms.FortPC;
}

}

