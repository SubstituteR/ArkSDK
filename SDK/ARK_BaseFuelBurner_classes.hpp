#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BaseFuelBurner_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BaseFuelBurner.BaseFuelBurner_C
// 0x0000 (0x0DD0 - 0x0DD0)
class ABaseFuelBurner_C : public AStructureItemContainerBaseBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BaseFuelBurner.BaseFuelBurner_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BaseFuelBurner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
