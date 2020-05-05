#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_Companion_BaseBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Companion_BaseBP.Buff_Companion_BaseBP_C
// 0x0000 (0x1030 - 0x1030)
class ABuff_Companion_BaseBP_C : public APrimalBuff_Companion
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Companion_BaseBP.Buff_Companion_BaseBP_C");
		return ptr;
	}


	void BPInstigatorPossessed(class AController** ByController);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Companion_BaseBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
