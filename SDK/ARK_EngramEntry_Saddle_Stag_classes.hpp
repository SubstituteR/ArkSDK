#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EngramEntry_Saddle_Stag_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_Saddle_Stag.EngramEntry_Saddle_Stag_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_Saddle_Stag_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_Saddle_Stag.EngramEntry_Saddle_Stag_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_Saddle_Stag(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
