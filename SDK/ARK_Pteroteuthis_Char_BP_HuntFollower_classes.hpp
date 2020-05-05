#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Pteroteuthis_Char_BP_HuntFollower_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Pteroteuthis_Char_BP_HuntFollower.Pteroteuthis_Char_BP_HuntFollower_C
// 0x0008 (0x2280 - 0x2278)
class APteroteuthis_Char_BP_HuntFollower_C : public APteroteuthis_Char_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Pteroteuthis_Hunt_C* DinoCharacterStatus_BP_Pteroteuthis_Hunt_C1;              // 0x2278(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Pteroteuthis_Char_BP_HuntFollower.Pteroteuthis_Char_BP_HuntFollower_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Pteroteuthis_Char_BP_HuntFollower(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
