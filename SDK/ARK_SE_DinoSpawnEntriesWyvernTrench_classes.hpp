#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_SE_DinoSpawnEntriesWyvernTrench_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SE_DinoSpawnEntriesWyvernTrench.SE_DinoSpawnEntriesWyvernTrench_C
// 0x0000 (0x0050 - 0x0050)
class USE_DinoSpawnEntriesWyvernTrench_C : public UNPCSpawnEntriesContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SE_DinoSpawnEntriesWyvernTrench.SE_DinoSpawnEntriesWyvernTrench_C");
		return ptr;
	}


	void ExecuteUbergraph_SE_DinoSpawnEntriesWyvernTrench(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
