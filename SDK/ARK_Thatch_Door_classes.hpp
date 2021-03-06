#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Thatch_Door_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Thatch_Door.Thatch_Door_C
// 0x0008 (0x0B40 - 0x0B38)
class AThatch_Door_C : public ADoor_Base_SM_C
{
public:
	class USphereComponent*                            StasisComponent_1;                                        // 0x0B38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Thatch_Door.Thatch_Door_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Thatch_Door(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
