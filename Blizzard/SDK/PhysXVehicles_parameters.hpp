﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PhysXVehicles

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function PhysXVehicles.WheeledVehicleMovementComponent.ServerUpdateState
// 0x0014 (0x0014 - 0x0000)
struct WheeledVehicleMovementComponent_ServerUpdateState final
{
public:
	float                                         InSteeringInput;                                   // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InThrottleInput;                                   // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InBrakeInput;                                      // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InHandbrakeInput;                                  // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CurrentGear;                                       // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(WheeledVehicleMovementComponent_ServerUpdateState) == 0x000004, "Wrong alignment on WheeledVehicleMovementComponent_ServerUpdateState");
static_assert(sizeof(WheeledVehicleMovementComponent_ServerUpdateState) == 0x000014, "Wrong size on WheeledVehicleMovementComponent_ServerUpdateState");
static_assert(offsetof(WheeledVehicleMovementComponent_ServerUpdateState, InSteeringInput) == 0x000000, "Member 'WheeledVehicleMovementComponent_ServerUpdateState::InSteeringInput' has a wrong offset!");
static_assert(offsetof(WheeledVehicleMovementComponent_ServerUpdateState, InThrottleInput) == 0x000004, "Member 'WheeledVehicleMovementComponent_ServerUpdateState::InThrottleInput' has a wrong offset!");
static_assert(offsetof(WheeledVehicleMovementComponent_ServerUpdateState, InBrakeInput) == 0x000008, "Member 'WheeledVehicleMovementComponent_ServerUpdateState::InBrakeInput' has a wrong offset!");
static_assert(offsetof(WheeledVehicleMovementComponent_ServerUpdateState, InHandbrakeInput) == 0x00000C, "Member 'WheeledVehicleMovementComponent_ServerUpdateState::InHandbrakeInput' has a wrong offset!");
static_assert(offsetof(WheeledVehicleMovementComponent_ServerUpdateState, CurrentGear) == 0x000010, "Member 'WheeledVehicleMovementComponent_ServerUpdateState::CurrentGear' has a wrong offset!");

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceEnabled
// 0x0001 (0x0001 - 0x0000)
struct WheeledVehicleMovementComponent_SetAvoidanceEnabled final
{
public:
	bool                                          bEnable;                                           // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(WheeledVehicleMovementComponent_SetAvoidanceEnabled) == 0x000001, "Wrong alignment on WheeledVehicleMovementComponent_SetAvoidanceEnabled");
static_assert(sizeof(WheeledVehicleMovementComponent_SetAvoidanceEnabled) == 0x000001, "Wrong size on WheeledVehicleMovementComponent_SetAvoidanceEnabled");
static_assert(offsetof(WheeledVehicleMovementComponent_SetAvoidanceEnabled, bEnable) == 0x000000, "Member 'WheeledVehicleMovementComponent_SetAvoidanceEnabled::bEnable' has a wrong offset!");

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroup
// 0x0004 (0x0004 - 0x0000)
struct WheeledVehicleMovementComponent_SetAvoidanceGroup final
{
public:
	int32                                         GroupFlags;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(WheeledVehicleMovementComponent_SetAvoidanceGroup) == 0x000004, "Wrong alignment on WheeledVehicleMovementComponent_SetAvoidanceGroup");
static_assert(sizeof(WheeledVehicleMovementComponent_SetAvoidanceGroup) == 0x000004, "Wrong size on WheeledVehicleMovementComponent_SetAvoidanceGroup");
static_assert(offsetof(WheeledVehicleMovementComponent_SetAvoidanceGroup, GroupFlags) == 0x000000, "Member 'WheeledVehicleMovementComponent_SetAvoidanceGroup::GroupFlags' has a wrong offset!");

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroupMask
// 0x0004 (0x0004 - 0x0000)
struct WheeledVehicleMovementComponent_SetAvoidanceGroupMask final
{
public:
	struct FNavAvoidanceMask                      GroupMask;                                         // 0x0000(0x0004)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(WheeledVehicleMovementComponent_SetAvoidanceGroupMask) == 0x000004, "Wrong alignment on WheeledVehicleMovementComponent_SetAvoidanceGroupMask");
static_assert(sizeof(WheeledVehicleMovementComponent_SetAvoidanceGroupMask) == 0x000004, "Wrong size on WheeledVehicleMovementComponent_SetAvoidanceGroupMask");
static_assert(offsetof(WheeledVehicleMovementComponent_SetAvoidanceGroupMask, GroupMask) == 0x000000, "Member 'WheeledVehicleMovementComponent_SetAvoidanceGroupMask::GroupMask' has a wrong offset!");

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetBrakeInput
// 0x0004 (0x0004 - 0x0000)
struct WheeledVehicleMovementComponent_SetBrakeInput final
{
public:
	float                                         Brake;                                             // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(WheeledVehicleMovementComponent_SetBrakeInput) == 0x000004, "Wrong alignment on WheeledVehicleMovementComponent_SetBrakeInput");
static_assert(sizeof(WheeledVehicleMovementComponent_SetBrakeInput) == 0x000004, "Wrong size on WheeledVehicleMovementComponent_SetBrakeInput");
static_assert(offsetof(WheeledVehicleMovementComponent_SetBrakeInput, Brake) == 0x000000, "Member 'WheeledVehicleMovementComponent_SetBrakeInput::Brake' has a wrong offset!");

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearDown
// 0x0001 (0x0001 - 0x0000)
struct WheeledVehicleMovementComponent_SetGearDown final
{
public:
	bool                                          bNewGearDown;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(WheeledVehicleMovementComponent_SetGearDown) == 0x000001, "Wrong alignment on WheeledVehicleMovementComponent_SetGearDown");
static_assert(sizeof(WheeledVehicleMovementComponent_SetGearDown) == 0x000001, "Wrong size on WheeledVehicleMovementComponent_SetGearDown");
static_assert(offsetof(WheeledVehicleMovementComponent_SetGearDown, bNewGearDown) == 0x000000, "Member 'WheeledVehicleMovementComponent_SetGearDown::bNewGearDown' has a wrong offset!");

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearUp
// 0x0001 (0x0001 - 0x0000)
struct WheeledVehicleMovementComponent_SetGearUp final
{
public:
	bool                                          bNewGearUp;                                        // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(WheeledVehicleMovementComponent_SetGearUp) == 0x000001, "Wrong alignment on WheeledVehicleMovementComponent_SetGearUp");
static_assert(sizeof(WheeledVehicleMovementComponent_SetGearUp) == 0x000001, "Wrong size on WheeledVehicleMovementComponent_SetGearUp");
static_assert(offsetof(WheeledVehicleMovementComponent_SetGearUp, bNewGearUp) == 0x000000, "Member 'WheeledVehicleMovementComponent_SetGearUp::bNewGearUp' has a wrong offset!");

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoid
// 0x0004 (0x0004 - 0x0000)
struct WheeledVehicleMovementComponent_SetGroupsToAvoid final
{
public:
	int32                                         GroupFlags;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(WheeledVehicleMovementComponent_SetGroupsToAvoid) == 0x000004, "Wrong alignment on WheeledVehicleMovementComponent_SetGroupsToAvoid");
static_assert(sizeof(WheeledVehicleMovementComponent_SetGroupsToAvoid) == 0x000004, "Wrong size on WheeledVehicleMovementComponent_SetGroupsToAvoid");
static_assert(offsetof(WheeledVehicleMovementComponent_SetGroupsToAvoid, GroupFlags) == 0x000000, "Member 'WheeledVehicleMovementComponent_SetGroupsToAvoid::GroupFlags' has a wrong offset!");

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoidMask
// 0x0004 (0x0004 - 0x0000)
struct WheeledVehicleMovementComponent_SetGroupsToAvoidMask final
{
public:
	struct FNavAvoidanceMask                      GroupMask;                                         // 0x0000(0x0004)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(WheeledVehicleMovementComponent_SetGroupsToAvoidMask) == 0x000004, "Wrong alignment on WheeledVehicleMovementComponent_SetGroupsToAvoidMask");
static_assert(sizeof(WheeledVehicleMovementComponent_SetGroupsToAvoidMask) == 0x000004, "Wrong size on WheeledVehicleMovementComponent_SetGroupsToAvoidMask");
static_assert(offsetof(WheeledVehicleMovementComponent_SetGroupsToAvoidMask, GroupMask) == 0x000000, "Member 'WheeledVehicleMovementComponent_SetGroupsToAvoidMask::GroupMask' has a wrong offset!");

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnore
// 0x0004 (0x0004 - 0x0000)
struct WheeledVehicleMovementComponent_SetGroupsToIgnore final
{
public:
	int32                                         GroupFlags;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(WheeledVehicleMovementComponent_SetGroupsToIgnore) == 0x000004, "Wrong alignment on WheeledVehicleMovementComponent_SetGroupsToIgnore");
static_assert(sizeof(WheeledVehicleMovementComponent_SetGroupsToIgnore) == 0x000004, "Wrong size on WheeledVehicleMovementComponent_SetGroupsToIgnore");
static_assert(offsetof(WheeledVehicleMovementComponent_SetGroupsToIgnore, GroupFlags) == 0x000000, "Member 'WheeledVehicleMovementComponent_SetGroupsToIgnore::GroupFlags' has a wrong offset!");

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnoreMask
// 0x0004 (0x0004 - 0x0000)
struct WheeledVehicleMovementComponent_SetGroupsToIgnoreMask final
{
public:
	struct FNavAvoidanceMask                      GroupMask;                                         // 0x0000(0x0004)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(WheeledVehicleMovementComponent_SetGroupsToIgnoreMask) == 0x000004, "Wrong alignment on WheeledVehicleMovementComponent_SetGroupsToIgnoreMask");
static_assert(sizeof(WheeledVehicleMovementComponent_SetGroupsToIgnoreMask) == 0x000004, "Wrong size on WheeledVehicleMovementComponent_SetGroupsToIgnoreMask");
static_assert(offsetof(WheeledVehicleMovementComponent_SetGroupsToIgnoreMask, GroupMask) == 0x000000, "Member 'WheeledVehicleMovementComponent_SetGroupsToIgnoreMask::GroupMask' has a wrong offset!");

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetHandbrakeInput
// 0x0001 (0x0001 - 0x0000)
struct WheeledVehicleMovementComponent_SetHandbrakeInput final
{
public:
	bool                                          bNewHandbrake;                                     // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(WheeledVehicleMovementComponent_SetHandbrakeInput) == 0x000001, "Wrong alignment on WheeledVehicleMovementComponent_SetHandbrakeInput");
static_assert(sizeof(WheeledVehicleMovementComponent_SetHandbrakeInput) == 0x000001, "Wrong size on WheeledVehicleMovementComponent_SetHandbrakeInput");
static_assert(offsetof(WheeledVehicleMovementComponent_SetHandbrakeInput, bNewHandbrake) == 0x000000, "Member 'WheeledVehicleMovementComponent_SetHandbrakeInput::bNewHandbrake' has a wrong offset!");

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetSteeringInput
// 0x0004 (0x0004 - 0x0000)
struct WheeledVehicleMovementComponent_SetSteeringInput final
{
public:
	float                                         Steering;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(WheeledVehicleMovementComponent_SetSteeringInput) == 0x000004, "Wrong alignment on WheeledVehicleMovementComponent_SetSteeringInput");
static_assert(sizeof(WheeledVehicleMovementComponent_SetSteeringInput) == 0x000004, "Wrong size on WheeledVehicleMovementComponent_SetSteeringInput");
static_assert(offsetof(WheeledVehicleMovementComponent_SetSteeringInput, Steering) == 0x000000, "Member 'WheeledVehicleMovementComponent_SetSteeringInput::Steering' has a wrong offset!");

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetTargetGear
// 0x0008 (0x0008 - 0x0000)
struct WheeledVehicleMovementComponent_SetTargetGear final
{
public:
	int32                                         GearNum;                                           // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bImmediate;                                        // 0x0004(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(WheeledVehicleMovementComponent_SetTargetGear) == 0x000004, "Wrong alignment on WheeledVehicleMovementComponent_SetTargetGear");
static_assert(sizeof(WheeledVehicleMovementComponent_SetTargetGear) == 0x000008, "Wrong size on WheeledVehicleMovementComponent_SetTargetGear");
static_assert(offsetof(WheeledVehicleMovementComponent_SetTargetGear, GearNum) == 0x000000, "Member 'WheeledVehicleMovementComponent_SetTargetGear::GearNum' has a wrong offset!");
static_assert(offsetof(WheeledVehicleMovementComponent_SetTargetGear, bImmediate) == 0x000004, "Member 'WheeledVehicleMovementComponent_SetTargetGear::bImmediate' has a wrong offset!");

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetThrottleInput
// 0x0004 (0x0004 - 0x0000)
struct WheeledVehicleMovementComponent_SetThrottleInput final
{
public:
	float                                         Throttle;                                          // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(WheeledVehicleMovementComponent_SetThrottleInput) == 0x000004, "Wrong alignment on WheeledVehicleMovementComponent_SetThrottleInput");
static_assert(sizeof(WheeledVehicleMovementComponent_SetThrottleInput) == 0x000004, "Wrong size on WheeledVehicleMovementComponent_SetThrottleInput");
static_assert(offsetof(WheeledVehicleMovementComponent_SetThrottleInput, Throttle) == 0x000000, "Member 'WheeledVehicleMovementComponent_SetThrottleInput::Throttle' has a wrong offset!");

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears
// 0x0001 (0x0001 - 0x0000)
struct WheeledVehicleMovementComponent_SetUseAutoGears final
{
public:
	bool                                          bUseAuto;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(WheeledVehicleMovementComponent_SetUseAutoGears) == 0x000001, "Wrong alignment on WheeledVehicleMovementComponent_SetUseAutoGears");
static_assert(sizeof(WheeledVehicleMovementComponent_SetUseAutoGears) == 0x000001, "Wrong size on WheeledVehicleMovementComponent_SetUseAutoGears");
static_assert(offsetof(WheeledVehicleMovementComponent_SetUseAutoGears, bUseAuto) == 0x000000, "Member 'WheeledVehicleMovementComponent_SetUseAutoGears::bUseAuto' has a wrong offset!");

// Function PhysXVehicles.WheeledVehicleMovementComponent.GetCurrentGear
// 0x0004 (0x0004 - 0x0000)
struct WheeledVehicleMovementComponent_GetCurrentGear final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(WheeledVehicleMovementComponent_GetCurrentGear) == 0x000004, "Wrong alignment on WheeledVehicleMovementComponent_GetCurrentGear");
static_assert(sizeof(WheeledVehicleMovementComponent_GetCurrentGear) == 0x000004, "Wrong size on WheeledVehicleMovementComponent_GetCurrentGear");
static_assert(offsetof(WheeledVehicleMovementComponent_GetCurrentGear, ReturnValue) == 0x000000, "Member 'WheeledVehicleMovementComponent_GetCurrentGear::ReturnValue' has a wrong offset!");

// Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed
// 0x0004 (0x0004 - 0x0000)
struct WheeledVehicleMovementComponent_GetEngineMaxRotationSpeed final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(WheeledVehicleMovementComponent_GetEngineMaxRotationSpeed) == 0x000004, "Wrong alignment on WheeledVehicleMovementComponent_GetEngineMaxRotationSpeed");
static_assert(sizeof(WheeledVehicleMovementComponent_GetEngineMaxRotationSpeed) == 0x000004, "Wrong size on WheeledVehicleMovementComponent_GetEngineMaxRotationSpeed");
static_assert(offsetof(WheeledVehicleMovementComponent_GetEngineMaxRotationSpeed, ReturnValue) == 0x000000, "Member 'WheeledVehicleMovementComponent_GetEngineMaxRotationSpeed::ReturnValue' has a wrong offset!");

// Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineRotationSpeed
// 0x0004 (0x0004 - 0x0000)
struct WheeledVehicleMovementComponent_GetEngineRotationSpeed final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(WheeledVehicleMovementComponent_GetEngineRotationSpeed) == 0x000004, "Wrong alignment on WheeledVehicleMovementComponent_GetEngineRotationSpeed");
static_assert(sizeof(WheeledVehicleMovementComponent_GetEngineRotationSpeed) == 0x000004, "Wrong size on WheeledVehicleMovementComponent_GetEngineRotationSpeed");
static_assert(offsetof(WheeledVehicleMovementComponent_GetEngineRotationSpeed, ReturnValue) == 0x000000, "Member 'WheeledVehicleMovementComponent_GetEngineRotationSpeed::ReturnValue' has a wrong offset!");

// Function PhysXVehicles.WheeledVehicleMovementComponent.GetForwardSpeed
// 0x0004 (0x0004 - 0x0000)
struct WheeledVehicleMovementComponent_GetForwardSpeed final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(WheeledVehicleMovementComponent_GetForwardSpeed) == 0x000004, "Wrong alignment on WheeledVehicleMovementComponent_GetForwardSpeed");
static_assert(sizeof(WheeledVehicleMovementComponent_GetForwardSpeed) == 0x000004, "Wrong size on WheeledVehicleMovementComponent_GetForwardSpeed");
static_assert(offsetof(WheeledVehicleMovementComponent_GetForwardSpeed, ReturnValue) == 0x000000, "Member 'WheeledVehicleMovementComponent_GetForwardSpeed::ReturnValue' has a wrong offset!");

// Function PhysXVehicles.WheeledVehicleMovementComponent.GetTargetGear
// 0x0004 (0x0004 - 0x0000)
struct WheeledVehicleMovementComponent_GetTargetGear final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(WheeledVehicleMovementComponent_GetTargetGear) == 0x000004, "Wrong alignment on WheeledVehicleMovementComponent_GetTargetGear");
static_assert(sizeof(WheeledVehicleMovementComponent_GetTargetGear) == 0x000004, "Wrong size on WheeledVehicleMovementComponent_GetTargetGear");
static_assert(offsetof(WheeledVehicleMovementComponent_GetTargetGear, ReturnValue) == 0x000000, "Member 'WheeledVehicleMovementComponent_GetTargetGear::ReturnValue' has a wrong offset!");

// Function PhysXVehicles.WheeledVehicleMovementComponent.GetUseAutoGears
// 0x0001 (0x0001 - 0x0000)
struct WheeledVehicleMovementComponent_GetUseAutoGears final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(WheeledVehicleMovementComponent_GetUseAutoGears) == 0x000001, "Wrong alignment on WheeledVehicleMovementComponent_GetUseAutoGears");
static_assert(sizeof(WheeledVehicleMovementComponent_GetUseAutoGears) == 0x000001, "Wrong size on WheeledVehicleMovementComponent_GetUseAutoGears");
static_assert(offsetof(WheeledVehicleMovementComponent_GetUseAutoGears, ReturnValue) == 0x000000, "Member 'WheeledVehicleMovementComponent_GetUseAutoGears::ReturnValue' has a wrong offset!");

// Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetBrakeTorque
// 0x0008 (0x0008 - 0x0000)
struct SimpleWheeledVehicleMovementComponent_SetBrakeTorque final
{
public:
	float                                         BrakeTorque;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         WheelIndex;                                        // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SimpleWheeledVehicleMovementComponent_SetBrakeTorque) == 0x000004, "Wrong alignment on SimpleWheeledVehicleMovementComponent_SetBrakeTorque");
static_assert(sizeof(SimpleWheeledVehicleMovementComponent_SetBrakeTorque) == 0x000008, "Wrong size on SimpleWheeledVehicleMovementComponent_SetBrakeTorque");
static_assert(offsetof(SimpleWheeledVehicleMovementComponent_SetBrakeTorque, BrakeTorque) == 0x000000, "Member 'SimpleWheeledVehicleMovementComponent_SetBrakeTorque::BrakeTorque' has a wrong offset!");
static_assert(offsetof(SimpleWheeledVehicleMovementComponent_SetBrakeTorque, WheelIndex) == 0x000004, "Member 'SimpleWheeledVehicleMovementComponent_SetBrakeTorque::WheelIndex' has a wrong offset!");

// Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetDriveTorque
// 0x0008 (0x0008 - 0x0000)
struct SimpleWheeledVehicleMovementComponent_SetDriveTorque final
{
public:
	float                                         DriveTorque;                                       // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         WheelIndex;                                        // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SimpleWheeledVehicleMovementComponent_SetDriveTorque) == 0x000004, "Wrong alignment on SimpleWheeledVehicleMovementComponent_SetDriveTorque");
static_assert(sizeof(SimpleWheeledVehicleMovementComponent_SetDriveTorque) == 0x000008, "Wrong size on SimpleWheeledVehicleMovementComponent_SetDriveTorque");
static_assert(offsetof(SimpleWheeledVehicleMovementComponent_SetDriveTorque, DriveTorque) == 0x000000, "Member 'SimpleWheeledVehicleMovementComponent_SetDriveTorque::DriveTorque' has a wrong offset!");
static_assert(offsetof(SimpleWheeledVehicleMovementComponent_SetDriveTorque, WheelIndex) == 0x000004, "Member 'SimpleWheeledVehicleMovementComponent_SetDriveTorque::WheelIndex' has a wrong offset!");

// Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetSteerAngle
// 0x0008 (0x0008 - 0x0000)
struct SimpleWheeledVehicleMovementComponent_SetSteerAngle final
{
public:
	float                                         SteerAngle;                                        // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         WheelIndex;                                        // 0x0004(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(SimpleWheeledVehicleMovementComponent_SetSteerAngle) == 0x000004, "Wrong alignment on SimpleWheeledVehicleMovementComponent_SetSteerAngle");
static_assert(sizeof(SimpleWheeledVehicleMovementComponent_SetSteerAngle) == 0x000008, "Wrong size on SimpleWheeledVehicleMovementComponent_SetSteerAngle");
static_assert(offsetof(SimpleWheeledVehicleMovementComponent_SetSteerAngle, SteerAngle) == 0x000000, "Member 'SimpleWheeledVehicleMovementComponent_SetSteerAngle::SteerAngle' has a wrong offset!");
static_assert(offsetof(SimpleWheeledVehicleMovementComponent_SetSteerAngle, WheelIndex) == 0x000004, "Member 'SimpleWheeledVehicleMovementComponent_SetSteerAngle::WheelIndex' has a wrong offset!");

// Function PhysXVehicles.VehicleAnimInstance.GetVehicle
// 0x0008 (0x0008 - 0x0000)
struct VehicleAnimInstance_GetVehicle final
{
public:
	class AWheeledVehicle*                        ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(VehicleAnimInstance_GetVehicle) == 0x000008, "Wrong alignment on VehicleAnimInstance_GetVehicle");
static_assert(sizeof(VehicleAnimInstance_GetVehicle) == 0x000008, "Wrong size on VehicleAnimInstance_GetVehicle");
static_assert(offsetof(VehicleAnimInstance_GetVehicle, ReturnValue) == 0x000000, "Member 'VehicleAnimInstance_GetVehicle::ReturnValue' has a wrong offset!");

// Function PhysXVehicles.VehicleWheel.GetRotationAngle
// 0x0004 (0x0004 - 0x0000)
struct VehicleWheel_GetRotationAngle final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(VehicleWheel_GetRotationAngle) == 0x000004, "Wrong alignment on VehicleWheel_GetRotationAngle");
static_assert(sizeof(VehicleWheel_GetRotationAngle) == 0x000004, "Wrong size on VehicleWheel_GetRotationAngle");
static_assert(offsetof(VehicleWheel_GetRotationAngle, ReturnValue) == 0x000000, "Member 'VehicleWheel_GetRotationAngle::ReturnValue' has a wrong offset!");

// Function PhysXVehicles.VehicleWheel.GetSteerAngle
// 0x0004 (0x0004 - 0x0000)
struct VehicleWheel_GetSteerAngle final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(VehicleWheel_GetSteerAngle) == 0x000004, "Wrong alignment on VehicleWheel_GetSteerAngle");
static_assert(sizeof(VehicleWheel_GetSteerAngle) == 0x000004, "Wrong size on VehicleWheel_GetSteerAngle");
static_assert(offsetof(VehicleWheel_GetSteerAngle, ReturnValue) == 0x000000, "Member 'VehicleWheel_GetSteerAngle::ReturnValue' has a wrong offset!");

// Function PhysXVehicles.VehicleWheel.GetSuspensionOffset
// 0x0004 (0x0004 - 0x0000)
struct VehicleWheel_GetSuspensionOffset final
{
public:
	float                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(VehicleWheel_GetSuspensionOffset) == 0x000004, "Wrong alignment on VehicleWheel_GetSuspensionOffset");
static_assert(sizeof(VehicleWheel_GetSuspensionOffset) == 0x000004, "Wrong size on VehicleWheel_GetSuspensionOffset");
static_assert(offsetof(VehicleWheel_GetSuspensionOffset, ReturnValue) == 0x000000, "Member 'VehicleWheel_GetSuspensionOffset::ReturnValue' has a wrong offset!");

// Function PhysXVehicles.VehicleWheel.IsInAir
// 0x0001 (0x0001 - 0x0000)
struct VehicleWheel_IsInAir final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(VehicleWheel_IsInAir) == 0x000001, "Wrong alignment on VehicleWheel_IsInAir");
static_assert(sizeof(VehicleWheel_IsInAir) == 0x000001, "Wrong size on VehicleWheel_IsInAir");
static_assert(offsetof(VehicleWheel_IsInAir, ReturnValue) == 0x000000, "Member 'VehicleWheel_IsInAir::ReturnValue' has a wrong offset!");

}

