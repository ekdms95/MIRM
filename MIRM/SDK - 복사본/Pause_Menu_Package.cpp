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
	 * 		Name   -> Function Pause_Menu.Pause_Menu_C.OnMouseButtonDown_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UPause_Menu_C::OnMouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pause_Menu.Pause_Menu_C.OnMouseButtonDown_1");
		
		UPause_Menu_C_OnMouseButtonDown_1_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pause_Menu.Pause_Menu_C.CustomEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPause_Menu_C::CustomEvent(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pause_Menu.Pause_Menu_C.CustomEvent");
		
		UPause_Menu_C_CustomEvent_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pause_Menu.Pause_Menu_C.Construct
	 * 		Flags  -> ()
	 */
	void UPause_Menu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pause_Menu.Pause_Menu_C.Construct");
		
		UPause_Menu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pause_Menu.Pause_Menu_C.OnInitialized
	 * 		Flags  -> ()
	 */
	void UPause_Menu_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pause_Menu.Pause_Menu_C.OnInitialized");
		
		UPause_Menu_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pause_Menu.Pause_Menu_C.BndEvt__CM_PopupBgSet_K2Node_ComponentBoundEvent_0_PopClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPause_Menu_C::BndEvt__CM_PopupBgSet_K2Node_ComponentBoundEvent_0_PopClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pause_Menu.Pause_Menu_C.BndEvt__CM_PopupBgSet_K2Node_ComponentBoundEvent_0_PopClose__DelegateSignature");
		
		UPause_Menu_C_BndEvt__CM_PopupBgSet_K2Node_ComponentBoundEvent_0_PopClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pause_Menu.Pause_Menu_C.BndEvt__CM_PopupBgSet_K2Node_ComponentBoundEvent_1_PopYesBtn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPause_Menu_C::BndEvt__CM_PopupBgSet_K2Node_ComponentBoundEvent_1_PopYesBtn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pause_Menu.Pause_Menu_C.BndEvt__CM_PopupBgSet_K2Node_ComponentBoundEvent_1_PopYesBtn__DelegateSignature");
		
		UPause_Menu_C_BndEvt__CM_PopupBgSet_K2Node_ComponentBoundEvent_1_PopYesBtn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pause_Menu.Pause_Menu_C.BndEvt__CM_PopupBgSet_K2Node_ComponentBoundEvent_2_PopNoBtn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPause_Menu_C::BndEvt__CM_PopupBgSet_K2Node_ComponentBoundEvent_2_PopNoBtn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pause_Menu.Pause_Menu_C.BndEvt__CM_PopupBgSet_K2Node_ComponentBoundEvent_2_PopNoBtn__DelegateSignature");
		
		UPause_Menu_C_BndEvt__CM_PopupBgSet_K2Node_ComponentBoundEvent_2_PopNoBtn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pause_Menu.Pause_Menu_C.ExecuteUbergraph_Pause_Menu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPause_Menu_C::ExecuteUbergraph_Pause_Menu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pause_Menu.Pause_Menu_C.ExecuteUbergraph_Pause_Menu");
		
		UPause_Menu_C_ExecuteUbergraph_Pause_Menu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Pause_Menu.Pause_Menu_C.CloseWidgetDispatch__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPause_Menu_C::CloseWidgetDispatch__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pause_Menu.Pause_Menu_C.CloseWidgetDispatch__DelegateSignature");
		
		UPause_Menu_C_CloseWidgetDispatch__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPause_Menu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPause_Menu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Pause_Menu.Pause_Menu_C");
		return ptr;
	}

}


