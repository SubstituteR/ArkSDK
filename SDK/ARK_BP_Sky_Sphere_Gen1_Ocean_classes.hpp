#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BP_Sky_Sphere_Gen1_Ocean_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Sky_Sphere_Gen1_Ocean.BP_Sky_Sphere_Gen1_Ocean_C
// 0x001E (0x06F0 - 0x06D2)
class ABP_Sky_Sphere_Gen1_Ocean_C : public ABP_Sky_Sphere_Gen1_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x06D2(0x0006) MISSED OFFSET
	class ABP_GenOceanWaterPlane_C*                    OceanBP;                                                  // 0x06D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UMaterialInstanceDynamic*                    OceanMID;                                                 // 0x06E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    OceanUndersideMID;                                        // 0x06E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Sky_Sphere_Gen1_Ocean.BP_Sky_Sphere_Gen1_Ocean_C");
		return ptr;
	}


	void SetOceanMaterial();
	void OceanBiomeSkyTexturePassthrough(class UTexture2D** SkyThis, class UTexture2D** SkyNext, float* Time, float* NextPOS);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Sky_Sphere_Gen1_Ocean(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
