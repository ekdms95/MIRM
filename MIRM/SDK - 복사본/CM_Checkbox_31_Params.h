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
	 * Function CM_Checkbox_31.CM_Checkbox_30_C.Chec K State Img
	 */
	struct UCM_Checkbox_30_C_Chec_K_State_Img_Params
	{	};

	/**
	 * Function CM_Checkbox_31.CM_Checkbox_30_C.SetTextID
	 */
	struct UCM_Checkbox_30_C_SetTextID_Params
	{
	public:
		int32_t                                                    textID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Checkbox_31.CM_Checkbox_30_C.GetMirCheckBox
	 */
	struct UCM_Checkbox_30_C_GetMirCheckBox_Params
	{
	public:
		class UMirCheckBox*                                        Param;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Checkbox_31.CM_Checkbox_30_C.PreConstruct
	 */
	struct UCM_Checkbox_30_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_Checkbox_31.CM_Checkbox_30_C.Construct
	 */
	struct UCM_Checkbox_30_C_Construct_Params
	{	};

	/**
	 * Function CM_Checkbox_31.CM_Checkbox_30_C.BndEvt__MirCheckBox_0_K2Node_ComponentBoundEvent_0_OnMirCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UCM_Checkbox_30_C_BndEvt__MirCheckBox_0_K2Node_ComponentBoundEvent_0_OnMirCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_Checkbox_31.CM_Checkbox_30_C.OnChangeCflag
	 */
	struct UCM_Checkbox_30_C_OnChangeCflag_Params
	{
	public:
		struct FCFlagValues                                        CFlagValues;                                             // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CM_Checkbox_31.CM_Checkbox_30_C.OnInitailizeWidget
	 */
	struct UCM_Checkbox_30_C_OnInitailizeWidget_Params
	{
	public:
		class FString                                              Parameters;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Checkbox_31.CM_Checkbox_30_C.OnMouseEnter
	 */
	struct UCM_Checkbox_30_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CM_Checkbox_31.CM_Checkbox_30_C.OnMouseLeave
	 */
	struct UCM_Checkbox_30_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CM_Checkbox_31.CM_Checkbox_30_C.RefreshCheckStateImage
	 */
	struct UCM_Checkbox_30_C_RefreshCheckStateImage_Params
	{	};

	/**
	 * Function CM_Checkbox_31.CM_Checkbox_30_C.ExecuteUbergraph_CM_Checkbox_31
	 */
	struct UCM_Checkbox_30_C_ExecuteUbergraph_CM_Checkbox_31_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Checkbox_31.CM_Checkbox_30_C.OnCheckChange__DelegateSignature
	 */
	struct UCM_Checkbox_30_C_OnCheckChange__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
