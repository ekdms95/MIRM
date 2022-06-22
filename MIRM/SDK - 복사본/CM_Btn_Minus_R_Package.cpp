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
	 * 		Name   -> Function CM_Btn_Minus_R.CM_Btn_Minus_R_C.SetNumberText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Btn_Minus_R_C::SetNumberText(int32_t NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Btn_Minus_R.CM_Btn_Minus_R_C.SetNumberText");
		
		UCM_Btn_Minus_R_C_SetNumberText_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Btn_Minus_R.CM_Btn_Minus_R_C.MinusIconStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        MinusimgStatus                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Btn_Minus_R_C::MinusIconStatus(const class FName& MinusimgStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Btn_Minus_R.CM_Btn_Minus_R_C.MinusIconStatus");
		
		UCM_Btn_Minus_R_C_MinusIconStatus_Params params {};
		params.MinusimgStatus = MinusimgStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Btn_Minus_R.CM_Btn_Minus_R_C.GetButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMirButton*                                  Button                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Btn_Minus_R_C::GetButton(class UMirButton** Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Btn_Minus_R.CM_Btn_Minus_R_C.GetButton");
		
		UCM_Btn_Minus_R_C_GetButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Button != nullptr)
			*Button = params.Button;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Btn_Minus_R.CM_Btn_Minus_R_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_Btn_Minus_R_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Btn_Minus_R.CM_Btn_Minus_R_C.PreConstruct");
		
		UCM_Btn_Minus_R_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Btn_Minus_R.CM_Btn_Minus_R_C.BndEvt__MirButton_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_Btn_Minus_R_C::BndEvt__MirButton_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Btn_Minus_R.CM_Btn_Minus_R_C.BndEvt__MirButton_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		UCM_Btn_Minus_R_C_BndEvt__MirButton_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Btn_Minus_R.CM_Btn_Minus_R_C.BndEvt__MirButton_0_K2Node_ComponentBoundEvent_29_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_Btn_Minus_R_C::BndEvt__MirButton_0_K2Node_ComponentBoundEvent_29_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Btn_Minus_R.CM_Btn_Minus_R_C.BndEvt__MirButton_0_K2Node_ComponentBoundEvent_29_OnButtonPressedEvent__DelegateSignature");
		
		UCM_Btn_Minus_R_C_BndEvt__MirButton_0_K2Node_ComponentBoundEvent_29_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Btn_Minus_R.CM_Btn_Minus_R_C.BndEvt__MirButton_0_K2Node_ComponentBoundEvent_56_OnButtonReleasedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_Btn_Minus_R_C::BndEvt__MirButton_0_K2Node_ComponentBoundEvent_56_OnButtonReleasedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Btn_Minus_R.CM_Btn_Minus_R_C.BndEvt__MirButton_0_K2Node_ComponentBoundEvent_56_OnButtonReleasedEvent__DelegateSignature");
		
		UCM_Btn_Minus_R_C_BndEvt__MirButton_0_K2Node_ComponentBoundEvent_56_OnButtonReleasedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Btn_Minus_R.CM_Btn_Minus_R_C.BndEvt__MirButton_0_K2Node_ComponentBoundEvent_63_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_Btn_Minus_R_C::BndEvt__MirButton_0_K2Node_ComponentBoundEvent_63_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Btn_Minus_R.CM_Btn_Minus_R_C.BndEvt__MirButton_0_K2Node_ComponentBoundEvent_63_OnButtonHoverEvent__DelegateSignature");
		
		UCM_Btn_Minus_R_C_BndEvt__MirButton_0_K2Node_ComponentBoundEvent_63_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Btn_Minus_R.CM_Btn_Minus_R_C.Construct
	 * 		Flags  -> ()
	 */
	void UCM_Btn_Minus_R_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Btn_Minus_R.CM_Btn_Minus_R_C.Construct");
		
		UCM_Btn_Minus_R_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Btn_Minus_R.CM_Btn_Minus_R_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Btn_Minus_R_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Btn_Minus_R.CM_Btn_Minus_R_C.Tick");
		
		UCM_Btn_Minus_R_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Btn_Minus_R.CM_Btn_Minus_R_C.OnChangeEnableState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDisabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_Btn_Minus_R_C::OnChangeEnableState(bool IsDisabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Btn_Minus_R.CM_Btn_Minus_R_C.OnChangeEnableState");
		
		UCM_Btn_Minus_R_C_OnChangeEnableState_Params params {};
		params.IsDisabled = IsDisabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Btn_Minus_R.CM_Btn_Minus_R_C.ExecuteUbergraph_CM_Btn_Minus_R
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Btn_Minus_R_C::ExecuteUbergraph_CM_Btn_Minus_R(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Btn_Minus_R.CM_Btn_Minus_R_C.ExecuteUbergraph_CM_Btn_Minus_R");
		
		UCM_Btn_Minus_R_C_ExecuteUbergraph_CM_Btn_Minus_R_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Btn_Minus_R.CM_Btn_Minus_R_C.PressedDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_Btn_Minus_R_C::PressedDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Btn_Minus_R.CM_Btn_Minus_R_C.PressedDispatcher__DelegateSignature");
		
		UCM_Btn_Minus_R_C_PressedDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Btn_Minus_R.CM_Btn_Minus_R_C.ClickDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_Btn_Minus_R_C::ClickDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Btn_Minus_R.CM_Btn_Minus_R_C.ClickDispatcher__DelegateSignature");
		
		UCM_Btn_Minus_R_C_ClickDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCM_Btn_Minus_R_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCM_Btn_Minus_R_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CM_Btn_Minus_R.CM_Btn_Minus_R_C");
		return ptr;
	}

}


