#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Gorilla_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Gorilla_AnimBlueprint.Gorilla_AnimBlueprint_C
// 0x0000 (0x17BC - 0x17BC)
class UGorilla_AnimBlueprint_C : public UDinoBlueprintBase_MovementBlendSpace_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Gorilla_AnimBlueprint.Gorilla_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Gorilla_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
