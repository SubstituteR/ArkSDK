#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoEntry_IceJumper_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoEntry_IceJumper.DinoEntry_IceJumper_C
// 0x0000 (0x0080 - 0x0080)
class UDinoEntry_IceJumper_C : public UPrimalDinoEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_IceJumper.DinoEntry_IceJumper_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoEntry_IceJumper(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
