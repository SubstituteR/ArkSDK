#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Flag_SM_Rockwell_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Flag_SM_Rockwell.Flag_SM_Rockwell_C
// 0x0000 (0x0AC0 - 0x0AC0)
class AFlag_SM_Rockwell_C : public AFlag_SM_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Flag_SM_Rockwell.Flag_SM_Rockwell_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Flag_SM_Rockwell(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
