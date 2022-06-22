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
	 * Function CM_Btn_Plus_R.CM_Btn_Plus_R_C.SetNumberText
	 */
	struct UCM_Btn_Plus_R_C_SetNumberText_Params
	{
	public:
		int32_t                                                    NewParam;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Btn_Plus_R.CM_Btn_Plus_R_C.BtnImgStatus
	 */
	struct UCM_Btn_Plus_R_C_BtnImgStatus_Params
	{
	public:
		class FName                                                ImgStatus;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Btn_Plus_R.CM_Btn_Plus_R_C.GetButton
	 */
	struct UCM_Btn_Plus_R_C_GetButton_Params
	{
	public:
		class UMirButton*                                          Button;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Btn_Plus_R.CM_Btn_Plus_R_C.PreConstruct
	 */
	struct UCM_Btn_Plus_R_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_Btn_Plus_R.CM_Btn_Plus_R_C.BndEvt__MirButton_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCM_Btn_Plus_R_C_BndEvt__MirButton_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CM_Btn_Plus_R.CM_Btn_Plus_R_C.BndEvt__MirButton_0_K2Node_ComponentBoundEvent_29_OnButtonPressedEvent__DelegateSignature
	 */
	struct UCM_Btn_Plus_R_C_BndEvt__MirButton_0_K2Node_ComponentBoundEvent_29_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CM_Btn_Plus_R.CM_Btn_Plus_R_C.BndEvt__MirButton_0_K2Node_ComponentBoundEvent_56_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UCM_Btn_Plus_R_C_BndEvt__MirButton_0_K2Node_ComponentBoundEvent_56_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CM_Btn_Plus_R.CM_Btn_Plus_R_C.BndEvt__MirButton_0_K2Node_ComponentBoundEvent_63_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCM_Btn_Plus_R_C_BndEvt__MirButton_0_K2Node_ComponentBoundEvent_63_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CM_Btn_Plus_R.CM_Btn_Plus_R_C.Construct
	 */
	struct UCM_Btn_Plus_R_C_Construct_Params
	{	};

	/**
	 * Function CM_Btn_Plus_R.CM_Btn_Plus_R_C.Tick
	 */
	struct UCM_Btn_Plus_R_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Btn_Plus_R.CM_Btn_Plus_R_C.OnChangeEnableState
	 */
	struct UCM_Btn_Plus_R_C_OnChangeEnableState_Params
	{
	public:
		bool                                                       IsDisabled;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_Btn_Plus_R.CM_Btn_Plus_R_C.ExecuteUbergraph_CM_Btn_Plus_R
	 */
	struct UCM_Btn_Plus_R_C_ExecuteUbergraph_CM_Btn_Plus_R_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Btn_Plus_R.CM_Btn_Plus_R_C.PressedDispatcher__DelegateSignature
	 */
	struct UCM_Btn_Plus_R_C_PressedDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function CM_Btn_Plus_R.CM_Btn_Plus_R_C.ClickDispatcher__DelegateSignature
	 */
	struct UCM_Btn_Plus_R_C_ClickDispatcher__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
