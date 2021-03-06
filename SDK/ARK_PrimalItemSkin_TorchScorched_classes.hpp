#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemSkin_TorchScorched_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_TorchScorched.PrimalItemSkin_TorchScorched_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemSkin_TorchScorched_C : public UPrimalItemSkinGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_TorchScorched.PrimalItemSkin_TorchScorched_C");
		return ptr;
	}


	class USoundBase* BPGetFuelAudioOverride(class APrimalStructure** ForStructure);
	class UParticleSystem* BPGetFuelParticleSystemOverride(class APrimalStructure** ForStructure);
	void ExecuteUbergraph_PrimalItemSkin_TorchScorched(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
