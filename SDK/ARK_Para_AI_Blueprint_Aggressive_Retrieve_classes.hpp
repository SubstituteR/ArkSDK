#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Para_AI_Blueprint_Aggressive_Retrieve_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Para_AI_Blueprint_Aggressive_Retrieve.Para_AI_Blueprint_Aggressive_Retrieve_C
// 0x0000 (0x0911 - 0x0911)
class APara_AI_Blueprint_Aggressive_Retrieve_C : public APara_AI_Blueprint_Aggressive_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Para_AI_Blueprint_Aggressive_Retrieve.Para_AI_Blueprint_Aggressive_Retrieve_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Para_AI_Blueprint_Aggressive_Retrieve(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
