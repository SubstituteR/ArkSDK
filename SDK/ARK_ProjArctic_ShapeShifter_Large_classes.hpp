#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjArctic_ShapeShifter_Large_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjArctic_ShapeShifter_Large.ProjArctic_ShapeShifter_Large_C
// 0x0000 (0x068C - 0x068C)
class AProjArctic_ShapeShifter_Large_C : public AProjArctic_ShapeShifter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjArctic_ShapeShifter_Large.ProjArctic_ShapeShifter_Large_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjArctic_ShapeShifter_Large(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
