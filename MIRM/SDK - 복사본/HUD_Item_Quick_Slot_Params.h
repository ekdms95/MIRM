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
	 * Function HUD_Item_Quick_Slot.HUD_Item_Quick_Slot_C.OnSwipe
	 */
	struct UHUD_Item_Quick_Slot_C_OnSwipe_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function HUD_Item_Quick_Slot.HUD_Item_Quick_Slot_C.OnMouseMove
	 */
	struct UHUD_Item_Quick_Slot_C_OnMouseMove_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function HUD_Item_Quick_Slot.HUD_Item_Quick_Slot_C.OnMouseButtonDown
	 */
	struct UHUD_Item_Quick_Slot_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function HUD_Item_Quick_Slot.HUD_Item_Quick_Slot_C.OnMouseButtonUp
	 */
	struct UHUD_Item_Quick_Slot_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function HUD_Item_Quick_Slot.HUD_Item_Quick_Slot_C.Auto_OnOff_Function
	 */
	struct UHUD_Item_Quick_Slot_C_Auto_OnOff_Function_Params
	{
	public:
		E_HudQuickSlotAutoType                                     Selection;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Item_Quick_Slot.HUD_Item_Quick_Slot_C.Item_Add_Remove_visi_Function
	 */
	struct UHUD_Item_Quick_Slot_C_Item_Add_Remove_visi_Function_Params
	{
	public:
		ESlateVisibility                                           Item_Add_visi;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESlateVisibility                                           Item_Remove_visi;                                        // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESlateVisibility                                           Item_UnEquip_Visi;                                       // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Item_Quick_Slot.HUD_Item_Quick_Slot_C.PreConstruct
	 */
	struct UHUD_Item_Quick_Slot_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Item_Quick_Slot.HUD_Item_Quick_Slot_C.OnPreSet
	 */
	struct UHUD_Item_Quick_Slot_C_OnPreSet_Params
	{	};

	/**
	 * Function HUD_Item_Quick_Slot.HUD_Item_Quick_Slot_C.OnSetEmptyItem
	 */
	struct UHUD_Item_Quick_Slot_C_OnSetEmptyItem_Params
	{	};

	/**
	 * Function HUD_Item_Quick_Slot.HUD_Item_Quick_Slot_C.OnQuickSlotStatType
	 */
	struct UHUD_Item_Quick_Slot_C_OnQuickSlotStatType_Params
	{
	public:
		bool                                                       IsSettingState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		E_HudQuickSlotStatType                                     slottype;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_HudQuickSlotAutoType                                     autotype;                                                // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Item_Quick_Slot.HUD_Item_Quick_Slot_C.BndEvt__Item_Use_btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UHUD_Item_Quick_Slot_C_BndEvt__Item_Use_btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function HUD_Item_Quick_Slot.HUD_Item_Quick_Slot_C.OnMouseLeave
	 */
	struct UHUD_Item_Quick_Slot_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function HUD_Item_Quick_Slot.HUD_Item_Quick_Slot_C.OnSetAutoItemUse
	 */
	struct UHUD_Item_Quick_Slot_C_OnSetAutoItemUse_Params
	{
	public:
		E_HudQuickSlotAutoType                                     Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Item_Quick_Slot.HUD_Item_Quick_Slot_C.Tick
	 */
	struct UHUD_Item_Quick_Slot_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Item_Quick_Slot.HUD_Item_Quick_Slot_C.ExecuteUbergraph_HUD_Item_Quick_Slot
	 */
	struct UHUD_Item_Quick_Slot_C_ExecuteUbergraph_HUD_Item_Quick_Slot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
