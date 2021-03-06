#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WindowWall_Tek_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WindowWall_Tek.WindowWall_Tek_C
// 0x0008 (0x0AC0 - 0x0AB8)
class AWindowWall_Tek_C : public AWindowWall_Base_SM_C
{
public:
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0AB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WindowWall_Tek.WindowWall_Tek_C");
		return ptr;
	}


	bool BPAllowSnappingWith(class APrimalStructure** OtherStructure, class APlayerController** ForPC);
	void UserConstructionScript();
	void ExecuteUbergraph_WindowWall_Tek(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
