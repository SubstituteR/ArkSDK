#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjRock_ShapeShifter_Large_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjRock_ShapeShifter_Large.ProjRock_ShapeShifter_Large_C
// 0x0000 (0x068C - 0x068C)
class AProjRock_ShapeShifter_Large_C : public AProjRock_ShapeShifter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjRock_ShapeShifter_Large.ProjRock_ShapeShifter_Large_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjRock_ShapeShifter_Large(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
