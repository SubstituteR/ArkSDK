#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_IchthyornisAnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass IchthyornisAnimBP.IchthyornisAnimBP_C
// 0x0000 (0x1308 - 0x1308)
class UIchthyornisAnimBP_C : public UDinoBlueprintBase_RootTransform_FlySwimming_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass IchthyornisAnimBP.IchthyornisAnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_IchthyornisAnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
