#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WaterPipe_Base_Intake_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WaterPipe_Base_Intake.WaterPipe_Base_Intake_C
// 0x0000 (0x0AD8 - 0x0AD8)
class AWaterPipe_Base_Intake_C : public AWaterPipeBaseBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WaterPipe_Base_Intake.WaterPipe_Base_Intake_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WaterPipe_Base_Intake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
