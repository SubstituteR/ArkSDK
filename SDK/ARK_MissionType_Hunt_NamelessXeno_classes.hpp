#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Hunt_NamelessXeno_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionType_Hunt_NamelessXeno.MissionType_Hunt_NamelessXeno_C
// 0x0017 (0x1521 - 0x150A)
class AMissionType_Hunt_NamelessXeno_C : public AMissionType_Hunt_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x150A(0x0006) MISSED OFFSET
	TArray<struct FDinoSetup>                          FinalStageDinosToSpawn;                                   // 0x1510(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               CallFunc_Array_Set_Item_RefProperty;                      // 0x1520(0x0001) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionType_Hunt_NamelessXeno.MissionType_Hunt_NamelessXeno_C");
		return ptr;
	}


	void GetDinosToSpawnForStage(int* ForStage, TArray<struct FDinoSetup>* DinosSetups, TArray<bool>* IsMainTarget);
	void UserConstructionScript();
	void ExecuteUbergraph_MissionType_Hunt_NamelessXeno(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
