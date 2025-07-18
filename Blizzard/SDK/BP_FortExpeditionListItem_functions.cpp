﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FortExpeditionListItem

#include "Basic.hpp"

#include "BP_FortExpeditionListItem_classes.hpp"
#include "BP_FortExpeditionListItem_parameters.hpp"


namespace SDK
{

// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.ExecuteUbergraph_BP_FortExpeditionListItem
// ()
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionListItem_C::ExecuteUbergraph_BP_FortExpeditionListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionListItem_C", "ExecuteUbergraph_BP_FortExpeditionListItem");

	Params::BP_FortExpeditionListItem_C_ExecuteUbergraph_BP_FortExpeditionListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.OnHovered
// (Event, Protected, BlueprintEvent)

void UBP_FortExpeditionListItem_C::OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionListItem_C", "OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.BndEvt__InProgressSwitcher_K2Node_ComponentBoundEvent_17_OnActiveWidgetChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                          ActiveWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ActiveWidgetIndex                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionListItem_C::BndEvt__InProgressSwitcher_K2Node_ComponentBoundEvent_17_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionListItem_C", "BndEvt__InProgressSwitcher_K2Node_ComponentBoundEvent_17_OnActiveWidgetChanged__DelegateSignature");

	Params::BP_FortExpeditionListItem_C_BndEvt__InProgressSwitcher_K2Node_ComponentBoundEvent_17_OnActiveWidgetChanged__DelegateSignature Parms{};

	Parms.ActiveWidget = ActiveWidget;
	Parms.ActiveWidgetIndex = ActiveWidgetIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.OnDeselected
// (Event, Protected, BlueprintEvent)

void UBP_FortExpeditionListItem_C::OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionListItem_C", "OnDeselected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.OnItemChanged
// (Event, Protected, BlueprintEvent)

void UBP_FortExpeditionListItem_C::OnItemChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionListItem_C", "OnItemChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.OnSelected
// (Event, Protected, BlueprintEvent)

void UBP_FortExpeditionListItem_C::OnSelected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionListItem_C", "OnSelected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.SetData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          InData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonListView*                  OwningList                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionListItem_C::SetData(class UObject* InData, class UCommonListView* OwningList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionListItem_C", "SetData");

	Params::BP_FortExpeditionListItem_C_SetData Parms{};

	Parms.InData = InData;
	Parms.OwningList = OwningList;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Setup Base Item Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*              Expedition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionListItem_C::Setup_Base_Item_Data(class UFortExpeditionItem* Expedition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionListItem_C", "Setup Base Item Data");

	Params::BP_FortExpeditionListItem_C_Setup_Base_Item_Data Parms{};

	Parms.Expedition = Expedition;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Name
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                        Item_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionListItem_C::Set_Name(class UFortItem* Item_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionListItem_C", "Set Name");

	Params::BP_FortExpeditionListItem_C_Set_Name Parms{};

	Parms.Item_0 = Item_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Get Expedition Item Definition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortItem*                        Item_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortExpeditionItemDefinition**   Item_Def                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionListItem_C::Get_Expedition_Item_Definition(class UFortItem* Item_0, class UFortExpeditionItemDefinition** Item_Def)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionListItem_C", "Get Expedition Item Definition");

	Params::BP_FortExpeditionListItem_C_Get_Expedition_Item_Definition Parms{};

	Parms.Item_0 = Item_0;

	UObject::ProcessEvent(Func, &Parms);

	if (Item_Def != nullptr)
		*Item_Def = Parms.Item_Def;
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Rewards
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                        Item_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionListItem_C::Set_Rewards(class UFortItem* Item_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionListItem_C", "Set Rewards");

	Params::BP_FortExpeditionListItem_C_Set_Rewards Parms{};

	Parms.Item_0 = Item_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Rating
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*              Item_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionListItem_C::Set_Rating(class UFortExpeditionItem* Item_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionListItem_C", "Set Rating");

	Params::BP_FortExpeditionListItem_C_Set_Rating Parms{};

	Parms.Item_0 = Item_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Rarity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                        Item_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionListItem_C::Set_Rarity(class UFortItem* Item_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionListItem_C", "Set Rarity");

	Params::BP_FortExpeditionListItem_C_Set_Rarity Parms{};

	Parms.Item_0 = Item_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Remaining Expiration Time
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*              Item_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionListItem_C::Set_Remaining_Expiration_Time(class UFortExpeditionItem* Item_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionListItem_C", "Set Remaining Expiration Time");

	Params::BP_FortExpeditionListItem_C_Set_Remaining_Expiration_Time Parms{};

	Parms.Item_0 = Item_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set In Progress State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*              Item_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionListItem_C::Set_In_Progress_State(class UFortExpeditionItem* Item_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionListItem_C", "Set In Progress State");

	Params::BP_FortExpeditionListItem_C_Set_In_Progress_State Parms{};

	Parms.Item_0 = Item_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Expedition Returns Data
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*              InputPin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionListItem_C::Set_Expedition_Returns_Data(class UFortExpeditionItem* InputPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionListItem_C", "Set Expedition Returns Data");

	Params::BP_FortExpeditionListItem_C_Set_Expedition_Returns_Data Parms{};

	Parms.InputPin = InputPin;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Vehicle Icon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*              Expedition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionListItem_C::Set_Vehicle_Icon(class UFortExpeditionItem* Expedition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionListItem_C", "Set Vehicle Icon");

	Params::BP_FortExpeditionListItem_C_Set_Vehicle_Icon Parms{};

	Parms.Expedition = Expedition;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Set Success Chance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*              Item_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionListItem_C::Set_Success_Chance(class UFortExpeditionItem* Item_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionListItem_C", "Set Success Chance");

	Params::BP_FortExpeditionListItem_C_Set_Success_Chance Parms{};

	Parms.Item_0 = Item_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FortExpeditionListItem.BP_FortExpeditionListItem_C.Update Bang State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAccountItem*                 Item_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FortExpeditionListItem_C::Update_Bang_State(class UFortAccountItem* Item_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FortExpeditionListItem_C", "Update Bang State");

	Params::BP_FortExpeditionListItem_C_Update_Bang_State Parms{};

	Parms.Item_0 = Item_0;

	UObject::ProcessEvent(Func, &Parms);
}

}

