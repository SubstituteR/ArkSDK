#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjArrow_Impacts_Big_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjArrow_Impacts_Big.ProjArrow_Impacts_Big_C
// 0x0000 (0x0848 - 0x0848)
class AProjArrow_Impacts_Big_C : public AProjArrow_Impacts_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjArrow_Impacts_Big.ProjArrow_Impacts_Big_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjArrow_Impacts_Big(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
