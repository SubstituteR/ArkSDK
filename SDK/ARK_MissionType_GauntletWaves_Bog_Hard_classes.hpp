#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_GauntletWaves_Bog_Hard_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionType_GauntletWaves_Bog_Hard.MissionType_GauntletWaves_Bog_Hard_C
// 0x0000 (0x20E0 - 0x20E0)
class AMissionType_GauntletWaves_Bog_Hard_C : public AMissionType_GauntletWaves_Bog_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionType_GauntletWaves_Bog_Hard.MissionType_GauntletWaves_Bog_Hard_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MissionType_GauntletWaves_Bog_Hard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
