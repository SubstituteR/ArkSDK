#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoColorSet_Gigant_Bionic_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoColorSet_Gigant_Bionic.DinoColorSet_Gigant_Bionic_C
// 0x0000 (0x0268 - 0x0268)
class UDinoColorSet_Gigant_Bionic_C : public UPrimalColorSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoColorSet_Gigant_Bionic.DinoColorSet_Gigant_Bionic_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoColorSet_Gigant_Bionic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
