#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoCharacterStatusComponent_BP_Raptor_Hunt_Volcanic_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoCharacterStatusComponent_BP_Raptor_Hunt_Volcanic.DinoCharacterStatusComponent_BP_Raptor_Hunt_Volcanic_C
// 0x0000 (0x1090 - 0x1090)
class UDinoCharacterStatusComponent_BP_Raptor_Hunt_Volcanic_C : public UDinoCharacterStatusComponent_BP_Carno_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoCharacterStatusComponent_BP_Raptor_Hunt_Volcanic.DinoCharacterStatusComponent_BP_Raptor_Hunt_Volcanic_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoCharacterStatusComponent_BP_Raptor_Hunt_Volcanic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
