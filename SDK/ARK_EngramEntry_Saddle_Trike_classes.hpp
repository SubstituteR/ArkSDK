#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EngramEntry_Saddle_Trike_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_Saddle_Trike.EngramEntry_Saddle_Trike_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_Saddle_Trike_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_Saddle_Trike.EngramEntry_Saddle_Trike_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_Saddle_Trike(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
