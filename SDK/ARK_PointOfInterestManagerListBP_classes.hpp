#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PointOfInterestManagerListBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PointOfInterestManagerListBP.PointOfInterestManagerListBP_C
// 0x0008 (0x0480 - 0x0478)
class APointOfInterestManagerListBP_C : public APointOfInterestManagerList
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PointOfInterestManagerListBP.PointOfInterestManagerListBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_PointOfInterestManagerListBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
