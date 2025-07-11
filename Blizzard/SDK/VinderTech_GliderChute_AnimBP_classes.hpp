﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VinderTech_GliderChute_AnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass VinderTech_GliderChute_AnimBP.VinderTech_GliderChute_AnimBP_C
// 0x06C8 (0x0A40 - 0x0378)
class UVinderTech_GliderChute_AnimBP_C final : public UAnimInstance
{
public:
	uint8                                         Pad_378[0x8];                                      // 0x0378(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0380(0x0008)(Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_EBDA468D4AE5D250B2B622A7005664B6; // 0x0388(0x0048)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_928EDF8F48A9073F91162CAB58A14585; // 0x03D0(0x0070)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_953326594E4978729F3C6F9E722F8648; // 0x0440(0x0080)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_326A11214546037B4E81ADB615DF6BEE; // 0x04C0(0x0080)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_713B895F48F2801365CB0CA497F43775; // 0x0540(0x0080)()
	struct FAnimNode_TransitionResult             AnimGraphNode_TransitionResult_6AAED3AF491F53722B9FE2B1DDF77122; // 0x05C0(0x0080)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_A98464EC49847793447025870BB3567D; // 0x0640(0x0088)()
	struct FAnimNode_Root                         AnimGraphNode_StateResult_2439A6B841320C06C4EE708432E4C44C; // 0x06C8(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2133C7F047F09F18A630588EBA7E4D65; // 0x0710(0x0088)()
	struct FAnimNode_Root                         AnimGraphNode_StateResult_ECEA977D46C391A751D73BB4275664EB; // 0x0798(0x0048)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_7E66AFF7488A41D3156C3C9367D0163D; // 0x07E0(0x0128)()
	struct FAnimNode_Root                         AnimGraphNode_StateResult_FD572ED741F2DDF85C3E83969BA5DAA1; // 0x0908(0x0048)()
	struct FAnimNode_StateMachine                 AnimGraphNode_StateMachine_B9156DAE4FE14BBC3C91B2BFEE37264F; // 0x0950(0x00E0)()
	bool                                          IsParachuteOpen;                                   // 0x0A30(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A31[0x3];                                      // 0x0A31(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         AimPitch;                                          // 0x0A34(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DeployAnimRate;                                    // 0x0A38(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkydiveYaw;                                        // 0x0A3C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_VinderTech_GliderChute_AnimBP(int32 EntryPoint);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_GliderChute_AnimBP_AnimGraphNode_TransitionResult_953326594E4978729F3C6F9E722F8648();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_GliderChute_AnimBP_AnimGraphNode_BlendSpacePlayer_7E66AFF7488A41D3156C3C9367D0163D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_GliderChute_AnimBP_AnimGraphNode_SequencePlayer_2133C7F047F09F18A630588EBA7E4D65();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_GliderChute_AnimBP_AnimGraphNode_TransitionResult_326A11214546037B4E81ADB615DF6BEE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_GliderChute_AnimBP_AnimGraphNode_TransitionResult_6AAED3AF491F53722B9FE2B1DDF77122();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_VinderTech_GliderChute_AnimBP_AnimGraphNode_TransitionResult_713B895F48F2801365CB0CA497F43775();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"VinderTech_GliderChute_AnimBP_C">();
	}
	static class UVinderTech_GliderChute_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UVinderTech_GliderChute_AnimBP_C>();
	}
};
static_assert(alignof(UVinderTech_GliderChute_AnimBP_C) == 0x000010, "Wrong alignment on UVinderTech_GliderChute_AnimBP_C");
static_assert(sizeof(UVinderTech_GliderChute_AnimBP_C) == 0x000A40, "Wrong size on UVinderTech_GliderChute_AnimBP_C");
static_assert(offsetof(UVinderTech_GliderChute_AnimBP_C, UberGraphFrame) == 0x000380, "Member 'UVinderTech_GliderChute_AnimBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UVinderTech_GliderChute_AnimBP_C, AnimGraphNode_Root_EBDA468D4AE5D250B2B622A7005664B6) == 0x000388, "Member 'UVinderTech_GliderChute_AnimBP_C::AnimGraphNode_Root_EBDA468D4AE5D250B2B622A7005664B6' has a wrong offset!");
static_assert(offsetof(UVinderTech_GliderChute_AnimBP_C, AnimGraphNode_Slot_928EDF8F48A9073F91162CAB58A14585) == 0x0003D0, "Member 'UVinderTech_GliderChute_AnimBP_C::AnimGraphNode_Slot_928EDF8F48A9073F91162CAB58A14585' has a wrong offset!");
static_assert(offsetof(UVinderTech_GliderChute_AnimBP_C, AnimGraphNode_TransitionResult_953326594E4978729F3C6F9E722F8648) == 0x000440, "Member 'UVinderTech_GliderChute_AnimBP_C::AnimGraphNode_TransitionResult_953326594E4978729F3C6F9E722F8648' has a wrong offset!");
static_assert(offsetof(UVinderTech_GliderChute_AnimBP_C, AnimGraphNode_TransitionResult_326A11214546037B4E81ADB615DF6BEE) == 0x0004C0, "Member 'UVinderTech_GliderChute_AnimBP_C::AnimGraphNode_TransitionResult_326A11214546037B4E81ADB615DF6BEE' has a wrong offset!");
static_assert(offsetof(UVinderTech_GliderChute_AnimBP_C, AnimGraphNode_TransitionResult_713B895F48F2801365CB0CA497F43775) == 0x000540, "Member 'UVinderTech_GliderChute_AnimBP_C::AnimGraphNode_TransitionResult_713B895F48F2801365CB0CA497F43775' has a wrong offset!");
static_assert(offsetof(UVinderTech_GliderChute_AnimBP_C, AnimGraphNode_TransitionResult_6AAED3AF491F53722B9FE2B1DDF77122) == 0x0005C0, "Member 'UVinderTech_GliderChute_AnimBP_C::AnimGraphNode_TransitionResult_6AAED3AF491F53722B9FE2B1DDF77122' has a wrong offset!");
static_assert(offsetof(UVinderTech_GliderChute_AnimBP_C, AnimGraphNode_SequencePlayer_A98464EC49847793447025870BB3567D) == 0x000640, "Member 'UVinderTech_GliderChute_AnimBP_C::AnimGraphNode_SequencePlayer_A98464EC49847793447025870BB3567D' has a wrong offset!");
static_assert(offsetof(UVinderTech_GliderChute_AnimBP_C, AnimGraphNode_StateResult_2439A6B841320C06C4EE708432E4C44C) == 0x0006C8, "Member 'UVinderTech_GliderChute_AnimBP_C::AnimGraphNode_StateResult_2439A6B841320C06C4EE708432E4C44C' has a wrong offset!");
static_assert(offsetof(UVinderTech_GliderChute_AnimBP_C, AnimGraphNode_SequencePlayer_2133C7F047F09F18A630588EBA7E4D65) == 0x000710, "Member 'UVinderTech_GliderChute_AnimBP_C::AnimGraphNode_SequencePlayer_2133C7F047F09F18A630588EBA7E4D65' has a wrong offset!");
static_assert(offsetof(UVinderTech_GliderChute_AnimBP_C, AnimGraphNode_StateResult_ECEA977D46C391A751D73BB4275664EB) == 0x000798, "Member 'UVinderTech_GliderChute_AnimBP_C::AnimGraphNode_StateResult_ECEA977D46C391A751D73BB4275664EB' has a wrong offset!");
static_assert(offsetof(UVinderTech_GliderChute_AnimBP_C, AnimGraphNode_BlendSpacePlayer_7E66AFF7488A41D3156C3C9367D0163D) == 0x0007E0, "Member 'UVinderTech_GliderChute_AnimBP_C::AnimGraphNode_BlendSpacePlayer_7E66AFF7488A41D3156C3C9367D0163D' has a wrong offset!");
static_assert(offsetof(UVinderTech_GliderChute_AnimBP_C, AnimGraphNode_StateResult_FD572ED741F2DDF85C3E83969BA5DAA1) == 0x000908, "Member 'UVinderTech_GliderChute_AnimBP_C::AnimGraphNode_StateResult_FD572ED741F2DDF85C3E83969BA5DAA1' has a wrong offset!");
static_assert(offsetof(UVinderTech_GliderChute_AnimBP_C, AnimGraphNode_StateMachine_B9156DAE4FE14BBC3C91B2BFEE37264F) == 0x000950, "Member 'UVinderTech_GliderChute_AnimBP_C::AnimGraphNode_StateMachine_B9156DAE4FE14BBC3C91B2BFEE37264F' has a wrong offset!");
static_assert(offsetof(UVinderTech_GliderChute_AnimBP_C, IsParachuteOpen) == 0x000A30, "Member 'UVinderTech_GliderChute_AnimBP_C::IsParachuteOpen' has a wrong offset!");
static_assert(offsetof(UVinderTech_GliderChute_AnimBP_C, AimPitch) == 0x000A34, "Member 'UVinderTech_GliderChute_AnimBP_C::AimPitch' has a wrong offset!");
static_assert(offsetof(UVinderTech_GliderChute_AnimBP_C, DeployAnimRate) == 0x000A38, "Member 'UVinderTech_GliderChute_AnimBP_C::DeployAnimRate' has a wrong offset!");
static_assert(offsetof(UVinderTech_GliderChute_AnimBP_C, SkydiveYaw) == 0x000A3C, "Member 'UVinderTech_GliderChute_AnimBP_C::SkydiveYaw' has a wrong offset!");

}

