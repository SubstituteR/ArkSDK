#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BreakSparks_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BreakSparks.BreakSparks_C
// 0x0000 (0x0510 - 0x0510)
class ABreakSparks_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BreakSparks.BreakSparks_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BreakSparks(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
