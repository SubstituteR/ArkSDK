#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EngramEntry_Saddle_Megatherium_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_Saddle_Megatherium.EngramEntry_Saddle_Megatherium_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_Saddle_Megatherium_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_Saddle_Megatherium.EngramEntry_Saddle_Megatherium_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_Saddle_Megatherium(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
