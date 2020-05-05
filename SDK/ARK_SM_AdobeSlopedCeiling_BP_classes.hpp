#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_SM_AdobeSlopedCeiling_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SM_AdobeSlopedCeiling_BP.SM_AdobeSlopedCeiling_BP_C
// 0x0008 (0x0AC0 - 0x0AB8)
class ASM_AdobeSlopedCeiling_BP_C : public AMetalRoof_SM_C
{
public:
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0AB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SM_AdobeSlopedCeiling_BP.SM_AdobeSlopedCeiling_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SM_AdobeSlopedCeiling_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
