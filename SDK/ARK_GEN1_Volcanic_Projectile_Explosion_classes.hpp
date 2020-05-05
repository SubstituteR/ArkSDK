#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_GEN1_Volcanic_Projectile_Explosion_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GEN1_Volcanic_Projectile_Explosion.GEN1_Volcanic_Projectile_Explosion_C
// 0x0000 (0x0510 - 0x0510)
class AGEN1_Volcanic_Projectile_Explosion_C : public AExplosionEmitter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GEN1_Volcanic_Projectile_Explosion.GEN1_Volcanic_Projectile_Explosion_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_GEN1_Volcanic_Projectile_Explosion(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
