#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapMachinedSniper_Scope_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapMachinedSniper_Scope.WeapMachinedSniper_Scope_C
// 0x0010 (0x0D98 - 0x0D88)
class AWeapMachinedSniper_Scope_C : public AWeapMachinedSniper_C
{
public:
	class UStaticMeshComponent*                        ThirdPersonAttachment;                                    // 0x0D88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        FirstPersonAttachment;                                    // 0x0D90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapMachinedSniper_Scope.WeapMachinedSniper_Scope_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapMachinedSniper_Scope(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
