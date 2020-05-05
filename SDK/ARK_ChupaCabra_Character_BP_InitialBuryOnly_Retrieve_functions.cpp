// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ChupaCabra_Character_BP_InitialBuryOnly_Retrieve_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ChupaCabra_Character_BP_InitialBuryOnly_Retrieve.ChupaCabra_Character_BP_InitialBuryOnly_Retrieve_C.UserConstructionScript
// ()

void AChupaCabra_Character_BP_InitialBuryOnly_Retrieve_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP_InitialBuryOnly_Retrieve.ChupaCabra_Character_BP_InitialBuryOnly_Retrieve_C.UserConstructionScript");

	AChupaCabra_Character_BP_InitialBuryOnly_Retrieve_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_Character_BP_InitialBuryOnly_Retrieve.ChupaCabra_Character_BP_InitialBuryOnly_Retrieve_C.ExecuteUbergraph_ChupaCabra_Character_BP_InitialBuryOnly_Retrieve
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_Character_BP_InitialBuryOnly_Retrieve_C::ExecuteUbergraph_ChupaCabra_Character_BP_InitialBuryOnly_Retrieve(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_Character_BP_InitialBuryOnly_Retrieve.ChupaCabra_Character_BP_InitialBuryOnly_Retrieve_C.ExecuteUbergraph_ChupaCabra_Character_BP_InitialBuryOnly_Retrieve");

	AChupaCabra_Character_BP_InitialBuryOnly_Retrieve_C_ExecuteUbergraph_ChupaCabra_Character_BP_InitialBuryOnly_Retrieve_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
