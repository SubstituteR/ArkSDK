#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BP_Ocean_Clutter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Ocean_Clutter.BP_Ocean_Clutter_C
// 0x0000 (0x0858 - 0x0858)
class ABP_Ocean_Clutter_C : public APostProcessVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Ocean_Clutter.BP_Ocean_Clutter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BP_Ocean_Clutter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
