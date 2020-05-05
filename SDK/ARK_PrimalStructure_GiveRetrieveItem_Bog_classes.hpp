#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalStructure_GiveRetrieveItem_Bog_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalStructure_GiveRetrieveItem_Bog.PrimalStructure_GiveRetrieveItem_Bog_C
// 0x000C (0x0B00 - 0x0AF4)
class APrimalStructure_GiveRetrieveItem_Bog_C : public APrimalStructure_GiveRetrieveItem_OnDestruction_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0AF4(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x0AF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalStructure_GiveRetrieveItem_Bog.PrimalStructure_GiveRetrieveItem_Bog_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_PrimalStructure_GiveRetrieveItem_Bog(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
