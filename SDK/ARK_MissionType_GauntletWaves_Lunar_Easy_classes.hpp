#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_GauntletWaves_Lunar_Easy_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionType_GauntletWaves_Lunar_Easy.MissionType_GauntletWaves_Lunar_Easy_C
// 0x0000 (0x20E0 - 0x20E0)
class AMissionType_GauntletWaves_Lunar_Easy_C : public AMissionType_GauntletWaves_Lunar_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionType_GauntletWaves_Lunar_Easy.MissionType_GauntletWaves_Lunar_Easy_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MissionType_GauntletWaves_Lunar_Easy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
