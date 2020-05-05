#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalStructure_GiveRetrieveItem_Arctic_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalStructure_GiveRetrieveItem_Arctic.PrimalStructure_GiveRetrieveItem_Arctic_C
// 0x0000 (0x0AF4 - 0x0AF4)
class APrimalStructure_GiveRetrieveItem_Arctic_C : public APrimalStructure_GiveRetrieveItem_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalStructure_GiveRetrieveItem_Arctic.PrimalStructure_GiveRetrieveItem_Arctic_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_PrimalStructure_GiveRetrieveItem_Arctic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
