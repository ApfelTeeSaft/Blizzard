﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PackResource

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function PackResource.PackResource_C.ExecuteUbergraph_PackResource
// 0x0004 (0x0004 - 0x0000)
struct PackResource_C_ExecuteUbergraph_PackResource final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PackResource_C_ExecuteUbergraph_PackResource) == 0x000004, "Wrong alignment on PackResource_C_ExecuteUbergraph_PackResource");
static_assert(sizeof(PackResource_C_ExecuteUbergraph_PackResource) == 0x000004, "Wrong size on PackResource_C_ExecuteUbergraph_PackResource");
static_assert(offsetof(PackResource_C_ExecuteUbergraph_PackResource, EntryPoint) == 0x000000, "Member 'PackResource_C_ExecuteUbergraph_PackResource::EntryPoint' has a wrong offset!");

// Function PackResource.PackResource_C.UpdateType
// 0x00B0 (0x00B0 - 0x0000)
struct PackResource_C_UpdateType final
{
public:
	EFortResourceType                             ResourceType_0;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortResourceType                             Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPaperSprite*                           Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPaperSprite*                           Temp_object_Variable1;                             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPaperSprite*                           Temp_object_Variable12;                            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPaperSprite*                           Temp_object_Variable123;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPaperSprite*                           Temp_object_Variable1234;                          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPaperSprite*                           K2Node_Select_Default;                             // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            CallFunc_MakeBrushFromSprite_ReturnValue;          // 0x0038(0x0078)()
};
static_assert(alignof(PackResource_C_UpdateType) == 0x000008, "Wrong alignment on PackResource_C_UpdateType");
static_assert(sizeof(PackResource_C_UpdateType) == 0x0000B0, "Wrong size on PackResource_C_UpdateType");
static_assert(offsetof(PackResource_C_UpdateType, ResourceType_0) == 0x000000, "Member 'PackResource_C_UpdateType::ResourceType_0' has a wrong offset!");
static_assert(offsetof(PackResource_C_UpdateType, Temp_byte_Variable) == 0x000001, "Member 'PackResource_C_UpdateType::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(PackResource_C_UpdateType, Temp_object_Variable) == 0x000008, "Member 'PackResource_C_UpdateType::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(PackResource_C_UpdateType, Temp_object_Variable1) == 0x000010, "Member 'PackResource_C_UpdateType::Temp_object_Variable1' has a wrong offset!");
static_assert(offsetof(PackResource_C_UpdateType, Temp_object_Variable12) == 0x000018, "Member 'PackResource_C_UpdateType::Temp_object_Variable12' has a wrong offset!");
static_assert(offsetof(PackResource_C_UpdateType, Temp_object_Variable123) == 0x000020, "Member 'PackResource_C_UpdateType::Temp_object_Variable123' has a wrong offset!");
static_assert(offsetof(PackResource_C_UpdateType, Temp_object_Variable1234) == 0x000028, "Member 'PackResource_C_UpdateType::Temp_object_Variable1234' has a wrong offset!");
static_assert(offsetof(PackResource_C_UpdateType, K2Node_Select_Default) == 0x000030, "Member 'PackResource_C_UpdateType::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PackResource_C_UpdateType, CallFunc_MakeBrushFromSprite_ReturnValue) == 0x000038, "Member 'PackResource_C_UpdateType::CallFunc_MakeBrushFromSprite_ReturnValue' has a wrong offset!");

// Function PackResource.PackResource_C.TryUpdateBackground
// 0x0048 (0x0048 - 0x0000)
struct PackResource_C_TryUpdateBackground final
{
public:
	bool                                          Local_IsResourceActive;                            // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 Temp_class_Variable;                               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable1;                              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 K2Node_Select_Default;                             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortInventoryContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortResourceItemDefinition*            CallFunc_GetCurrentResourceItemDefinition_ReturnValue; // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortResourceItemDefinition*            CallFunc_GetResourceItemDefinition_ReturnValue;    // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PackResource_C_TryUpdateBackground) == 0x000008, "Wrong alignment on PackResource_C_TryUpdateBackground");
static_assert(sizeof(PackResource_C_TryUpdateBackground) == 0x000048, "Wrong size on PackResource_C_TryUpdateBackground");
static_assert(offsetof(PackResource_C_TryUpdateBackground, Local_IsResourceActive) == 0x000000, "Member 'PackResource_C_TryUpdateBackground::Local_IsResourceActive' has a wrong offset!");
static_assert(offsetof(PackResource_C_TryUpdateBackground, Temp_bool_Variable) == 0x000001, "Member 'PackResource_C_TryUpdateBackground::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PackResource_C_TryUpdateBackground, Temp_class_Variable) == 0x000008, "Member 'PackResource_C_TryUpdateBackground::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(PackResource_C_TryUpdateBackground, Temp_class_Variable1) == 0x000010, "Member 'PackResource_C_TryUpdateBackground::Temp_class_Variable1' has a wrong offset!");
static_assert(offsetof(PackResource_C_TryUpdateBackground, K2Node_Select_Default) == 0x000018, "Member 'PackResource_C_TryUpdateBackground::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PackResource_C_TryUpdateBackground, CallFunc_GetContext_ReturnValue) == 0x000020, "Member 'PackResource_C_TryUpdateBackground::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(PackResource_C_TryUpdateBackground, CallFunc_EqualEqual_BoolBool_ReturnValue) == 0x000028, "Member 'PackResource_C_TryUpdateBackground::CallFunc_EqualEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PackResource_C_TryUpdateBackground, CallFunc_GetCurrentResourceItemDefinition_ReturnValue) == 0x000030, "Member 'PackResource_C_TryUpdateBackground::CallFunc_GetCurrentResourceItemDefinition_ReturnValue' has a wrong offset!");
static_assert(offsetof(PackResource_C_TryUpdateBackground, CallFunc_GetResourceItemDefinition_ReturnValue) == 0x000038, "Member 'PackResource_C_TryUpdateBackground::CallFunc_GetResourceItemDefinition_ReturnValue' has a wrong offset!");
static_assert(offsetof(PackResource_C_TryUpdateBackground, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000040, "Member 'PackResource_C_TryUpdateBackground::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function PackResource.PackResource_C.TryUpdateCount
// 0x0070 (0x0070 - 0x0000)
struct PackResource_C_TryUpdateCount final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable1;                              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortInventoryContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortResourceItemDefinition*            CallFunc_GetResourceItemDefinition_ReturnValue;    // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetResourceCount_ReturnValue;             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E[0x2];                                       // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0034(0x0010)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0048(0x0028)()
};
static_assert(alignof(PackResource_C_TryUpdateCount) == 0x000008, "Wrong alignment on PackResource_C_TryUpdateCount");
static_assert(sizeof(PackResource_C_TryUpdateCount) == 0x000070, "Wrong size on PackResource_C_TryUpdateCount");
static_assert(offsetof(PackResource_C_TryUpdateCount, Temp_bool_Variable) == 0x000000, "Member 'PackResource_C_TryUpdateCount::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PackResource_C_TryUpdateCount, Temp_float_Variable) == 0x000004, "Member 'PackResource_C_TryUpdateCount::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(PackResource_C_TryUpdateCount, Temp_float_Variable1) == 0x000008, "Member 'PackResource_C_TryUpdateCount::Temp_float_Variable1' has a wrong offset!");
static_assert(offsetof(PackResource_C_TryUpdateCount, CallFunc_GetContext_ReturnValue) == 0x000010, "Member 'PackResource_C_TryUpdateCount::CallFunc_GetContext_ReturnValue' has a wrong offset!");
static_assert(offsetof(PackResource_C_TryUpdateCount, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000018, "Member 'PackResource_C_TryUpdateCount::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PackResource_C_TryUpdateCount, CallFunc_GetResourceItemDefinition_ReturnValue) == 0x000020, "Member 'PackResource_C_TryUpdateCount::CallFunc_GetResourceItemDefinition_ReturnValue' has a wrong offset!");
static_assert(offsetof(PackResource_C_TryUpdateCount, CallFunc_GetResourceCount_ReturnValue) == 0x000028, "Member 'PackResource_C_TryUpdateCount::CallFunc_GetResourceCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(PackResource_C_TryUpdateCount, CallFunc_NotEqual_IntInt_ReturnValue) == 0x00002C, "Member 'PackResource_C_TryUpdateCount::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PackResource_C_TryUpdateCount, CallFunc_Less_IntInt_ReturnValue) == 0x00002D, "Member 'PackResource_C_TryUpdateCount::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PackResource_C_TryUpdateCount, K2Node_Select_Default) == 0x000030, "Member 'PackResource_C_TryUpdateCount::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PackResource_C_TryUpdateCount, K2Node_MakeStruct_LinearColor) == 0x000034, "Member 'PackResource_C_TryUpdateCount::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(PackResource_C_TryUpdateCount, K2Node_MakeStruct_SlateColor) == 0x000048, "Member 'PackResource_C_TryUpdateCount::K2Node_MakeStruct_SlateColor' has a wrong offset!");

}

