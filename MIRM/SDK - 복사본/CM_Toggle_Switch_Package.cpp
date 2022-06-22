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
	 * 		Name   -> Function CM_Toggle_Switch.CM_Toggle_Switch_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCheck                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_Toggle_Switch_C::Setup(bool bCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Toggle_Switch.CM_Toggle_Switch_C.Setup");
		
		UCM_Toggle_Switch_C_Setup_Params params {};
		params.bCheck = bCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Toggle_Switch.CM_Toggle_Switch_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_Toggle_Switch_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Toggle_Switch.CM_Toggle_Switch_C.PreConstruct");
		
		UCM_Toggle_Switch_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Toggle_Switch.CM_Toggle_Switch_C.BndEvt__CM_Toggle_Switch_btn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_Toggle_Switch_C::BndEvt__CM_Toggle_Switch_btn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Toggle_Switch.CM_Toggle_Switch_C.BndEvt__CM_Toggle_Switch_btn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
		
		UCM_Toggle_Switch_C_BndEvt__CM_Toggle_Switch_btn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Toggle_Switch.CM_Toggle_Switch_C.BndEvt__CM_Toggle_Switch_btn_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_Toggle_Switch_C::BndEvt__CM_Toggle_Switch_btn_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Toggle_Switch.CM_Toggle_Switch_C.BndEvt__CM_Toggle_Switch_btn_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature");
		
		UCM_Toggle_Switch_C_BndEvt__CM_Toggle_Switch_btn_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Toggle_Switch.CM_Toggle_Switch_C.BndEvt__CM_Toggle_Switch_btn_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_Toggle_Switch_C::BndEvt__CM_Toggle_Switch_btn_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Toggle_Switch.CM_Toggle_Switch_C.BndEvt__CM_Toggle_Switch_btn_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");
		
		UCM_Toggle_Switch_C_BndEvt__CM_Toggle_Switch_btn_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Toggle_Switch.CM_Toggle_Switch_C.BndEvt__CM_Toggle_Switch_btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_Toggle_Switch_C::BndEvt__CM_Toggle_Switch_btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Toggle_Switch.CM_Toggle_Switch_C.BndEvt__CM_Toggle_Switch_btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UCM_Toggle_Switch_C_BndEvt__CM_Toggle_Switch_btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Toggle_Switch.CM_Toggle_Switch_C.SetToggleSwitch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsCheck                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_Toggle_Switch_C::SetToggleSwitch(bool IsCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Toggle_Switch.CM_Toggle_Switch_C.SetToggleSwitch");
		
		UCM_Toggle_Switch_C_SetToggleSwitch_Params params {};
		params.IsCheck = IsCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Toggle_Switch.CM_Toggle_Switch_C.BndEvt__MirButton_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_Toggle_Switch_C::BndEvt__MirButton_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Toggle_Switch.CM_Toggle_Switch_C.BndEvt__MirButton_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UCM_Toggle_Switch_C_BndEvt__MirButton_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Toggle_Switch.CM_Toggle_Switch_C.Construct
	 * 		Flags  -> ()
	 */
	void UCM_Toggle_Switch_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Toggle_Switch.CM_Toggle_Switch_C.Construct");
		
		UCM_Toggle_Switch_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Toggle_Switch.CM_Toggle_Switch_C.ExecuteUbergraph_CM_Toggle_Switch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Toggle_Switch_C::ExecuteUbergraph_CM_Toggle_Switch(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Toggle_Switch.CM_Toggle_Switch_C.ExecuteUbergraph_CM_Toggle_Switch");
		
		UCM_Toggle_Switch_C_ExecuteUbergraph_CM_Toggle_Switch_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Toggle_Switch.CM_Toggle_Switch_C.NotClick__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_Toggle_Switch_C::NotClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Toggle_Switch.CM_Toggle_Switch_C.NotClick__DelegateSignature");
		
		UCM_Toggle_Switch_C_NotClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Toggle_Switch.CM_Toggle_Switch_C.OnChangedToggle__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_Toggle_Switch_C::OnChangedToggle__DelegateSignature(bool IsOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Toggle_Switch.CM_Toggle_Switch_C.OnChangedToggle__DelegateSignature");
		
		UCM_Toggle_Switch_C_OnChangedToggle__DelegateSignature_Params params {};
		params.IsOn = IsOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Toggle_Switch.CM_Toggle_Switch_C.OnClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsCheck                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_Toggle_Switch_C::OnClick__DelegateSignature(bool bIsCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Toggle_Switch.CM_Toggle_Switch_C.OnClick__DelegateSignature");
		
		UCM_Toggle_Switch_C_OnClick__DelegateSignature_Params params {};
		params.bIsCheck = bIsCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCM_Toggle_Switch_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCM_Toggle_Switch_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CM_Toggle_Switch.CM_Toggle_Switch_C");
		return ptr;
	}

}


