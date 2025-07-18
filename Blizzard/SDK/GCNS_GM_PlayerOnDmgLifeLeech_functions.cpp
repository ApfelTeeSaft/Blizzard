﻿#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCNS_GM_PlayerOnDmgLifeLeech

#include "Basic.hpp"

#include "GCNS_GM_PlayerOnDmgLifeLeech_classes.hpp"
#include "GCNS_GM_PlayerOnDmgLifeLeech_parameters.hpp"


namespace SDK
{

// Function GCNS_GM_PlayerOnDmgLifeLeech.GCNS_GM_PlayerOnDmgLifeLeech_C.OnStartParticleSystemSpawned
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UParticleSystemComponent*         SpawnedParticleSysComponent                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// const struct FGameplayCueParameters&    Parameters                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UGCNS_GM_PlayerOnDmgLifeLeech_C::OnStartParticleSystemSpawned(class UParticleSystemComponent* SpawnedParticleSysComponent, const struct FGameplayCueParameters& Parameters) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GCNS_GM_PlayerOnDmgLifeLeech_C", "OnStartParticleSystemSpawned");

	Params::GCNS_GM_PlayerOnDmgLifeLeech_C_OnStartParticleSystemSpawned Parms{};

	Parms.SpawnedParticleSysComponent = SpawnedParticleSysComponent;
	Parms.Parameters = std::move(Parameters);

	UObject::ProcessEvent(Func, &Parms);
}

}

