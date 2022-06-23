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
	 * 		Name   -> Function HUD_IV_Function.HUD_IV_Function_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_IV_Function_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_IV_Function.HUD_IV_Function_C.PreConstruct");
		
		UHUD_IV_Function_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_IV_Function.HUD_IV_Function_C.OnActivePopupEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_IV_Function_C::OnActivePopupEvent(bool IsOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_IV_Function.HUD_IV_Function_C.OnActivePopupEvent");
		
		UHUD_IV_Function_C_OnActivePopupEvent_Params params {};
		params.IsOn = IsOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_IV_Function.HUD_IV_Function_C.BndEvt__CM_Trash_btn_K2Node_ComponentBoundEvent_0_OnChangeState__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_IV_Function_C::BndEvt__CM_Trash_btn_K2Node_ComponentBoundEvent_0_OnChangeState__DelegateSignature(bool IsOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_IV_Function.HUD_IV_Function_C.BndEvt__CM_Trash_btn_K2Node_ComponentBoundEvent_0_OnChangeState__DelegateSignature");
		
		UHUD_IV_Function_C_BndEvt__CM_Trash_btn_K2Node_ComponentBoundEvent_0_OnChangeState__DelegateSignature_Params params {};
		params.IsOn = IsOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_IV_Function.HUD_IV_Function_C.BndEvt__Destroy_Btn_K2Node_ComponentBoundEvent_2_ClickDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_IV_Function_C::BndEvt__Destroy_Btn_K2Node_ComponentBoundEvent_2_ClickDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_IV_Function.HUD_IV_Function_C.BndEvt__Destroy_Btn_K2Node_ComponentBoundEvent_2_ClickDispatcher__DelegateSignature");
		
		UHUD_IV_Function_C_BndEvt__Destroy_Btn_K2Node_ComponentBoundEvent_2_ClickDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_IV_Function.HUD_IV_Function_C.BndEvt__Sell_Btn_K2Node_ComponentBoundEvent_3_ClickDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_IV_Function_C::BndEvt__Sell_Btn_K2Node_ComponentBoundEvent_3_ClickDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_IV_Function.HUD_IV_Function_C.BndEvt__Sell_Btn_K2Node_ComponentBoundEvent_3_ClickDispatcher__DelegateSignature");
		
		UHUD_IV_Function_C_BndEvt__Sell_Btn_K2Node_ComponentBoundEvent_3_ClickDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_IV_Function.HUD_IV_Function_C.BndEvt__Decomposition_Btn_K2Node_ComponentBoundEvent_4_Decomp_ClicK_Dispatch__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_IV_Function_C::BndEvt__Decomposition_Btn_K2Node_ComponentBoundEvent_4_Decomp_ClicK_Dispatch__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_IV_Function.HUD_IV_Function_C.BndEvt__Decomposition_Btn_K2Node_ComponentBoundEvent_4_Decomp_ClicK_Dispatch__DelegateSignature");
		
		UHUD_IV_Function_C_BndEvt__Decomposition_Btn_K2Node_ComponentBoundEvent_4_Decomp_ClicK_Dispatch__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_IV_Function.HUD_IV_Function_C.BndEvt__HUD_IV_Function_CM_Btn_Close_K2Node_ComponentBoundEvent_1_Click__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_IV_Function_C::BndEvt__HUD_IV_Function_CM_Btn_Close_K2Node_ComponentBoundEvent_1_Click__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_IV_Function.HUD_IV_Function_C.BndEvt__HUD_IV_Function_CM_Btn_Close_K2Node_ComponentBoundEvent_1_Click__DelegateSignature");
		
		UHUD_IV_Function_C_BndEvt__HUD_IV_Function_CM_Btn_Close_K2Node_ComponentBoundEvent_1_Click__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_IV_Function.HUD_IV_Function_C.BndEvt__HUD_IV_Function_Repare_btn_K2Node_ComponentBoundEvent_5_Click__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_IV_Function_C::BndEvt__HUD_IV_Function_Repare_btn_K2Node_ComponentBoundEvent_5_Click__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_IV_Function.HUD_IV_Function_C.BndEvt__HUD_IV_Function_Repare_btn_K2Node_ComponentBoundEvent_5_Click__DelegateSignature");
		
		UHUD_IV_Function_C_BndEvt__HUD_IV_Function_Repare_btn_K2Node_ComponentBoundEvent_5_Click__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_IV_Function.HUD_IV_Function_C.ExecuteUbergraph_HUD_IV_Function
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_IV_Function_C::ExecuteUbergraph_HUD_IV_Function(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_IV_Function.HUD_IV_Function_C.ExecuteUbergraph_HUD_IV_Function");
		
		UHUD_IV_Function_C_ExecuteUbergraph_HUD_IV_Function_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_IV_Function.HUD_IV_Function_C.OnActivedispatcher__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_IV_Function_C::OnActivedispatcher__DelegateSignature(bool IsOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_IV_Function.HUD_IV_Function_C.OnActivedispatcher__DelegateSignature");
		
		UHUD_IV_Function_C_OnActivedispatcher__DelegateSignature_Params params {};
		params.IsOn = IsOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHUD_IV_Function_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_IV_Function_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_IV_Function.HUD_IV_Function_C");
		return ptr;
	}

}


