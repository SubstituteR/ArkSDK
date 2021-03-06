#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Floor_Base_SM_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Floor_Base_SM.Floor_Base_SM_C
// 0x0010 (0x0AC8 - 0x0AB8)
class AFloor_Base_SM_C : public AStructureBaseBP_C
{
public:
	TArray<struct FName>                               AllowSnapRotationToStructuresWithTag;                     // 0x0AB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Floor_Base_SM.Floor_Base_SM_C");
		return ptr;
	}


	bool BPAllowSnapRotationForStructure(int* ThisSnapPointIndex, struct FName* ThisSnapPointName, class APrimalStructure** OtherStructure, int* OtherStructureSnapPointIndex, struct FName* OtherStructureSnapPointName);
	void UserConstructionScript();
	void ExecuteUbergraph_Floor_Base_SM(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
