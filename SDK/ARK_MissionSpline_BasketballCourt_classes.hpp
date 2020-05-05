#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionSpline_BasketballCourt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionSpline_BasketballCourt.MissionSpline_BasketballCourt_C
// 0x0010 (0x0580 - 0x0570)
class AMissionSpline_BasketballCourt_C : public AMissionSpline_Base_C
{
public:
	TArray<class USplineMeshComponent*>                spline_meshes;                                            // 0x0570(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionSpline_BasketballCourt.MissionSpline_BasketballCourt_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MissionSpline_BasketballCourt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
