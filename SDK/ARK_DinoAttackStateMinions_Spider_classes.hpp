#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoAttackStateMinions_Spider_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackStateMinions_Spider.DinoAttackStateMinions_Spider_C
// 0x0000 (0x00D0 - 0x00D0)
class UDinoAttackStateMinions_Spider_C : public UDinoAttackStateMinions_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateMinions_Spider.DinoAttackStateMinions_Spider_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoAttackStateMinions_Spider(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
