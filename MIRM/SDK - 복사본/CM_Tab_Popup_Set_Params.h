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
	 * Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.SetCloseButton
	 */
	struct UCM_Tab_Popup_Set_C_SetCloseButton_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.DisableButton
	 */
	struct UCM_Tab_Popup_Set_C_DisableButton_Params
	{	};

	/**
	 * Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.Tab_Visibility
	 */
	struct UCM_Tab_Popup_Set_C_Tab_Visibility_Params
	{
	public:
		int32_t                                                    Tab_Count;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.SetTabArray
	 */
	struct UCM_Tab_Popup_Set_C_SetTabArray_Params
	{
	public:
		TArray<class UWidget*>                                     NewParam;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.SetSelectTab
	 */
	struct UCM_Tab_Popup_Set_C_SetSelectTab_Params
	{
	public:
		class UWidget*                                             NewParam;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.SetTitleText
	 */
	struct UCM_Tab_Popup_Set_C_SetTitleText_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.SetCancleButtonText
	 */
	struct UCM_Tab_Popup_Set_C_SetCancleButtonText_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.SetConfirmButtonText
	 */
	struct UCM_Tab_Popup_Set_C_SetConfirmButtonText_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.PopOutAnimation
	 */
	struct UCM_Tab_Popup_Set_C_PopOutAnimation_Params
	{	};

	/**
	 * Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.PopInAnimation
	 */
	struct UCM_Tab_Popup_Set_C_PopInAnimation_Params
	{	};

	/**
	 * Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.BndEvt__PopClose_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCM_Tab_Popup_Set_C_BndEvt__PopClose_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.BndEvt__PopNo_btn_K2Node_ComponentBoundEvent_0_ClickDispatcher__DelegateSignature
	 */
	struct UCM_Tab_Popup_Set_C_BndEvt__PopNo_btn_K2Node_ComponentBoundEvent_0_ClickDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.BndEvt__PopYes_btn_K2Node_ComponentBoundEvent_1_ClickDispatcher__DelegateSignature
	 */
	struct UCM_Tab_Popup_Set_C_BndEvt__PopYes_btn_K2Node_ComponentBoundEvent_1_ClickDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.BndEvt__Close_btn_K2Node_ComponentBoundEvent_2_Click__DelegateSignature
	 */
	struct UCM_Tab_Popup_Set_C_BndEvt__Close_btn_K2Node_ComponentBoundEvent_2_Click__DelegateSignature_Params
	{	};

	/**
	 * Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.PreConstruct
	 */
	struct UCM_Tab_Popup_Set_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.ExecuteUbergraph_CM_Tab_Popup_Set
	 */
	struct UCM_Tab_Popup_Set_C_ExecuteUbergraph_CM_Tab_Popup_Set_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.PopNoBtn__DelegateSignature
	 */
	struct UCM_Tab_Popup_Set_C_PopNoBtn__DelegateSignature_Params
	{	};

	/**
	 * Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.PopYesBtn__DelegateSignature
	 */
	struct UCM_Tab_Popup_Set_C_PopYesBtn__DelegateSignature_Params
	{	};

	/**
	 * Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.PopClose__DelegateSignature
	 */
	struct UCM_Tab_Popup_Set_C_PopClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
