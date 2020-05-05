#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoColorSet_Megalodon_Ocean_Retrieve_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoColorSet_Megalodon_Ocean_Retrieve.DinoColorSet_Megalodon_Ocean_Retrieve_C
// 0x0000 (0x0268 - 0x0268)
class UDinoColorSet_Megalodon_Ocean_Retrieve_C : public UDinoColorSet_Megalodon_Ocean_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoColorSet_Megalodon_Ocean_Retrieve.DinoColorSet_Megalodon_Ocean_Retrieve_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoColorSet_Megalodon_Ocean_Retrieve(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
