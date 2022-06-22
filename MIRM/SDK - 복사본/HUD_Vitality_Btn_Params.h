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
	 * Function HUD_Vitality_Btn.HUD_Vitality_Btn_C.OnPreSet
	 */
	struct UHUD_Vitality_Btn_C_OnPreSet_Params
	{	};

	/**
	 * Function HUD_Vitality_Btn.HUD_Vitality_Btn_C.OnAddValue
	 */
	struct UHUD_Vitality_Btn_C_OnAddValue_Params
	{
	public:
		bool                                                       isConditionValue;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int64_t                                                    Val;                                                     // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Vitality_Btn.HUD_Vitality_Btn_C.BndEvt__HUD_Vitality_Btn_HUD_Vitality_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UHUD_Vitality_Btn_C_BndEvt__HUD_Vitality_Btn_HUD_Vitality_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function HUD_Vitality_Btn.HUD_Vitality_Btn_C.WidgetAnimationEvt_Text_ani_2_K2Node_WidgetAnimationEvent_2
	 */
	struct UHUD_Vitality_Btn_C_WidgetAnimationEvt_Text_ani_2_K2Node_WidgetAnimationEvent_2_Params
	{	};

	/**
	 * Function HUD_Vitality_Btn.HUD_Vitality_Btn_C.ExecuteUbergraph_HUD_Vitality_Btn
	 */
	struct UHUD_Vitality_Btn_C_ExecuteUbergraph_HUD_Vitality_Btn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Vitality_Btn.HUD_Vitality_Btn_C.Click_Dispatch__DelegateSignature
	 */
	struct UHUD_Vitality_Btn_C_Click_Dispatch__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
