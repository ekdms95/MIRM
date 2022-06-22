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
	 * Function HUD_Siege_NaviBox_Elem.HUD_Siege_NaviBox_Elem_C.PreConstruct
	 */
	struct UHUD_Siege_NaviBox_Elem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Siege_NaviBox_Elem.HUD_Siege_NaviBox_Elem_C.Tick
	 */
	struct UHUD_Siege_NaviBox_Elem_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Siege_NaviBox_Elem.HUD_Siege_NaviBox_Elem_C.BndEvt__HUD_Siege_NaviBox_Elem_HUD_Siege_War_Box_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UHUD_Siege_NaviBox_Elem_C_BndEvt__HUD_Siege_NaviBox_Elem_HUD_Siege_War_Box_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function HUD_Siege_NaviBox_Elem.HUD_Siege_NaviBox_Elem_C.OnPreSet
	 */
	struct UHUD_Siege_NaviBox_Elem_C_OnPreSet_Params
	{	};

	/**
	 * Function HUD_Siege_NaviBox_Elem.HUD_Siege_NaviBox_Elem_C.OnActiveAutoMove
	 */
	struct UHUD_Siege_NaviBox_Elem_C_OnActiveAutoMove_Params
	{
	public:
		bool                                                       IsOn;                                                    // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Siege_NaviBox_Elem.HUD_Siege_NaviBox_Elem_C.ExecuteUbergraph_HUD_Siege_NaviBox_Elem
	 */
	struct UHUD_Siege_NaviBox_Elem_C_ExecuteUbergraph_HUD_Siege_NaviBox_Elem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
