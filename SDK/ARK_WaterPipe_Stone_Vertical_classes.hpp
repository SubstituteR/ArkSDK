#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WaterPipe_Stone_Vertical_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WaterPipe_Stone_Vertical.WaterPipe_Stone_Vertical_C
// 0x0000 (0x0AD8 - 0x0AD8)
class AWaterPipe_Stone_Vertical_C : public AWaterPipe_Base_Vertical_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WaterPipe_Stone_Vertical.WaterPipe_Stone_Vertical_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WaterPipe_Stone_Vertical(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
