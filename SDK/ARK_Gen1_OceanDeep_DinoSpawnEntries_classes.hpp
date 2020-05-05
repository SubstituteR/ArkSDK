#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Gen1_OceanDeep_DinoSpawnEntries_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Gen1_OceanDeep_DinoSpawnEntries.Gen1_OceanDeep_DinoSpawnEntries_C
// 0x0000 (0x0050 - 0x0050)
class UGen1_OceanDeep_DinoSpawnEntries_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gen1_OceanDeep_DinoSpawnEntries.Gen1_OceanDeep_DinoSpawnEntries_C");
		return ptr;
	}


	void ExecuteUbergraph_Gen1_OceanDeep_DinoSpawnEntries(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
