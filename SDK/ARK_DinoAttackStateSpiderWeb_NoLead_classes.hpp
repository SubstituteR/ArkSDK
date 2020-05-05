#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoAttackStateSpiderWeb_NoLead_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackStateSpiderWeb_NoLead.DinoAttackStateSpiderWeb_NoLead_C
// 0x0000 (0x00D0 - 0x00D0)
class UDinoAttackStateSpiderWeb_NoLead_C : public UDinoAttackStateSpiderWeb_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateSpiderWeb_NoLead.DinoAttackStateSpiderWeb_NoLead_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoAttackStateSpiderWeb_NoLead(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
