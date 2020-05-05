#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Proj_EelMinionBall_Impact_Alpha_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_EelMinionBall_Impact_Alpha.Proj_EelMinionBall_Impact_Alpha_C
// 0x0000 (0x0510 - 0x0510)
class AProj_EelMinionBall_Impact_Alpha_C : public AProj_EelMinionBall_Impact_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_EelMinionBall_Impact_Alpha.Proj_EelMinionBall_Impact_Alpha_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Proj_EelMinionBall_Impact_Alpha(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
