#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Structure_TaxidermyBase_Medium_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Structure_TaxidermyBase_Medium.Structure_TaxidermyBase_Medium_C
// 0x0000 (0x0E00 - 0x0E00)
class AStructure_TaxidermyBase_Medium_C : public AStructure_TaxidermyBase_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Structure_TaxidermyBase_Medium.Structure_TaxidermyBase_Medium_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Structure_TaxidermyBase_Medium(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
