#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PoisonGasEmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PoisonGasEmitter.PoisonGasEmitter_C
// 0x0000 (0x0510 - 0x0510)
class APoisonGasEmitter_C : public AExplosionEmitter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PoisonGasEmitter.PoisonGasEmitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_PoisonGasEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
