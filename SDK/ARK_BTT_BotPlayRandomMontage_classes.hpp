#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BTT_BotPlayRandomMontage_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTT_BotPlayRandomMontage.BTT_BotPlayRandomMontage_C
// 0x0024 (0x009C - 0x0078)
class UBTT_BotPlayRandomMontage_C : public UBTTask_BlueprintBase
{
public:
	TArray<class UAnimMontage*>                        Montages;                                                 // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              ChanceToPlayMontage;                                      // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	double                                             StartedTime;                                              // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayTime;                                                 // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTT_BotPlayRandomMontage.BTT_BotPlayRandomMontage_C");
		return ptr;
	}


	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_BTT_BotPlayRandomMontage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
