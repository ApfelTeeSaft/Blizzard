﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SkillTreeColorSetup

#include "Basic.hpp"

#include "SkillTreeColorSetup_classes.hpp"
#include "SkillTreeColorSetup_parameters.hpp"


namespace SDK
{

// Function SkillTreeColorSetup.SkillTreeColorSetup_C.SkillTreeBGSetup
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// const struct FSkillTreePageColors&      Page_Color                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// ESkillTreePages                         Pages                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*         Mid                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillTreeColorSetup_C::SkillTreeBGSetup(const struct FSkillTreePageColors& Page_Color, ESkillTreePages Pages, class UMaterialInstanceDynamic* Mid, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("SkillTreeColorSetup_C", "SkillTreeBGSetup");

	Params::SkillTreeColorSetup_C_SkillTreeBGSetup Parms{};

	Parms.Page_Color = std::move(Page_Color);
	Parms.Pages = Pages;
	Parms.Mid = Mid;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

}

