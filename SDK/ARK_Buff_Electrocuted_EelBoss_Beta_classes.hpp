#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_Electrocuted_EelBoss_Beta_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Electrocuted_EelBoss_Beta.Buff_Electrocuted_EelBoss_Beta_C
// 0x0000 (0x0954 - 0x0954)
class ABuff_Electrocuted_EelBoss_Beta_C : public ABuff_Electrocuted_EelBoss_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Electrocuted_EelBoss_Beta.Buff_Electrocuted_EelBoss_Beta_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Electrocuted_EelBoss_Beta(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
