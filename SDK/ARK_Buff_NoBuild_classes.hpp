#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_NoBuild_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_NoBuild.Buff_NoBuild_C
// 0x0008 (0x0938 - 0x0930)
class ABuff_NoBuild_C : public APrimalBuff
{
public:
	class USphereComponent*                            NoBuildOctree;                                            // 0x0930(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_NoBuild.Buff_NoBuild_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_NoBuild(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
