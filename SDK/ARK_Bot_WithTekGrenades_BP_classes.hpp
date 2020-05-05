#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Bot_WithTekGrenades_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Bot_WithTekGrenades_BP.Bot_WithTekGrenades_BP_C
// 0x0000 (0x21E8 - 0x21E8)
class ABot_WithTekGrenades_BP_C : public ABot_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bot_WithTekGrenades_BP.Bot_WithTekGrenades_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Bot_WithTekGrenades_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
