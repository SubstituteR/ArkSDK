#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItemStructure_BaseWallWithDoor_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemStructure_BaseWallWithDoor.PrimalItemStructure_BaseWallWithDoor_C
// 0x0000 (0x09B0 - 0x09B0)
class UPrimalItemStructure_BaseWallWithDoor_C : public UPrimalItemStructure_BaseWall_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_BaseWallWithDoor.PrimalItemStructure_BaseWallWithDoor_C");
		return ptr;
	}


	void NewFunction_1();
	void ExecuteUbergraph_PrimalItemStructure_BaseWallWithDoor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
