#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DroppedItemGeneric_NoStasisDelete_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DroppedItemGeneric_NoStasisDelete.DroppedItemGeneric_NoStasisDelete_C
// 0x0000 (0x06F8 - 0x06F8)
class ADroppedItemGeneric_NoStasisDelete_C : public ADroppedItemGenericLowQuality_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DroppedItemGeneric_NoStasisDelete.DroppedItemGeneric_NoStasisDelete_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_DroppedItemGeneric_NoStasisDelete(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
