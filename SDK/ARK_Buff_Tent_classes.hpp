#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_Tent_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Tent.Buff_Tent_C
// 0x0008 (0x0938 - 0x0930)
class ABuff_Tent_C : public APrimalBuff
{
public:
	class APrimalStructure*                            Tent;                                                     // 0x0930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Tent.Buff_Tent_C");
		return ptr;
	}


	void SetBuffCauser(class AActor** CausedBy);
	void BuffTickServer(float* DeltaTime);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Tent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
