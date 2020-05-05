#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_TekJumpPadBasketball_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TekJumpPadBasketball.TekJumpPadBasketball_C
// 0x0000 (0x1300 - 0x1300)
class ATekJumpPadBasketball_C : public ATekJumpPad_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TekJumpPadBasketball.TekJumpPadBasketball_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_TekJumpPadBasketball(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
