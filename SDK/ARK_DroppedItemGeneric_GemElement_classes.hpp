#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DroppedItemGeneric_GemElement_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DroppedItemGeneric_GemElement.DroppedItemGeneric_GemElement_C
// 0x0000 (0x0718 - 0x0718)
class ADroppedItemGeneric_GemElement_C : public ADroppedItemGeneric_Gem_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DroppedItemGeneric_GemElement.DroppedItemGeneric_GemElement_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_DroppedItemGeneric_GemElement(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
