#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Leedsichthys_Character_BP_Hunt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Leedsichthys_Character_BP_Hunt.Leedsichthys_Character_BP_Hunt_C
// 0x0028 (0x24A9 - 0x2481)
class ALeedsichthys_Character_BP_Hunt_C : public ALeedsichthys_Character_BP_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x2481(0x0007) MISSED OFFSET
	class UDinoCharacterStatusComponent_BP_Leedsichthys_Hunt_C* DinoCharacterStatus_BP_Leedsichthys_Hunt_C1;              // 0x2488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CallFunc_Array_Get_Item;                                  // 0x2490(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Array_IsValidIndex_ReturnValue;                  // 0x2498(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x2499(0x0007) MISSED OFFSET
	class APrimalBuff*                                 CallFunc_StaticAddBuff_ReturnValue;                       // 0x24A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasBuff_ReturnValue;                             // 0x24A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Leedsichthys_Character_BP_Hunt.Leedsichthys_Character_BP_Hunt_C");
		return ptr;
	}


	void UserConstructionScript();
	void SootheBehavior();
	void ExecuteUbergraph_Leedsichthys_Character_BP_Hunt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
