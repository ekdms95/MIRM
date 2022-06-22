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
	 * 		Name   -> Function HUD_AutoMenu_btn.HUD_AutoMenu_btn_C.BndEvt__HUD_AutoMenu_btn_Auto_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_AutoMenu_btn_C::BndEvt__HUD_AutoMenu_btn_Auto_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_AutoMenu_btn.HUD_AutoMenu_btn_C.BndEvt__HUD_AutoMenu_btn_Auto_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UHUD_AutoMenu_btn_C_BndEvt__HUD_AutoMenu_btn_Auto_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_AutoMenu_btn.HUD_AutoMenu_btn_C.ExecuteUbergraph_HUD_AutoMenu_btn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_AutoMenu_btn_C::ExecuteUbergraph_HUD_AutoMenu_btn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_AutoMenu_btn.HUD_AutoMenu_btn_C.ExecuteUbergraph_HUD_AutoMenu_btn");
		
		UHUD_AutoMenu_btn_C_ExecuteUbergraph_HUD_AutoMenu_btn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_AutoMenu_btn.HUD_AutoMenu_btn_C.AutoMenuBtnClick__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_AutoMenu_btn_C::AutoMenuBtnClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_AutoMenu_btn.HUD_AutoMenu_btn_C.AutoMenuBtnClick__DelegateSignature");
		
		UHUD_AutoMenu_btn_C_AutoMenuBtnClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHUD_AutoMenu_btn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_AutoMenu_btn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_AutoMenu_btn.HUD_AutoMenu_btn_C");
		return ptr;
	}

}


