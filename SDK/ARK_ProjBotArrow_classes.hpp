#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjBotArrow_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjBotArrow.ProjBotArrow_C
// 0x0008 (0x0660 - 0x0658)
class AProjBotArrow_C : public APrimalProjectileDilo
{
public:
	class UAudioComponent*                             Projectile_SFX;                                           // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjBotArrow.ProjBotArrow_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjBotArrow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
