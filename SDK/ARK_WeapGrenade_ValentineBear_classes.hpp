#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapGrenade_ValentineBear_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapGrenade_ValentineBear.WeapGrenade_ValentineBear_C
// 0x0000 (0x0E60 - 0x0E60)
class AWeapGrenade_ValentineBear_C : public AWeapGrenade_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapGrenade_ValentineBear.WeapGrenade_ValentineBear_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapGrenade_ValentineBear(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
