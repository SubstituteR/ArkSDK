#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_StructureSettings_BrokenByMetal_Zipline_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StructureSettings_BrokenByMetal_Zipline.StructureSettings_BrokenByMetal_Zipline_C
// 0x0000 (0x0050 - 0x0050)
class UStructureSettings_BrokenByMetal_Zipline_C : public UStructureSettings_BrokenByMetal_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StructureSettings_BrokenByMetal_Zipline.StructureSettings_BrokenByMetal_Zipline_C");
		return ptr;
	}


	void ExecuteUbergraph_StructureSettings_BrokenByMetal_Zipline(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
