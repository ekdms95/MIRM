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
	 * 		Name   -> Function CM_ToolTip.CM_ToolTip_C.SetCloseButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isShow                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_ToolTip_C::SetCloseButton(bool isShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_ToolTip.CM_ToolTip_C.SetCloseButton");
		
		UCM_ToolTip_C_SetCloseButton_Params params {};
		params.isShow = isShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_ToolTip.CM_ToolTip_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_ToolTip_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_ToolTip.CM_ToolTip_C.PreConstruct");
		
		UCM_ToolTip_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_ToolTip.CM_ToolTip_C.BndEvt__CM_ToolTip_Tooltip_close_btn_K2Node_ComponentBoundEvent_0_Click__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_ToolTip_C::BndEvt__CM_ToolTip_Tooltip_close_btn_K2Node_ComponentBoundEvent_0_Click__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_ToolTip.CM_ToolTip_C.BndEvt__CM_ToolTip_Tooltip_close_btn_K2Node_ComponentBoundEvent_0_Click__DelegateSignature");
		
		UCM_ToolTip_C_BndEvt__CM_ToolTip_Tooltip_close_btn_K2Node_ComponentBoundEvent_0_Click__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_ToolTip.CM_ToolTip_C.ExecuteUbergraph_CM_ToolTip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_ToolTip_C::ExecuteUbergraph_CM_ToolTip(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_ToolTip.CM_ToolTip_C.ExecuteUbergraph_CM_ToolTip");
		
		UCM_ToolTip_C_ExecuteUbergraph_CM_ToolTip_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_ToolTip.CM_ToolTip_C.CloseDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_ToolTip_C::CloseDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_ToolTip.CM_ToolTip_C.CloseDispatcher__DelegateSignature");
		
		UCM_ToolTip_C_CloseDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCM_ToolTip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCM_ToolTip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CM_ToolTip.CM_ToolTip_C");
		return ptr;
	}

}


