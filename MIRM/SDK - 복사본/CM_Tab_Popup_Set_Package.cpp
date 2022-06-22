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
	 * 		Name   -> Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.SetCloseButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_Tab_Popup_Set_C::SetCloseButton(bool NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.SetCloseButton");
		
		UCM_Tab_Popup_Set_C_SetCloseButton_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.DisableButton
	 * 		Flags  -> ()
	 */
	void UCM_Tab_Popup_Set_C::DisableButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.DisableButton");
		
		UCM_Tab_Popup_Set_C_DisableButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.Tab_Visibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Tab_Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Tab_Popup_Set_C::Tab_Visibility(int32_t Tab_Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.Tab_Visibility");
		
		UCM_Tab_Popup_Set_C_Tab_Visibility_Params params {};
		params.Tab_Count = Tab_Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.SetTabArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UWidget*>                             NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void UCM_Tab_Popup_Set_C::SetTabArray(TArray<class UWidget*>* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.SetTabArray");
		
		UCM_Tab_Popup_Set_C_SetTabArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.SetSelectTab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Tab_Popup_Set_C::SetSelectTab(class UWidget* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.SetSelectTab");
		
		UCM_Tab_Popup_Set_C_SetSelectTab_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.SetTitleText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Tab_Popup_Set_C::SetTitleText(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.SetTitleText");
		
		UCM_Tab_Popup_Set_C_SetTitleText_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.SetCancleButtonText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Tab_Popup_Set_C::SetCancleButtonText(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.SetCancleButtonText");
		
		UCM_Tab_Popup_Set_C_SetCancleButtonText_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.SetConfirmButtonText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Tab_Popup_Set_C::SetConfirmButtonText(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.SetConfirmButtonText");
		
		UCM_Tab_Popup_Set_C_SetConfirmButtonText_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.PopOutAnimation
	 * 		Flags  -> ()
	 */
	void UCM_Tab_Popup_Set_C::PopOutAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.PopOutAnimation");
		
		UCM_Tab_Popup_Set_C_PopOutAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.PopInAnimation
	 * 		Flags  -> ()
	 */
	void UCM_Tab_Popup_Set_C::PopInAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.PopInAnimation");
		
		UCM_Tab_Popup_Set_C_PopInAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.BndEvt__PopClose_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_Tab_Popup_Set_C::BndEvt__PopClose_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.BndEvt__PopClose_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UCM_Tab_Popup_Set_C_BndEvt__PopClose_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.BndEvt__PopNo_btn_K2Node_ComponentBoundEvent_0_ClickDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_Tab_Popup_Set_C::BndEvt__PopNo_btn_K2Node_ComponentBoundEvent_0_ClickDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.BndEvt__PopNo_btn_K2Node_ComponentBoundEvent_0_ClickDispatcher__DelegateSignature");
		
		UCM_Tab_Popup_Set_C_BndEvt__PopNo_btn_K2Node_ComponentBoundEvent_0_ClickDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.BndEvt__PopYes_btn_K2Node_ComponentBoundEvent_1_ClickDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_Tab_Popup_Set_C::BndEvt__PopYes_btn_K2Node_ComponentBoundEvent_1_ClickDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.BndEvt__PopYes_btn_K2Node_ComponentBoundEvent_1_ClickDispatcher__DelegateSignature");
		
		UCM_Tab_Popup_Set_C_BndEvt__PopYes_btn_K2Node_ComponentBoundEvent_1_ClickDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.BndEvt__Close_btn_K2Node_ComponentBoundEvent_2_Click__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_Tab_Popup_Set_C::BndEvt__Close_btn_K2Node_ComponentBoundEvent_2_Click__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.BndEvt__Close_btn_K2Node_ComponentBoundEvent_2_Click__DelegateSignature");
		
		UCM_Tab_Popup_Set_C_BndEvt__Close_btn_K2Node_ComponentBoundEvent_2_Click__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_Tab_Popup_Set_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.PreConstruct");
		
		UCM_Tab_Popup_Set_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.ExecuteUbergraph_CM_Tab_Popup_Set
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Tab_Popup_Set_C::ExecuteUbergraph_CM_Tab_Popup_Set(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.ExecuteUbergraph_CM_Tab_Popup_Set");
		
		UCM_Tab_Popup_Set_C_ExecuteUbergraph_CM_Tab_Popup_Set_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.PopNoBtn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_Tab_Popup_Set_C::PopNoBtn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.PopNoBtn__DelegateSignature");
		
		UCM_Tab_Popup_Set_C_PopNoBtn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.PopYesBtn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_Tab_Popup_Set_C::PopYesBtn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.PopYesBtn__DelegateSignature");
		
		UCM_Tab_Popup_Set_C_PopYesBtn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.PopClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_Tab_Popup_Set_C::PopClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Tab_Popup_Set.CM_Tab_Popup_Set_C.PopClose__DelegateSignature");
		
		UCM_Tab_Popup_Set_C_PopClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCM_Tab_Popup_Set_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCM_Tab_Popup_Set_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CM_Tab_Popup_Set.CM_Tab_Popup_Set_C");
		return ptr;
	}

}


