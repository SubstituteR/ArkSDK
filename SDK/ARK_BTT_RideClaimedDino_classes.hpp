#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BTT_RideClaimedDino_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTT_RideClaimedDino.BTT_RideClaimedDino_C
// 0x0054 (0x00CC - 0x0078)
class UBTT_RideClaimedDino_C : public UBTTask_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      ClaimedDinoKeySelector;                                   // 0x0078(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      TryingToRideDinoKeySelector;                              // 0x00A0(0x0028) (Edit, BlueprintVisible)
	float                                              AcceptableRadius;                                         // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTT_RideClaimedDino.BTT_RideClaimedDino_C");
		return ptr;
	}


	void ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_BTT_RideClaimedDino(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
