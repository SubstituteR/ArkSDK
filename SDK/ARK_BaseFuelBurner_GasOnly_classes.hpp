#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BaseFuelBurner_GasOnly_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BaseFuelBurner_GasOnly.BaseFuelBurner_GasOnly_C
// 0x0000 (0x0DD0 - 0x0DD0)
class ABaseFuelBurner_GasOnly_C : public ABaseFuelBurner_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BaseFuelBurner_GasOnly.BaseFuelBurner_GasOnly_C");
		return ptr;
	}


	void NotifyCraftingFinished();
	void UserConstructionScript();
	void ExecuteUbergraph_BaseFuelBurner_GasOnly(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
