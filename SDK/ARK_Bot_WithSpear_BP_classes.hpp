#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Bot_WithSpear_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Bot_WithSpear_BP.Bot_WithSpear_BP_C
// 0x0008 (0x21F0 - 0x21E8)
class ABot_WithSpear_BP_C : public ABot_Character_BP_C
{
public:
	class USkeletalMeshComponent*                      Spear;                                                    // 0x21E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Bot_WithSpear_BP.Bot_WithSpear_BP_C");
		return ptr;
	}


	void GetMeleeSocketLocation(struct FName* SocketName, struct FVector* SocketLocation);
	void UserConstructionScript();
	void ExecuteUbergraph_Bot_WithSpear_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
