#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoEntry_SnowOwl_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoEntry_SnowOwl.DinoEntry_SnowOwl_C
// 0x0000 (0x0080 - 0x0080)
class UDinoEntry_SnowOwl_C : public UPrimalDinoEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_SnowOwl.DinoEntry_SnowOwl_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoEntry_SnowOwl(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
