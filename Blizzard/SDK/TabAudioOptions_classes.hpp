﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TabAudioOptions

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TabAudioOptions.TabAudioOptions_C
// 0x0070 (0x0290 - 0x0220)
class UTabAudioOptions_C final : public UFortAudioOptions
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(Transient, DuplicateTransient)
	class UOptionsMenuSlider_C*                   ChatVolume;                                        // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSlider_C*                   DialogVolume;                                      // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSlider_C*                   MusicVolume;                                       // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                     Quality;                                           // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionsMenuSlider_C*                   SoundFXVolume;                                     // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                     Subtitles;                                         // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TooltipDisplay;                                    // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                     VoiceChat3DEnable;                                 // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                     VoiceChatDevice;                                   // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                     VoiceChatEnable;                                   // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URotatorSelector_C*                     VoiceChatPushToTalk;                               // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FText>                           VoiceChatDevices;                                  // 0x0280(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

public:
	void ExecuteUbergraph_TabAudioOptions(int32 EntryPoint);
	void BndEvt__VoiceChatDevice_K2Node_ComponentBoundEvent_175_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__VoiceChat3DEnable_K2Node_ComponentBoundEvent_22_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__VoiceChatPushToTalk_K2Node_ComponentBoundEvent_36_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__VoiceChatEnable_K2Node_ComponentBoundEvent_18_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__Quality_K2Node_ComponentBoundEvent_43_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void BndEvt__Subtitles_K2Node_ComponentBoundEvent_45_Selection_Changed__DelegateSignature(int32 Selected_Index);
	void CenterOnTab();
	void BndEvt__ChatVolume_K2Node_ComponentBoundEvent_15_SliderChanged__DelegateSignature(float Slider_Value);
	void BndEvt__DialogVolume_K2Node_ComponentBoundEvent_11_SliderChanged__DelegateSignature(float Slider_Value);
	void BndEvt__MusicVolume_K2Node_ComponentBoundEvent_2_SliderChanged__DelegateSignature(float Slider_Value);
	void BndEvt__SoundFXVolume_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature(float Slider_Value);
	void UpdateOptionsTab();
	void Construct();
	void Update_Data();
	void InitializeData();
	void UpdateVoiceOptionsVisibility();
	void GatherVoiceChatDevices();
	void FindVoiceChatDeviceIndex(int32* FoundDeviceIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TabAudioOptions_C">();
	}
	static class UTabAudioOptions_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTabAudioOptions_C>();
	}
};
static_assert(alignof(UTabAudioOptions_C) == 0x000008, "Wrong alignment on UTabAudioOptions_C");
static_assert(sizeof(UTabAudioOptions_C) == 0x000290, "Wrong size on UTabAudioOptions_C");
static_assert(offsetof(UTabAudioOptions_C, UberGraphFrame) == 0x000220, "Member 'UTabAudioOptions_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTabAudioOptions_C, ChatVolume) == 0x000228, "Member 'UTabAudioOptions_C::ChatVolume' has a wrong offset!");
static_assert(offsetof(UTabAudioOptions_C, DialogVolume) == 0x000230, "Member 'UTabAudioOptions_C::DialogVolume' has a wrong offset!");
static_assert(offsetof(UTabAudioOptions_C, MusicVolume) == 0x000238, "Member 'UTabAudioOptions_C::MusicVolume' has a wrong offset!");
static_assert(offsetof(UTabAudioOptions_C, Quality) == 0x000240, "Member 'UTabAudioOptions_C::Quality' has a wrong offset!");
static_assert(offsetof(UTabAudioOptions_C, SoundFXVolume) == 0x000248, "Member 'UTabAudioOptions_C::SoundFXVolume' has a wrong offset!");
static_assert(offsetof(UTabAudioOptions_C, Subtitles) == 0x000250, "Member 'UTabAudioOptions_C::Subtitles' has a wrong offset!");
static_assert(offsetof(UTabAudioOptions_C, TooltipDisplay) == 0x000258, "Member 'UTabAudioOptions_C::TooltipDisplay' has a wrong offset!");
static_assert(offsetof(UTabAudioOptions_C, VoiceChat3DEnable) == 0x000260, "Member 'UTabAudioOptions_C::VoiceChat3DEnable' has a wrong offset!");
static_assert(offsetof(UTabAudioOptions_C, VoiceChatDevice) == 0x000268, "Member 'UTabAudioOptions_C::VoiceChatDevice' has a wrong offset!");
static_assert(offsetof(UTabAudioOptions_C, VoiceChatEnable) == 0x000270, "Member 'UTabAudioOptions_C::VoiceChatEnable' has a wrong offset!");
static_assert(offsetof(UTabAudioOptions_C, VoiceChatPushToTalk) == 0x000278, "Member 'UTabAudioOptions_C::VoiceChatPushToTalk' has a wrong offset!");
static_assert(offsetof(UTabAudioOptions_C, VoiceChatDevices) == 0x000280, "Member 'UTabAudioOptions_C::VoiceChatDevices' has a wrong offset!");

}

