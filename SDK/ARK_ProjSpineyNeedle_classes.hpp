#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjSpineyNeedle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjSpineyNeedle.ProjSpineyNeedle_C
// 0x0008 (0x0660 - 0x0658)
class AProjSpineyNeedle_C : public AShooterProjectile
{
public:
	class UChildActorComponent*                        ChildProjectile;                                          // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjSpineyNeedle.ProjSpineyNeedle_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjSpineyNeedle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
