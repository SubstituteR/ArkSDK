#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_DKOverCharged_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_DKOverCharged.Buff_DKOverCharged_C
// 0x0000 (0x0930 - 0x0930)
class ABuff_DKOverCharged_C : public APrimalBuff
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_DKOverCharged.Buff_DKOverCharged_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_DKOverCharged(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
