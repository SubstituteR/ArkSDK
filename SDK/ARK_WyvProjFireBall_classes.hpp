#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WyvProjFireBall_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WyvProjFireBall.WyvProjFireBall_C
// 0x0000 (0x0658 - 0x0658)
class AWyvProjFireBall_C : public AShooterProjectile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WyvProjFireBall.WyvProjFireBall_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WyvProjFireBall(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
