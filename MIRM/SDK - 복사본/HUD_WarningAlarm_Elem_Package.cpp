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
	 * 		Name   -> Function HUD_WarningAlarm_Elem.HUD_WarningAlarm_Elem_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_WarningAlarm_Elem_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_WarningAlarm_Elem.HUD_WarningAlarm_Elem_C.PreConstruct");
		
		UHUD_WarningAlarm_Elem_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_WarningAlarm_Elem.HUD_WarningAlarm_Elem_C.OnMouseEnter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UHUD_WarningAlarm_Elem_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_WarningAlarm_Elem.HUD_WarningAlarm_Elem_C.OnMouseEnter");
		
		UHUD_WarningAlarm_Elem_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_WarningAlarm_Elem.HUD_WarningAlarm_Elem_C.OnMouseLeave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UHUD_WarningAlarm_Elem_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_WarningAlarm_Elem.HUD_WarningAlarm_Elem_C.OnMouseLeave");
		
		UHUD_WarningAlarm_Elem_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_WarningAlarm_Elem.HUD_WarningAlarm_Elem_C.ExecuteUbergraph_HUD_WarningAlarm_Elem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_WarningAlarm_Elem_C::ExecuteUbergraph_HUD_WarningAlarm_Elem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_WarningAlarm_Elem.HUD_WarningAlarm_Elem_C.ExecuteUbergraph_HUD_WarningAlarm_Elem");
		
		UHUD_WarningAlarm_Elem_C_ExecuteUbergraph_HUD_WarningAlarm_Elem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_WarningAlarm_Elem.HUD_WarningAlarm_Elem_C.HUD_WarningAlarm_Elem_Btn_Dispatch__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_WarningAlarm_Elem_C::HUD_WarningAlarm_Elem_Btn_Dispatch__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_WarningAlarm_Elem.HUD_WarningAlarm_Elem_C.HUD_WarningAlarm_Elem_Btn_Dispatch__DelegateSignature");
		
		UHUD_WarningAlarm_Elem_C_HUD_WarningAlarm_Elem_Btn_Dispatch__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHUD_WarningAlarm_Elem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_WarningAlarm_Elem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_WarningAlarm_Elem.HUD_WarningAlarm_Elem_C");
		return ptr;
	}

}


