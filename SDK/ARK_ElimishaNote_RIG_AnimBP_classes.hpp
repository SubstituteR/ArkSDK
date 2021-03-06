#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ElimishaNote_RIG_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ElimishaNote_RIG_AnimBP.ElimishaNote_RIG_AnimBP_C
// 0x0007 (0x04F0 - 0x04E9)
class UElimishaNote_RIG_AnimBP_C : public UBaseNoteMeshAnimBP_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x04E9(0x0003) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x04EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ElimishaNote_RIG_AnimBP.ElimishaNote_RIG_AnimBP_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_ElimishaNote_RIG_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
