#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_OceanDinoDeadAreaEntry_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OceanDinoDeadAreaEntry.OceanDinoDeadAreaEntry_C
// 0x0008 (0x0938 - 0x0930)
class AOceanDinoDeadAreaEntry_C : public APrimalBuff
{
public:
	class USphereComponent*                            SpatialComp;                                              // 0x0930(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OceanDinoDeadAreaEntry.OceanDinoDeadAreaEntry_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_OceanDinoDeadAreaEntry(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
