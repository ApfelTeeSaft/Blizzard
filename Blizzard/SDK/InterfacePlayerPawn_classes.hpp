﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InterfacePlayerPawn

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass InterfacePlayerPawn.InterfacePlayerPawn_C
// 0x0000 (0x0000 - 0x0000)
class IInterfacePlayerPawn_C final
{
public:
	void MeleeSwingRight();
	void MeleeSwingLeft();
	void Melee_Effect_Color(struct FVector* Melee_Color_Set);
	void FootStepLeft();
	void FootStepRight();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InterfacePlayerPawn_C">();
	}
	static class IInterfacePlayerPawn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<IInterfacePlayerPawn_C>();
	}

	class UObject* AsUObject()
	{
		return reinterpret_cast<UObject*>(this);
	}
	const class UObject* AsUObject() const
	{
		return reinterpret_cast<const UObject*>(this);
	}
};
static_assert(alignof(IInterfacePlayerPawn_C) == 0x000001, "Wrong alignment on IInterfacePlayerPawn_C");
static_assert(sizeof(IInterfacePlayerPawn_C) == 0x000001, "Wrong size on IInterfacePlayerPawn_C");

}

