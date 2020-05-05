#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_RaceMissionHelper_HoverSkiff_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_RaceMissionHelper_HoverSkiff.Buff_RaceMissionHelper_HoverSkiff_C
// 0x0017 (0x11E0 - 0x11C9)
class ABuff_RaceMissionHelper_HoverSkiff_C : public ABuff_RaceMissionHelper_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x11C9(0x0007) MISSED OFFSET
	TArray<class UClass*>                              PreventBuffs;                                             // 0x11D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_RaceMissionHelper_HoverSkiff.Buff_RaceMissionHelper_HoverSkiff_C");
		return ptr;
	}


	bool BPPreventAddingOtherBuff(class UClass** anotherBuffClass);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_RaceMissionHelper_HoverSkiff(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
