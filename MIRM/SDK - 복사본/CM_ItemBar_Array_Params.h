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
	 * Function CM_ItemBar_Array.CM_ItemBar_Array_C.OverImgFunc
	 */
	struct UCM_ItemBar_Array_C_OverImgFunc_Params
	{
	public:
		bool                                                       isOver_;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_ItemBar_Array.CM_ItemBar_Array_C.ShowSelectedMark
	 */
	struct UCM_ItemBar_Array_C_ShowSelectedMark_Params
	{
	public:
		bool                                                       bIsShow;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_ItemBar_Array.CM_ItemBar_Array_C.SpacerW
	 */
	struct UCM_ItemBar_Array_C_SpacerW_Params
	{
	public:
		int32_t                                                    Input_Index;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<float>                                              Input_Wsize_Float;                                       // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CM_ItemBar_Array.CM_ItemBar_Array_C.PreConstruct
	 */
	struct UCM_ItemBar_Array_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_ItemBar_Array.CM_ItemBar_Array_C.BndEvt__ItmBarArray_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCM_ItemBar_Array_C_BndEvt__ItmBarArray_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CM_ItemBar_Array.CM_ItemBar_Array_C.OnMouseEnter
	 */
	struct UCM_ItemBar_Array_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CM_ItemBar_Array.CM_ItemBar_Array_C.OnMouseLeave
	 */
	struct UCM_ItemBar_Array_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CM_ItemBar_Array.CM_ItemBar_Array_C.ExecuteUbergraph_CM_ItemBar_Array
	 */
	struct UCM_ItemBar_Array_C_ExecuteUbergraph_CM_ItemBar_Array_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_ItemBar_Array.CM_ItemBar_Array_C.OnClicked__DelegateSignature
	 */
	struct UCM_ItemBar_Array_C_OnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
