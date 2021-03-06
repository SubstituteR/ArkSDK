#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_SquidInkCloud_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SquidInkCloud.SquidInkCloud_C
// 0x0000 (0x0930 - 0x0930)
class ASquidInkCloud_C : public ABuff_PoisonTrap_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SquidInkCloud.SquidInkCloud_C");
		return ptr;
	}


	bool BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser);
	void UserConstructionScript();
	void ExecuteUbergraph_SquidInkCloud(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
