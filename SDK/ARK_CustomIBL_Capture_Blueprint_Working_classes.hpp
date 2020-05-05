#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_CustomIBL_Capture_Blueprint_Working_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CustomIBL_Capture_Blueprint_Working.CustomIBL_Capture_Blueprint_Working_C
// 0x01C8 (0x0650 - 0x0488)
class ACustomIBL_Capture_Blueprint_Working_C : public AChildIBL_Capture_Blueprint_C
{
public:
	class UStaticMeshComponent*                        CustomSphere;                                             // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CustomMaterial;                                           // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0498(0x0008) MISSED OFFSET
	struct UObject_FTransform                          Light1_Position;                                          // 0x04A0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct UObject_FTransform                          Light2_Position;                                          // 0x04D0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct UObject_FTransform                          Light3_Position;                                          // 0x0500(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct UObject_FTransform                          Light4_Position;                                          // 0x0530(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct UObject_FTransform                          Light5_Position;                                          // 0x0560(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct UObject_FTransform                          Light6_Position;                                          // 0x0590(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Light1_Color;                                             // 0x05C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Light2_Color;                                             // 0x05D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Light3_Color;                                             // 0x05E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Light4_Color;                                             // 0x05F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Light5_Color;                                             // 0x0600(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Light6_Color;                                             // 0x0610(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               LightPositionNames;                                       // 0x0620(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               LightColorNames;                                          // 0x0630(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Scene_Background_Amount;                                  // 0x0640(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Scene_Upper_Hemisphere_Amount;                            // 0x0644(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Scene_Lower_Hemisphere_Amount;                            // 0x0648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Scene_Hemisphere_Transition_Power;                        // 0x064C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CustomIBL_Capture_Blueprint_Working.CustomIBL_Capture_Blueprint_Working_C");
		return ptr;
	}


	void Calculate_Light(const struct UObject_FTransform& TransformIn, struct FLinearColor* LightColor);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_CustomIBL_Capture_Blueprint_Working(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
