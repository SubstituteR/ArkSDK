#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_DinoPackLeader_Raptor_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_DinoPackLeader_Raptor.Buff_DinoPackLeader_Raptor_C
// 0x0000 (0x0A10 - 0x0A10)
class ABuff_DinoPackLeader_Raptor_C : public ABuff_DinoPackLeader_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_DinoPackLeader_Raptor.Buff_DinoPackLeader_Raptor_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_DinoPackLeader_Raptor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
