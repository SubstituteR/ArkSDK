#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Hunt_Raptor_Medium_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionType_Hunt_Raptor_Medium.MissionType_Hunt_Raptor_Medium_C
// 0x0000 (0x150A - 0x150A)
class AMissionType_Hunt_Raptor_Medium_C : public AMissionType_Hunt_Raptor_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionType_Hunt_Raptor_Medium.MissionType_Hunt_Raptor_Medium_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MissionType_Hunt_Raptor_Medium(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
