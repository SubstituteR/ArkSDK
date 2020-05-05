#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MasterIBL_Ocean_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MasterIBL_Ocean.MasterIBL_Ocean_C
// 0x0008 (0x0470 - 0x0468)
class AMasterIBL_Ocean_C : public ALevelScriptActor
{
public:
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x0468(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MasterIBL_Ocean.MasterIBL_Ocean_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_MasterIBL_Ocean(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
