#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoAttackStateSpiderAcid_Gauntlet_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackStateSpiderAcid_Gauntlet.DinoAttackStateSpiderAcid_Gauntlet_C
// 0x0000 (0x0070 - 0x0070)
class UDinoAttackStateSpiderAcid_Gauntlet_C : public UDinoAttackStateSpiderAcid_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateSpiderAcid_Gauntlet.DinoAttackStateSpiderAcid_Gauntlet_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoAttackStateSpiderAcid_Gauntlet(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
