#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_FoliageTrap_Fertile_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_FoliageTrap_Fertile.Buff_FoliageTrap_Fertile_C
// 0x0000 (0x09CC - 0x09CC)
class ABuff_FoliageTrap_Fertile_C : public ABuff_FoliageTrap_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_FoliageTrap_Fertile.Buff_FoliageTrap_Fertile_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_FoliageTrap_Fertile(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
