#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_UnderwaterBaseDestroyEmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass UnderwaterBaseDestroyEmitter.UnderwaterBaseDestroyEmitter_C
// 0x0008 (0x0518 - 0x0510)
class AUnderwaterBaseDestroyEmitter_C : public APrimalEmitterSpawnable
{
public:
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass UnderwaterBaseDestroyEmitter.UnderwaterBaseDestroyEmitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_UnderwaterBaseDestroyEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
