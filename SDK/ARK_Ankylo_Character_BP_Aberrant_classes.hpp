#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Ankylo_Character_BP_Aberrant_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ankylo_Character_BP_Aberrant.Ankylo_Character_BP_Aberrant_C
// 0x0000 (0x2118 - 0x2118)
class AAnkylo_Character_BP_Aberrant_C : public AAnkylo_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ankylo_Character_BP_Aberrant.Ankylo_Character_BP_Aberrant_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Ankylo_Character_BP_Aberrant(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
