#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EngramEntry_DoubleDoorframe_Stone_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_DoubleDoorframe_Stone.EngramEntry_DoubleDoorframe_Stone_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_DoubleDoorframe_Stone_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_DoubleDoorframe_Stone.EngramEntry_DoubleDoorframe_Stone_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_DoubleDoorframe_Stone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
