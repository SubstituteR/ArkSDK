#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_SpiderAcidSpit_TrailEmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SpiderAcidSpit_TrailEmitter.SpiderAcidSpit_TrailEmitter_C
// 0x0000 (0x0510 - 0x0510)
class ASpiderAcidSpit_TrailEmitter_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SpiderAcidSpit_TrailEmitter.SpiderAcidSpit_TrailEmitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SpiderAcidSpit_TrailEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
