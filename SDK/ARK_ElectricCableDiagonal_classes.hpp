#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ElectricCableDiagonal_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ElectricCableDiagonal.ElectricCableDiagonal_C
// 0x0000 (0x0AD8 - 0x0AD8)
class AElectricCableDiagonal_C : public AElectricCableBaseBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ElectricCableDiagonal.ElectricCableDiagonal_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ElectricCableDiagonal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
