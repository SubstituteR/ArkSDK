#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Bookshelf_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Bookshelf.Bookshelf_C.UserConstructionScript
struct ABookshelf_C_UserConstructionScript_Params
{
};

// Function Bookshelf.Bookshelf_C.ExecuteUbergraph_Bookshelf
struct ABookshelf_C_ExecuteUbergraph_Bookshelf_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
