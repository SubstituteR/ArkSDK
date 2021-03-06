#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Ladder_Rope_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ladder_Rope.Ladder_Rope_C
// 0x0008 (0x0B20 - 0x0B18)
class ALadder_Rope_C : public ALadderBaseBP_C
{
public:
	class UStaticMeshComponent*                        RetractedMesh;                                            // 0x0B18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ladder_Rope.Ladder_Rope_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Ladder_Rope(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
