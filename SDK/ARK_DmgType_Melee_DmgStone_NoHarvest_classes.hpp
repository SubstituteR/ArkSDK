#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DmgType_Melee_DmgStone_NoHarvest_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgType_Melee_DmgStone_NoHarvest.DmgType_Melee_DmgStone_NoHarvest_C
// 0x0000 (0x0131 - 0x0131)
class UDmgType_Melee_DmgStone_NoHarvest_C : public UDmgType_Melee_DmgStone_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_Melee_DmgStone_NoHarvest.DmgType_Melee_DmgStone_NoHarvest_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
