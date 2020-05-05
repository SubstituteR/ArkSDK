#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Ocean_Megalodon_Character_BP_RetrieveNonTarget_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ocean_Megalodon_Character_BP_RetrieveNonTarget.Ocean_Megalodon_Character_BP_RetrieveNonTarget_C
// 0x0000 (0x2151 - 0x2151)
class AOcean_Megalodon_Character_BP_RetrieveNonTarget_C : public AOcean_Megalodon_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ocean_Megalodon_Character_BP_RetrieveNonTarget.Ocean_Megalodon_Character_BP_RetrieveNonTarget_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Ocean_Megalodon_Character_BP_RetrieveNonTarget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
