#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Gen_GodRay_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Gen_GodRay.Gen_GodRay_C
// 0x002C (0x04E4 - 0x04B8)
class AGen_GodRay_C : public ABP_Emitter_Master_C
{
public:
	class UMaterialInstanceDynamic*                    RayMID;                                                   // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RayBrightness;                                            // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                RayColor;                                                 // 0x04C4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SunColorContribution;                                     // 0x04D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SunIntensityInfluence;                                    // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinBrightness;                                            // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxBrightness;                                            // 0x04E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gen_GodRay.Gen_GodRay_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Gen_GodRay(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
