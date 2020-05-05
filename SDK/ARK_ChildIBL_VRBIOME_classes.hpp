#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ChildIBL_VRBIOME_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ChildIBL_VRBIOME.ChildIBL_VRBIOME_C
// 0x0000 (0x0488 - 0x0488)
class AChildIBL_VRBIOME_C : public AChildIBL_Capture_Blueprint_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ChildIBL_VRBIOME.ChildIBL_VRBIOME_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ChildIBL_VRBIOME(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
