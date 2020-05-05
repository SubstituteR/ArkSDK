#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Snow_Rhino_Character_BP_Race_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Snow_Rhino_Character_BP_Race.Snow_Rhino_Character_BP_Race_C
// 0x0000 (0x2114 - 0x2114)
class ASnow_Rhino_Character_BP_Race_C : public ASnow_Rhino_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Snow_Rhino_Character_BP_Race.Snow_Rhino_Character_BP_Race_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Snow_Rhino_Character_BP_Race(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
