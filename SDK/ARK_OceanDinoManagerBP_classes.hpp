#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_OceanDinoManagerBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OceanDinoManagerBP.OceanDinoManagerBP_C
// 0x0008 (0x0660 - 0x0658)
class AOceanDinoManagerBP_C : public AOceanDinoManager
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OceanDinoManagerBP.OceanDinoManagerBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_OceanDinoManagerBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
