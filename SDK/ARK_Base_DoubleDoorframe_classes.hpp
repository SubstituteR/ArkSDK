#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Base_DoubleDoorframe_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Base_DoubleDoorframe.Base_DoubleDoorframe_C
// 0x0008 (0x0AD0 - 0x0AC8)
class ABase_DoubleDoorframe_C : public ADoorframe_Base_SM_C
{
public:
	class UArrowComponent*                             MeshDirection;                                            // 0x0AC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Base_DoubleDoorframe.Base_DoubleDoorframe_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Base_DoubleDoorframe(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
