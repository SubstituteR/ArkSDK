#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_NoPoison_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_NoPoison.Buff_NoPoison_C
// 0x0008 (0x0938 - 0x0930)
class ABuff_NoPoison_C : public APrimalBuff
{
public:
	float                                              cooldownPlayer;                                           // 0x0930(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              cooldownWildDino;                                         // 0x0934(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_NoPoison.Buff_NoPoison_C");
		return ptr;
	}


	void BPPreSetupForInstigator(class AActor** ForInstigator);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_NoPoison(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
