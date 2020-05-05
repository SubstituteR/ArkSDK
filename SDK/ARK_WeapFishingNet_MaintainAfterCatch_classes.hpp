#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapFishingNet_MaintainAfterCatch_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapFishingNet_MaintainAfterCatch.WeapFishingNet_MaintainAfterCatch_C
// 0x0000 (0x1820 - 0x1820)
class AWeapFishingNet_MaintainAfterCatch_C : public AWeapFishingNet_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapFishingNet_MaintainAfterCatch.WeapFishingNet_MaintainAfterCatch_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapFishingNet_MaintainAfterCatch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
