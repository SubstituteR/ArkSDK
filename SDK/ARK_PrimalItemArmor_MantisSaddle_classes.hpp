#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemArmor_MantisSaddle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemArmor_MantisSaddle.PrimalItemArmor_MantisSaddle_C
// 0x0000 (0x09B8 - 0x09B8)
class UPrimalItemArmor_MantisSaddle_C : public UPrimalItemArmor_SaddleGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemArmor_MantisSaddle.PrimalItemArmor_MantisSaddle_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemArmor_MantisSaddle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
