﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNL_PurpleStuff

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCNL_PurpleStuff.GCNL_PurpleStuff_C
// 0x0010 (0x0450 - 0x0440)
class AGCNL_PurpleStuff_C final : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0440(0x0008)(Transient, DuplicateTransient)
	class APlayerPawn_Athena_Generic_C*           PlayerActor;                                       // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GCNL_PurpleStuff(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCNL_PurpleStuff_C">();
	}
	static class AGCNL_PurpleStuff_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCNL_PurpleStuff_C>();
	}
};
static_assert(alignof(AGCNL_PurpleStuff_C) == 0x000010, "Wrong alignment on AGCNL_PurpleStuff_C");
static_assert(sizeof(AGCNL_PurpleStuff_C) == 0x000450, "Wrong size on AGCNL_PurpleStuff_C");
static_assert(offsetof(AGCNL_PurpleStuff_C, UberGraphFrame) == 0x000440, "Member 'AGCNL_PurpleStuff_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGCNL_PurpleStuff_C, PlayerActor) == 0x000448, "Member 'AGCNL_PurpleStuff_C::PlayerActor' has a wrong offset!");

}

