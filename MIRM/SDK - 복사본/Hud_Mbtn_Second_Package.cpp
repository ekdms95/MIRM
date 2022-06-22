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
	 * 		Name   -> Function Hud_Mbtn_Second.Hud_Mbtn_Second_C.ButtonSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isSmall_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_Mbtn_Second_C::ButtonSize(bool isSmall_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Mbtn_Second.Hud_Mbtn_Second_C.ButtonSize");
		
		UHud_Mbtn_Second_C_ButtonSize_Params params {};
		params.isSmall_ = isSmall_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Mbtn_Second.Hud_Mbtn_Second_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_Mbtn_Second_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Mbtn_Second.Hud_Mbtn_Second_C.PreConstruct");
		
		UHud_Mbtn_Second_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Mbtn_Second.Hud_Mbtn_Second_C.BndEvt__Second_Menu_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_Mbtn_Second_C::BndEvt__Second_Menu_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Mbtn_Second.Hud_Mbtn_Second_C.BndEvt__Second_Menu_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UHud_Mbtn_Second_C_BndEvt__Second_Menu_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Mbtn_Second.Hud_Mbtn_Second_C.OnChangeEnableState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDisabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_Mbtn_Second_C::OnChangeEnableState(bool IsDisabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Mbtn_Second.Hud_Mbtn_Second_C.OnChangeEnableState");
		
		UHud_Mbtn_Second_C_OnChangeEnableState_Params params {};
		params.IsDisabled = IsDisabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Mbtn_Second.Hud_Mbtn_Second_C.BndEvt__Hud_Mbtn_Second_Second_Menu_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_Mbtn_Second_C::BndEvt__Hud_Mbtn_Second_Second_Menu_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Mbtn_Second.Hud_Mbtn_Second_C.BndEvt__Hud_Mbtn_Second_Second_Menu_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UHud_Mbtn_Second_C_BndEvt__Hud_Mbtn_Second_Second_Menu_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Mbtn_Second.Hud_Mbtn_Second_C.ExecuteUbergraph_Hud_Mbtn_Second
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_Mbtn_Second_C::ExecuteUbergraph_Hud_Mbtn_Second(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Mbtn_Second.Hud_Mbtn_Second_C.ExecuteUbergraph_Hud_Mbtn_Second");
		
		UHud_Mbtn_Second_C_ExecuteUbergraph_Hud_Mbtn_Second_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Mbtn_Second.Hud_Mbtn_Second_C.MbtnClick__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_Mbtn_Second_C::MbtnClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Mbtn_Second.Hud_Mbtn_Second_C.MbtnClick__DelegateSignature");
		
		UHud_Mbtn_Second_C_MbtnClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHud_Mbtn_Second_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHud_Mbtn_Second_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Hud_Mbtn_Second.Hud_Mbtn_Second_C");
		return ptr;
	}

}


