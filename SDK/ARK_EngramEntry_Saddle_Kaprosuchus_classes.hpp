#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EngramEntry_Saddle_Kaprosuchus_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_Saddle_Kaprosuchus.EngramEntry_Saddle_Kaprosuchus_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_Saddle_Kaprosuchus_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_Saddle_Kaprosuchus.EngramEntry_Saddle_Kaprosuchus_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_Saddle_Kaprosuchus(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
