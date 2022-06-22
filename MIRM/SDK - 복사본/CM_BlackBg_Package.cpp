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
	 * 		Name   -> Function CM_BlackBg.CM_BlackBg_C.Blocking Set
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On_Blocking_                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_BlackBg_C::Blocking_Set(bool On_Blocking_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_BlackBg.CM_BlackBg_C.Blocking Set");
		
		UCM_BlackBg_C_Blocking_Set_Params params {};
		params.On_Blocking_ = On_Blocking_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_BlackBg.CM_BlackBg_C.SetButtonEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_BlackBg_C::SetButtonEnable(bool IsOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_BlackBg.CM_BlackBg_C.SetButtonEnable");
		
		UCM_BlackBg_C_SetButtonEnable_Params params {};
		params.IsOn = IsOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_BlackBg.CM_BlackBg_C.BndEvt__Close_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_BlackBg_C::BndEvt__Close_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_BlackBg.CM_BlackBg_C.BndEvt__Close_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UCM_BlackBg_C_BndEvt__Close_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_BlackBg.CM_BlackBg_C.ExecuteUbergraph_CM_BlackBg
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_BlackBg_C::ExecuteUbergraph_CM_BlackBg(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_BlackBg.CM_BlackBg_C.ExecuteUbergraph_CM_BlackBg");
		
		UCM_BlackBg_C_ExecuteUbergraph_CM_BlackBg_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_BlackBg.CM_BlackBg_C.CloseBtn_Event__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_BlackBg_C::CloseBtn_Event__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_BlackBg.CM_BlackBg_C.CloseBtn_Event__DelegateSignature");
		
		UCM_BlackBg_C_CloseBtn_Event__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCM_BlackBg_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCM_BlackBg_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CM_BlackBg.CM_BlackBg_C");
		return ptr;
	}

}


