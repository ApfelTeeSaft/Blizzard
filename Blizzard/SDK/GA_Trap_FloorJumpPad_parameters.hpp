﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Trap_FloorJumpPad

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function GA_Trap_FloorJumpPad.GA_Trap_FloorJumpPad_C.ExecuteUbergraph_GA_Trap_FloorJumpPad
// 0x0228 (0x0228 - 0x0000)
struct GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData1;                    // 0x0008(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag1;                // 0x0028(0x0008)(NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABuildingTrap*                          K2Node_DynamicCast_AsBuilding_Trap;                // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetAbilityLevel_ReturnValue;              // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate; // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
	struct FGameplayEffectSpecHandle              CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue; // 0x0060(0x0018)()
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_CommitAbility_ReturnValue;             // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0085(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_86[0x2];                                       // 0x0086(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAbilityTask_WaitTargetSelection*   CallFunc_WaitTargetSelection_ReturnValue;          // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetDataCountFromTargetData_ReturnValue;   // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       Temp_struct_Variable;                              // 0x00A0(0x0020)()
	struct FGameplayTag                           Temp_struct_Variable1;                             // 0x00C0(0x0008)(NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D4[0x4];                                       // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess1;                      // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E2[0x6];                                       // 0x00E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue;    // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDBNO_ReturnValue;                       // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue1; // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_101[0x7];                                      // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABuildingTrap*                          K2Node_DynamicCast_AsBuilding_Trap1;               // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess12;                     // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_111[0x3];                                      // 0x0111(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0114(0x000C)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                  K2Node_DynamicCast_AsFort_Player_Controller;       // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess123;                    // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_131[0x7];                                      // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput; // 0x0138(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue1;                 // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14A[0x6];                                      // 0x014A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        K2Node_CustomEvent_Player;                         // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_159[0x7];                                      // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x0160(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue1;        // 0x0168(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DoesSocketExist_ReturnValue;              // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_DoesSocketExist_ReturnValue1;             // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_172[0x6];                                      // 0x0172(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayAbilityTargetDataHandle       K2Node_CustomEvent_TargetData;                     // 0x0178(0x0020)(ConstParm)
	struct FGameplayTag                           K2Node_CustomEvent_ApplicationTag;                 // 0x0198(0x0008)(NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwningActorFromActorInfo_ReturnValue12; // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)> K2Node_CreateDelegate_OutputDelegate1; // 0x01A8(0x0010)(ZeroConstructor, NoDestructor)
	class ABuildingTrap*                          K2Node_DynamicCast_AsBuilding_Trap12;              // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess1234;                   // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C1[0x3];                                      // 0x01C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetTrapLevel_ReturnValue;                 // 0x01C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDamageDelay_ReturnValue;               // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CC[0x4];                                      // 0x01CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilitySystemComponent*                CallFunc_GetAbilitySystemComponent_ReturnValue1;   // 0x01D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue; // 0x01D8(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFireDelay_ReturnValue;                 // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x01E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_GetActorsFromTargetData_ReturnValue;      // 0x01E8(0x0010)(ZeroConstructor, ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item1;                          // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue1;                // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue1;                     // 0x0204(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0205(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_206[0x2];                                      // 0x0206(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x020C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_20D[0x3];                                      // 0x020D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue1;                  // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_214[0x4];                                      // 0x0214(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FActiveGameplayEffectHandle>    CallFunc_ApplyGameplayEffectContainer_ReturnValue; // 0x0218(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
};
static_assert(alignof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad) == 0x000008, "Wrong alignment on GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad");
static_assert(sizeof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad) == 0x000228, "Wrong size on GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, EntryPoint) == 0x000000, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, K2Node_CustomEvent_TargetData1) == 0x000008, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::K2Node_CustomEvent_TargetData1' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, K2Node_CustomEvent_ApplicationTag1) == 0x000028, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::K2Node_CustomEvent_ApplicationTag1' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, CallFunc_GetOwningActorFromActorInfo_ReturnValue) == 0x000030, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::CallFunc_GetOwningActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, K2Node_DynamicCast_AsBuilding_Trap) == 0x000038, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::K2Node_DynamicCast_AsBuilding_Trap' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, CallFunc_GetAbilityLevel_ReturnValue) == 0x000044, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::CallFunc_GetAbilityLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000048, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, K2Node_CreateDelegate_OutputDelegate) == 0x000050, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue) == 0x000060, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, Temp_int_Loop_Counter_Variable) == 0x000078, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, CallFunc_Add_IntInt_ReturnValue) == 0x00007C, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, Temp_int_Array_Index_Variable) == 0x000080, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, CallFunc_K2_CommitAbility_ReturnValue) == 0x000084, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::CallFunc_K2_CommitAbility_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, CallFunc_IsDedicatedServer_ReturnValue) == 0x000085, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, CallFunc_WaitTargetSelection_ReturnValue) == 0x000088, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::CallFunc_WaitTargetSelection_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, CallFunc_GetDataCountFromTargetData_ReturnValue) == 0x000090, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::CallFunc_GetDataCountFromTargetData_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, CallFunc_Subtract_IntInt_ReturnValue) == 0x000094, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, CallFunc_IsValid_ReturnValue) == 0x000098, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, Temp_struct_Variable) == 0x0000A0, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, Temp_struct_Variable1) == 0x0000C0, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::Temp_struct_Variable1' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, CallFunc_Array_Get_Item) == 0x0000C8, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, CallFunc_Array_Length_ReturnValue) == 0x0000D0, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x0000D8, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, K2Node_DynamicCast_bSuccess1) == 0x0000E0, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::K2Node_DynamicCast_bSuccess1' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, CallFunc_Less_IntInt_ReturnValue) == 0x0000E1, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, CallFunc_GetAbilitySystemComponent_ReturnValue) == 0x0000E8, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::CallFunc_GetAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, CallFunc_IsDBNO_ReturnValue) == 0x0000F0, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::CallFunc_IsDBNO_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, CallFunc_GetOwningActorFromActorInfo_ReturnValue1) == 0x0000F8, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::CallFunc_GetOwningActorFromActorInfo_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, CallFunc_Not_PreBool_ReturnValue) == 0x000100, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, K2Node_DynamicCast_AsBuilding_Trap1) == 0x000108, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::K2Node_DynamicCast_AsBuilding_Trap1' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, K2Node_DynamicCast_bSuccess12) == 0x000110, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::K2Node_DynamicCast_bSuccess12' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, CallFunc_MakeVector_ReturnValue) == 0x000114, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, CallFunc_GetController_ReturnValue) == 0x000120, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, K2Node_DynamicCast_AsFort_Player_Controller) == 0x000128, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::K2Node_DynamicCast_AsFort_Player_Controller' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, K2Node_DynamicCast_bSuccess123) == 0x000130, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::K2Node_DynamicCast_bSuccess123' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, CallFunc_HasMatchingGameplayTag_self_CastInput) == 0x000138, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::CallFunc_HasMatchingGameplayTag_self_CastInput' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, CallFunc_HasMatchingGameplayTag_ReturnValue) == 0x000148, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::CallFunc_HasMatchingGameplayTag_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, CallFunc_Not_PreBool_ReturnValue1) == 0x000149, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::CallFunc_Not_PreBool_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, K2Node_CustomEvent_Player) == 0x000150, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::K2Node_CustomEvent_Player' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, CallFunc_BooleanAND_ReturnValue) == 0x000158, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x000160, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, CallFunc_SpawnEmitterAttached_ReturnValue1) == 0x000168, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::CallFunc_SpawnEmitterAttached_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, CallFunc_DoesSocketExist_ReturnValue) == 0x000170, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::CallFunc_DoesSocketExist_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, CallFunc_DoesSocketExist_ReturnValue1) == 0x000171, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::CallFunc_DoesSocketExist_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, K2Node_CustomEvent_TargetData) == 0x000178, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::K2Node_CustomEvent_TargetData' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, K2Node_CustomEvent_ApplicationTag) == 0x000198, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::K2Node_CustomEvent_ApplicationTag' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, CallFunc_GetOwningActorFromActorInfo_ReturnValue12) == 0x0001A0, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::CallFunc_GetOwningActorFromActorInfo_ReturnValue12' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, K2Node_CreateDelegate_OutputDelegate1) == 0x0001A8, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::K2Node_CreateDelegate_OutputDelegate1' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, K2Node_DynamicCast_AsBuilding_Trap12) == 0x0001B8, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::K2Node_DynamicCast_AsBuilding_Trap12' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, K2Node_DynamicCast_bSuccess1234) == 0x0001C0, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::K2Node_DynamicCast_bSuccess1234' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, CallFunc_GetTrapLevel_ReturnValue) == 0x0001C4, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::CallFunc_GetTrapLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, CallFunc_GetDamageDelay_ReturnValue) == 0x0001C8, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::CallFunc_GetDamageDelay_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, CallFunc_GetAbilitySystemComponent_ReturnValue1) == 0x0001D0, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::CallFunc_GetAbilitySystemComponent_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue) == 0x0001D8, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, CallFunc_GetFireDelay_ReturnValue) == 0x0001E0, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::CallFunc_GetFireDelay_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, Temp_int_Variable) == 0x0001E4, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, CallFunc_GetActorsFromTargetData_ReturnValue) == 0x0001E8, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::CallFunc_GetActorsFromTargetData_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, CallFunc_Array_Get_Item1) == 0x0001F8, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::CallFunc_Array_Get_Item1' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, CallFunc_Array_Length_ReturnValue1) == 0x000200, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::CallFunc_Array_Length_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, CallFunc_IsValid_ReturnValue1) == 0x000204, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::CallFunc_IsValid_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, CallFunc_Greater_IntInt_ReturnValue) == 0x000205, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, CallFunc_Array_Add_ReturnValue) == 0x000208, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00020C, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, CallFunc_Add_IntInt_ReturnValue1) == 0x000210, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::CallFunc_Add_IntInt_ReturnValue1' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad, CallFunc_ApplyGameplayEffectContainer_ReturnValue) == 0x000218, "Member 'GA_Trap_FloorJumpPad_C_ExecuteUbergraph_GA_Trap_FloorJumpPad::CallFunc_ApplyGameplayEffectContainer_ReturnValue' has a wrong offset!");

// Function GA_Trap_FloorJumpPad.GA_Trap_FloorJumpPad_C.Cancelled_E91C59AB43D826926CE5CEAA22E84570
// 0x0028 (0x0028 - 0x0000)
struct GA_Trap_FloorJumpPad_C_Cancelled_E91C59AB43D826926CE5CEAA22E84570 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData_0;                                      // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Trap_FloorJumpPad_C_Cancelled_E91C59AB43D826926CE5CEAA22E84570) == 0x000008, "Wrong alignment on GA_Trap_FloorJumpPad_C_Cancelled_E91C59AB43D826926CE5CEAA22E84570");
static_assert(sizeof(GA_Trap_FloorJumpPad_C_Cancelled_E91C59AB43D826926CE5CEAA22E84570) == 0x000028, "Wrong size on GA_Trap_FloorJumpPad_C_Cancelled_E91C59AB43D826926CE5CEAA22E84570");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_Cancelled_E91C59AB43D826926CE5CEAA22E84570, TargetData_0) == 0x000000, "Member 'GA_Trap_FloorJumpPad_C_Cancelled_E91C59AB43D826926CE5CEAA22E84570::TargetData_0' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_Cancelled_E91C59AB43D826926CE5CEAA22E84570, ApplicationTag) == 0x000020, "Member 'GA_Trap_FloorJumpPad_C_Cancelled_E91C59AB43D826926CE5CEAA22E84570::ApplicationTag' has a wrong offset!");

// Function GA_Trap_FloorJumpPad.GA_Trap_FloorJumpPad_C.PlayPlayerFX
// 0x0008 (0x0008 - 0x0000)
struct GA_Trap_FloorJumpPad_C_PlayPlayerFX final
{
public:
	class AFortPlayerPawn*                        Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Trap_FloorJumpPad_C_PlayPlayerFX) == 0x000008, "Wrong alignment on GA_Trap_FloorJumpPad_C_PlayPlayerFX");
static_assert(sizeof(GA_Trap_FloorJumpPad_C_PlayPlayerFX) == 0x000008, "Wrong size on GA_Trap_FloorJumpPad_C_PlayPlayerFX");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_PlayPlayerFX, Player) == 0x000000, "Member 'GA_Trap_FloorJumpPad_C_PlayPlayerFX::Player' has a wrong offset!");

// Function GA_Trap_FloorJumpPad.GA_Trap_FloorJumpPad_C.Targeted_E91C59AB43D826926CE5CEAA22E84570
// 0x0028 (0x0028 - 0x0000)
struct GA_Trap_FloorJumpPad_C_Targeted_E91C59AB43D826926CE5CEAA22E84570 final
{
public:
	struct FGameplayAbilityTargetDataHandle       TargetData_0;                                      // 0x0000(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                           ApplicationTag;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Trap_FloorJumpPad_C_Targeted_E91C59AB43D826926CE5CEAA22E84570) == 0x000008, "Wrong alignment on GA_Trap_FloorJumpPad_C_Targeted_E91C59AB43D826926CE5CEAA22E84570");
static_assert(sizeof(GA_Trap_FloorJumpPad_C_Targeted_E91C59AB43D826926CE5CEAA22E84570) == 0x000028, "Wrong size on GA_Trap_FloorJumpPad_C_Targeted_E91C59AB43D826926CE5CEAA22E84570");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_Targeted_E91C59AB43D826926CE5CEAA22E84570, TargetData_0) == 0x000000, "Member 'GA_Trap_FloorJumpPad_C_Targeted_E91C59AB43D826926CE5CEAA22E84570::TargetData_0' has a wrong offset!");
static_assert(offsetof(GA_Trap_FloorJumpPad_C_Targeted_E91C59AB43D826926CE5CEAA22E84570, ApplicationTag) == 0x000020, "Member 'GA_Trap_FloorJumpPad_C_Targeted_E91C59AB43D826926CE5CEAA22E84570::ApplicationTag' has a wrong offset!");

}

