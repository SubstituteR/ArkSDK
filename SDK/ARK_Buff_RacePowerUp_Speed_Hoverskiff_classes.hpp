#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_RacePowerUp_Speed_Hoverskiff_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_RacePowerUp_Speed_Hoverskiff.Buff_RacePowerUp_Speed_Hoverskiff_C
// 0x0000 (0x0A74 - 0x0A74)
class ABuff_RacePowerUp_Speed_Hoverskiff_C : public ABuff_RacePowerUp_Speed_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_RacePowerUp_Speed_Hoverskiff.Buff_RacePowerUp_Speed_Hoverskiff_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_RacePowerUp_Speed_Hoverskiff(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
