#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DmgType_FlameArrow_Gauntlet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgType_FlameArrow_Gauntlet.DmgType_FlameArrow_Gauntlet_C
// 0x0000 (0x0131 - 0x0131)
class UDmgType_FlameArrow_Gauntlet_C : public UDmgType_ProjectileWithImpactFX_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_FlameArrow_Gauntlet.DmgType_FlameArrow_Gauntlet_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
