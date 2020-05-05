#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Basic.hpp"
#include "ARK_CoreUObject_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct Struct_BiometricTrackingItem.Struct_BiometricTrackingItem
// 0x0038
struct FStruct_BiometricTrackingItem
{
	class UTexture2D*                                  Icon_2_06AF7A474D1AB5D94E85009037F939EF;                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location_5_8D4F7F984CCFD12559830F9F540EBE6E;              // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class AActor*                                      TargetActor_8_16BAF89F4B8F5291D911D2A4E40A5B31;           // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             CreationTime_11_4BC2CFD6447E1A9CE1F6C89118C14BCF;         // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Age_16_10CF9E5C476EDAAE8FC1D3A6B6CDA6E0;                  // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction_19_660D20AB449BF4C0DB8EC585E9152453;            // 0x002C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
