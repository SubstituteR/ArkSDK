#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DK_BogSpider_IsStuckToWall_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DK_BogSpider_IsStuckToWall.DK_BogSpider_IsStuckToWall_C
// 0x0000 (0x0090 - 0x0090)
class UDK_BogSpider_IsStuckToWall_C : public UBTDecorator_BlueprintBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DK_BogSpider_IsStuckToWall.DK_BogSpider_IsStuckToWall_C");
		return ptr;
	}


	void ReceiveConditionCheck(class AActor** OwnerActor);
	void ExecuteUbergraph_DK_BogSpider_IsStuckToWall(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
