#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Mammoth_AI_Blueprint_Hunt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mammoth_AI_Blueprint_Hunt.Mammoth_AI_Blueprint_Hunt_C
// 0x0000 (0x0911 - 0x0911)
class AMammoth_AI_Blueprint_Hunt_C : public AMammoth_AI_Blueprint_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mammoth_AI_Blueprint_Hunt.Mammoth_AI_Blueprint_Hunt_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Mammoth_AI_Blueprint_Hunt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
