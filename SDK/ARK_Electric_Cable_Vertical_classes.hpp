#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Electric_Cable_Vertical_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Electric_Cable_Vertical.Electric_Cable_Vertical_C
// 0x0000 (0x0AD8 - 0x0AD8)
class AElectric_Cable_Vertical_C : public AElectricCableBaseBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Electric_Cable_Vertical.Electric_Cable_Vertical_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Electric_Cable_Vertical(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
