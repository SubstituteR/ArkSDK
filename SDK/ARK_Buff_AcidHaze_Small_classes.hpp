#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_AcidHaze_Small_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_AcidHaze_Small.Buff_AcidHaze_Small_C
// 0x0000 (0x0930 - 0x0930)
class ABuff_AcidHaze_Small_C : public ABuff_AcidHaze_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_AcidHaze_Small.Buff_AcidHaze_Small_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_AcidHaze_Small(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
