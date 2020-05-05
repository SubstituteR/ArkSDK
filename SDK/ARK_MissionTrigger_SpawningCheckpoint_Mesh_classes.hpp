#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionTrigger_SpawningCheckpoint_Mesh_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionTrigger_SpawningCheckpoint_Mesh.MissionTrigger_SpawningCheckpoint_Mesh_C
// 0x006A (0x0938 - 0x08CE)
class AMissionTrigger_SpawningCheckpoint_Mesh_C : public AMissionTrigger_SpawningCheckpoint_C
{
public:
	unsigned char                                      UnknownData00[0x2];                                       // 0x08CE(0x0002) MISSED OFFSET
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x08D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ConformMeshToGround;                                      // 0x08D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x08D9(0x0003) MISSED OFFSET
	struct FVector                                     ConformedMeshOffset;                                      // 0x08DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ConformMeshTraceDistance;                                 // 0x08E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x08EC(0x0004) MISSED OFFSET
	class UStaticMesh*                                 TriggerStaticMesh;                                        // 0x08F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MeshScale;                                                // 0x08F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0904(0x0004) MISSED OFFSET
	TArray<class UMaterialInterface*>                  ActiveMaterials;                                          // 0x0908(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UMaterialInterface*>                  InactiveMaterials;                                        // 0x0918(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty;  // 0x0928(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionTrigger_SpawningCheckpoint_Mesh.MissionTrigger_SpawningCheckpoint_Mesh_C");
		return ptr;
	}


	void SetActiveCheckpoint(bool* Active);
	void UserConstructionScript();
	void ExecuteUbergraph_MissionTrigger_SpawningCheckpoint_Mesh(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
