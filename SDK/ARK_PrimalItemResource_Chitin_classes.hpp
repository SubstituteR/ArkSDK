#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemResource_Chitin_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemResource_Chitin.PrimalItemResource_Chitin_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemResource_Chitin_C : public UPrimalItemResource_ChitinOrKeratin_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_Chitin.PrimalItemResource_Chitin_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemResource_Chitin(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
