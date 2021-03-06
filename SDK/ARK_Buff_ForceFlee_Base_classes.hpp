#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_ForceFlee_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_ForceFlee_Base.Buff_ForceFlee_Base_C
// 0x0028 (0x0958 - 0x0930)
class ABuff_ForceFlee_Base_C : public ABuff_Base_C
{
public:
	class AActor*                                      RunAwayFrom;                                              // 0x0930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               UnsetPassiveFlee;                                         // 0x0938(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0939(0x0007) MISSED OFFSET
	class APrimalCharacter*                            OldFollowTarget;                                          // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                OldTamedAgressionLevel;                                   // 0x0948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x094C(0x0004) MISSED OFFSET
	class AActor*                                      OldWanderAroundActor;                                     // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ForceFlee_Base.Buff_ForceFlee_Base_C");
		return ptr;
	}


	void Restore_Flee_State();
	void Set_Flee_State();
	void BPDeactivated(class AActor** ForInstigator);
	void BPActivated(class AActor** ForInstigator);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_ForceFlee_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
