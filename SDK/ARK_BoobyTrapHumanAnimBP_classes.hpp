#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BoobyTrapHumanAnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BoobyTrapHumanAnimBP.BoobyTrapHumanAnimBP_C
// 0x0000 (0x3A14 - 0x3A14)
class UBoobyTrapHumanAnimBP_C : public UBaseHumanAnimBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BoobyTrapHumanAnimBP.BoobyTrapHumanAnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_BoobyTrapHumanAnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
