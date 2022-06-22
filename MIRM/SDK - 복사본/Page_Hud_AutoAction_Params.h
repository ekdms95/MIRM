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
	 * Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.DungeonActionButtonVisible
	 */
	struct UPage_Hud_AutoAction_C_DungeonActionButtonVisible_Params
	{
	public:
		bool                                                       Pet;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Vehicle;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.SetDungeonActionButtons
	 */
	struct UPage_Hud_AutoAction_C_SetDungeonActionButtons_Params
	{
	public:
		E_DUNGEON_TYPE                                             Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.OnChangeAutoState
	 */
	struct UPage_Hud_AutoAction_C_OnChangeAutoState_Params
	{
	public:
		struct FAutoPlayProcessUnit                                inAutoProcess;                                           // 0x0000(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.ResetAutoBtnsVisible
	 */
	struct UPage_Hud_AutoAction_C_ResetAutoBtnsVisible_Params
	{
	public:
		bool                                                       showBtns;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.ShowAutoBtnVisible
	 */
	struct UPage_Hud_AutoAction_C_ShowAutoBtnVisible_Params
	{
	public:
		int32_t                                                    inBottomIdx;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.OnChangeCflag
	 */
	struct UPage_Hud_AutoAction_C_OnChangeCflag_Params
	{
	public:
		struct FCFlagValues                                        CFlagValues;                                             // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.OnSetVisible
	 */
	struct UPage_Hud_AutoAction_C_OnSetVisible_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.BndEvt__CM_Camera_Btn_K2Node_ComponentBoundEvent_0_Camera_BtnClick_Dispatch__DelegateSignature
	 */
	struct UPage_Hud_AutoAction_C_BndEvt__CM_Camera_Btn_K2Node_ComponentBoundEvent_0_Camera_BtnClick_Dispatch__DelegateSignature_Params
	{	};

	/**
	 * Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.OnFearState
	 */
	struct UPage_Hud_AutoAction_C_OnFearState_Params
	{
	public:
		bool                                                       IsFear;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.BindOnSetAutoProcess_이벤트_1
	 */
	struct UPage_Hud_AutoAction_C_BindOnSetAutoProcess_이벤트_1_Params
	{
	public:
		struct FAutoPlayProcessUnit                                AutoPlayProcessUnit;                                     // 0x0000(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.Tick
	 */
	struct UPage_Hud_AutoAction_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.BndEvt__HUD_Vehicle_Btn_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature
	 */
	struct UPage_Hud_AutoAction_C_BndEvt__HUD_Vehicle_Btn_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature_Params
	{
	public:
		ESlateVisibility                                           InVisibility;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.OnBindAutoButtonToController
	 */
	struct UPage_Hud_AutoAction_C_OnBindAutoButtonToController_Params
	{	};

	/**
	 * Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.BndEvt__Page_Hud_AutoAction_HUD_AutoMenu_btn_K2Node_ComponentBoundEvent_2_AutoMenuBtnClick__DelegateSignature
	 */
	struct UPage_Hud_AutoAction_C_BndEvt__Page_Hud_AutoAction_HUD_AutoMenu_btn_K2Node_ComponentBoundEvent_2_AutoMenuBtnClick__DelegateSignature_Params
	{	};

	/**
	 * Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.BndEvt__Page_Hud_AutoAction_AutoMenu_Cancel_btn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UPage_Hud_AutoAction_C_BndEvt__Page_Hud_AutoAction_AutoMenu_Cancel_btn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.PreConstruct
	 */
	struct UPage_Hud_AutoAction_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.BndEvt__Page_Hud_AutoAction_SleepMode_btn_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UPage_Hud_AutoAction_C_BndEvt__Page_Hud_AutoAction_SleepMode_btn_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.ExecuteUbergraph_Page_Hud_AutoAction
	 */
	struct UPage_Hud_AutoAction_C_ExecuteUbergraph_Page_Hud_AutoAction_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
