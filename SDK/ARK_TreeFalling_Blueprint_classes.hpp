#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_TreeFalling_Blueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TreeFalling_Blueprint.TreeFalling_Blueprint_C
// 0x0008 (0x04D8 - 0x04D0)
class ATreeFalling_Blueprint_C : public AFadingDestructibleActor
{
public:
	class UAudioComponent*                             Audio1;                                                   // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TreeFalling_Blueprint.TreeFalling_Blueprint_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_TreeFalling_Blueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
