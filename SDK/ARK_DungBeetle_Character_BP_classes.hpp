#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DungBeetle_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DungBeetle_Character_BP.DungBeetle_Character_BP_C
// 0x0031 (0x2139 - 0x2108)
class ADungBeetle_Character_BP_C : public ADino_Character_BP_RepelType_C
{
public:
	class UDinoCharacterStatusComponent_BP_Beetle_C*   DinoCharacterStatus_BP_Beetle_C1;                         // 0x2108(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x2110(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	class APrimalCharacter*                            K2Node_CustomEvent_DiedCharacter;                         // 0x2120(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x2128(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x2129(0x0007) MISSED OFFSET
	class UDinoTamedInventoryComponent_Beetle_C*       K2Node_DynamicCast_AsDinoTamedInventoryComponent_Beetle_C;// 0x2130(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x2138(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DungBeetle_Character_BP.DungBeetle_Character_BP_C");
		return ptr;
	}


	void BPCharacterSleeped();
	void BPCharacterUnsleeped();
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnDied_Event(class APrimalCharacter* DiedCharacter);
	void ExecuteUbergraph_DungBeetle_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
