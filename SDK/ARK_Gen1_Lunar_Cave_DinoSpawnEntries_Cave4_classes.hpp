#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Gen1_Lunar_Cave_DinoSpawnEntries_Cave4_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Gen1_Lunar_Cave_DinoSpawnEntries_Cave4.Gen1_Lunar_Cave_DinoSpawnEntries_Cave4_C
// 0x0000 (0x0050 - 0x0050)
class UGen1_Lunar_Cave_DinoSpawnEntries_Cave4_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gen1_Lunar_Cave_DinoSpawnEntries_Cave4.Gen1_Lunar_Cave_DinoSpawnEntries_Cave4_C");
		return ptr;
	}


	void ExecuteUbergraph_Gen1_Lunar_Cave_DinoSpawnEntries_Cave4(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
