#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_CropPlotSmall_SM_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CropPlotSmall_SM.CropPlotSmall_SM_C
// 0x0010 (0x0EC8 - 0x0EB8)
class ACropPlotSmall_SM_C : public ACropPlotBaseBP_C
{
public:
	class UBoxComponent*                               Box1;                                                     // 0x0EB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimalInventoryBP_CropPlot_Small_C*         PrimalInventoryBP_CropPlot_Small_C1;                      // 0x0EC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CropPlotSmall_SM.CropPlotSmall_SM_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_CropPlotSmall_SM(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
