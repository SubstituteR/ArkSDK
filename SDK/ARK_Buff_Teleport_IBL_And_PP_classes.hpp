#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_Teleport_IBL_And_PP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Teleport_IBL_And_PP.Buff_Teleport_IBL_And_PP_C
// 0x0018 (0x0948 - 0x0930)
class ABuff_Teleport_IBL_And_PP_C : public ABuff_Base_C
{
public:
	class UChildActorComponent*                        IBL;                                                      // 0x0930(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class APostProcessVolume*                          TransferPP;                                               // 0x0938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ASphereReflectionCapture*                    IBLActor;                                                 // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Teleport_IBL_And_PP.Buff_Teleport_IBL_And_PP_C");
		return ptr;
	}


	void BPDeactivated(class AActor** ForInstigator);
	void BPActivated(class AActor** ForInstigator);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Teleport_IBL_And_PP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
