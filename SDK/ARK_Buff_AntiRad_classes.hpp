#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_AntiRad_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_AntiRad.Buff_AntiRad_C
// 0x0010 (0x0940 - 0x0930)
class ABuff_AntiRad_C : public ABuff_Base_C
{
public:
	TArray<class UClass*>                              BuffArray;                                                // 0x0930(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_AntiRad.Buff_AntiRad_C");
		return ptr;
	}


	bool BPPreventAddingOtherBuff(class UClass** anotherBuffClass);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_AntiRad(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
