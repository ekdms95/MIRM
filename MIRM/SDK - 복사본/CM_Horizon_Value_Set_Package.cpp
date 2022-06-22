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
	 * 		Name   -> Function CM_Horizon_Value_Set.CM_Horizon_Value_Set_C.Value_Txt_Set
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMirTextBlock*                               Value_txt                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Horizon_Value_Set_C::Value_Txt_Set(class UMirTextBlock** Value_txt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Horizon_Value_Set.CM_Horizon_Value_Set_C.Value_Txt_Set");
		
		UCM_Horizon_Value_Set_C_Value_Txt_Set_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value_txt != nullptr)
			*Value_txt = params.Value_txt;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Horizon_Value_Set.CM_Horizon_Value_Set_C.GetNameTextBlock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMirTextBlock*                               Name                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Horizon_Value_Set_C::GetNameTextBlock(class UMirTextBlock** Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Horizon_Value_Set.CM_Horizon_Value_Set_C.GetNameTextBlock");
		
		UCM_Horizon_Value_Set_C_GetNameTextBlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Horizon_Value_Set.CM_Horizon_Value_Set_C.Horizon_Value_Set_Function
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ValueName_String_ID                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EHorizontalAlignment                               Set_Horizon_Align                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Horizon_Value_Set_C::Horizon_Value_Set_Function(int32_t ValueName_String_ID, EHorizontalAlignment Set_Horizon_Align)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Horizon_Value_Set.CM_Horizon_Value_Set_C.Horizon_Value_Set_Function");
		
		UCM_Horizon_Value_Set_C_Horizon_Value_Set_Function_Params params {};
		params.ValueName_String_ID = ValueName_String_ID;
		params.Set_Horizon_Align = Set_Horizon_Align;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Horizon_Value_Set.CM_Horizon_Value_Set_C.GetValueTextBlock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMirTextBlock*                               NewParam                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Horizon_Value_Set_C::GetValueTextBlock(class UMirTextBlock** NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Horizon_Value_Set.CM_Horizon_Value_Set_C.GetValueTextBlock");
		
		UCM_Horizon_Value_Set_C_GetValueTextBlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Horizon_Value_Set.CM_Horizon_Value_Set_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_Horizon_Value_Set_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Horizon_Value_Set.CM_Horizon_Value_Set_C.PreConstruct");
		
		UCM_Horizon_Value_Set_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Horizon_Value_Set.CM_Horizon_Value_Set_C.BndEvt__CM_Horizon_Value_Set_Guide_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_Horizon_Value_Set_C::BndEvt__CM_Horizon_Value_Set_Guide_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Horizon_Value_Set.CM_Horizon_Value_Set_C.BndEvt__CM_Horizon_Value_Set_Guide_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UCM_Horizon_Value_Set_C_BndEvt__CM_Horizon_Value_Set_Guide_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Horizon_Value_Set.CM_Horizon_Value_Set_C.BndEvt__CM_Horizon_Value_Set_Guide_btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_Horizon_Value_Set_C::BndEvt__CM_Horizon_Value_Set_Guide_btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Horizon_Value_Set.CM_Horizon_Value_Set_C.BndEvt__CM_Horizon_Value_Set_Guide_btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UCM_Horizon_Value_Set_C_BndEvt__CM_Horizon_Value_Set_Guide_btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Horizon_Value_Set.CM_Horizon_Value_Set_C.ExecuteUbergraph_CM_Horizon_Value_Set
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Horizon_Value_Set_C::ExecuteUbergraph_CM_Horizon_Value_Set(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Horizon_Value_Set.CM_Horizon_Value_Set_C.ExecuteUbergraph_CM_Horizon_Value_Set");
		
		UCM_Horizon_Value_Set_C_ExecuteUbergraph_CM_Horizon_Value_Set_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Horizon_Value_Set.CM_Horizon_Value_Set_C.Guide_Btn_Dispatch__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_Horizon_Value_Set_C::Guide_Btn_Dispatch__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Horizon_Value_Set.CM_Horizon_Value_Set_C.Guide_Btn_Dispatch__DelegateSignature");
		
		UCM_Horizon_Value_Set_C_Guide_Btn_Dispatch__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCM_Horizon_Value_Set_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCM_Horizon_Value_Set_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CM_Horizon_Value_Set.CM_Horizon_Value_Set_C");
		return ptr;
	}

}


