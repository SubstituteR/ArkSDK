#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjXenomorphWebBall_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjXenomorphWebBall.ProjXenomorphWebBall_C
// 0x0000 (0x0658 - 0x0658)
class AProjXenomorphWebBall_C : public AProjWebBall_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjXenomorphWebBall.ProjXenomorphWebBall_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjXenomorphWebBall(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
