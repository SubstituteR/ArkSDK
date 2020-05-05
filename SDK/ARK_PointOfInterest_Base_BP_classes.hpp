#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PointOfInterest_Base_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PointOfInterest_Base_BP.PointOfInterest_Base_BP_C
// 0x0000 (0x0820 - 0x0820)
class APointOfInterest_Base_BP_C : public APointOfInterestActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PointOfInterest_Base_BP.PointOfInterest_Base_BP_C");
		return ptr;
	}


	struct FPointOfInterestData GetPointOfInterestData();
	void UserConstructionScript();
	void ExecuteUbergraph_PointOfInterest_Base_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
