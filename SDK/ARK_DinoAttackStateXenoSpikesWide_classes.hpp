#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoAttackStateXenoSpikesWide_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackStateXenoSpikesWide.DinoAttackStateXenoSpikesWide_C
// 0x0000 (0x00D0 - 0x00D0)
class UDinoAttackStateXenoSpikesWide_C : public UPrimalAIStateDinoSpiderRangedWebState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateXenoSpikesWide.DinoAttackStateXenoSpikesWide_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoAttackStateXenoSpikesWide(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
