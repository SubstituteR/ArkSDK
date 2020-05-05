#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Lightbug_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Lightbug_AnimBlueprint.Lightbug_AnimBlueprint_C
// 0x0004 (0x13B0 - 0x13AC)
class ULightbug_AnimBlueprint_C : public UDinoBlueprintBase_RootTransform_Copy_C
{
public:
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x13AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Lightbug_AnimBlueprint.Lightbug_AnimBlueprint_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_Lightbug_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
