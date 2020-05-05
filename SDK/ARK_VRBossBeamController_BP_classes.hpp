#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VRBossBeamController_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VRBossBeamController_BP.VRBossBeamController_BP_C
// 0x0018 (0x0120 - 0x0108)
class UVRBossBeamController_BP_C : public UBeamWeaponController
{
public:
	float                                              DefaultDuration;                                          // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                UnlockOnBossAttackState;                                  // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      BeamDurationPerBossAttackState;                           // 0x0110(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VRBossBeamController_BP.VRBossBeamController_BP_C");
		return ptr;
	}


	bool FireBeams();
	void Get_Float_Value_For_Boss_State(float Default, int BossState, TArray<float>* Values, float* Value);
	void Set_Current_Beam_Settings(class UBeamWeaponComponent* BeamComp);
	void ExecuteUbergraph_VRBossBeamController_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
