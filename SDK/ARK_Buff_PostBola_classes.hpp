#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_PostBola_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_PostBola.Buff_PostBola_C
// 0x0000 (0x0930 - 0x0930)
class ABuff_PostBola_C : public APrimalBuff
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_PostBola.Buff_PostBola_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_PostBola(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
