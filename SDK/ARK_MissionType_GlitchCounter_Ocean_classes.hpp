#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_GlitchCounter_Ocean_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionType_GlitchCounter_Ocean.MissionType_GlitchCounter_Ocean_C
// 0x0000 (0x09F8 - 0x09F8)
class AMissionType_GlitchCounter_Ocean_C : public AMissionType_GlitchCounter_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionType_GlitchCounter_Ocean.MissionType_GlitchCounter_Ocean_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MissionType_GlitchCounter_Ocean(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
