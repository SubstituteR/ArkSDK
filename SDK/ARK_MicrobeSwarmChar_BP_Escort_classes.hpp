#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MicrobeSwarmChar_BP_Escort_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MicrobeSwarmChar_BP_Escort.MicrobeSwarmChar_BP_Escort_C
// 0x0000 (0x26C5 - 0x26C5)
class AMicrobeSwarmChar_BP_Escort_C : public AMicrobeSwarmChar_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MicrobeSwarmChar_BP_Escort.MicrobeSwarmChar_BP_Escort_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MicrobeSwarmChar_BP_Escort(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
