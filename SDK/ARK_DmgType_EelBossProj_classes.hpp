#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DmgType_EelBossProj_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgType_EelBossProj.DmgType_EelBossProj_C
// 0x0000 (0x0131 - 0x0131)
class UDmgType_EelBossProj_C : public UDmgType_Explosion_Demolition_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_EelBossProj.DmgType_EelBossProj_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
