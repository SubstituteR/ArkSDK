#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_AlarmTrapEmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AlarmTrapEmitter.AlarmTrapEmitter_C
// 0x0000 (0x0510 - 0x0510)
class AAlarmTrapEmitter_C : public AExplosionEmitter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AlarmTrapEmitter.AlarmTrapEmitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_AlarmTrapEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
