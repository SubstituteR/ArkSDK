#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Pteroteuthis_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Pteroteuthis_AnimBlueprint.Pteroteuthis_AnimBlueprint_C
// 0x0000 (0x1570 - 0x1570)
class UPteroteuthis_AnimBlueprint_C : public UDinoBlueprintBase_RootTransformIK_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Pteroteuthis_AnimBlueprint.Pteroteuthis_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Pteroteuthis_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
