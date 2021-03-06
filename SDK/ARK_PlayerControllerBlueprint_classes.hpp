#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PlayerControllerBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerControllerBlueprint.PlayerControllerBlueprint_C
// 0x0008 (0x11B0 - 0x11A8)
class APlayerControllerBlueprint_C : public AShooterPlayerController
{
public:
	class UUserWidget*                                 InventoryScene;                                           // 0x11A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerControllerBlueprint.PlayerControllerBlueprint_C");
		return ptr;
	}


	void STATIC_CanFit(const struct FVector& Location, float VerticalOffset, float Angle, float HorizontalOffset, float Radius, float HalfHeight, class AActor* SpawningActor, class AActor* IgnoreActor, bool* Can, struct FVector* NewLocation);
	void CanDeploy(class UClass* Class, const struct FVector& Location, class AActor* Actor, class AActor* IgnoreActor, bool* Can, struct FVector* NewLocation);
	struct FVector BPCheckCanDinoSpawnFromLocation(class UClass** DinoClass, struct FVector* CheckLocation);
	void UserConstructionScript();
	void ExecuteUbergraph_PlayerControllerBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
