#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Tek_UnderwaterBase_Placement_Emitter2_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Tek_UnderwaterBase_Placement_Emitter2.Tek_UnderwaterBase_Placement_Emitter2_C
// 0x0000 (0x0510 - 0x0510)
class ATek_UnderwaterBase_Placement_Emitter2_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Tek_UnderwaterBase_Placement_Emitter2.Tek_UnderwaterBase_Placement_Emitter2_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Tek_UnderwaterBase_Placement_Emitter2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
