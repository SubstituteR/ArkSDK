#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_DireWolfPackLeader_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_DireWolfPackLeader.Buff_DireWolfPackLeader_C
// 0x0000 (0x0A10 - 0x0A10)
class ABuff_DireWolfPackLeader_C : public ABuff_DinoPackLeader_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_DireWolfPackLeader.Buff_DireWolfPackLeader_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_DireWolfPackLeader(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
