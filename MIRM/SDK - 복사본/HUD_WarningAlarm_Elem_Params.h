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
	 * Function HUD_WarningAlarm_Elem.HUD_WarningAlarm_Elem_C.PreConstruct
	 */
	struct UHUD_WarningAlarm_Elem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_WarningAlarm_Elem.HUD_WarningAlarm_Elem_C.OnMouseEnter
	 */
	struct UHUD_WarningAlarm_Elem_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function HUD_WarningAlarm_Elem.HUD_WarningAlarm_Elem_C.OnMouseLeave
	 */
	struct UHUD_WarningAlarm_Elem_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function HUD_WarningAlarm_Elem.HUD_WarningAlarm_Elem_C.ExecuteUbergraph_HUD_WarningAlarm_Elem
	 */
	struct UHUD_WarningAlarm_Elem_C_ExecuteUbergraph_HUD_WarningAlarm_Elem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_WarningAlarm_Elem.HUD_WarningAlarm_Elem_C.HUD_WarningAlarm_Elem_Btn_Dispatch__DelegateSignature
	 */
	struct UHUD_WarningAlarm_Elem_C_HUD_WarningAlarm_Elem_Btn_Dispatch__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
