﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ProgressWidget

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function ProgressWidget.ProgressWidget_C.SetTitle
// 0x0018 (0x0018 - 0x0000)
struct ProgressWidget_C_SetTitle final
{
public:
	class FText                                   Title_0;                                           // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(ProgressWidget_C_SetTitle) == 0x000008, "Wrong alignment on ProgressWidget_C_SetTitle");
static_assert(sizeof(ProgressWidget_C_SetTitle) == 0x000018, "Wrong size on ProgressWidget_C_SetTitle");
static_assert(offsetof(ProgressWidget_C_SetTitle, Title_0) == 0x000000, "Member 'ProgressWidget_C_SetTitle::Title_0' has a wrong offset!");

// Function ProgressWidget.ProgressWidget_C.SetDescription
// 0x0018 (0x0018 - 0x0000)
struct ProgressWidget_C_SetDescription final
{
public:
	class FText                                   Description_0;                                     // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(ProgressWidget_C_SetDescription) == 0x000008, "Wrong alignment on ProgressWidget_C_SetDescription");
static_assert(sizeof(ProgressWidget_C_SetDescription) == 0x000018, "Wrong size on ProgressWidget_C_SetDescription");
static_assert(offsetof(ProgressWidget_C_SetDescription, Description_0) == 0x000000, "Member 'ProgressWidget_C_SetDescription::Description_0' has a wrong offset!");

// Function ProgressWidget.ProgressWidget_C.SetIcon
// 0x0080 (0x0080 - 0x0000)
struct ProgressWidget_C_SetIcon final
{
public:
	struct FSlateBrush                            IconBrush;                                         // 0x0000(0x0078)(BlueprintVisible, BlueprintReadOnly, Parm)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable1;                               // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x007B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ProgressWidget_C_SetIcon) == 0x000008, "Wrong alignment on ProgressWidget_C_SetIcon");
static_assert(sizeof(ProgressWidget_C_SetIcon) == 0x000080, "Wrong size on ProgressWidget_C_SetIcon");
static_assert(offsetof(ProgressWidget_C_SetIcon, IconBrush) == 0x000000, "Member 'ProgressWidget_C_SetIcon::IconBrush' has a wrong offset!");
static_assert(offsetof(ProgressWidget_C_SetIcon, Temp_byte_Variable) == 0x000078, "Member 'ProgressWidget_C_SetIcon::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ProgressWidget_C_SetIcon, CallFunc_IsValid_ReturnValue) == 0x000079, "Member 'ProgressWidget_C_SetIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProgressWidget_C_SetIcon, Temp_byte_Variable1) == 0x00007A, "Member 'ProgressWidget_C_SetIcon::Temp_byte_Variable1' has a wrong offset!");
static_assert(offsetof(ProgressWidget_C_SetIcon, Temp_bool_Variable) == 0x00007B, "Member 'ProgressWidget_C_SetIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ProgressWidget_C_SetIcon, K2Node_Select_Default) == 0x00007C, "Member 'ProgressWidget_C_SetIcon::K2Node_Select_Default' has a wrong offset!");

}

