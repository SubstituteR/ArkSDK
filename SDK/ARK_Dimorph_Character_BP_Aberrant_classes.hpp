#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Dimorph_Character_BP_Aberrant_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dimorph_Character_BP_Aberrant.Dimorph_Character_BP_Aberrant_C
// 0x0000 (0x2110 - 0x2110)
class ADimorph_Character_BP_Aberrant_C : public ADimorph_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dimorph_Character_BP_Aberrant.Dimorph_Character_BP_Aberrant_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Dimorph_Character_BP_Aberrant(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
