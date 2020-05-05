#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DmgType_CorruptedAvatar_Spear_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgType_CorruptedAvatar_Spear.DmgType_CorruptedAvatar_Spear_C
// 0x0000 (0x0131 - 0x0131)
class UDmgType_CorruptedAvatar_Spear_C : public UDmgType_Direct_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_CorruptedAvatar_Spear.DmgType_CorruptedAvatar_Spear_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
