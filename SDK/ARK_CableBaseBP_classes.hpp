#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_CableBaseBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CableBaseBP.CableBaseBP_C
// 0x0008 (0x0AD8 - 0x0AD0)
class ACableBaseBP_C : public APrimalStructureWaterPipe
{
public:
	class USphereComponent*                            StasisComponent;                                          // 0x0AD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CableBaseBP.CableBaseBP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_CableBaseBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
