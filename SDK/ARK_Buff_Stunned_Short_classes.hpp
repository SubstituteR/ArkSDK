#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_Stunned_Short_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Stunned_Short.Buff_Stunned_Short_C
// 0x0000 (0x0948 - 0x0948)
class ABuff_Stunned_Short_C : public ABuff_Stunned_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Stunned_Short.Buff_Stunned_Short_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Stunned_Short(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
