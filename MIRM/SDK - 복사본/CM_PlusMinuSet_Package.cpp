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
	 * 		Name   -> Function CM_PlusMinuSet.CM_PlusMinuSet_C.SetMoveBtnText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Number                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_PlusMinuSet_C::SetMoveBtnText(int32_t Number)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_PlusMinuSet.CM_PlusMinuSet_C.SetMoveBtnText");
		
		UCM_PlusMinuSet_C_SetMoveBtnText_Params params {};
		params.Number = Number;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_PlusMinuSet.CM_PlusMinuSet_C.SetButtonState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_PlusMinuSet_C::SetButtonState(unsigned char State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_PlusMinuSet.CM_PlusMinuSet_C.SetButtonState");
		
		UCM_PlusMinuSet_C_SetButtonState_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_PlusMinuSet.CM_PlusMinuSet_C.GetNumberText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMirTextBlock*                               Text                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_PlusMinuSet_C::GetNumberText(class UMirTextBlock** Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_PlusMinuSet.CM_PlusMinuSet_C.GetNumberText");
		
		UCM_PlusMinuSet_C_GetNumberText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_PlusMinuSet.CM_PlusMinuSet_C.BndEvt__CM_Btn_Plus_K2Node_ComponentBoundEvent_2_ClickDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_PlusMinuSet_C::BndEvt__CM_Btn_Plus_K2Node_ComponentBoundEvent_2_ClickDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_PlusMinuSet.CM_PlusMinuSet_C.BndEvt__CM_Btn_Plus_K2Node_ComponentBoundEvent_2_ClickDispatcher__DelegateSignature");
		
		UCM_PlusMinuSet_C_BndEvt__CM_Btn_Plus_K2Node_ComponentBoundEvent_2_ClickDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_PlusMinuSet.CM_PlusMinuSet_C.BndEvt__NumPadOpen_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_PlusMinuSet_C::BndEvt__NumPadOpen_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_PlusMinuSet.CM_PlusMinuSet_C.BndEvt__NumPadOpen_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UCM_PlusMinuSet_C_BndEvt__NumPadOpen_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_PlusMinuSet.CM_PlusMinuSet_C.BndEvt__CM_Btn_Minus_R_K2Node_ComponentBoundEvent_0_ClickDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_PlusMinuSet_C::BndEvt__CM_Btn_Minus_R_K2Node_ComponentBoundEvent_0_ClickDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_PlusMinuSet.CM_PlusMinuSet_C.BndEvt__CM_Btn_Minus_R_K2Node_ComponentBoundEvent_0_ClickDispatcher__DelegateSignature");
		
		UCM_PlusMinuSet_C_BndEvt__CM_Btn_Minus_R_K2Node_ComponentBoundEvent_0_ClickDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_PlusMinuSet.CM_PlusMinuSet_C.BndEvt__CM_Btn_Minus_K2Node_ComponentBoundEvent_5_PressedDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_PlusMinuSet_C::BndEvt__CM_Btn_Minus_K2Node_ComponentBoundEvent_5_PressedDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_PlusMinuSet.CM_PlusMinuSet_C.BndEvt__CM_Btn_Minus_K2Node_ComponentBoundEvent_5_PressedDispatcher__DelegateSignature");
		
		UCM_PlusMinuSet_C_BndEvt__CM_Btn_Minus_K2Node_ComponentBoundEvent_5_PressedDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_PlusMinuSet.CM_PlusMinuSet_C.BndEvt__CM_Btn_Plus_K2Node_ComponentBoundEvent_6_PressedDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_PlusMinuSet_C::BndEvt__CM_Btn_Plus_K2Node_ComponentBoundEvent_6_PressedDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_PlusMinuSet.CM_PlusMinuSet_C.BndEvt__CM_Btn_Plus_K2Node_ComponentBoundEvent_6_PressedDispatcher__DelegateSignature");
		
		UCM_PlusMinuSet_C_BndEvt__CM_Btn_Plus_K2Node_ComponentBoundEvent_6_PressedDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_PlusMinuSet.CM_PlusMinuSet_C.BndEvt__Max_btn_K2Node_ComponentBoundEvent_3_ClickDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_PlusMinuSet_C::BndEvt__Max_btn_K2Node_ComponentBoundEvent_3_ClickDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_PlusMinuSet.CM_PlusMinuSet_C.BndEvt__Max_btn_K2Node_ComponentBoundEvent_3_ClickDispatcher__DelegateSignature");
		
		UCM_PlusMinuSet_C_BndEvt__Max_btn_K2Node_ComponentBoundEvent_3_ClickDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_PlusMinuSet.CM_PlusMinuSet_C.BndEvt__Max_btn_K2Node_ComponentBoundEvent_4_PressedDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_PlusMinuSet_C::BndEvt__Max_btn_K2Node_ComponentBoundEvent_4_PressedDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_PlusMinuSet.CM_PlusMinuSet_C.BndEvt__Max_btn_K2Node_ComponentBoundEvent_4_PressedDispatcher__DelegateSignature");
		
		UCM_PlusMinuSet_C_BndEvt__Max_btn_K2Node_ComponentBoundEvent_4_PressedDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_PlusMinuSet.CM_PlusMinuSet_C.BndEvt__Min_btn_K2Node_ComponentBoundEvent_7_ClickDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_PlusMinuSet_C::BndEvt__Min_btn_K2Node_ComponentBoundEvent_7_ClickDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_PlusMinuSet.CM_PlusMinuSet_C.BndEvt__Min_btn_K2Node_ComponentBoundEvent_7_ClickDispatcher__DelegateSignature");
		
		UCM_PlusMinuSet_C_BndEvt__Min_btn_K2Node_ComponentBoundEvent_7_ClickDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_PlusMinuSet.CM_PlusMinuSet_C.BndEvt__Min_btn_K2Node_ComponentBoundEvent_8_PressedDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_PlusMinuSet_C::BndEvt__Min_btn_K2Node_ComponentBoundEvent_8_PressedDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_PlusMinuSet.CM_PlusMinuSet_C.BndEvt__Min_btn_K2Node_ComponentBoundEvent_8_PressedDispatcher__DelegateSignature");
		
		UCM_PlusMinuSet_C_BndEvt__Min_btn_K2Node_ComponentBoundEvent_8_PressedDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_PlusMinuSet.CM_PlusMinuSet_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_PlusMinuSet_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_PlusMinuSet.CM_PlusMinuSet_C.PreConstruct");
		
		UCM_PlusMinuSet_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_PlusMinuSet.CM_PlusMinuSet_C.ExecuteUbergraph_CM_PlusMinuSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_PlusMinuSet_C::ExecuteUbergraph_CM_PlusMinuSet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_PlusMinuSet.CM_PlusMinuSet_C.ExecuteUbergraph_CM_PlusMinuSet");
		
		UCM_PlusMinuSet_C_ExecuteUbergraph_CM_PlusMinuSet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_PlusMinuSet.CM_PlusMinuSet_C.MaxBtn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_PlusMinuSet_C::MaxBtn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_PlusMinuSet.CM_PlusMinuSet_C.MaxBtn__DelegateSignature");
		
		UCM_PlusMinuSet_C_MaxBtn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_PlusMinuSet.CM_PlusMinuSet_C.MinBtn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_PlusMinuSet_C::MinBtn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_PlusMinuSet.CM_PlusMinuSet_C.MinBtn__DelegateSignature");
		
		UCM_PlusMinuSet_C_MinBtn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_PlusMinuSet.CM_PlusMinuSet_C.NumpadOpenBtn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_PlusMinuSet_C::NumpadOpenBtn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_PlusMinuSet.CM_PlusMinuSet_C.NumpadOpenBtn__DelegateSignature");
		
		UCM_PlusMinuSet_C_NumpadOpenBtn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_PlusMinuSet.CM_PlusMinuSet_C.PlusBtn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_PlusMinuSet_C::PlusBtn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_PlusMinuSet.CM_PlusMinuSet_C.PlusBtn__DelegateSignature");
		
		UCM_PlusMinuSet_C_PlusBtn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_PlusMinuSet.CM_PlusMinuSet_C.MinusBtn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_PlusMinuSet_C::MinusBtn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_PlusMinuSet.CM_PlusMinuSet_C.MinusBtn__DelegateSignature");
		
		UCM_PlusMinuSet_C_MinusBtn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCM_PlusMinuSet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCM_PlusMinuSet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CM_PlusMinuSet.CM_PlusMinuSet_C");
		return ptr;
	}

}


