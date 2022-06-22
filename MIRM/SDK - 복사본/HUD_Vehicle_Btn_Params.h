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
	 * Function HUD_Vehicle_Btn.HUD_Vehicle_Btn_C.Set_Hungry_Gauge
	 */
	struct UHUD_Vehicle_Btn_C_Set_Hungry_Gauge_Params
	{
	public:
		float                                                      Vehicle_Hungry_Gauge_Float;                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Vehicle_Btn.HUD_Vehicle_Btn_C.State_Visibility
	 */
	struct UHUD_Vehicle_Btn_C_State_Visibility_Params
	{
	public:
		ESlateVisibility                                           Disable_visi;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESlateVisibility                                           Progress_Circle_visi;                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESlateVisibility                                           Hungry_Icon_visi;                                        // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Vehicle_Btn.HUD_Vehicle_Btn_C.PreConstruct
	 */
	struct UHUD_Vehicle_Btn_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Vehicle_Btn.HUD_Vehicle_Btn_C.OnPreSet
	 */
	struct UHUD_Vehicle_Btn_C_OnPreSet_Params
	{	};

	/**
	 * Function HUD_Vehicle_Btn.HUD_Vehicle_Btn_C.Tick
	 */
	struct UHUD_Vehicle_Btn_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Vehicle_Btn.HUD_Vehicle_Btn_C.BndEvt__Pet_Summon_btn_K2Node_ComponentBoundEvent_1_MbtnClick__DelegateSignature
	 */
	struct UHUD_Vehicle_Btn_C_BndEvt__Pet_Summon_btn_K2Node_ComponentBoundEvent_1_MbtnClick__DelegateSignature_Params
	{	};

	/**
	 * Function HUD_Vehicle_Btn.HUD_Vehicle_Btn_C.BndEvt__HUD_Vehicle_Btn_Disable_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UHUD_Vehicle_Btn_C_BndEvt__HUD_Vehicle_Btn_Disable_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function HUD_Vehicle_Btn.HUD_Vehicle_Btn_C.KeyInput
	 */
	struct UHUD_Vehicle_Btn_C_KeyInput_Params
	{	};

	/**
	 * Function HUD_Vehicle_Btn.HUD_Vehicle_Btn_C.OnSatifyAnimTickCheck
	 */
	struct UHUD_Vehicle_Btn_C_OnSatifyAnimTickCheck_Params
	{
	public:
		bool                                                       IsPlaying;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Vehicle_Btn.HUD_Vehicle_Btn_C.ExecuteUbergraph_HUD_Vehicle_Btn
	 */
	struct UHUD_Vehicle_Btn_C_ExecuteUbergraph_HUD_Vehicle_Btn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
