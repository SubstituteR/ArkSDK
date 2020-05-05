#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Insect_Character_Base_Lightbug_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Insect_Character_Base_Lightbug.Insect_Character_Base_Lightbug_C
// 0x0000 (0x2108 - 0x2108)
class AInsect_Character_Base_Lightbug_C : public AInsect_Character_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Insect_Character_Base_Lightbug.Insect_Character_Base_Lightbug_C");
		return ptr;
	}


	void OnChargeHarvested();
	void UserConstructionScript();
	void ExecuteUbergraph_Insect_Character_Base_Lightbug(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
