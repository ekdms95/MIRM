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
	 * Function HUD_RemainTime.HUD_RemainTime_C.Construct
	 */
	struct UHUD_RemainTime_C_Construct_Params
	{	};

	/**
	 * Function HUD_RemainTime.HUD_RemainTime_C.OnInitailizeWidget
	 */
	struct UHUD_RemainTime_C_OnInitailizeWidget_Params
	{
	public:
		class FString                                              Parameters;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_RemainTime.HUD_RemainTime_C.ExecuteUbergraph_HUD_RemainTime
	 */
	struct UHUD_RemainTime_C_ExecuteUbergraph_HUD_RemainTime_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
