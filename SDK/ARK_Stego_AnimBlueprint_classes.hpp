#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Stego_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Stego_AnimBlueprint.Stego_AnimBlueprint_C
// 0x0000 (0x133E - 0x133E)
class UStego_AnimBlueprint_C : public UDinoBlueprintBase_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Stego_AnimBlueprint.Stego_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Stego_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
