﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PacketHandler

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class PacketHandler.HandlerComponentFactory
// 0x0000 (0x0028 - 0x0028)
class UHandlerComponentFactory : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HandlerComponentFactory">();
	}
	static class UHandlerComponentFactory* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHandlerComponentFactory>();
	}
};
static_assert(alignof(UHandlerComponentFactory) == 0x000008, "Wrong alignment on UHandlerComponentFactory");
static_assert(sizeof(UHandlerComponentFactory) == 0x000028, "Wrong size on UHandlerComponentFactory");

}

