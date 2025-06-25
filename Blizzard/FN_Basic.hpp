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

	template<class T>
	struct TArray
	{
		friend struct FString;
	public:
		inline TArray()
		{
			Data = nullptr;
			Count = Max = 0;
		};

		inline TArray(const TArray& Other)
		{
			Data = nullptr;
			Count = Max = 0;
			*this = Other;
		}

		inline ~TArray()
		{
		}

		inline TArray& operator=(const TArray& Other)
		{
			if (this != &Other)
			{
				Clear();
				Reserve(Other.Count);
				for (int i = 0; i < Other.Count; i++)
				{
					Add(Other[i]);
				}
			}
			return *this;
		}

		inline int Num() const
		{
			return Count;
		}

		inline T& operator[](int i)
		{
			return Data[i];
		};

		inline const T& operator[](int i) const
		{
			return Data[i];
		};

		inline bool IsValidIndex(int i) const
		{
			return i >= 0 && i < Count;
		}

		inline bool IsValid() const
		{
			return Data != nullptr || Count == 0;
		}

		inline bool IsEmpty() const
		{
			return Count == 0;
		}

		inline void Add(T InputData)
		{
			if (Count >= Max)
			{
				Reserve(Count + 1);
			}
			Data[Count++] = InputData;
		};

		inline void Reserve(int NewMax)
		{
			if (NewMax > Max)
			{
				Max = NewMax;
				Data = (T*)realloc(Data, sizeof(T) * Max);
			}
		}

		inline void SetNum(int NewNum)
		{
			if (NewNum > Max)
			{
				Reserve(NewNum);
			}
			Count = NewNum;
		}

		inline void Clear()
		{
			Count = 0;
		}

		inline void Empty()
		{
			if (Data)
			{
				free(Data);
				Data = nullptr;
			}
			Count = Max = 0;
		}

		inline T* GetData()
		{
			return Data;
		}

		inline const T* GetData() const
		{
			return Data;
		}

		inline void RemoveAt(int Index)
		{
			if (IsValidIndex(Index))
			{
				for (int i = Index; i < Count - 1; i++)
				{
					Data[i] = Data[i + 1];
				}
				Count--;
			}
		}

		inline bool Remove(const T& Item)
		{
			for (int i = 0; i < Count; i++)
			{
				if (Data[i] == Item)
				{
					RemoveAt(i);
					return true;
				}
			}
			return false;
		}

		inline int Find(const T& Item) const
		{
			for (int i = 0; i < Count; i++)
			{
				if (Data[i] == Item)
				{
					return i;
				}
			}
			return -1;
		}

		inline bool Contains(const T& Item) const
		{
			return Find(Item) != -1;
		}

		inline T* begin() { return Data; }
		inline T* end() { return Data + Count; }
		inline const T* begin() const { return Data; }
		inline const T* end() const { return Data + Count; }

		T* Data;
		int32_t Count;
		int32_t Max;
	};
}