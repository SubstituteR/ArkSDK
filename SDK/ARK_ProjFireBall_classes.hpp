#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjFireBall_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjFireBall.ProjFireBall_C
// 0x0008 (0x0660 - 0x0658)
class AProjFireBall_C : public AShooterProjectile
{
public:
	class UChildActorComponent*                        ChildActor1;                                              // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjFireBall.ProjFireBall_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjFireBall(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
