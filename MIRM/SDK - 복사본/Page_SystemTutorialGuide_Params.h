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
	 * Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.Finger_position
	 */
	struct UPage_SystemTutorialGuide_C_Finger_position_Params
	{
	public:
		struct FVector2D                                           Finger_Position;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           Arrow_Position;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Arrow_Angle;                                             // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Finger_Angle;                                            // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.Finger_Int
	 */
	struct UPage_SystemTutorialGuide_C_Finger_Int_Params
	{	};

	/**
	 * Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.PlayHighlightWidgetAni
	 */
	struct UPage_SystemTutorialGuide_C_PlayHighlightWidgetAni_Params
	{	};

	/**
	 * Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.BndEvt__RectHighlight_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UPage_SystemTutorialGuide_C_BndEvt__RectHighlight_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.BndEvt__CM_Btn_Close_K2Node_ComponentBoundEvent_4_Click__DelegateSignature
	 */
	struct UPage_SystemTutorialGuide_C_BndEvt__CM_Btn_Close_K2Node_ComponentBoundEvent_4_Click__DelegateSignature_Params
	{	};

	/**
	 * Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.ResetFingerImage
	 */
	struct UPage_SystemTutorialGuide_C_ResetFingerImage_Params
	{	};

	/**
	 * Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.PlayTouchAndDragAni
	 */
	struct UPage_SystemTutorialGuide_C_PlayTouchAndDragAni_Params
	{
	public:
		E_TOUCH_ANIMATION                                          TouchAnimationType;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.BndEvt__CM_Btn_4_K2Node_ComponentBoundEvent_5_ClickDispatcher__DelegateSignature
	 */
	struct UPage_SystemTutorialGuide_C_BndEvt__CM_Btn_4_K2Node_ComponentBoundEvent_5_ClickDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.BndEvt__CM_Btn_1_K2Node_ComponentBoundEvent_8_ClickDispatcher__DelegateSignature
	 */
	struct UPage_SystemTutorialGuide_C_BndEvt__CM_Btn_1_K2Node_ComponentBoundEvent_8_ClickDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.BndEvt__Right_K2Node_ComponentBoundEvent_9_ClickDispatcher__DelegateSignature
	 */
	struct UPage_SystemTutorialGuide_C_BndEvt__Right_K2Node_ComponentBoundEvent_9_ClickDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.WidgetAnimationEvt_Drag_Up_K2Node_WidgetAnimationEvent_1
	 */
	struct UPage_SystemTutorialGuide_C_WidgetAnimationEvt_Drag_Up_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.BndEvt__Basic_K2Node_ComponentBoundEvent_10_ClickDispatcher__DelegateSignature
	 */
	struct UPage_SystemTutorialGuide_C_BndEvt__Basic_K2Node_ComponentBoundEvent_10_ClickDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.BndEvt__MirButton_74_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 */
	struct UPage_SystemTutorialGuide_C_BndEvt__MirButton_74_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.BndEvt__Down_K2Node_ComponentBoundEvent_11_ClickDispatcher__DelegateSignature
	 */
	struct UPage_SystemTutorialGuide_C_BndEvt__Down_K2Node_ComponentBoundEvent_11_ClickDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.ClearRenderTarget
	 */
	struct UPage_SystemTutorialGuide_C_ClearRenderTarget_Params
	{
	public:
		struct FLinearColor                                        BaseColor;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.PreConstruct
	 */
	struct UPage_SystemTutorialGuide_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.BndEvt__Skip_Button_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct UPage_SystemTutorialGuide_C_BndEvt__Skip_Button_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.Construct
	 */
	struct UPage_SystemTutorialGuide_C_Construct_Params
	{	};

	/**
	 * Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.BndEvt__Tuto_PageArrow_Btn_K2Node_ComponentBoundEvent_1_NextBtn__DelegateSignature
	 */
	struct UPage_SystemTutorialGuide_C_BndEvt__Tuto_PageArrow_Btn_K2Node_ComponentBoundEvent_1_NextBtn__DelegateSignature_Params
	{	};

	/**
	 * Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.BndEvt__Tuto_PageArrow_Btn_K2Node_ComponentBoundEvent_5_PrevBtn__DelegateSignature
	 */
	struct UPage_SystemTutorialGuide_C_BndEvt__Tuto_PageArrow_Btn_K2Node_ComponentBoundEvent_5_PrevBtn__DelegateSignature_Params
	{	};

	/**
	 * Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.ExecuteUbergraph_Page_SystemTutorialGuide
	 */
	struct UPage_SystemTutorialGuide_C_ExecuteUbergraph_Page_SystemTutorialGuide_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
