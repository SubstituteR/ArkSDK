#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DmgTypeBP_Environmental_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgTypeBP_Environmental.DmgTypeBP_Environmental_C
// 0x0000 (0x0050 - 0x0050)
class UDmgTypeBP_Environmental_C : public UDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgTypeBP_Environmental.DmgTypeBP_Environmental_C");
		return ptr;
	}


	void ExecuteUbergraph_DmgTypeBP_Environmental(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
