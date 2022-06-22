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
	 * Function CM_PopupBgSet.CM_PopupBgSet_C.SetHighlightCflagToDungeonMoveBtn
	 */
	struct UCM_PopupBgSet_C_SetHighlightCflagToDungeonMoveBtn_Params
	{
	public:
		ECFlag                                                     CFlag;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_PopupBgSet.CM_PopupBgSet_C.SetTitleText
	 */
	struct UCM_PopupBgSet_C_SetTitleText_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_PopupBgSet.CM_PopupBgSet_C.Basic_Pop_Set_Function
	 */
	struct UCM_PopupBgSet_C_Basic_Pop_Set_Function_Params
	{
	public:
		float                                                      W_size;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      H_size;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Title_String;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_PopupBgSet.CM_PopupBgSet_C.Black Bg Opacity Function
	 */
	struct UCM_PopupBgSet_C_Black_Bg_Opacity_Function_Params
	{	};

	/**
	 * Function CM_PopupBgSet.CM_PopupBgSet_C.No_List_ToolTip_Function
	 */
	struct UCM_PopupBgSet_C_No_List_ToolTip_Function_Params
	{
	public:
		int32_t                                                    No_Item_Tip_String;                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       No_Item_Tip_On;                                          // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_PopupBgSet.CM_PopupBgSet_C.SetCancleButtonText
	 */
	struct UCM_PopupBgSet_C_SetCancleButtonText_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_PopupBgSet.CM_PopupBgSet_C.SetConfirmButtonText
	 */
	struct UCM_PopupBgSet_C_SetConfirmButtonText_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_PopupBgSet.CM_PopupBgSet_C.PopOutAnimation
	 */
	struct UCM_PopupBgSet_C_PopOutAnimation_Params
	{	};

	/**
	 * Function CM_PopupBgSet.CM_PopupBgSet_C.PopInAnimation
	 */
	struct UCM_PopupBgSet_C_PopInAnimation_Params
	{	};

	/**
	 * Function CM_PopupBgSet.CM_PopupBgSet_C.BndEvt__PopNo_btn_K2Node_ComponentBoundEvent_0_ClickDispatcher__DelegateSignature
	 */
	struct UCM_PopupBgSet_C_BndEvt__PopNo_btn_K2Node_ComponentBoundEvent_0_ClickDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function CM_PopupBgSet.CM_PopupBgSet_C.BndEvt__PopYes_btn_K2Node_ComponentBoundEvent_1_ClickDispatcher__DelegateSignature
	 */
	struct UCM_PopupBgSet_C_BndEvt__PopYes_btn_K2Node_ComponentBoundEvent_1_ClickDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function CM_PopupBgSet.CM_PopupBgSet_C.BndEvt__Close_btn_K2Node_ComponentBoundEvent_2_Click__DelegateSignature
	 */
	struct UCM_PopupBgSet_C_BndEvt__Close_btn_K2Node_ComponentBoundEvent_2_Click__DelegateSignature_Params
	{	};

	/**
	 * Function CM_PopupBgSet.CM_PopupBgSet_C.OnSetPopupButton
	 */
	struct UCM_PopupBgSet_C_OnSetPopupButton_Params
	{
	public:
		E_PopupButtonType                                          PopupButtonType;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_PopupBgSet.CM_PopupBgSet_C.BndEvt__PopClose_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCM_PopupBgSet_C_BndEvt__PopClose_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CM_PopupBgSet.CM_PopupBgSet_C.PreConstruct
	 */
	struct UCM_PopupBgSet_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_PopupBgSet.CM_PopupBgSet_C.ExecuteUbergraph_CM_PopupBgSet
	 */
	struct UCM_PopupBgSet_C_ExecuteUbergraph_CM_PopupBgSet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_PopupBgSet.CM_PopupBgSet_C.PopNoBtn__DelegateSignature
	 */
	struct UCM_PopupBgSet_C_PopNoBtn__DelegateSignature_Params
	{	};

	/**
	 * Function CM_PopupBgSet.CM_PopupBgSet_C.PopYesBtn__DelegateSignature
	 */
	struct UCM_PopupBgSet_C_PopYesBtn__DelegateSignature_Params
	{	};

	/**
	 * Function CM_PopupBgSet.CM_PopupBgSet_C.PopClose__DelegateSignature
	 */
	struct UCM_PopupBgSet_C_PopClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
