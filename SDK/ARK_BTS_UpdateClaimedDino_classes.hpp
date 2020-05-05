#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BTS_UpdateClaimedDino_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTS_UpdateClaimedDino.BTS_UpdateClaimedDino_C
// 0x0028 (0x00A8 - 0x0080)
class UBTS_UpdateClaimedDino_C : public UBTService_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      ClaimedDinoKeySelector;                                   // 0x0080(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTS_UpdateClaimedDino.BTS_UpdateClaimedDino_C");
		return ptr;
	}


	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ExecuteUbergraph_BTS_UpdateClaimedDino(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
