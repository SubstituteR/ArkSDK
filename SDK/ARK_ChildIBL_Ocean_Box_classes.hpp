#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ChildIBL_Ocean_Box_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ChildIBL_Ocean_Box.ChildIBL_Ocean_Box_C
// 0x0000 (0x0468 - 0x0468)
class AChildIBL_Ocean_Box_C : public ABox_ChildIBL_Capture_Blueprint_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ChildIBL_Ocean_Box.ChildIBL_Ocean_Box_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ChildIBL_Ocean_Box(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
