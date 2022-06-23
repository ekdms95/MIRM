#pragma once

/**
 * Name: MIRM
 * Version: 0623-2
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
	 * Function HUD_LIST_Item.HUD_List_Item_C.OnDurabilityValue
	 */
	struct UHUD_List_Item_C_OnDurabilityValue_Params
	{
	public:
		float                                                      durability;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_LIST_Item.HUD_List_Item_C.OnInventoryStatValue
	 */
	struct UHUD_List_Item_C_OnInventoryStatValue_Params
	{
	public:
		E_InventoryStatAbility                                     InventoryStatAbility;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_LIST_Item.HUD_List_Item_C.OnSetIconEvent
	 */
	struct UHUD_List_Item_C_OnSetIconEvent_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_ITEM_MAINTYPE                                            ItemType;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_GRADE                                                    grade;                                                   // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    count;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_LIST_Item.HUD_List_Item_C.BndEvt__HUD_Lis_Item_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UHUD_List_Item_C_BndEvt__HUD_Lis_Item_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function HUD_LIST_Item.HUD_List_Item_C.OnSelectedItemType
	 */
	struct UHUD_List_Item_C_OnSelectedItemType_Params
	{
	public:
		E_ITEM_MAINTYPE                                            Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ItemType;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_LIST_Item.HUD_List_Item_C.OnPreSet
	 */
	struct UHUD_List_Item_C_OnPreSet_Params
	{	};

	/**
	 * Function HUD_LIST_Item.HUD_List_Item_C.Tick
	 */
	struct UHUD_List_Item_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_LIST_Item.HUD_List_Item_C.ExecuteUbergraph_HUD_List_Item
	 */
	struct UHUD_List_Item_C_ExecuteUbergraph_HUD_List_Item_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
