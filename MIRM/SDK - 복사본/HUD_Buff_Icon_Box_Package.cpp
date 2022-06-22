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
	 * 		Name   -> Function HUD_Buff_Icon_Box.HUD_Buff_Icon_Box_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Buff_Icon_Box_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Buff_Icon_Box.HUD_Buff_Icon_Box_C.PreConstruct");
		
		UHUD_Buff_Icon_Box_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Buff_Icon_Box.HUD_Buff_Icon_Box_C.BndEvt__HUD_Buff_Icon_Box_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_Buff_Icon_Box_C::BndEvt__HUD_Buff_Icon_Box_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Buff_Icon_Box.HUD_Buff_Icon_Box_C.BndEvt__HUD_Buff_Icon_Box_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UHUD_Buff_Icon_Box_C_BndEvt__HUD_Buff_Icon_Box_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Buff_Icon_Box.HUD_Buff_Icon_Box_C.ExecuteUbergraph_HUD_Buff_Icon_Box
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Buff_Icon_Box_C::ExecuteUbergraph_HUD_Buff_Icon_Box(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Buff_Icon_Box.HUD_Buff_Icon_Box_C.ExecuteUbergraph_HUD_Buff_Icon_Box");
		
		UHUD_Buff_Icon_Box_C_ExecuteUbergraph_HUD_Buff_Icon_Box_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Buff_Icon_Box.HUD_Buff_Icon_Box_C.BuffPopupDelegate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_Buff_Icon_Box_C::BuffPopupDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Buff_Icon_Box.HUD_Buff_Icon_Box_C.BuffPopupDelegate__DelegateSignature");
		
		UHUD_Buff_Icon_Box_C_BuffPopupDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHUD_Buff_Icon_Box_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Buff_Icon_Box_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Buff_Icon_Box.HUD_Buff_Icon_Box_C");
		return ptr;
	}

}


