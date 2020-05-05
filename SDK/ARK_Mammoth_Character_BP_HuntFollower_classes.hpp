#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Mammoth_Character_BP_HuntFollower_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mammoth_Character_BP_HuntFollower.Mammoth_Character_BP_HuntFollower_C
// 0x0000 (0x2114 - 0x2114)
class AMammoth_Character_BP_HuntFollower_C : public AMammoth_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mammoth_Character_BP_HuntFollower.Mammoth_Character_BP_HuntFollower_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Mammoth_Character_BP_HuntFollower(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
