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
	 * Function CM_Toggle_Switch.CM_Toggle_Switch_C.Setup
	 */
	struct UCM_Toggle_Switch_C_Setup_Params
	{
	public:
		bool                                                       bCheck;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_Toggle_Switch.CM_Toggle_Switch_C.PreConstruct
	 */
	struct UCM_Toggle_Switch_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_Toggle_Switch.CM_Toggle_Switch_C.BndEvt__CM_Toggle_Switch_btn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCM_Toggle_Switch_C_BndEvt__CM_Toggle_Switch_btn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CM_Toggle_Switch.CM_Toggle_Switch_C.BndEvt__CM_Toggle_Switch_btn_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UCM_Toggle_Switch_C_BndEvt__CM_Toggle_Switch_btn_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CM_Toggle_Switch.CM_Toggle_Switch_C.BndEvt__CM_Toggle_Switch_btn_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 */
	struct UCM_Toggle_Switch_C_BndEvt__CM_Toggle_Switch_btn_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CM_Toggle_Switch.CM_Toggle_Switch_C.BndEvt__CM_Toggle_Switch_btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCM_Toggle_Switch_C_BndEvt__CM_Toggle_Switch_btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CM_Toggle_Switch.CM_Toggle_Switch_C.SetToggleSwitch
	 */
	struct UCM_Toggle_Switch_C_SetToggleSwitch_Params
	{
	public:
		bool                                                       IsCheck;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_Toggle_Switch.CM_Toggle_Switch_C.BndEvt__MirButton_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCM_Toggle_Switch_C_BndEvt__MirButton_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CM_Toggle_Switch.CM_Toggle_Switch_C.Construct
	 */
	struct UCM_Toggle_Switch_C_Construct_Params
	{	};

	/**
	 * Function CM_Toggle_Switch.CM_Toggle_Switch_C.ExecuteUbergraph_CM_Toggle_Switch
	 */
	struct UCM_Toggle_Switch_C_ExecuteUbergraph_CM_Toggle_Switch_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Toggle_Switch.CM_Toggle_Switch_C.NotClick__DelegateSignature
	 */
	struct UCM_Toggle_Switch_C_NotClick__DelegateSignature_Params
	{	};

	/**
	 * Function CM_Toggle_Switch.CM_Toggle_Switch_C.OnChangedToggle__DelegateSignature
	 */
	struct UCM_Toggle_Switch_C_OnChangedToggle__DelegateSignature_Params
	{
	public:
		bool                                                       IsOn;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_Toggle_Switch.CM_Toggle_Switch_C.OnClick__DelegateSignature
	 */
	struct UCM_Toggle_Switch_C_OnClick__DelegateSignature_Params
	{
	public:
		bool                                                       bIsCheck;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
