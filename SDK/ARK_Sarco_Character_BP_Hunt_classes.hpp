#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Sarco_Character_BP_Hunt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Sarco_Character_BP_Hunt.Sarco_Character_BP_Hunt_C
// 0x0009 (0x25F8 - 0x25EF)
class ASarco_Character_BP_Hunt_C : public ASarco_Character_BP_C
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x25EF(0x0001) MISSED OFFSET
	class UDinoCharacterStatusComponent_BP_Sarco_Hunt_C* DinoCharacterStatus_BP_Sarco_Hunt_C1;                     // 0x25F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Sarco_Character_BP_Hunt.Sarco_Character_BP_Hunt_C");
		return ptr;
	}


	void Compute_Allow_Carry(class APrimalCharacter** Target, bool* Allow);
	struct FName BPGetDragSocketDinoName(class APrimalDinoCharacter** aGrabbedDino);
	struct FName BPGetDragSocketName(class APrimalCharacter** DraggingChar);
	void UserConstructionScript();
	void ExecuteUbergraph_Sarco_Character_BP_Hunt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
