#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Base_Ramp_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Base_Ramp.Base_Ramp_C
// 0x0000 (0x0AB8 - 0x0AB8)
class ABase_Ramp_C : public ARamp_Base_SM_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Base_Ramp.Base_Ramp_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Base_Ramp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
