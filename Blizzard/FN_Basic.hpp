#pragma once
#include "SDK.hpp"
#include "UnrealContainers.hpp"
#include <string>

namespace SDK
{
	inline void (*FNameToString)(SDK::FName* This, UC::FString& OutStr);
	inline void (*FreeInternal)(__int64);
	inline std::string GetFNameString(SDK::FName* fname)
	{
		if (!fname)
			return "";
		UC::FString temp;
		SDK::FNameToString(fname, temp);
		wchar_t* data = *reinterpret_cast<wchar_t**>(&temp);
		if (!data)
			return "";
		auto wName = std::wstring(data);
		auto name = std::string(wName.begin(), wName.end());
		SDK::FreeInternal((__int64)data);
		auto pos = name.rfind('/');
		if (pos == std::string::npos)
		{
			return name;
		}
		return name.substr(pos + 1);
	}

	enum class ESpawnActorNameMode : uint8_t
	{
		Required_Fatal,
		Required_ErrorAndReturnNull,
		Required_ReturnNull,
		Requested
	};

	struct FActorSpawnParameters
	{
		FActorSpawnParameters() : Name(), Template(nullptr), Owner(nullptr), Instigator(nullptr), OverrideLevel(nullptr),
			SpawnCollisionHandlingOverride(), bRemoteOwned(0), bNoFail(0),
			bDeferConstruction(0),
			bAllowDuringConstructionScript(0),
			NameMode(),
			ObjectFlags()
		{
		}
		;
		SDK::FName Name;
		SDK::UObject* Template;
		SDK::UObject* Owner;
		SDK::UObject* Instigator;
		SDK::UObject* OverrideLevel;
		SDK::ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingOverride;
	private:
		uint8_t bRemoteOwned : 1;
	public:
		bool IsRemoteOwned() const { return bRemoteOwned; }
		uint8_t bNoFail : 1;
		uint8_t bDeferConstruction : 1;
		uint8_t bAllowDuringConstructionScript : 1;
		ESpawnActorNameMode NameMode;
		EObjectFlags ObjectFlags;
	};

	// STRUCTS
	struct AFortPlayerController_ServerClientPawnLoaded_Params
	{
		bool bIsPawnLoaded;
	};

	struct AFortPlayerPawn_ServerHandlePickup_Params
	{
		class AFortPickup* Pickup;
		float InFlyTime;
		struct FVector InStartDirection;
		bool bPlayPickupSound;
	};

	struct AFortPlayerController_ServerPlayEmoteItem_Params
	{
		class UFortMontageItemDefinitionBase* EmoteAsset;
	};

	struct AFortPlayerController_ServerSetClientHasFinishedLoading_Params
	{
		bool bInHasFinishedLoading;
	};

	struct AFortPlayerController_ServerExecuteInventoryItem_Params
	{
		struct FGuid ItemGuid;
	};
}