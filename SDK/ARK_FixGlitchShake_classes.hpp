#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_FixGlitchShake_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FixGlitchShake.FixGlitchShake_C
// 0x0000 (0x00B0 - 0x00B0)
class UFixGlitchShake_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FixGlitchShake.FixGlitchShake_C");
		return ptr;
	}


	void ExecuteUbergraph_FixGlitchShake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
