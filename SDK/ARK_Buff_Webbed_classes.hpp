#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_Webbed_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Webbed.Buff_Webbed_C
// 0x0000 (0x0930 - 0x0930)
class ABuff_Webbed_C : public APrimalBuff
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Webbed.Buff_Webbed_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Webbed(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
