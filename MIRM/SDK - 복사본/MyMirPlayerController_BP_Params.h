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
	 * Function MyMirPlayerController_BP.MyMirPlayerController_BP_C.SetPlayerAttackState
	 */
	struct AMyMirPlayerController_BP_C_SetPlayerAttackState_Params
	{
	public:
		bool                                                       isattack;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyMirPlayerController_BP.MyMirPlayerController_BP_C.InpActEvt_Android_Back_K2Node_InputKeyEvent_2
	 */
	struct AMyMirPlayerController_BP_C_InpActEvt_Android_Back_K2Node_InputKeyEvent_2_Params
	{
	public:
		struct FInputCore_FKey                                     Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MyMirPlayerController_BP.MyMirPlayerController_BP_C.InpActEvt_Touch1_K2Node_InputActionEvent_1
	 */
	struct AMyMirPlayerController_BP_C_InpActEvt_Touch1_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FInputCore_FKey                                     Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MyMirPlayerController_BP.MyMirPlayerController_BP_C.InpActEvt_BackSpace_K2Node_InputKeyEvent_1
	 */
	struct AMyMirPlayerController_BP_C_InpActEvt_BackSpace_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FInputCore_FKey                                     Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MyMirPlayerController_BP.MyMirPlayerController_BP_C.OnTouchMove
	 */
	struct AMyMirPlayerController_BP_C_OnTouchMove_Params
	{
	public:
		bool                                                       ControlTouchMove;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyMirPlayerController_BP.MyMirPlayerController_BP_C.OnGamePadMove
	 */
	struct AMyMirPlayerController_BP_C_OnGamePadMove_Params
	{
	public:
		bool                                                       ControlTouchMove;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyMirPlayerController_BP.MyMirPlayerController_BP_C.InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_1
	 */
	struct AMyMirPlayerController_BP_C_InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_1_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyMirPlayerController_BP.MyMirPlayerController_BP_C.InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_2
	 */
	struct AMyMirPlayerController_BP_C_InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_2_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyMirPlayerController_BP.MyMirPlayerController_BP_C.OnSetAutoProcessToUI
	 */
	struct AMyMirPlayerController_BP_C_OnSetAutoProcessToUI_Params
	{
	public:
		struct FAutoPlayProcessUnit                                AutoPlayProcessUnit;                                     // 0x0000(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MyMirPlayerController_BP.MyMirPlayerController_BP_C.BeginPlayEnd
	 */
	struct AMyMirPlayerController_BP_C_BeginPlayEnd_Params
	{	};

	/**
	 * Function MyMirPlayerController_BP.MyMirPlayerController_BP_C.ReceiveBeginPlay
	 */
	struct AMyMirPlayerController_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MyMirPlayerController_BP.MyMirPlayerController_BP_C.ReceiveTick
	 */
	struct AMyMirPlayerController_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyMirPlayerController_BP.MyMirPlayerController_BP_C.InpAxisEvt_PinchZoom_K2Node_InputAxisEvent_1
	 */
	struct AMyMirPlayerController_BP_C_InpAxisEvt_PinchZoom_K2Node_InputAxisEvent_1_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyMirPlayerController_BP.MyMirPlayerController_BP_C.ExecuteUbergraph_MyMirPlayerController_BP
	 */
	struct AMyMirPlayerController_BP_C_ExecuteUbergraph_MyMirPlayerController_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyMirPlayerController_BP.MyMirPlayerController_BP_C.BindOnSetAutoProcess__DelegateSignature
	 */
	struct AMyMirPlayerController_BP_C_BindOnSetAutoProcess__DelegateSignature_Params
	{
	public:
		struct FAutoPlayProcessUnit                                AutoPlayProcessUnit;                                     // 0x0000(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
