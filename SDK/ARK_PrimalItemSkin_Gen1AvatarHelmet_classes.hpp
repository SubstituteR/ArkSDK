#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemSkin_Gen1AvatarHelmet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_Gen1AvatarHelmet.PrimalItemSkin_Gen1AvatarHelmet_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemSkin_Gen1AvatarHelmet_C : public UPrimalItemSkinGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_Gen1AvatarHelmet.PrimalItemSkin_Gen1AvatarHelmet_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemSkin_Gen1AvatarHelmet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
