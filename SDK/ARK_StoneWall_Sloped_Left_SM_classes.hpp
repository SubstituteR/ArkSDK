#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_StoneWall_Sloped_Left_SM_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StoneWall_Sloped_Left_SM.StoneWall_Sloped_Left_SM_C
// 0x0000 (0x0AB8 - 0x0AB8)
class AStoneWall_Sloped_Left_SM_C : public ABaseWall_Sloped_Left_SM_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StoneWall_Sloped_Left_SM.StoneWall_Sloped_Left_SM_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_StoneWall_Sloped_Left_SM(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
