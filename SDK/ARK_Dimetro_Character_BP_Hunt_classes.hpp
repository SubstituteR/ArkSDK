#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Dimetro_Character_BP_Hunt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dimetro_Character_BP_Hunt.Dimetro_Character_BP_Hunt_C
// 0x0000 (0x2110 - 0x2110)
class ADimetro_Character_BP_Hunt_C : public ADimetro_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dimetro_Character_BP_Hunt.Dimetro_Character_BP_Hunt_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Dimetro_Character_BP_Hunt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
