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
	 * 		Name   -> Function HUD_Auto_Get.HUD_Auto_Get_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_Auto_Get_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Auto_Get.HUD_Auto_Get_C.Construct");
		
		UHUD_Auto_Get_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Auto_Get.HUD_Auto_Get_C.OnButtonVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Auto_Get_C::OnButtonVisible(bool IsOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Auto_Get.HUD_Auto_Get_C.OnButtonVisible");
		
		UHUD_Auto_Get_C_OnButtonVisible_Params params {};
		params.IsOn = IsOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Auto_Get.HUD_Auto_Get_C.BndEvt__HUD_Auto_Get_HUD_Auto_Get_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_Auto_Get_C::BndEvt__HUD_Auto_Get_HUD_Auto_Get_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Auto_Get.HUD_Auto_Get_C.BndEvt__HUD_Auto_Get_HUD_Auto_Get_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UHUD_Auto_Get_C_BndEvt__HUD_Auto_Get_HUD_Auto_Get_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Auto_Get.HUD_Auto_Get_C.OnClickEvent
	 * 		Flags  -> ()
	 */
	void UHUD_Auto_Get_C::OnClickEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Auto_Get.HUD_Auto_Get_C.OnClickEvent");
		
		UHUD_Auto_Get_C_OnClickEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Auto_Get.HUD_Auto_Get_C.WidgetAnimationEvt_Click_ani_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UHUD_Auto_Get_C::WidgetAnimationEvt_Click_ani_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Auto_Get.HUD_Auto_Get_C.WidgetAnimationEvt_Click_ani_K2Node_WidgetAnimationEvent_1");
		
		UHUD_Auto_Get_C_WidgetAnimationEvt_Click_ani_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Auto_Get.HUD_Auto_Get_C.ExecuteUbergraph_HUD_Auto_Get
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Auto_Get_C::ExecuteUbergraph_HUD_Auto_Get(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Auto_Get.HUD_Auto_Get_C.ExecuteUbergraph_HUD_Auto_Get");
		
		UHUD_Auto_Get_C_ExecuteUbergraph_HUD_Auto_Get_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHUD_Auto_Get_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Auto_Get_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Auto_Get.HUD_Auto_Get_C");
		return ptr;
	}

}


