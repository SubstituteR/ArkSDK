#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_BlinkImpact_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_BlinkImpact.Buff_BlinkImpact_C
// 0x000C (0x093C - 0x0930)
class ABuff_BlinkImpact_C : public ABuff_Base_C
{
public:
	double                                             LastSlowTime;                                             // 0x0930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SlowCounter;                                              // 0x0938(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_BlinkImpact.Buff_BlinkImpact_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_BlinkImpact(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
