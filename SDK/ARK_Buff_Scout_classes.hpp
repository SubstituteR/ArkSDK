#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_Scout_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Scout.Buff_Scout_C
// 0x0008 (0x0938 - 0x0930)
class ABuff_Scout_C : public ABuff_Base_C
{
public:
	class UCurveFloat*                                 StaminaToVFXIntensityCurve;                               // 0x0930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Scout.Buff_Scout_C");
		return ptr;
	}


	void BuffTickClient(float* DeltaTime);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Scout(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
