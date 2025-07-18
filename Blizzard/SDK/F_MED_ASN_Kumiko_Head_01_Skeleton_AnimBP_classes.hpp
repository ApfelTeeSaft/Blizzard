﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: F_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass F_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP.F_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_C
// 0x05B8 (0x09E8 - 0x0430)
class UF_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_C final : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_0B40686742835C44D79BBF912D9EE786; // 0x0438(0x0048)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh_E77A21544D530F4259B2B3B68452B756; // 0x0480(0x00E8)(ContainsInstancedReference)
	struct FAnimNode_Slot                         AnimGraphNode_Slot_647DFDF241CA0D786C7678A9DA110BA2; // 0x0568(0x0070)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_0A434B384ABE9775ABE93A9D2614EB63; // 0x05D8(0x00E0)()
	struct FAnimNode_LayeredBoneBlend             AnimGraphNode_LayeredBoneBlend_C4B69DBA48E9D799B2611CBC4C2E21C0; // 0x06B8(0x00E0)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_8354A43641D2EDEBBC4DB6852F0D3C42; // 0x0798(0x00D0)()
	struct FAnimNode_CopyPoseFromMesh             AnimGraphNode_CopyPoseFromMesh_B8D265F048BF67D3FFC13F8C6477176D; // 0x0868(0x00E8)(ContainsInstancedReference)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_C22854E142B1FF2C4EA56C9F5DA77887; // 0x0950(0x0048)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_17B4681A41228AABE5D3828791B20C56; // 0x0998(0x0048)()
	class USkeletalMeshComponent*                 MeshToCopy;                                        // 0x09E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_F_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP(int32 EntryPoint);
	void BlueprintInitializeAnimation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_8354A43641D2EDEBBC4DB6852F0D3C42();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_B8D265F048BF67D3FFC13F8C6477176D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_F_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_AnimGraphNode_CopyPoseFromMesh_E77A21544D530F4259B2B3B68452B756();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"F_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_C">();
	}
	static class UF_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UF_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_C>();
	}
};
static_assert(alignof(UF_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_C) == 0x000008, "Wrong alignment on UF_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_C");
static_assert(sizeof(UF_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_C) == 0x0009E8, "Wrong size on UF_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_C");
static_assert(offsetof(UF_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_C, UberGraphFrame) == 0x000430, "Member 'UF_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UF_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_C, AnimGraphNode_Root_0B40686742835C44D79BBF912D9EE786) == 0x000438, "Member 'UF_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_C::AnimGraphNode_Root_0B40686742835C44D79BBF912D9EE786' has a wrong offset!");
static_assert(offsetof(UF_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_C, AnimGraphNode_CopyPoseFromMesh_E77A21544D530F4259B2B3B68452B756) == 0x000480, "Member 'UF_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_C::AnimGraphNode_CopyPoseFromMesh_E77A21544D530F4259B2B3B68452B756' has a wrong offset!");
static_assert(offsetof(UF_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_C, AnimGraphNode_Slot_647DFDF241CA0D786C7678A9DA110BA2) == 0x000568, "Member 'UF_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_C::AnimGraphNode_Slot_647DFDF241CA0D786C7678A9DA110BA2' has a wrong offset!");
static_assert(offsetof(UF_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_C, AnimGraphNode_LayeredBoneBlend_0A434B384ABE9775ABE93A9D2614EB63) == 0x0005D8, "Member 'UF_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_C::AnimGraphNode_LayeredBoneBlend_0A434B384ABE9775ABE93A9D2614EB63' has a wrong offset!");
static_assert(offsetof(UF_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_C, AnimGraphNode_LayeredBoneBlend_C4B69DBA48E9D799B2611CBC4C2E21C0) == 0x0006B8, "Member 'UF_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_C::AnimGraphNode_LayeredBoneBlend_C4B69DBA48E9D799B2611CBC4C2E21C0' has a wrong offset!");
static_assert(offsetof(UF_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_C, AnimGraphNode_BlendListByBool_8354A43641D2EDEBBC4DB6852F0D3C42) == 0x000798, "Member 'UF_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_C::AnimGraphNode_BlendListByBool_8354A43641D2EDEBBC4DB6852F0D3C42' has a wrong offset!");
static_assert(offsetof(UF_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_C, AnimGraphNode_CopyPoseFromMesh_B8D265F048BF67D3FFC13F8C6477176D) == 0x000868, "Member 'UF_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_C::AnimGraphNode_CopyPoseFromMesh_B8D265F048BF67D3FFC13F8C6477176D' has a wrong offset!");
static_assert(offsetof(UF_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_C, AnimGraphNode_LocalToComponentSpace_C22854E142B1FF2C4EA56C9F5DA77887) == 0x000950, "Member 'UF_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_C::AnimGraphNode_LocalToComponentSpace_C22854E142B1FF2C4EA56C9F5DA77887' has a wrong offset!");
static_assert(offsetof(UF_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_C, AnimGraphNode_ComponentToLocalSpace_17B4681A41228AABE5D3828791B20C56) == 0x000998, "Member 'UF_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_C::AnimGraphNode_ComponentToLocalSpace_17B4681A41228AABE5D3828791B20C56' has a wrong offset!");
static_assert(offsetof(UF_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_C, MeshToCopy) == 0x0009E0, "Member 'UF_MED_ASN_Kumiko_Head_01_Skeleton_AnimBP_C::MeshToCopy' has a wrong offset!");

}

