#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DroppedItemGeneric_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DroppedItemGeneric.DroppedItemGeneric_C
// 0x0008 (0x06F8 - 0x06F0)
class ADroppedItemGeneric_C : public ADroppedItem
{
public:
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DroppedItemGeneric.DroppedItemGeneric_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_DroppedItemGeneric(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
