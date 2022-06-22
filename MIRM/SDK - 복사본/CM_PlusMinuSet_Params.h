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
	 * Function CM_PlusMinuSet.CM_PlusMinuSet_C.SetMoveBtnText
	 */
	struct UCM_PlusMinuSet_C_SetMoveBtnText_Params
	{
	public:
		int32_t                                                    Number;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_PlusMinuSet.CM_PlusMinuSet_C.SetButtonState
	 */
	struct UCM_PlusMinuSet_C_SetButtonState_Params
	{
	public:
		unsigned char                                              State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_PlusMinuSet.CM_PlusMinuSet_C.GetNumberText
	 */
	struct UCM_PlusMinuSet_C_GetNumberText_Params
	{
	public:
		class UMirTextBlock*                                       Text;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_PlusMinuSet.CM_PlusMinuSet_C.BndEvt__CM_Btn_Plus_K2Node_ComponentBoundEvent_2_ClickDispatcher__DelegateSignature
	 */
	struct UCM_PlusMinuSet_C_BndEvt__CM_Btn_Plus_K2Node_ComponentBoundEvent_2_ClickDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function CM_PlusMinuSet.CM_PlusMinuSet_C.BndEvt__NumPadOpen_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCM_PlusMinuSet_C_BndEvt__NumPadOpen_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CM_PlusMinuSet.CM_PlusMinuSet_C.BndEvt__CM_Btn_Minus_R_K2Node_ComponentBoundEvent_0_ClickDispatcher__DelegateSignature
	 */
	struct UCM_PlusMinuSet_C_BndEvt__CM_Btn_Minus_R_K2Node_ComponentBoundEvent_0_ClickDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function CM_PlusMinuSet.CM_PlusMinuSet_C.BndEvt__CM_Btn_Minus_K2Node_ComponentBoundEvent_5_PressedDispatcher__DelegateSignature
	 */
	struct UCM_PlusMinuSet_C_BndEvt__CM_Btn_Minus_K2Node_ComponentBoundEvent_5_PressedDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function CM_PlusMinuSet.CM_PlusMinuSet_C.BndEvt__CM_Btn_Plus_K2Node_ComponentBoundEvent_6_PressedDispatcher__DelegateSignature
	 */
	struct UCM_PlusMinuSet_C_BndEvt__CM_Btn_Plus_K2Node_ComponentBoundEvent_6_PressedDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function CM_PlusMinuSet.CM_PlusMinuSet_C.BndEvt__Max_btn_K2Node_ComponentBoundEvent_3_ClickDispatcher__DelegateSignature
	 */
	struct UCM_PlusMinuSet_C_BndEvt__Max_btn_K2Node_ComponentBoundEvent_3_ClickDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function CM_PlusMinuSet.CM_PlusMinuSet_C.BndEvt__Max_btn_K2Node_ComponentBoundEvent_4_PressedDispatcher__DelegateSignature
	 */
	struct UCM_PlusMinuSet_C_BndEvt__Max_btn_K2Node_ComponentBoundEvent_4_PressedDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function CM_PlusMinuSet.CM_PlusMinuSet_C.BndEvt__Min_btn_K2Node_ComponentBoundEvent_7_ClickDispatcher__DelegateSignature
	 */
	struct UCM_PlusMinuSet_C_BndEvt__Min_btn_K2Node_ComponentBoundEvent_7_ClickDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function CM_PlusMinuSet.CM_PlusMinuSet_C.BndEvt__Min_btn_K2Node_ComponentBoundEvent_8_PressedDispatcher__DelegateSignature
	 */
	struct UCM_PlusMinuSet_C_BndEvt__Min_btn_K2Node_ComponentBoundEvent_8_PressedDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function CM_PlusMinuSet.CM_PlusMinuSet_C.PreConstruct
	 */
	struct UCM_PlusMinuSet_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_PlusMinuSet.CM_PlusMinuSet_C.ExecuteUbergraph_CM_PlusMinuSet
	 */
	struct UCM_PlusMinuSet_C_ExecuteUbergraph_CM_PlusMinuSet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_PlusMinuSet.CM_PlusMinuSet_C.MaxBtn__DelegateSignature
	 */
	struct UCM_PlusMinuSet_C_MaxBtn__DelegateSignature_Params
	{	};

	/**
	 * Function CM_PlusMinuSet.CM_PlusMinuSet_C.MinBtn__DelegateSignature
	 */
	struct UCM_PlusMinuSet_C_MinBtn__DelegateSignature_Params
	{	};

	/**
	 * Function CM_PlusMinuSet.CM_PlusMinuSet_C.NumpadOpenBtn__DelegateSignature
	 */
	struct UCM_PlusMinuSet_C_NumpadOpenBtn__DelegateSignature_Params
	{	};

	/**
	 * Function CM_PlusMinuSet.CM_PlusMinuSet_C.PlusBtn__DelegateSignature
	 */
	struct UCM_PlusMinuSet_C_PlusBtn__DelegateSignature_Params
	{	};

	/**
	 * Function CM_PlusMinuSet.CM_PlusMinuSet_C.MinusBtn__DelegateSignature
	 */
	struct UCM_PlusMinuSet_C_MinusBtn__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
