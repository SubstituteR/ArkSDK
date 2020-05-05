#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Emitter_HuntTracks_RockElemental_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Emitter_HuntTracks_RockElemental.Emitter_HuntTracks_RockElemental_C
// 0x001F (0x0578 - 0x0559)
class AEmitter_HuntTracks_RockElemental_C : public AEmitter_HuntTracks_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0559(0x0007) MISSED OFFSET
	class UPointLightComponent*                        Light;                                                    // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_Tracks;                                                 // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDecalComponent*                             Decal_Tracks;                                             // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Emitter_HuntTracks_RockElemental.Emitter_HuntTracks_RockElemental_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Emitter_HuntTracks_RockElemental(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
