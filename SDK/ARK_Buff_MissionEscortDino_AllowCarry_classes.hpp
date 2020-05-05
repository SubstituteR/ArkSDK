#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_MissionEscortDino_AllowCarry_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_MissionEscortDino_AllowCarry.Buff_MissionEscortDino_AllowCarry_C
// 0x0016 (0x0D58 - 0x0D42)
class ABuff_MissionEscortDino_AllowCarry_C : public ABuff_MissionEscortDino_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0D42(0x0006) MISSED OFFSET
	TArray<class UClass*>                              AllowCarriedByClasses;                                    // 0x0D48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_MissionEscortDino_AllowCarry.Buff_MissionEscortDino_AllowCarry_C");
		return ptr;
	}


	bool BPCanBeCarried(class APrimalCharacter** ByCarrier);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_MissionEscortDino_AllowCarry(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
