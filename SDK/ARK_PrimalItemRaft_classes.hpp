#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemRaft_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemRaft.PrimalItemRaft_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemRaft_C : public UPrimalItem_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemRaft.PrimalItemRaft_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemRaft(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
