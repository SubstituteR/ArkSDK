#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ChildIBL_Ocean_Islands_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ChildIBL_Ocean_Islands.ChildIBL_Ocean_Islands_C
// 0x0000 (0x0468 - 0x0468)
class AChildIBL_Ocean_Islands_C : public AChildIBL_Ocean_Box_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ChildIBL_Ocean_Islands.ChildIBL_Ocean_Islands_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ChildIBL_Ocean_Islands(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
