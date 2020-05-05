#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_SiliconHarvestComponent_gen_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SiliconHarvestComponent_gen.SiliconHarvestComponent_gen_C
// 0x0000 (0x0240 - 0x0240)
class USiliconHarvestComponent_gen_C : public UUseHarvestComponent_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SiliconHarvestComponent_gen.SiliconHarvestComponent_gen_C");
		return ptr;
	}


	void ExecuteUbergraph_SiliconHarvestComponent_gen(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
