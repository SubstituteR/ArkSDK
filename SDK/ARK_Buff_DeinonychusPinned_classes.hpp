#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_DeinonychusPinned_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_DeinonychusPinned.Buff_DeinonychusPinned_C
// 0x000C (0x0A00 - 0x09F4)
class ABuff_DeinonychusPinned_C : public ABuff_Pinned_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x09F4(0x0004) MISSED OFFSET
	class UClass*                                      DebuffClass_1;                                            // 0x09F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_DeinonychusPinned.Buff_DeinonychusPinned_C");
		return ptr;
	}


	void BPInstigatorSleeped(bool* bIsSleeped);
	bool BPPreventFirstPerson();
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_DeinonychusPinned(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
