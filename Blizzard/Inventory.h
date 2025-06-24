#pragma once

#include <map>
#include "SDK.hpp"
#include "Globals.h"
#include "Actor.h"

namespace InventoryNamespace
{

    void AddDefaultQuickBarItems(SDK::AFortPlayerController* PC)
    {
        auto QuickBars = PC->QuickBars;
        auto FortInventory = PC->WorldInventory;

        auto PickaxeDef = SDK::UObject::FindObject<SDK::UFortWeaponItemDefinition>("FortWeaponMeleeItemDefinition WID_Harvest_Pickaxe_Athena_C_T01.WID_Harvest_Pickaxe_Athena_C_T01");
        auto EditToolDef = SDK::UObject::FindObject<SDK::UFortEditToolItemDefinition>("FortEditToolItemDefinition EditTool.EditTool");
        auto WallBuildDef = SDK::UObject::FindObject<SDK::UFortBuildingItemDefinition>("FortBuildingItemDefinition BuildingItemData_Wall.BuildingItemData_Wall");
        auto FloorBuildDef = SDK::UObject::FindObject<SDK::UFortBuildingItemDefinition>("FortBuildingItemDefinition BuildingItemData_Floor.BuildingItemData_Floor");
        auto StairBuildDef = SDK::UObject::FindObject<SDK::UFortBuildingItemDefinition>("FortBuildingItemDefinition BuildingItemData_Stair_W.BuildingItemData_Stair_W");
        auto RoofBuildDef = SDK::UObject::FindObject<SDK::UFortBuildingItemDefinition>("FortBuildingItemDefinition BuildingItemData_RoofS.BuildingItemData_RoofS");

        auto PickaxeItem = PickaxeDef->CreateTemporaryItemInstanceBP(1, 0);
        auto WorldPickaxeItem = reinterpret_cast<SDK::UFortWorldItem*>(PickaxeItem);
        WorldPickaxeItem->ItemEntry.Count = 1;
        FortInventory->Inventory.ReplicatedEntries.Add(WorldPickaxeItem->ItemEntry);
        FortInventory->Inventory.ItemInstances.Add(WorldPickaxeItem);
        QuickBars->ServerAddItemInternal(WorldPickaxeItem->GetItemGuid(), SDK::EFortQuickBars::Primary, 0);

        auto WallBuildItem = WallBuildDef->CreateTemporaryItemInstanceBP(1, 0);
        auto WallWorldBuildItem = reinterpret_cast<SDK::UFortWorldItem*>(WallBuildItem);
        FortInventory->Inventory.ReplicatedEntries.Add(WallWorldBuildItem->ItemEntry);
        FortInventory->Inventory.ItemInstances.Add(WallWorldBuildItem);
        QuickBars->ServerAddItemInternal(WallWorldBuildItem->GetItemGuid(), SDK::EFortQuickBars::Secondary, 0);

        auto FloorBuildItem = FloorBuildDef->CreateTemporaryItemInstanceBP(1, 0);
        auto FloorWorldBuildItem = reinterpret_cast<SDK::UFortWorldItem*>(FloorBuildItem);
        FortInventory->Inventory.ReplicatedEntries.Add(FloorWorldBuildItem->ItemEntry);
        FortInventory->Inventory.ItemInstances.Add(FloorWorldBuildItem);
        QuickBars->ServerAddItemInternal(FloorWorldBuildItem->GetItemGuid(), SDK::EFortQuickBars::Secondary, 1);

        auto StairBuildItem = StairBuildDef->CreateTemporaryItemInstanceBP(1, 0);
        auto StairWorldBuildItem = reinterpret_cast<SDK::UFortWorldItem*>(StairBuildItem);
        FortInventory->Inventory.ReplicatedEntries.Add(StairWorldBuildItem->ItemEntry);
        FortInventory->Inventory.ItemInstances.Add(StairWorldBuildItem);
        QuickBars->ServerAddItemInternal(StairWorldBuildItem->GetItemGuid(), SDK::EFortQuickBars::Secondary, 2);

        auto RoofBuildItem = RoofBuildDef->CreateTemporaryItemInstanceBP(1, 0);
        auto RoofWorldBuildItem = reinterpret_cast<SDK::UFortWorldItem*>(RoofBuildItem);
        FortInventory->Inventory.ReplicatedEntries.Add(RoofWorldBuildItem->ItemEntry);
        FortInventory->Inventory.ItemInstances.Add(RoofWorldBuildItem);
        QuickBars->ServerAddItemInternal(RoofWorldBuildItem->GetItemGuid(), SDK::EFortQuickBars::Secondary, 3);
    }

    void SetupInventory(SDK::AFortPlayerController* PC)
    {
        std::map<SDK::UFortItemDefinition*, int> ItemsToAddMap;

        auto NewQuickBars = (SDK::AFortQuickBars*)ActorNamespace::SpawnActor(SDK::AFortQuickBars::StaticClass(), {}, {});
        NewQuickBars->SetOwner(PC);
        PC->QuickBars = NewQuickBars;
        PC->OnRep_QuickBar();

        auto pWood = SDK::UObject::FindObject<SDK::UFortItemDefinition>("FortResourceItemDefinition WoodItemData.WoodItemData");
        auto pMetal = SDK::UObject::FindObject<SDK::UFortItemDefinition>("FortResourceItemDefinition MetalItemData.MetalItemData");
        auto pStone = SDK::UObject::FindObject<SDK::UFortItemDefinition>("FortResourceItemDefinition StoneItemData.StoneItemData");
        auto pRockets = SDK::UObject::FindObject<SDK::UFortItemDefinition>("FortAmmoItemDefinition AthenaAmmoDataRockets.AthenaAmmoDataRockets");
        auto pShells = SDK::UObject::FindObject<SDK::UFortItemDefinition>("FortAmmoItemDefinition AthenaAmmoDataShells.AthenaAmmoDataShells");
        auto pMedium = SDK::UObject::FindObject<SDK::UFortItemDefinition>("FortAmmoItemDefinition AthenaAmmoDataBulletsMedium.AthenaAmmoDataBulletsMedium");
        auto pLight = SDK::UObject::FindObject<SDK::UFortItemDefinition>("FortAmmoItemDefinition AthenaAmmoDataBulletsLight.AthenaAmmoDataBulletsLight");
        auto pHeavy = SDK::UObject::FindObject<SDK::UFortItemDefinition>("FortAmmoItemDefinition AthenaAmmoDataBulletsHeavy.AthenaAmmoDataBulletsHeavy");
        ItemsToAddMap.insert_or_assign(pWood, 999);
        ItemsToAddMap.insert_or_assign(pMetal, 999);
        ItemsToAddMap.insert_or_assign(pStone, 999);
        ItemsToAddMap.insert_or_assign(pRockets, 999);
        ItemsToAddMap.insert_or_assign(pShells, 999);
        ItemsToAddMap.insert_or_assign(pMedium, 999);
        ItemsToAddMap.insert_or_assign(pLight, 999);
        ItemsToAddMap.insert_or_assign(pHeavy, 999);

        auto FortInventory = PC->WorldInventory;
        auto QuickBars = PC->QuickBars;

        QuickBars->EnableSlot(SDK::EFortQuickBars::Primary, 0);
        QuickBars->EnableSlot(SDK::EFortQuickBars::Primary, 1);
        QuickBars->EnableSlot(SDK::EFortQuickBars::Primary, 2);
        QuickBars->EnableSlot(SDK::EFortQuickBars::Primary, 3);
        QuickBars->EnableSlot(SDK::EFortQuickBars::Primary, 4);
        QuickBars->EnableSlot(SDK::EFortQuickBars::Secondary, 0);
        QuickBars->EnableSlot(SDK::EFortQuickBars::Secondary, 1);
        QuickBars->EnableSlot(SDK::EFortQuickBars::Secondary, 2);
        QuickBars->EnableSlot(SDK::EFortQuickBars::Secondary, 3);

        AddDefaultQuickBarItems(PC);

        for (auto Item : ItemsToAddMap)
        {
            auto ItemDef = Item.first;
            auto ItemCount = Item.second;

            if (ItemDef)
            {
                auto NewWorldItem = (SDK::UFortWorldItem*)(ItemDef->CreateTemporaryItemInstanceBP(ItemCount, 0));
                FortInventory->Inventory.ReplicatedEntries.Add(NewWorldItem->ItemEntry);
                FortInventory->Inventory.ItemInstances.Add(NewWorldItem);
            }
        }

        ItemsToAddMap.empty();
        ItemsToAddMap.clear();
    }

    void UpdateInventory(SDK::AFortPlayerController* PC)
    {
        PC->WorldInventory->ForceNetUpdate();

        PC->WorldInventory->HandleInventoryLocalUpdate();
        PC->HandleWorldInventoryLocalUpdate();
        PC->QuickBars->OnRep_PrimaryQuickBar();
        PC->QuickBars->OnRep_SecondaryQuickBar();
    }
}