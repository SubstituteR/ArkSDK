#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_TPV_ClimbPick_MaleAnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass TPV_ClimbPick_MaleAnimBP.TPV_ClimbPick_MaleAnimBP_C
// 0x0000 (0x3A14 - 0x3A14)
class UTPV_ClimbPick_MaleAnimBP_C : public UBaseHumanAnimBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass TPV_ClimbPick_MaleAnimBP.TPV_ClimbPick_MaleAnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_TPV_ClimbPick_MaleAnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
