#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoColorSet_Bee_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoColorSet_Bee.DinoColorSet_Bee_C
// 0x0000 (0x0268 - 0x0268)
class UDinoColorSet_Bee_C : public UPrimalColorSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoColorSet_Bee.DinoColorSet_Bee_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoColorSet_Bee(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
