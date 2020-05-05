#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Gen_AreaBuff_VR_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Gen_AreaBuff_VR.Gen_AreaBuff_VR_C
// 0x0000 (0x0B82 - 0x0B82)
class AGen_AreaBuff_VR_C : public AGen_AreaBuff_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gen_AreaBuff_VR.Gen_AreaBuff_VR_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Gen_AreaBuff_VR(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
