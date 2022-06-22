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
	 * Function CM_Item_ListBar_Nslot.CM_Item_ListBar_Nslot_C.SetDisableImage
	 */
	struct UCM_Item_ListBar_Nslot_C_SetDisableImage_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_Item_ListBar_Nslot.CM_Item_ListBar_Nslot_C.OverImgFunction
	 */
	struct UCM_Item_ListBar_Nslot_C_OverImgFunction_Params
	{
	public:
		bool                                                       isOver_;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_Item_ListBar_Nslot.CM_Item_ListBar_Nslot_C.SetEnable_EquipImage
	 */
	struct UCM_Item_ListBar_Nslot_C_SetEnable_EquipImage_Params
	{
	public:
		bool                                                       isEquip;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_Item_ListBar_Nslot.CM_Item_ListBar_Nslot_C.SetEnable_SelectImage
	 */
	struct UCM_Item_ListBar_Nslot_C_SetEnable_SelectImage_Params
	{
	public:
		bool                                                       IsEnable;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_Item_ListBar_Nslot.CM_Item_ListBar_Nslot_C.Set_visi_Padd
	 */
	struct UCM_Item_ListBar_Nslot_C_Set_visi_Padd_Params
	{
	public:
		class UNamedSlot*                                          SlotNumber;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESlateVisibility                                           visible;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      BottomMargin;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Item_ListBar_Nslot.CM_Item_ListBar_Nslot_C.Front_Rear
	 */
	struct UCM_Item_ListBar_Nslot_C_Front_Rear_Params
	{
	public:
		int32_t                                                    Front;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Rear;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Item_ListBar_Nslot.CM_Item_ListBar_Nslot_C.BndEvt__ListBar_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCM_Item_ListBar_Nslot_C_BndEvt__ListBar_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CM_Item_ListBar_Nslot.CM_Item_ListBar_Nslot_C.OnMouseEnter
	 */
	struct UCM_Item_ListBar_Nslot_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CM_Item_ListBar_Nslot.CM_Item_ListBar_Nslot_C.OnMouseLeave
	 */
	struct UCM_Item_ListBar_Nslot_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CM_Item_ListBar_Nslot.CM_Item_ListBar_Nslot_C.BndEvt__CM_Item_ListBar_Nslot_ListBar_btn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UCM_Item_ListBar_Nslot_C_BndEvt__CM_Item_ListBar_Nslot_ListBar_btn_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CM_Item_ListBar_Nslot.CM_Item_ListBar_Nslot_C.PreConstruct
	 */
	struct UCM_Item_ListBar_Nslot_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_Item_ListBar_Nslot.CM_Item_ListBar_Nslot_C.ExecuteUbergraph_CM_Item_ListBar_Nslot
	 */
	struct UCM_Item_ListBar_Nslot_C_ExecuteUbergraph_CM_Item_ListBar_Nslot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Item_ListBar_Nslot.CM_Item_ListBar_Nslot_C.OnClickDispatcher__DelegateSignature
	 */
	struct UCM_Item_ListBar_Nslot_C_OnClickDispatcher__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
