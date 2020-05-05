#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Bot_WithTekRifle_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Bot_WithTekRifle_BP.Bot_WithTekRifle_BP_C
// 0x0008 (0x21F0 - 0x21E8)
class ABot_WithTekRifle_BP_C : public ABot_Character_BP_C
{
public:
	class USkeletalMeshComponent*                      Rifle;                                                    // 0x21E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bot_WithTekRifle_BP.Bot_WithTekRifle_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Bot_WithTekRifle_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
