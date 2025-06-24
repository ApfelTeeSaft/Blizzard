#pragma once
#include "SDK.hpp"
#include "Globals.h"

namespace World
{
	void Initialize()
	{
		auto PC = reinterpret_cast<SDK::AFortPlayerController*>(Globals::GetEngine()->GameInstance->LocalPlayers[0]->PlayerController);
		PC->SwitchLevel(L"Athena_Terrain");
		SDK::UWorld::GetWorld()->OwningGameInstance->LocalPlayers.Remove(0);
	}
}