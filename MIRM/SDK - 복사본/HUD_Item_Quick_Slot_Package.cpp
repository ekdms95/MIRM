/**
 * Name: MIRM
 * Version: 0623
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
	 * 		Name   -> Function HUD_Item_Quick_Slot.HUD_Item_Quick_Slot_C.OnSwipe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UHUD_Item_Quick_Slot_C::OnSwipe(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Item_Quick_Slot.HUD_Item_Quick_Slot_C.OnSwipe");
		
		UHUD_Item_Quick_Slot_C_OnSwipe_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Item_Quick_Slot.HUD_Item_Quick_Slot_C.OnMouseMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UHUD_Item_Quick_Slot_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Item_Quick_Slot.HUD_Item_Quick_Slot_C.OnMouseMove");
		
		UHUD_Item_Quick_Slot_C_OnMouseMove_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Item_Quick_Slot.HUD_Item_Quick_Slot_C.OnMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UHUD_Item_Quick_Slot_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Item_Quick_Slot.HUD_Item_Quick_Slot_C.OnMouseButtonDown");
		
		UHUD_Item_Quick_Slot_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Item_Quick_Slot.HUD_Item_Quick_Slot_C.OnMouseButtonUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UHUD_Item_Quick_Slot_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Item_Quick_Slot.HUD_Item_Quick_Slot_C.OnMouseButtonUp");
		
		UHUD_Item_Quick_Slot_C_OnMouseButtonUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Item_Quick_Slot.HUD_Item_Quick_Slot_C.Auto_OnOff_Function
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_HudQuickSlotAutoType                             Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Item_Quick_Slot_C::Auto_OnOff_Function(E_HudQuickSlotAutoType Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Item_Quick_Slot.HUD_Item_Quick_Slot_C.Auto_OnOff_Function");
		
		UHUD_Item_Quick_Slot_C_Auto_OnOff_Function_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Item_Quick_Slot.HUD_Item_Quick_Slot_C.Item_Add_Remove_visi_Function
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   Item_Add_visi                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESlateVisibility                                   Item_Remove_visi                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESlateVisibility                                   Item_UnEquip_Visi                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Item_Quick_Slot_C::Item_Add_Remove_visi_Function(ESlateVisibility Item_Add_visi, ESlateVisibility Item_Remove_visi, ESlateVisibility Item_UnEquip_Visi)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Item_Quick_Slot.HUD_Item_Quick_Slot_C.Item_Add_Remove_visi_Function");
		
		UHUD_Item_Quick_Slot_C_Item_Add_Remove_visi_Function_Params params {};
		params.Item_Add_visi = Item_Add_visi;
		params.Item_Remove_visi = Item_Remove_visi;
		params.Item_UnEquip_Visi = Item_UnEquip_Visi;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Item_Quick_Slot.HUD_Item_Quick_Slot_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Item_Quick_Slot_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Item_Quick_Slot.HUD_Item_Quick_Slot_C.PreConstruct");
		
		UHUD_Item_Quick_Slot_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Item_Quick_Slot.HUD_Item_Quick_Slot_C.OnPreSet
	 * 		Flags  -> ()
	 */
	void UHUD_Item_Quick_Slot_C::OnPreSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Item_Quick_Slot.HUD_Item_Quick_Slot_C.OnPreSet");
		
		UHUD_Item_Quick_Slot_C_OnPreSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Item_Quick_Slot.HUD_Item_Quick_Slot_C.OnSetEmptyItem
	 * 		Flags  -> ()
	 */
	void UHUD_Item_Quick_Slot_C::OnSetEmptyItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Item_Quick_Slot.HUD_Item_Quick_Slot_C.OnSetEmptyItem");
		
		UHUD_Item_Quick_Slot_C_OnSetEmptyItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Item_Quick_Slot.HUD_Item_Quick_Slot_C.OnQuickSlotStatType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSettingState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		E_HudQuickSlotStatType                             slottype                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_HudQuickSlotAutoType                             autotype                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Item_Quick_Slot_C::OnQuickSlotStatType(bool IsSettingState, E_HudQuickSlotStatType slottype, E_HudQuickSlotAutoType autotype)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Item_Quick_Slot.HUD_Item_Quick_Slot_C.OnQuickSlotStatType");
		
		UHUD_Item_Quick_Slot_C_OnQuickSlotStatType_Params params {};
		params.IsSettingState = IsSettingState;
		params.slottype = slottype;
		params.autotype = autotype;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Item_Quick_Slot.HUD_Item_Quick_Slot_C.BndEvt__Item_Use_btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_Item_Quick_Slot_C::BndEvt__Item_Use_btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Item_Quick_Slot.HUD_Item_Quick_Slot_C.BndEvt__Item_Use_btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UHUD_Item_Quick_Slot_C_BndEvt__Item_Use_btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Item_Quick_Slot.HUD_Item_Quick_Slot_C.OnMouseLeave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UHUD_Item_Quick_Slot_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Item_Quick_Slot.HUD_Item_Quick_Slot_C.OnMouseLeave");
		
		UHUD_Item_Quick_Slot_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Item_Quick_Slot.HUD_Item_Quick_Slot_C.OnSetAutoItemUse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_HudQuickSlotAutoType                             Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Item_Quick_Slot_C::OnSetAutoItemUse(E_HudQuickSlotAutoType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Item_Quick_Slot.HUD_Item_Quick_Slot_C.OnSetAutoItemUse");
		
		UHUD_Item_Quick_Slot_C_OnSetAutoItemUse_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Item_Quick_Slot.HUD_Item_Quick_Slot_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Item_Quick_Slot_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Item_Quick_Slot.HUD_Item_Quick_Slot_C.Tick");
		
		UHUD_Item_Quick_Slot_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Item_Quick_Slot.HUD_Item_Quick_Slot_C.ExecuteUbergraph_HUD_Item_Quick_Slot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Item_Quick_Slot_C::ExecuteUbergraph_HUD_Item_Quick_Slot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Item_Quick_Slot.HUD_Item_Quick_Slot_C.ExecuteUbergraph_HUD_Item_Quick_Slot");
		
		UHUD_Item_Quick_Slot_C_ExecuteUbergraph_HUD_Item_Quick_Slot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHUD_Item_Quick_Slot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Item_Quick_Slot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Item_Quick_Slot.HUD_Item_Quick_Slot_C");
		return ptr;
	}

}


