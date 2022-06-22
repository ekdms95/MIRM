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
	 * Function SW_HUD_Siege_Map_Flag.SW_HUD_Siege_Map_Flag_C.OnStartFlagAnimation
	 */
	struct USW_HUD_Siege_Map_Flag_C_OnStartFlagAnimation_Params
	{
	public:
		float                                                      StartTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SW_HUD_Siege_Map_Flag.SW_HUD_Siege_Map_Flag_C.PreConstruct
	 */
	struct USW_HUD_Siege_Map_Flag_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SW_HUD_Siege_Map_Flag.SW_HUD_Siege_Map_Flag_C.FinishFlagAnim
	 */
	struct USW_HUD_Siege_Map_Flag_C_FinishFlagAnim_Params
	{	};

	/**
	 * Function SW_HUD_Siege_Map_Flag.SW_HUD_Siege_Map_Flag_C.OnStartFlagRoutineAnimation
	 */
	struct USW_HUD_Siege_Map_Flag_C_OnStartFlagRoutineAnimation_Params
	{
	public:
		float                                                      StartTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SW_HUD_Siege_Map_Flag.SW_HUD_Siege_Map_Flag_C.ExecuteUbergraph_SW_HUD_Siege_Map_Flag
	 */
	struct USW_HUD_Siege_Map_Flag_C_ExecuteUbergraph_SW_HUD_Siege_Map_Flag_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
