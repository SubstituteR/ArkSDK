#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_Grappled_BAse_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Grappled_BAse.Buff_Grappled_Base_C
// 0x0000 (0x0B38 - 0x0B38)
class ABuff_Grappled_Base_C : public APrimalBuff_Grappled
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Grappled_BAse.Buff_Grappled_Base_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Grappled_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
