#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Snow_Yutyrannus_Character_BP_HuntFollower_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Snow_Yutyrannus_Character_BP_HuntFollower.Snow_Yutyrannus_Character_BP_HuntFollower_C
// 0x0000 (0x23C0 - 0x23C0)
class ASnow_Yutyrannus_Character_BP_HuntFollower_C : public ASnow_Yutyrannus_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Snow_Yutyrannus_Character_BP_HuntFollower.Snow_Yutyrannus_Character_BP_HuntFollower_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Snow_Yutyrannus_Character_BP_HuntFollower(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
