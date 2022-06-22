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
	 * 		Name   -> Function HUD_WarningAlarm_Btn.HUD_WarningAlarm_Btn_C.SetVisibleSetting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_WarningAlarm_Btn_C::SetVisibleSetting(ESlateVisibility visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_WarningAlarm_Btn.HUD_WarningAlarm_Btn_C.SetVisibleSetting");
		
		UHUD_WarningAlarm_Btn_C_SetVisibleSetting_Params params {};
		params.visible = visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_WarningAlarm_Btn.HUD_WarningAlarm_Btn_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_WarningAlarm_Btn_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_WarningAlarm_Btn.HUD_WarningAlarm_Btn_C.PreConstruct");
		
		UHUD_WarningAlarm_Btn_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_WarningAlarm_Btn.HUD_WarningAlarm_Btn_C.BndEvt__HUD_WarningAlarm_Btn_Warning_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_WarningAlarm_Btn_C::BndEvt__HUD_WarningAlarm_Btn_Warning_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_WarningAlarm_Btn.HUD_WarningAlarm_Btn_C.BndEvt__HUD_WarningAlarm_Btn_Warning_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UHUD_WarningAlarm_Btn_C_BndEvt__HUD_WarningAlarm_Btn_Warning_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_WarningAlarm_Btn.HUD_WarningAlarm_Btn_C.ExecuteUbergraph_HUD_WarningAlarm_Btn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_WarningAlarm_Btn_C::ExecuteUbergraph_HUD_WarningAlarm_Btn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_WarningAlarm_Btn.HUD_WarningAlarm_Btn_C.ExecuteUbergraph_HUD_WarningAlarm_Btn");
		
		UHUD_WarningAlarm_Btn_C_ExecuteUbergraph_HUD_WarningAlarm_Btn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_WarningAlarm_Btn.HUD_WarningAlarm_Btn_C.ClickDipatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_WarningAlarm_Btn_C::ClickDipatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_WarningAlarm_Btn.HUD_WarningAlarm_Btn_C.ClickDipatcher__DelegateSignature");
		
		UHUD_WarningAlarm_Btn_C_ClickDipatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHUD_WarningAlarm_Btn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_WarningAlarm_Btn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_WarningAlarm_Btn.HUD_WarningAlarm_Btn_C");
		return ptr;
	}

}


