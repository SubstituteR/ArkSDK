#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Base_Wire_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Base_Wire.Base_Wire_C
// 0x0000 (0x0AD8 - 0x0AD8)
class ABase_Wire_C : public AElectricCableBaseBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Base_Wire.Base_Wire_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Base_Wire(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
