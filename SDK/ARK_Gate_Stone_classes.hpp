#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Gate_Stone_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Gate_Stone.Gate_Stone_C
// 0x0010 (0x0B48 - 0x0B38)
class AGate_Stone_C : public ADoor_Base_SM_C
{
public:
	class UStaticMeshComponent*                        SecondDoor;                                               // 0x0B38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             SecondDoorTransform;                                      // 0x0B40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gate_Stone.Gate_Stone_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Gate_Stone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
