#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ServerSidePoint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ServerSidePoint.ServerSidePoint_C
// 0x0000 (0x0460 - 0x0460)
class AServerSidePoint_C : public ANote
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ServerSidePoint.ServerSidePoint_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ServerSidePoint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
