#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjChainBola_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjChainBola.ProjChainBola_C
// 0x0090 (0x06E8 - 0x0658)
class AProjChainBola_C : public AShooterProjectile
{
public:
	class UAudioComponent*                             Audio1;                                                   // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  K2Node_Event_Result;                                      // 0x0660(0x0088) (OutParm, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjChainBola.ProjChainBola_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnExplode(struct FHitResult* Result);
	void ExecuteUbergraph_ProjChainBola(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
