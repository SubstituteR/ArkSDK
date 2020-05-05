#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_MagmaAoE_Gauntlet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_MagmaAoE_Gauntlet.Buff_MagmaAoE_Gauntlet_C
// 0x0000 (0x0B62 - 0x0B62)
class ABuff_MagmaAoE_Gauntlet_C : public ABuff_MagmaAoE_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_MagmaAoE_Gauntlet.Buff_MagmaAoE_Gauntlet_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_MagmaAoE_Gauntlet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
