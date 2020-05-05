#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MatineeValueInterpolationContainer_Gen1_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MatineeValueInterpolationContainer_Gen1.MatineeValueInterpolationContainer_Gen1_C
// 0x001C (0x047C - 0x0460)
class AMatineeValueInterpolationContainer_Gen1_C : public AActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MatineePosition;                                          // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UnderwaterFogMult;                                        // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LunarSunVector;                                           // 0x0470(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MatineeValueInterpolationContainer_Gen1.MatineeValueInterpolationContainer_Gen1_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MatineeValueInterpolationContainer_Gen1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
