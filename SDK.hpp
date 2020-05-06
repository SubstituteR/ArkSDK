#pragma once

#include "SDK/ARK_Basic.hpp"

#include "SDK/ARK_PrimalItemDyeGeneric_classes.hpp"
#include "SDK/ARK_PrimalItemDyeGeneric_structs.hpp"
#include "SDK/ARK_PrimalItemDyeGeneric_parameters.hpp"

#include "SDK/ARK_PrimalItemWeaponGeneric_classes.hpp"
#include "SDK/ARK_PrimalItemWeaponGeneric_structs.hpp"
#include "SDK/ARK_PrimalItemWeaponGeneric_parameters.hpp"

#include "SDK/ARK_AIModule_classes.hpp"
#include "SDK/ARK_AIModule_parameters.hpp"
#include "SDK/ARK_AIModule_structs.hpp"
#include "SDK/ARK_Buff_Companion_BaseBP_classes.hpp"
#include "SDK/ARK_Buff_Companion_BaseBP_parameters.hpp"
#include "SDK/ARK_Buff_Companion_BaseBP_structs.hpp"
#include "SDK/ARK_Buff_Companion_HLNA_classes.hpp"
#include "SDK/ARK_Buff_Companion_HLNA_parameters.hpp"
#include "SDK/ARK_Buff_Companion_HLNA_structs.hpp"
#include "SDK/ARK_Buff_TekArmor_classes.hpp"
#include "SDK/ARK_Buff_TekArmor_parameters.hpp"
#include "SDK/ARK_Buff_TekArmor_structs.hpp"
#include "SDK/ARK_Buff_TekArmor_Gloves_classes.hpp"
#include "SDK/ARK_Buff_TekArmor_Gloves_parameters.hpp"
#include "SDK/ARK_Buff_TekArmor_Gloves_structs.hpp"
#include "SDK/ARK_CoreUObject_classes.hpp"
#include "SDK/ARK_CoreUObject_parameters.hpp"
#include "SDK/ARK_CoreUObject_structs.hpp"
#include "SDK/ARK_DayCycleManager_Genesis_classes.hpp"
#include "SDK/ARK_DayCycleManager_Genesis_parameters.hpp"
#include "SDK/ARK_DayCycleManager_Genesis_structs.hpp"
#include "SDK/ARK_Deinonychus_Character_BP_classes.hpp"
#include "SDK/ARK_Deinonychus_Character_BP_parameters.hpp"
#include "SDK/ARK_Deinonychus_Character_BP_structs.hpp"
#include "SDK/ARK_Engine_classes.hpp"
#include "SDK/ARK_Engine_parameters.hpp"
#include "SDK/ARK_Engine_structs.hpp"
#include "SDK/ARK_InputCore_classes.hpp"
#include "SDK/ARK_InputCore_parameters.hpp"
#include "SDK/ARK_InputCore_structs.hpp"
#include "SDK/ARK_MoviePlayer_classes.hpp"
#include "SDK/ARK_MoviePlayer_parameters.hpp"
#include "SDK/ARK_MoviePlayer_structs.hpp"
#include "SDK/ARK_MovieSceneCore_classes.hpp"
#include "SDK/ARK_MovieSceneCore_parameters.hpp"
#include "SDK/ARK_MovieSceneCore_structs.hpp"
#include "SDK/ARK_OnlineSubsystem_classes.hpp"
#include "SDK/ARK_OnlineSubsystem_parameters.hpp"
#include "SDK/ARK_OnlineSubsystem_structs.hpp"
#include "SDK/ARK_OnlineSubsystemSteam_classes.hpp"
#include "SDK/ARK_OnlineSubsystemSteam_parameters.hpp"
#include "SDK/ARK_OnlineSubsystemSteam_structs.hpp"
#include "SDK/ARK_OnlineSubsystemUtils_classes.hpp"
#include "SDK/ARK_OnlineSubsystemUtils_parameters.hpp"
#include "SDK/ARK_OnlineSubsystemUtils_structs.hpp"
#include "SDK/ARK_PrimalItem_Base_classes.hpp"
#include "SDK/ARK_PrimalItem_Base_parameters.hpp"
#include "SDK/ARK_PrimalItem_Base_structs.hpp"
#include "SDK/ARK_PrimalItemArmorGeneric_classes.hpp"
#include "SDK/ARK_PrimalItemArmorGeneric_parameters.hpp"
#include "SDK/ARK_PrimalItemArmorGeneric_structs.hpp"
#include "SDK/ARK_Shapeshifter_Large_Character_BP_classes.hpp"
#include "SDK/ARK_Shapeshifter_Large_Character_BP_parameters.hpp"
#include "SDK/ARK_Shapeshifter_Large_Character_BP_structs.hpp"
#include "SDK/ARK_ShooterGame_classes.hpp"
#include "SDK/ARK_ShooterGame_parameters.hpp"
#include "SDK/ARK_ShooterGame_structs.hpp"
#include "SDK/ARK_Slate_classes.hpp"
#include "SDK/ARK_Slate_parameters.hpp"
#include "SDK/ARK_Slate_structs.hpp"
#include "SDK/ARK_SlateCore_classes.hpp"
#include "SDK/ARK_SlateCore_parameters.hpp"
#include "SDK/ARK_SlateCore_structs.hpp"
#include "SDK/ARK_StructureBaseBP_classes.hpp"
#include "SDK/ARK_StructureBaseBP_parameters.hpp"
#include "SDK/ARK_StructureBaseBP_structs.hpp"
#include "SDK/ARK_TrueSkyPlugin_classes.hpp"
#include "SDK/ARK_TrueSkyPlugin_parameters.hpp"
#include "SDK/ARK_TrueSkyPlugin_structs.hpp"
#include "SDK/ARK_UMG_classes.hpp"
#include "SDK/ARK_UMG_parameters.hpp"
#include "SDK/ARK_UMG_structs.hpp"
#include "SDK/ARK_CaveWolf_Character_BP_classes.hpp"
#include "SDK/ARK_CaveWolf_Character_BP_parameters.hpp"
#include "SDK/ARK_CaveWolf_Character_BP_structs.hpp"

inline sdk::UGameplayStatics& GetGameplayStatics() { return *(sdk::UGameplayStatics*)sdk::UGameplayStatics::StaticClass(); };
inline sdk::UKismetMathLibrary& GetKismetMathLibrary() { return *(sdk::UKismetMathLibrary*)sdk::UKismetMathLibrary::StaticClass(); };
inline sdk::UKismetSystemLibrary& GetKismetSystemLibrary() { return *(sdk::UKismetSystemLibrary*)sdk::UKismetSystemLibrary::StaticClass(); };
inline sdk::UKismetTextLibrary& GetKismetTextLibrary() { return *(sdk::UKismetTextLibrary*)sdk::UKismetTextLibrary::StaticClass(); };
inline sdk::UPrimalGameData& GetPrimalGameData() { return *(sdk::UPrimalGameData*)sdk::UPrimalGameData::StaticClass(); };
inline sdk::UPrimalGlobals& GetPrimalGlobals() { return *(sdk::UPrimalGlobals*)sdk::UPrimalGlobals::StaticClass(); };
inline sdk::UStructuresPlus& GetStructuresPlus() { return *(sdk::UStructuresPlus*)sdk::UStructuresPlus::StaticClass(); };
inline sdk::UVictoryCore& GetVictoryCore() { return *(sdk::UVictoryCore*)sdk::UVictoryCore::StaticClass(); };
inline sdk::UWidgetLayoutLibrary& GetWidgetLayoutLibrary() { return *(sdk::UWidgetLayoutLibrary*)sdk::UWidgetLayoutLibrary::StaticClass(); };
inline sdk::UWidgetBlueprintLibrary& GetWidgetBlueprintLibrary() { return *(sdk::UWidgetBlueprintLibrary*)sdk::UWidgetBlueprintLibrary::StaticClass(); };

namespace sdk
{
	typedef TArray<uint32_t> TIntArray;
	typedef TArray<AActor*> TAActorArray;

	FVector& operator *=(sdk::FVector& vec, float fac);
	FVector operator *(sdk::FVector vec, float fac);
	FVector operator +(sdk::FVector vec, sdk::FVector vec2);
	FVector& operator +=(sdk::FVector& vec, sdk::FVector& other);
	FVector operator -(sdk::FVector& vec, sdk::FVector& other);

	enum class EAppMsgType : uint8_t
	{
		Ok = 0x0,
		YesNo = 0x1,
		OkCancel = 0x2,
		YesNoCancel = 0x3,
		CancelRetryContinue = 0x4,
		YesNoYesAllNoAll = 0x5,
		YesNoYesAllNoAllCancel = 0x6,
		YesNoYesAll = 0x7,
	};
}