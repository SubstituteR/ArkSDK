#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DmgType_MiningDrill_Harvest_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgType_MiningDrill_Harvest.DmgType_MiningDrill_Harvest_C
// 0x0000 (0x0131 - 0x0131)
class UDmgType_MiningDrill_Harvest_C : public UDmgType_UseHarvest_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_MiningDrill_Harvest.DmgType_MiningDrill_Harvest_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
