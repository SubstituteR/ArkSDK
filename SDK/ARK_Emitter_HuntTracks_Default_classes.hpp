#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Emitter_HuntTracks_Default_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Emitter_HuntTracks_Default.Emitter_HuntTracks_Default_C
// 0x000F (0x0568 - 0x0559)
class AEmitter_HuntTracks_Default_C : public AEmitter_HuntTracks_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0559(0x0007) MISSED OFFSET
	class UStaticMeshComponent*                        StaticMesh2;                                              // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Emitter_HuntTracks_Default.Emitter_HuntTracks_Default_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Emitter_HuntTracks_Default(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
