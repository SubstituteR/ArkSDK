#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Base.Buff_Base_C
// 0x0000 (0x0930 - 0x0930)
class ABuff_Base_C : public APrimalBuff
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Base.Buff_Base_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
