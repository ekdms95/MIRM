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
	 * 		Name   -> Function Hud_ScanBox_Elem.Hud_ScanBox_Elem_C.Construct
	 * 		Flags  -> ()
	 */
	void UHud_ScanBox_Elem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_ScanBox_Elem.Hud_ScanBox_Elem_C.Construct");
		
		UHud_ScanBox_Elem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_ScanBox_Elem.Hud_ScanBox_Elem_C.BndEvt__Hud_ScanBox_Elem_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_ScanBox_Elem_C::BndEvt__Hud_ScanBox_Elem_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_ScanBox_Elem.Hud_ScanBox_Elem_C.BndEvt__Hud_ScanBox_Elem_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UHud_ScanBox_Elem_C_BndEvt__Hud_ScanBox_Elem_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_ScanBox_Elem.Hud_ScanBox_Elem_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_ScanBox_Elem_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_ScanBox_Elem.Hud_ScanBox_Elem_C.PreConstruct");
		
		UHud_ScanBox_Elem_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_ScanBox_Elem.Hud_ScanBox_Elem_C.OnSetIconMonster
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            customGrade                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_ScanBox_Elem_C::OnSetIconMonster(int32_t customGrade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_ScanBox_Elem.Hud_ScanBox_Elem_C.OnSetIconMonster");
		
		UHud_ScanBox_Elem_C_OnSetIconMonster_Params params {};
		params.customGrade = customGrade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_ScanBox_Elem.Hud_ScanBox_Elem_C.OnSetIconUser
	 * 		Flags  -> ()
	 */
	void UHud_ScanBox_Elem_C::OnSetIconUser()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_ScanBox_Elem.Hud_ScanBox_Elem_C.OnSetIconUser");
		
		UHud_ScanBox_Elem_C_OnSetIconUser_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_ScanBox_Elem.Hud_ScanBox_Elem_C.ExecuteUbergraph_Hud_ScanBox_Elem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_ScanBox_Elem_C::ExecuteUbergraph_Hud_ScanBox_Elem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_ScanBox_Elem.Hud_ScanBox_Elem_C.ExecuteUbergraph_Hud_ScanBox_Elem");
		
		UHud_ScanBox_Elem_C_ExecuteUbergraph_Hud_ScanBox_Elem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHud_ScanBox_Elem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHud_ScanBox_Elem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Hud_ScanBox_Elem.Hud_ScanBox_Elem_C");
		return ptr;
	}

}


