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
	 * 		Name   -> Function CM_Num_Item_Regi_Pop.CM_Num_Item_Regi_Pop_C.GetTaxText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMirTextBlock*                               txt                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Num_Item_Regi_Pop_C::GetTaxText(class UMirTextBlock** txt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Num_Item_Regi_Pop.CM_Num_Item_Regi_Pop_C.GetTaxText");
		
		UCM_Num_Item_Regi_Pop_C_GetTaxText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (txt != nullptr)
			*txt = params.txt;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Num_Item_Regi_Pop.CM_Num_Item_Regi_Pop_C.SetTitleText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TitleText                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCM_Num_Item_Regi_Pop_C::SetTitleText(const class FString& TitleText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Num_Item_Regi_Pop.CM_Num_Item_Regi_Pop_C.SetTitleText");
		
		UCM_Num_Item_Regi_Pop_C_SetTitleText_Params params {};
		params.TitleText = TitleText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Num_Item_Regi_Pop.CM_Num_Item_Regi_Pop_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FItem_Data                                  InItemData                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int64_t                                            InItemUID                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Num_Item_Regi_Pop_C::Setup(const struct FItem_Data& InItemData, int64_t InItemUID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Num_Item_Regi_Pop.CM_Num_Item_Regi_Pop_C.Setup");
		
		UCM_Num_Item_Regi_Pop_C_Setup_Params params {};
		params.InItemData = InItemData;
		params.InItemUID = InItemUID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Num_Item_Regi_Pop.CM_Num_Item_Regi_Pop_C.BndEvt__CM_Num_Item_Regi_Pop_K2Node_ComponentBoundEvent_2_PopClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_Num_Item_Regi_Pop_C::BndEvt__CM_Num_Item_Regi_Pop_K2Node_ComponentBoundEvent_2_PopClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Num_Item_Regi_Pop.CM_Num_Item_Regi_Pop_C.BndEvt__CM_Num_Item_Regi_Pop_K2Node_ComponentBoundEvent_2_PopClose__DelegateSignature");
		
		UCM_Num_Item_Regi_Pop_C_BndEvt__CM_Num_Item_Regi_Pop_K2Node_ComponentBoundEvent_2_PopClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Num_Item_Regi_Pop.CM_Num_Item_Regi_Pop_C.BndEvt__CM_NumPadEX_K2Node_ComponentBoundEvent_3_OnChangeCurrNumberValue_DP__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            currNumberValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Num_Item_Regi_Pop_C::BndEvt__CM_NumPadEX_K2Node_ComponentBoundEvent_3_OnChangeCurrNumberValue_DP__DelegateSignature(int32_t currNumberValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Num_Item_Regi_Pop.CM_Num_Item_Regi_Pop_C.BndEvt__CM_NumPadEX_K2Node_ComponentBoundEvent_3_OnChangeCurrNumberValue_DP__DelegateSignature");
		
		UCM_Num_Item_Regi_Pop_C_BndEvt__CM_NumPadEX_K2Node_ComponentBoundEvent_3_OnChangeCurrNumberValue_DP__DelegateSignature_Params params {};
		params.currNumberValue = currNumberValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Num_Item_Regi_Pop.CM_Num_Item_Regi_Pop_C.BndEvt__CM_Num_Item_Regi_Pop_K2Node_ComponentBoundEvent_0_PopNoBtn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_Num_Item_Regi_Pop_C::BndEvt__CM_Num_Item_Regi_Pop_K2Node_ComponentBoundEvent_0_PopNoBtn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Num_Item_Regi_Pop.CM_Num_Item_Regi_Pop_C.BndEvt__CM_Num_Item_Regi_Pop_K2Node_ComponentBoundEvent_0_PopNoBtn__DelegateSignature");
		
		UCM_Num_Item_Regi_Pop_C_BndEvt__CM_Num_Item_Regi_Pop_K2Node_ComponentBoundEvent_0_PopNoBtn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Num_Item_Regi_Pop.CM_Num_Item_Regi_Pop_C.BndEvt__CM_Num_Item_Regi_Pop_K2Node_ComponentBoundEvent_1_PopYesBtn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_Num_Item_Regi_Pop_C::BndEvt__CM_Num_Item_Regi_Pop_K2Node_ComponentBoundEvent_1_PopYesBtn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Num_Item_Regi_Pop.CM_Num_Item_Regi_Pop_C.BndEvt__CM_Num_Item_Regi_Pop_K2Node_ComponentBoundEvent_1_PopYesBtn__DelegateSignature");
		
		UCM_Num_Item_Regi_Pop_C_BndEvt__CM_Num_Item_Regi_Pop_K2Node_ComponentBoundEvent_1_PopYesBtn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Num_Item_Regi_Pop.CM_Num_Item_Regi_Pop_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_Num_Item_Regi_Pop_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Num_Item_Regi_Pop.CM_Num_Item_Regi_Pop_C.PreConstruct");
		
		UCM_Num_Item_Regi_Pop_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Num_Item_Regi_Pop.CM_Num_Item_Regi_Pop_C.ExecuteUbergraph_CM_Num_Item_Regi_Pop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Num_Item_Regi_Pop_C::ExecuteUbergraph_CM_Num_Item_Regi_Pop(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Num_Item_Regi_Pop.CM_Num_Item_Regi_Pop_C.ExecuteUbergraph_CM_Num_Item_Regi_Pop");
		
		UCM_Num_Item_Regi_Pop_C_ExecuteUbergraph_CM_Num_Item_Regi_Pop_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Num_Item_Regi_Pop.CM_Num_Item_Regi_Pop_C.ConfirmDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_Num_Item_Regi_Pop_C::ConfirmDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Num_Item_Regi_Pop.CM_Num_Item_Regi_Pop_C.ConfirmDispatcher__DelegateSignature");
		
		UCM_Num_Item_Regi_Pop_C_ConfirmDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Num_Item_Regi_Pop.CM_Num_Item_Regi_Pop_C.OnChangeCurrNumberValue__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Num_Item_Regi_Pop_C::OnChangeCurrNumberValue__DelegateSignature(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Num_Item_Regi_Pop.CM_Num_Item_Regi_Pop_C.OnChangeCurrNumberValue__DelegateSignature");
		
		UCM_Num_Item_Regi_Pop_C_OnChangeCurrNumberValue__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Num_Item_Regi_Pop.CM_Num_Item_Regi_Pop_C.CloseDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_Num_Item_Regi_Pop_C::CloseDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Num_Item_Regi_Pop.CM_Num_Item_Regi_Pop_C.CloseDispatcher__DelegateSignature");
		
		UCM_Num_Item_Regi_Pop_C_CloseDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Num_Item_Regi_Pop.CM_Num_Item_Regi_Pop_C.NumpadEventDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_Num_Item_Regi_Pop_C::NumpadEventDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Num_Item_Regi_Pop.CM_Num_Item_Regi_Pop_C.NumpadEventDispatcher__DelegateSignature");
		
		UCM_Num_Item_Regi_Pop_C_NumpadEventDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCM_Num_Item_Regi_Pop_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCM_Num_Item_Regi_Pop_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CM_Num_Item_Regi_Pop.CM_Num_Item_Regi_Pop_C");
		return ptr;
	}

}


