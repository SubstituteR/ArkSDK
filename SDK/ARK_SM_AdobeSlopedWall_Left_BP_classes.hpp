#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_SM_AdobeSlopedWall_Left_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SM_AdobeSlopedWall_Left_BP.SM_AdobeSlopedWall_Left_BP_C
// 0x0008 (0x0AC0 - 0x0AB8)
class ASM_AdobeSlopedWall_Left_BP_C : public AMetalWall_Sloped_Left_SM_C
{
public:
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0AB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SM_AdobeSlopedWall_Left_BP.SM_AdobeSlopedWall_Left_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SM_AdobeSlopedWall_Left_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
