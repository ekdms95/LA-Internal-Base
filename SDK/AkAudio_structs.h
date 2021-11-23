#pragma once

// Name: LOSTARK, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AkAudio.InterpTrackAkEvent.AkEventTrackKey
// 0x000C
struct FAkEventTrackKey
{
	float                                              Time;                                                      // 0x0000(0x0004)
	class UAkEvent*                                    Event;                                                     // 0x0004(0x0008) (Edit)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
