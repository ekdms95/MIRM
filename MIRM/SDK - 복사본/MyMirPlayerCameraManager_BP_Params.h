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
	 * Function MyMirPlayerCameraManager_BP.MyMirPlayerCameraManager_BP_C.IsZoomState
	 */
	struct AMyMirPlayerCameraManager_BP_C_IsZoomState_Params
	{
	public:
		bool                                                       isZoom;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyMirPlayerCameraManager_BP.MyMirPlayerCameraManager_BP_C.InpActEvt_Tab_K2Node_InputKeyEvent_1
	 */
	struct AMyMirPlayerCameraManager_BP_C_InpActEvt_Tab_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FInputCore_FKey                                     Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function MyMirPlayerCameraManager_BP.MyMirPlayerCameraManager_BP_C.InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1
	 */
	struct AMyMirPlayerCameraManager_BP_C_InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyMirPlayerCameraManager_BP.MyMirPlayerCameraManager_BP_C.OnSetCharacterZoom
	 */
	struct AMyMirPlayerCameraManager_BP_C_OnSetCharacterZoom_Params
	{
	public:
		bool                                                       isZoom;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyMirPlayerCameraManager_BP.MyMirPlayerCameraManager_BP_C.ReceiveBeginPlay
	 */
	struct AMyMirPlayerCameraManager_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MyMirPlayerCameraManager_BP.MyMirPlayerCameraManager_BP_C.OnTestUIHideEvent
	 */
	struct AMyMirPlayerCameraManager_BP_C_OnTestUIHideEvent_Params
	{	};

	/**
	 * Function MyMirPlayerCameraManager_BP.MyMirPlayerCameraManager_BP_C.OnSetEditCameraRotation
	 */
	struct AMyMirPlayerCameraManager_BP_C_OnSetEditCameraRotation_Params
	{
	public:
		bool                                                       isZoom;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyMirPlayerCameraManager_BP.MyMirPlayerCameraManager_BP_C.ExecuteUbergraph_MyMirPlayerCameraManager_BP
	 */
	struct AMyMirPlayerCameraManager_BP_C_ExecuteUbergraph_MyMirPlayerCameraManager_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyMirPlayerCameraManager_BP.MyMirPlayerCameraManager_BP_C.TestUIHideDispather__DelegateSignature
	 */
	struct AMyMirPlayerCameraManager_BP_C_TestUIHideDispather__DelegateSignature_Params
	{
	public:
		bool                                                       IsHide;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyMirPlayerCameraManager_BP.MyMirPlayerCameraManager_BP_C.CharacterZoomDispatcher__DelegateSignature
	 */
	struct AMyMirPlayerCameraManager_BP_C_CharacterZoomDispatcher__DelegateSignature_Params
	{
	public:
		bool                                                       isZoom;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
