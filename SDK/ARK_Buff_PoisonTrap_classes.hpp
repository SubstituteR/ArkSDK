#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_PoisonTrap_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_PoisonTrap.Buff_PoisonTrap_C
// 0x0000 (0x0930 - 0x0930)
class ABuff_PoisonTrap_C : public ABuff_Base_GasMaskable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_PoisonTrap.Buff_PoisonTrap_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_PoisonTrap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
