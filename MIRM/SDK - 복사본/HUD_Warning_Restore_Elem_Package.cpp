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
	 * 		Name   -> Function HUD_Warning_Restore_Elem.HUD_Warning_Restore_Elem_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Warning_Restore_Elem_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Warning_Restore_Elem.HUD_Warning_Restore_Elem_C.PreConstruct");
		
		UHUD_Warning_Restore_Elem_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Warning_Restore_Elem.HUD_Warning_Restore_Elem_C.BndEvt__HUD_Warning_Restore_Elem_HUD_WarningAlarm_Elem_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_Warning_Restore_Elem_C::BndEvt__HUD_Warning_Restore_Elem_HUD_WarningAlarm_Elem_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Warning_Restore_Elem.HUD_Warning_Restore_Elem_C.BndEvt__HUD_Warning_Restore_Elem_HUD_WarningAlarm_Elem_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UHUD_Warning_Restore_Elem_C_BndEvt__HUD_Warning_Restore_Elem_HUD_WarningAlarm_Elem_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Warning_Restore_Elem.HUD_Warning_Restore_Elem_C.ExecuteUbergraph_HUD_Warning_Restore_Elem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Warning_Restore_Elem_C::ExecuteUbergraph_HUD_Warning_Restore_Elem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Warning_Restore_Elem.HUD_Warning_Restore_Elem_C.ExecuteUbergraph_HUD_Warning_Restore_Elem");
		
		UHUD_Warning_Restore_Elem_C_ExecuteUbergraph_HUD_Warning_Restore_Elem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Warning_Restore_Elem.HUD_Warning_Restore_Elem_C.HUD_WarningAlarm_Elem_Btn_Dispatch__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_Warning_Restore_Elem_C::HUD_WarningAlarm_Elem_Btn_Dispatch__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Warning_Restore_Elem.HUD_Warning_Restore_Elem_C.HUD_WarningAlarm_Elem_Btn_Dispatch__DelegateSignature");
		
		UHUD_Warning_Restore_Elem_C_HUD_WarningAlarm_Elem_Btn_Dispatch__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHUD_Warning_Restore_Elem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Warning_Restore_Elem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Warning_Restore_Elem.HUD_Warning_Restore_Elem_C");
		return ptr;
	}

}


