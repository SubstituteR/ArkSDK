#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Greenhouse_Wall_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Greenhouse_Wall.Greenhouse_Wall_C
// 0x0000 (0x0AB8 - 0x0AB8)
class AGreenhouse_Wall_C : public AWall_Base_Small_SM_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Greenhouse_Wall.Greenhouse_Wall_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Greenhouse_Wall(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
