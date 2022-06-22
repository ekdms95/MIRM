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
	 * Function Hud_ScanBox.Hud_ScanBox_C.Construct
	 */
	struct UHud_ScanBox_C_Construct_Params
	{	};

	/**
	 * Function Hud_ScanBox.Hud_ScanBox_C.OnClickCloseBtn
	 */
	struct UHud_ScanBox_C_OnClickCloseBtn_Params
	{	};

	/**
	 * Function Hud_ScanBox.Hud_ScanBox_C.OnInitailizeWidget
	 */
	struct UHud_ScanBox_C_OnInitailizeWidget_Params
	{
	public:
		class FString                                              Parameters;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_ScanBox.Hud_ScanBox_C.BndEvt__Hud_ScanBox_AutoToggle_Switch_K2Node_ComponentBoundEvent_1_OnChangedToggle__DelegateSignature
	 */
	struct UHud_ScanBox_C_BndEvt__Hud_ScanBox_AutoToggle_Switch_K2Node_ComponentBoundEvent_1_OnChangedToggle__DelegateSignature_Params
	{
	public:
		bool                                                       IsOn;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hud_ScanBox.Hud_ScanBox_C.BndEvt__Hud_ScanBox_Option_btn_K2Node_ComponentBoundEvent_0_Option_ClicK_Dispatch__DelegateSignature
	 */
	struct UHud_ScanBox_C_BndEvt__Hud_ScanBox_Option_btn_K2Node_ComponentBoundEvent_0_Option_ClicK_Dispatch__DelegateSignature_Params
	{	};

	/**
	 * Function Hud_ScanBox.Hud_ScanBox_C.BndEvt__Hud_ScanBox_Trash_btn_K2Node_ComponentBoundEvent_2_OnChangeState__DelegateSignature
	 */
	struct UHud_ScanBox_C_BndEvt__Hud_ScanBox_Trash_btn_K2Node_ComponentBoundEvent_2_OnChangeState__DelegateSignature_Params
	{
	public:
		bool                                                       IsOn;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hud_ScanBox.Hud_ScanBox_C.ExecuteUbergraph_Hud_ScanBox
	 */
	struct UHud_ScanBox_C_ExecuteUbergraph_Hud_ScanBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_ScanBox.Hud_ScanBox_C.OnClickCloseBtnDisp__DelegateSignature
	 */
	struct UHud_ScanBox_C_OnClickCloseBtnDisp__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
