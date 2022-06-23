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
	 * 		Name   -> Function HUD_IV_Sorting.HUD_IV_Sorting_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_IV_Sorting_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_IV_Sorting.HUD_IV_Sorting_C.PreConstruct");
		
		UHUD_IV_Sorting_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_IV_Sorting.HUD_IV_Sorting_C.BndEvt__Ascending_Tabbtn_K2Node_ComponentBoundEvent_0_OnTabStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_IV_Sorting_C::BndEvt__Ascending_Tabbtn_K2Node_ComponentBoundEvent_0_OnTabStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_IV_Sorting.HUD_IV_Sorting_C.BndEvt__Ascending_Tabbtn_K2Node_ComponentBoundEvent_0_OnTabStateChanged__DelegateSignature");
		
		UHUD_IV_Sorting_C_BndEvt__Ascending_Tabbtn_K2Node_ComponentBoundEvent_0_OnTabStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_IV_Sorting.HUD_IV_Sorting_C.BndEvt__Descending_Tabbtn_K2Node_ComponentBoundEvent_3_OnTabStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_IV_Sorting_C::BndEvt__Descending_Tabbtn_K2Node_ComponentBoundEvent_3_OnTabStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_IV_Sorting.HUD_IV_Sorting_C.BndEvt__Descending_Tabbtn_K2Node_ComponentBoundEvent_3_OnTabStateChanged__DelegateSignature");
		
		UHUD_IV_Sorting_C_BndEvt__Descending_Tabbtn_K2Node_ComponentBoundEvent_3_OnTabStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_IV_Sorting.HUD_IV_Sorting_C.BndEvt__Level_Tabbtn_K2Node_ComponentBoundEvent_6_OnTabStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_IV_Sorting_C::BndEvt__Level_Tabbtn_K2Node_ComponentBoundEvent_6_OnTabStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_IV_Sorting.HUD_IV_Sorting_C.BndEvt__Level_Tabbtn_K2Node_ComponentBoundEvent_6_OnTabStateChanged__DelegateSignature");
		
		UHUD_IV_Sorting_C_BndEvt__Level_Tabbtn_K2Node_ComponentBoundEvent_6_OnTabStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_IV_Sorting.HUD_IV_Sorting_C.BndEvt__Grade_Tabbtn_K2Node_ComponentBoundEvent_7_OnTabStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_IV_Sorting_C::BndEvt__Grade_Tabbtn_K2Node_ComponentBoundEvent_7_OnTabStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_IV_Sorting.HUD_IV_Sorting_C.BndEvt__Grade_Tabbtn_K2Node_ComponentBoundEvent_7_OnTabStateChanged__DelegateSignature");
		
		UHUD_IV_Sorting_C_BndEvt__Grade_Tabbtn_K2Node_ComponentBoundEvent_7_OnTabStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_IV_Sorting.HUD_IV_Sorting_C.BndEvt__Power_Tabbtn_K2Node_ComponentBoundEvent_8_OnTabStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_IV_Sorting_C::BndEvt__Power_Tabbtn_K2Node_ComponentBoundEvent_8_OnTabStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_IV_Sorting.HUD_IV_Sorting_C.BndEvt__Power_Tabbtn_K2Node_ComponentBoundEvent_8_OnTabStateChanged__DelegateSignature");
		
		UHUD_IV_Sorting_C_BndEvt__Power_Tabbtn_K2Node_ComponentBoundEvent_8_OnTabStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_IV_Sorting.HUD_IV_Sorting_C.BndEvt__ETCGrade_Tabbtn_K2Node_ComponentBoundEvent_10_OnTabStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_IV_Sorting_C::BndEvt__ETCGrade_Tabbtn_K2Node_ComponentBoundEvent_10_OnTabStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_IV_Sorting.HUD_IV_Sorting_C.BndEvt__ETCGrade_Tabbtn_K2Node_ComponentBoundEvent_10_OnTabStateChanged__DelegateSignature");
		
		UHUD_IV_Sorting_C_BndEvt__ETCGrade_Tabbtn_K2Node_ComponentBoundEvent_10_OnTabStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_IV_Sorting.HUD_IV_Sorting_C.BndEvt__Amount_Tabbtn_K2Node_ComponentBoundEvent_11_OnTabStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_IV_Sorting_C::BndEvt__Amount_Tabbtn_K2Node_ComponentBoundEvent_11_OnTabStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_IV_Sorting.HUD_IV_Sorting_C.BndEvt__Amount_Tabbtn_K2Node_ComponentBoundEvent_11_OnTabStateChanged__DelegateSignature");
		
		UHUD_IV_Sorting_C_BndEvt__Amount_Tabbtn_K2Node_ComponentBoundEvent_11_OnTabStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_IV_Sorting.HUD_IV_Sorting_C.BndEvt__Sort_Tabbtn_K2Node_ComponentBoundEvent_12_OnTabStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_IV_Sorting_C::BndEvt__Sort_Tabbtn_K2Node_ComponentBoundEvent_12_OnTabStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_IV_Sorting.HUD_IV_Sorting_C.BndEvt__Sort_Tabbtn_K2Node_ComponentBoundEvent_12_OnTabStateChanged__DelegateSignature");
		
		UHUD_IV_Sorting_C_BndEvt__Sort_Tabbtn_K2Node_ComponentBoundEvent_12_OnTabStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_IV_Sorting.HUD_IV_Sorting_C.OnSetInventoryTapType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_InventorySortOrder                               order                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		E_InventorySortType                                Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_IV_Sorting_C::OnSetInventoryTapType(E_InventorySortOrder order, E_InventorySortType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_IV_Sorting.HUD_IV_Sorting_C.OnSetInventoryTapType");
		
		UHUD_IV_Sorting_C_OnSetInventoryTapType_Params params {};
		params.order = order;
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_IV_Sorting.HUD_IV_Sorting_C.OnPreSet
	 * 		Flags  -> ()
	 */
	void UHUD_IV_Sorting_C::OnPreSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_IV_Sorting.HUD_IV_Sorting_C.OnPreSet");
		
		UHUD_IV_Sorting_C_OnPreSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_IV_Sorting.HUD_IV_Sorting_C.BndEvt__Algn_btn_K2Node_ComponentBoundEvent_1_ClickDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_IV_Sorting_C::BndEvt__Algn_btn_K2Node_ComponentBoundEvent_1_ClickDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_IV_Sorting.HUD_IV_Sorting_C.BndEvt__Algn_btn_K2Node_ComponentBoundEvent_1_ClickDispatcher__DelegateSignature");
		
		UHUD_IV_Sorting_C_BndEvt__Algn_btn_K2Node_ComponentBoundEvent_1_ClickDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_IV_Sorting.HUD_IV_Sorting_C.OnActivePopupEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_IV_Sorting_C::OnActivePopupEvent(bool IsOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_IV_Sorting.HUD_IV_Sorting_C.OnActivePopupEvent");
		
		UHUD_IV_Sorting_C_OnActivePopupEvent_Params params {};
		params.IsOn = IsOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_IV_Sorting.HUD_IV_Sorting_C.BndEvt__HUD_IV_Sorting_CM_Btn_Close_K2Node_ComponentBoundEvent_2_Click__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_IV_Sorting_C::BndEvt__HUD_IV_Sorting_CM_Btn_Close_K2Node_ComponentBoundEvent_2_Click__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_IV_Sorting.HUD_IV_Sorting_C.BndEvt__HUD_IV_Sorting_CM_Btn_Close_K2Node_ComponentBoundEvent_2_Click__DelegateSignature");
		
		UHUD_IV_Sorting_C_BndEvt__HUD_IV_Sorting_CM_Btn_Close_K2Node_ComponentBoundEvent_2_Click__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_IV_Sorting.HUD_IV_Sorting_C.ExecuteUbergraph_HUD_IV_Sorting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_IV_Sorting_C::ExecuteUbergraph_HUD_IV_Sorting(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_IV_Sorting.HUD_IV_Sorting_C.ExecuteUbergraph_HUD_IV_Sorting");
		
		UHUD_IV_Sorting_C_ExecuteUbergraph_HUD_IV_Sorting_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_IV_Sorting.HUD_IV_Sorting_C.OnActivedispatcher__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_IV_Sorting_C::OnActivedispatcher__DelegateSignature(bool IsOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_IV_Sorting.HUD_IV_Sorting_C.OnActivedispatcher__DelegateSignature");
		
		UHUD_IV_Sorting_C_OnActivedispatcher__DelegateSignature_Params params {};
		params.IsOn = IsOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHUD_IV_Sorting_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_IV_Sorting_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_IV_Sorting.HUD_IV_Sorting_C");
		return ptr;
	}

}


