/**
 * Name: MIRM
 * Version: 0623-2
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_LIST_Item.HUD_List_Item_C.OnDurabilityValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              durability                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_List_Item_C::OnDurabilityValue(float durability)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_LIST_Item.HUD_List_Item_C.OnDurabilityValue");
		
		UHUD_List_Item_C_OnDurabilityValue_Params params {};
		params.durability = durability;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_LIST_Item.HUD_List_Item_C.OnInventoryStatValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_InventoryStatAbility                             InventoryStatAbility                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_List_Item_C::OnInventoryStatValue(E_InventoryStatAbility InventoryStatAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_LIST_Item.HUD_List_Item_C.OnInventoryStatValue");
		
		UHUD_List_Item_C_OnInventoryStatValue_Params params {};
		params.InventoryStatAbility = InventoryStatAbility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_LIST_Item.HUD_List_Item_C.OnSetIconEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_ITEM_MAINTYPE                                    ItemType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_GRADE                                            grade                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_List_Item_C::OnSetIconEvent(int32_t ItemIndex, E_ITEM_MAINTYPE ItemType, E_GRADE grade, int32_t count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_LIST_Item.HUD_List_Item_C.OnSetIconEvent");
		
		UHUD_List_Item_C_OnSetIconEvent_Params params {};
		params.ItemIndex = ItemIndex;
		params.ItemType = ItemType;
		params.grade = grade;
		params.count = count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_LIST_Item.HUD_List_Item_C.BndEvt__HUD_Lis_Item_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_List_Item_C::BndEvt__HUD_Lis_Item_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_LIST_Item.HUD_List_Item_C.BndEvt__HUD_Lis_Item_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UHUD_List_Item_C_BndEvt__HUD_Lis_Item_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_LIST_Item.HUD_List_Item_C.OnSelectedItemType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_ITEM_MAINTYPE                                    Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_List_Item_C::OnSelectedItemType(E_ITEM_MAINTYPE Type, int32_t ItemType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_LIST_Item.HUD_List_Item_C.OnSelectedItemType");
		
		UHUD_List_Item_C_OnSelectedItemType_Params params {};
		params.Type = Type;
		params.ItemType = ItemType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_LIST_Item.HUD_List_Item_C.OnPreSet
	 * 		Flags  -> ()
	 */
	void UHUD_List_Item_C::OnPreSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_LIST_Item.HUD_List_Item_C.OnPreSet");
		
		UHUD_List_Item_C_OnPreSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_LIST_Item.HUD_List_Item_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_List_Item_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_LIST_Item.HUD_List_Item_C.Tick");
		
		UHUD_List_Item_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_LIST_Item.HUD_List_Item_C.ExecuteUbergraph_HUD_List_Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_List_Item_C::ExecuteUbergraph_HUD_List_Item(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_LIST_Item.HUD_List_Item_C.ExecuteUbergraph_HUD_List_Item");
		
		UHUD_List_Item_C_ExecuteUbergraph_HUD_List_Item_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHUD_List_Item_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_List_Item_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_LIST_Item.HUD_List_Item_C");
		return ptr;
	}

}


