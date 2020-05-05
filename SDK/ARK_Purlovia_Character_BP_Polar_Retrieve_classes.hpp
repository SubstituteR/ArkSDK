#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Purlovia_Character_BP_Polar_Retrieve_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Purlovia_Character_BP_Polar_Retrieve.Purlovia_Character_BP_Polar_Retrieve_C
// 0x0000 (0x28F8 - 0x28F8)
class APurlovia_Character_BP_Polar_Retrieve_C : public APurlovia_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Purlovia_Character_BP_Polar_Retrieve.Purlovia_Character_BP_Polar_Retrieve_C");
		return ptr;
	}


	void IsValidSurface(bool* IsValid);
	void Show_Mound_Out_Particles();
	void CalculateBuryMeshTransform(struct UObject_FTransform* Transform);
	void BPPostInitializeComponents();
	void ShouldComeOut(bool* comeOut);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Purlovia_Character_BP_Polar_Retrieve(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
