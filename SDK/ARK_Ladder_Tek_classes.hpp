#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Ladder_Tek_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ladder_Tek.Ladder_Tek_C
// 0x0008 (0x0B20 - 0x0B18)
class ALadder_Tek_C : public ALadderBaseBP_C
{
public:
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0B18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ladder_Tek.Ladder_Tek_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Ladder_Tek(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
