#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_IndustrialGrinder_Emitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IndustrialGrinder_Emitter.IndustrialGrinder_Emitter_C
// 0x0000 (0x0510 - 0x0510)
class AIndustrialGrinder_Emitter_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IndustrialGrinder_Emitter.IndustrialGrinder_Emitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_IndustrialGrinder_Emitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
