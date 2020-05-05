#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VREndDrone_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VREndDrone_Character_BP.VREndDrone_Character_BP_C
// 0x000A (0x2348 - 0x233E)
class AVREndDrone_Character_BP_C : public AEndDrone_Character_BP_C
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x233E(0x0002) MISSED OFFSET
	class UDinoCharacterStatusComponent_BP_Drone_VR_C* DinoCharacterStatus_BP_Drone_VR_C1;                       // 0x2340(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VREndDrone_Character_BP.VREndDrone_Character_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_VREndDrone_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
