#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_AberrationBury_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_AberrationBury.Buff_AberrationBury_C
// 0x0004 (0x0934 - 0x0930)
class ABuff_AberrationBury_C : public ABuff_Base_Stew_C
{
public:
	float                                              FoodConsumptionMultiplier;                                // 0x0930(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_AberrationBury.Buff_AberrationBury_C");
		return ptr;
	}


	bool BPPreventFirstPerson();
	bool PreventActorTargeting(class AActor** ByActor);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_AberrationBury(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
