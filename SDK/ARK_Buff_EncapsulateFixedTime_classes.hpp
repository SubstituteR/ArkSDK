#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_EncapsulateFixedTime_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_EncapsulateFixedTime.Buff_EncapsulateFixedTime_C
// 0x0000 (0x0A0C - 0x0A0C)
class ABuff_EncapsulateFixedTime_C : public ABuff_Encapsulated_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_EncapsulateFixedTime.Buff_EncapsulateFixedTime_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_EncapsulateFixedTime(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
