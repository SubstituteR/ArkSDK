#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoTamedInventoryComponent_Para_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoTamedInventoryComponent_Para.DinoTamedInventoryComponent_Para_C
// 0x0000 (0x0570 - 0x0570)
class UDinoTamedInventoryComponent_Para_C : public UDinoTamedInventoryComponent_BP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_Para.DinoTamedInventoryComponent_Para_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoTamedInventoryComponent_Para(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
