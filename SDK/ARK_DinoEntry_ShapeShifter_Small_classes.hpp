#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoEntry_ShapeShifter_Small_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoEntry_ShapeShifter_Small.DinoEntry_ShapeShifter_Small_C
// 0x0000 (0x0080 - 0x0080)
class UDinoEntry_ShapeShifter_Small_C : public UPrimalDinoEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_ShapeShifter_Small.DinoEntry_ShapeShifter_Small_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoEntry_ShapeShifter_Small(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif