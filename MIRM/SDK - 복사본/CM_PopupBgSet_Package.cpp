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
	 * 		Name   -> Function CM_PopupBgSet.CM_PopupBgSet_C.SetHighlightCflagToDungeonMoveBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECFlag                                             CFlag                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_PopupBgSet_C::SetHighlightCflagToDungeonMoveBtn(ECFlag CFlag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_PopupBgSet.CM_PopupBgSet_C.SetHighlightCflagToDungeonMoveBtn");
		
		UCM_PopupBgSet_C_SetHighlightCflagToDungeonMoveBtn_Params params {};
		params.CFlag = CFlag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_PopupBgSet.CM_PopupBgSet_C.SetTitleText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_PopupBgSet_C::SetTitleText(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_PopupBgSet.CM_PopupBgSet_C.SetTitleText");
		
		UCM_PopupBgSet_C_SetTitleText_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_PopupBgSet.CM_PopupBgSet_C.Basic_Pop_Set_Function
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              W_size                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              H_size                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Title_String                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_PopupBgSet_C::Basic_Pop_Set_Function(float W_size, float H_size, int32_t Title_String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_PopupBgSet.CM_PopupBgSet_C.Basic_Pop_Set_Function");
		
		UCM_PopupBgSet_C_Basic_Pop_Set_Function_Params params {};
		params.W_size = W_size;
		params.H_size = H_size;
		params.Title_String = Title_String;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_PopupBgSet.CM_PopupBgSet_C.Black Bg Opacity Function
	 * 		Flags  -> ()
	 */
	void UCM_PopupBgSet_C::Black_Bg_Opacity_Function()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_PopupBgSet.CM_PopupBgSet_C.Black Bg Opacity Function");
		
		UCM_PopupBgSet_C_Black_Bg_Opacity_Function_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_PopupBgSet.CM_PopupBgSet_C.No_List_ToolTip_Function
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            No_Item_Tip_String                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               No_Item_Tip_On                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_PopupBgSet_C::No_List_ToolTip_Function(int32_t No_Item_Tip_String, bool No_Item_Tip_On)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_PopupBgSet.CM_PopupBgSet_C.No_List_ToolTip_Function");
		
		UCM_PopupBgSet_C_No_List_ToolTip_Function_Params params {};
		params.No_Item_Tip_String = No_Item_Tip_String;
		params.No_Item_Tip_On = No_Item_Tip_On;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_PopupBgSet.CM_PopupBgSet_C.SetCancleButtonText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_PopupBgSet_C::SetCancleButtonText(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_PopupBgSet.CM_PopupBgSet_C.SetCancleButtonText");
		
		UCM_PopupBgSet_C_SetCancleButtonText_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_PopupBgSet.CM_PopupBgSet_C.SetConfirmButtonText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_PopupBgSet_C::SetConfirmButtonText(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_PopupBgSet.CM_PopupBgSet_C.SetConfirmButtonText");
		
		UCM_PopupBgSet_C_SetConfirmButtonText_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_PopupBgSet.CM_PopupBgSet_C.PopOutAnimation
	 * 		Flags  -> ()
	 */
	void UCM_PopupBgSet_C::PopOutAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_PopupBgSet.CM_PopupBgSet_C.PopOutAnimation");
		
		UCM_PopupBgSet_C_PopOutAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_PopupBgSet.CM_PopupBgSet_C.PopInAnimation
	 * 		Flags  -> ()
	 */
	void UCM_PopupBgSet_C::PopInAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_PopupBgSet.CM_PopupBgSet_C.PopInAnimation");
		
		UCM_PopupBgSet_C_PopInAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_PopupBgSet.CM_PopupBgSet_C.BndEvt__PopNo_btn_K2Node_ComponentBoundEvent_0_ClickDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_PopupBgSet_C::BndEvt__PopNo_btn_K2Node_ComponentBoundEvent_0_ClickDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_PopupBgSet.CM_PopupBgSet_C.BndEvt__PopNo_btn_K2Node_ComponentBoundEvent_0_ClickDispatcher__DelegateSignature");
		
		UCM_PopupBgSet_C_BndEvt__PopNo_btn_K2Node_ComponentBoundEvent_0_ClickDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_PopupBgSet.CM_PopupBgSet_C.BndEvt__PopYes_btn_K2Node_ComponentBoundEvent_1_ClickDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_PopupBgSet_C::BndEvt__PopYes_btn_K2Node_ComponentBoundEvent_1_ClickDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_PopupBgSet.CM_PopupBgSet_C.BndEvt__PopYes_btn_K2Node_ComponentBoundEvent_1_ClickDispatcher__DelegateSignature");
		
		UCM_PopupBgSet_C_BndEvt__PopYes_btn_K2Node_ComponentBoundEvent_1_ClickDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_PopupBgSet.CM_PopupBgSet_C.BndEvt__Close_btn_K2Node_ComponentBoundEvent_2_Click__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_PopupBgSet_C::BndEvt__Close_btn_K2Node_ComponentBoundEvent_2_Click__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_PopupBgSet.CM_PopupBgSet_C.BndEvt__Close_btn_K2Node_ComponentBoundEvent_2_Click__DelegateSignature");
		
		UCM_PopupBgSet_C_BndEvt__Close_btn_K2Node_ComponentBoundEvent_2_Click__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_PopupBgSet.CM_PopupBgSet_C.OnSetPopupButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_PopupButtonType                                  PopupButtonType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_PopupBgSet_C::OnSetPopupButton(E_PopupButtonType PopupButtonType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_PopupBgSet.CM_PopupBgSet_C.OnSetPopupButton");
		
		UCM_PopupBgSet_C_OnSetPopupButton_Params params {};
		params.PopupButtonType = PopupButtonType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_PopupBgSet.CM_PopupBgSet_C.BndEvt__PopClose_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_PopupBgSet_C::BndEvt__PopClose_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_PopupBgSet.CM_PopupBgSet_C.BndEvt__PopClose_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UCM_PopupBgSet_C_BndEvt__PopClose_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_PopupBgSet.CM_PopupBgSet_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_PopupBgSet_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_PopupBgSet.CM_PopupBgSet_C.PreConstruct");
		
		UCM_PopupBgSet_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_PopupBgSet.CM_PopupBgSet_C.ExecuteUbergraph_CM_PopupBgSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_PopupBgSet_C::ExecuteUbergraph_CM_PopupBgSet(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_PopupBgSet.CM_PopupBgSet_C.ExecuteUbergraph_CM_PopupBgSet");
		
		UCM_PopupBgSet_C_ExecuteUbergraph_CM_PopupBgSet_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_PopupBgSet.CM_PopupBgSet_C.PopNoBtn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_PopupBgSet_C::PopNoBtn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_PopupBgSet.CM_PopupBgSet_C.PopNoBtn__DelegateSignature");
		
		UCM_PopupBgSet_C_PopNoBtn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_PopupBgSet.CM_PopupBgSet_C.PopYesBtn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_PopupBgSet_C::PopYesBtn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_PopupBgSet.CM_PopupBgSet_C.PopYesBtn__DelegateSignature");
		
		UCM_PopupBgSet_C_PopYesBtn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_PopupBgSet.CM_PopupBgSet_C.PopClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_PopupBgSet_C::PopClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_PopupBgSet.CM_PopupBgSet_C.PopClose__DelegateSignature");
		
		UCM_PopupBgSet_C_PopClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCM_PopupBgSet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCM_PopupBgSet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CM_PopupBgSet.CM_PopupBgSet_C");
		return ptr;
	}

}


