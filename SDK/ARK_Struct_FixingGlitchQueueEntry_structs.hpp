#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Basic.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct Struct_FixingGlitchQueueEntry.Struct_FixingGlitchQueueEntry
// 0x0010
struct FStruct_FixingGlitchQueueEntry
{
	class APlayerController*                           FixByPC_8_C8B381E9439501AB8B972FB02A0276B6;               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             FixStartTime_9_1A7DE0B34D90FF79B317F2921C185EC6;          // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
