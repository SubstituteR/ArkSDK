#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_StructureBP_WoodChair_Indestructible_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StructureBP_WoodChair_Indestructible.StructureBP_WoodChair_Indestructible_C
// 0x0000 (0x0EA1 - 0x0EA1)
class AStructureBP_WoodChair_Indestructible_C : public AStructureBP_WoodChair_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StructureBP_WoodChair_Indestructible.StructureBP_WoodChair_Indestructible_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_StructureBP_WoodChair_Indestructible(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
