#pragma once

/**
 * Name: MIRM
 * Version: 0623
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function HUD_BuffBox_Pop_Elem.HUD_BuffBox_Pop_Elem_C.OnPreSet
	 */
	struct UHUD_BuffBox_Pop_Elem_C_OnPreSet_Params
	{	};

	/**
	 * Function HUD_BuffBox_Pop_Elem.HUD_BuffBox_Pop_Elem_C.Tick
	 */
	struct UHUD_BuffBox_Pop_Elem_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_BuffBox_Pop_Elem.HUD_BuffBox_Pop_Elem_C.ExecuteUbergraph_HUD_BuffBox_Pop_Elem
	 */
	struct UHUD_BuffBox_Pop_Elem_C_ExecuteUbergraph_HUD_BuffBox_Pop_Elem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
