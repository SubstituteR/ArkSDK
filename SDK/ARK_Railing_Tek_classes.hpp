#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Railing_Tek_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Railing_Tek.Railing_Tek_C
// 0x0008 (0x0AC0 - 0x0AB8)
class ARailing_Tek_C : public ARailing_Base_C
{
public:
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0AB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Railing_Tek.Railing_Tek_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Railing_Tek(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
