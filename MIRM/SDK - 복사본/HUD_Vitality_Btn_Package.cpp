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
	 * 		Name   -> Function HUD_Vitality_Btn.HUD_Vitality_Btn_C.OnPreSet
	 * 		Flags  -> ()
	 */
	void UHUD_Vitality_Btn_C::OnPreSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Vitality_Btn.HUD_Vitality_Btn_C.OnPreSet");
		
		UHUD_Vitality_Btn_C_OnPreSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Vitality_Btn.HUD_Vitality_Btn_C.OnAddValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isConditionValue                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int64_t                                            Val                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Vitality_Btn_C::OnAddValue(bool isConditionValue, int64_t Val)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Vitality_Btn.HUD_Vitality_Btn_C.OnAddValue");
		
		UHUD_Vitality_Btn_C_OnAddValue_Params params {};
		params.isConditionValue = isConditionValue;
		params.Val = Val;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Vitality_Btn.HUD_Vitality_Btn_C.BndEvt__HUD_Vitality_Btn_HUD_Vitality_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_Vitality_Btn_C::BndEvt__HUD_Vitality_Btn_HUD_Vitality_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Vitality_Btn.HUD_Vitality_Btn_C.BndEvt__HUD_Vitality_Btn_HUD_Vitality_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UHUD_Vitality_Btn_C_BndEvt__HUD_Vitality_Btn_HUD_Vitality_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Vitality_Btn.HUD_Vitality_Btn_C.WidgetAnimationEvt_Text_ani_2_K2Node_WidgetAnimationEvent_2
	 * 		Flags  -> ()
	 */
	void UHUD_Vitality_Btn_C::WidgetAnimationEvt_Text_ani_2_K2Node_WidgetAnimationEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Vitality_Btn.HUD_Vitality_Btn_C.WidgetAnimationEvt_Text_ani_2_K2Node_WidgetAnimationEvent_2");
		
		UHUD_Vitality_Btn_C_WidgetAnimationEvt_Text_ani_2_K2Node_WidgetAnimationEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Vitality_Btn.HUD_Vitality_Btn_C.ExecuteUbergraph_HUD_Vitality_Btn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Vitality_Btn_C::ExecuteUbergraph_HUD_Vitality_Btn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Vitality_Btn.HUD_Vitality_Btn_C.ExecuteUbergraph_HUD_Vitality_Btn");
		
		UHUD_Vitality_Btn_C_ExecuteUbergraph_HUD_Vitality_Btn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Vitality_Btn.HUD_Vitality_Btn_C.Click_Dispatch__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_Vitality_Btn_C::Click_Dispatch__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Vitality_Btn.HUD_Vitality_Btn_C.Click_Dispatch__DelegateSignature");
		
		UHUD_Vitality_Btn_C_Click_Dispatch__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHUD_Vitality_Btn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Vitality_Btn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Vitality_Btn.HUD_Vitality_Btn_C");
		return ptr;
	}

}


