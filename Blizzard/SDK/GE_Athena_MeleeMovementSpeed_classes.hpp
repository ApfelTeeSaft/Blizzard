﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GE_Athena_MeleeMovementSpeed

#include "Basic.hpp"

#include "GET_MoveSpeed_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GE_Athena_MeleeMovementSpeed.GE_Athena_MeleeMovementSpeed_C
// 0x0000 (0x0670 - 0x0670)
class UGE_Athena_MeleeMovementSpeed_C final : public UGET_MoveSpeed_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GE_Athena_MeleeMovementSpeed_C">();
	}
	static class UGE_Athena_MeleeMovementSpeed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGE_Athena_MeleeMovementSpeed_C>();
	}
};
static_assert(alignof(UGE_Athena_MeleeMovementSpeed_C) == 0x000010, "Wrong alignment on UGE_Athena_MeleeMovementSpeed_C");
static_assert(sizeof(UGE_Athena_MeleeMovementSpeed_C) == 0x000670, "Wrong size on UGE_Athena_MeleeMovementSpeed_C");

}

