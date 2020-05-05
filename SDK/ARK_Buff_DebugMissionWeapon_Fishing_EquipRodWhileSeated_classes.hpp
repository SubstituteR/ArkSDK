#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_DebugMissionWeapon_Fishing_EquipRodWhileSeated_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_DebugMissionWeapon_Fishing_EquipRodWhileSeated.Buff_DebugMissionWeapon_Fishing_EquipRodWhileSeated_C
// 0x0009 (0x0F70 - 0x0F67)
class ABuff_DebugMissionWeapon_Fishing_EquipRodWhileSeated_C : public ABuff_DebugMissionWeapon_Fishing_C
{
public:
	bool                                               Is_Seated;                                                // 0x0F67(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FItemNetID                                  last_known_correct_item_ID;                               // 0x0F68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_DebugMissionWeapon_Fishing_EquipRodWhileSeated.Buff_DebugMissionWeapon_Fishing_EquipRodWhileSeated_C");
		return ptr;
	}


	void BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements);
	bool BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams);
	void BuffTickClient(float* DeltaTime);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_DebugMissionWeapon_Fishing_EquipRodWhileSeated(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
