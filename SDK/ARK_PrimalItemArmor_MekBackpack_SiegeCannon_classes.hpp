#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemArmor_MekBackpack_SiegeCannon_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_MekBackpack_SiegeCannon.PrimalItemArmor_MekBackpack_SiegeCannon_C
// 0x0000 (0x09BC - 0x09BC)
class UPrimalItemArmor_MekBackpack_SiegeCannon_C : public UPrimalItemArmor_MekBackpack_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_MekBackpack_SiegeCannon.PrimalItemArmor_MekBackpack_SiegeCannon_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_MekBackpack_SiegeCannon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
