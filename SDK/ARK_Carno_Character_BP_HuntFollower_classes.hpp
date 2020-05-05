#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Carno_Character_BP_HuntFollower_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Carno_Character_BP_HuntFollower.Carno_Character_BP_HuntFollower_C
// 0x0000 (0x2110 - 0x2110)
class ACarno_Character_BP_HuntFollower_C : public ACarno_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Carno_Character_BP_HuntFollower.Carno_Character_BP_HuntFollower_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Carno_Character_BP_HuntFollower(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
