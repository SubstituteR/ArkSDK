#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoTamedInventoryComponent_Sarco_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoTamedInventoryComponent_Sarco.DinoTamedInventoryComponent_Sarco_C
// 0x0000 (0x0570 - 0x0570)
class UDinoTamedInventoryComponent_Sarco_C : public UDinoTamedInventoryComponent_BP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_Sarco.DinoTamedInventoryComponent_Sarco_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoTamedInventoryComponent_Sarco(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
