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
	 * 		Name   -> Function Hud_ScanBox.Hud_ScanBox_C.Construct
	 * 		Flags  -> ()
	 */
	void UHud_ScanBox_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_ScanBox.Hud_ScanBox_C.Construct");
		
		UHud_ScanBox_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_ScanBox.Hud_ScanBox_C.OnClickCloseBtn
	 * 		Flags  -> ()
	 */
	void UHud_ScanBox_C::OnClickCloseBtn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_ScanBox.Hud_ScanBox_C.OnClickCloseBtn");
		
		UHud_ScanBox_C_OnClickCloseBtn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_ScanBox.Hud_ScanBox_C.OnInitailizeWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Parameters                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UHud_ScanBox_C::OnInitailizeWidget(const class FString& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_ScanBox.Hud_ScanBox_C.OnInitailizeWidget");
		
		UHud_ScanBox_C_OnInitailizeWidget_Params params {};
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_ScanBox.Hud_ScanBox_C.BndEvt__Hud_ScanBox_AutoToggle_Switch_K2Node_ComponentBoundEvent_1_OnChangedToggle__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_ScanBox_C::BndEvt__Hud_ScanBox_AutoToggle_Switch_K2Node_ComponentBoundEvent_1_OnChangedToggle__DelegateSignature(bool IsOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_ScanBox.Hud_ScanBox_C.BndEvt__Hud_ScanBox_AutoToggle_Switch_K2Node_ComponentBoundEvent_1_OnChangedToggle__DelegateSignature");
		
		UHud_ScanBox_C_BndEvt__Hud_ScanBox_AutoToggle_Switch_K2Node_ComponentBoundEvent_1_OnChangedToggle__DelegateSignature_Params params {};
		params.IsOn = IsOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_ScanBox.Hud_ScanBox_C.BndEvt__Hud_ScanBox_Option_btn_K2Node_ComponentBoundEvent_0_Option_ClicK_Dispatch__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_ScanBox_C::BndEvt__Hud_ScanBox_Option_btn_K2Node_ComponentBoundEvent_0_Option_ClicK_Dispatch__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_ScanBox.Hud_ScanBox_C.BndEvt__Hud_ScanBox_Option_btn_K2Node_ComponentBoundEvent_0_Option_ClicK_Dispatch__DelegateSignature");
		
		UHud_ScanBox_C_BndEvt__Hud_ScanBox_Option_btn_K2Node_ComponentBoundEvent_0_Option_ClicK_Dispatch__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_ScanBox.Hud_ScanBox_C.BndEvt__Hud_ScanBox_Trash_btn_K2Node_ComponentBoundEvent_2_OnChangeState__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_ScanBox_C::BndEvt__Hud_ScanBox_Trash_btn_K2Node_ComponentBoundEvent_2_OnChangeState__DelegateSignature(bool IsOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_ScanBox.Hud_ScanBox_C.BndEvt__Hud_ScanBox_Trash_btn_K2Node_ComponentBoundEvent_2_OnChangeState__DelegateSignature");
		
		UHud_ScanBox_C_BndEvt__Hud_ScanBox_Trash_btn_K2Node_ComponentBoundEvent_2_OnChangeState__DelegateSignature_Params params {};
		params.IsOn = IsOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_ScanBox.Hud_ScanBox_C.ExecuteUbergraph_Hud_ScanBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_ScanBox_C::ExecuteUbergraph_Hud_ScanBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_ScanBox.Hud_ScanBox_C.ExecuteUbergraph_Hud_ScanBox");
		
		UHud_ScanBox_C_ExecuteUbergraph_Hud_ScanBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_ScanBox.Hud_ScanBox_C.OnClickCloseBtnDisp__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_ScanBox_C::OnClickCloseBtnDisp__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_ScanBox.Hud_ScanBox_C.OnClickCloseBtnDisp__DelegateSignature");
		
		UHud_ScanBox_C_OnClickCloseBtnDisp__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHud_ScanBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHud_ScanBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Hud_ScanBox.Hud_ScanBox_C");
		return ptr;
	}

}


