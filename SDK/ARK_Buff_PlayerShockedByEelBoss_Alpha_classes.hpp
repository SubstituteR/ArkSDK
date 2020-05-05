#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_PlayerShockedByEelBoss_Alpha_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_PlayerShockedByEelBoss_Alpha.Buff_PlayerShockedByEelBoss_Alpha_C
// 0x0000 (0x0931 - 0x0931)
class ABuff_PlayerShockedByEelBoss_Alpha_C : public ABuff_PlayerShockedByEelBoss_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_PlayerShockedByEelBoss_Alpha.Buff_PlayerShockedByEelBoss_Alpha_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_PlayerShockedByEelBoss_Alpha(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
