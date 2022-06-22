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
	 * 		Name   -> Function Hud_PkStatus_Element.Hud_PkStatus_Element_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_PkStatus_Element_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_PkStatus_Element.Hud_PkStatus_Element_C.PreConstruct");
		
		UHud_PkStatus_Element_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_PkStatus_Element.Hud_PkStatus_Element_C.OnSetPkStatusProfile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_PK_TYPE                                          pk_type                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               isSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_PkStatus_Element_C::OnSetPkStatusProfile(E_PK_TYPE pk_type, bool isSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_PkStatus_Element.Hud_PkStatus_Element_C.OnSetPkStatusProfile");
		
		UHud_PkStatus_Element_C_OnSetPkStatusProfile_Params params {};
		params.pk_type = pk_type;
		params.isSelected = isSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_PkStatus_Element.Hud_PkStatus_Element_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_PkStatus_Element_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_PkStatus_Element.Hud_PkStatus_Element_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature");
		
		UHud_PkStatus_Element_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_PkStatus_Element.Hud_PkStatus_Element_C.BndEvt__PkElemen_Tabcan_K2Node_ComponentBoundEvent_0_OnTabCanvasStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_PkStatus_Element_C::BndEvt__PkElemen_Tabcan_K2Node_ComponentBoundEvent_0_OnTabCanvasStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_PkStatus_Element.Hud_PkStatus_Element_C.BndEvt__PkElemen_Tabcan_K2Node_ComponentBoundEvent_0_OnTabCanvasStateChanged__DelegateSignature");
		
		UHud_PkStatus_Element_C_BndEvt__PkElemen_Tabcan_K2Node_ComponentBoundEvent_0_OnTabCanvasStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_PkStatus_Element.Hud_PkStatus_Element_C.BndEvt__Hud_PkStatus_Element_PkElemen_btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_PkStatus_Element_C::BndEvt__Hud_PkStatus_Element_PkElemen_btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_PkStatus_Element.Hud_PkStatus_Element_C.BndEvt__Hud_PkStatus_Element_PkElemen_btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UHud_PkStatus_Element_C_BndEvt__Hud_PkStatus_Element_PkElemen_btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_PkStatus_Element.Hud_PkStatus_Element_C.ExecuteUbergraph_Hud_PkStatus_Element
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_PkStatus_Element_C::ExecuteUbergraph_Hud_PkStatus_Element(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_PkStatus_Element.Hud_PkStatus_Element_C.ExecuteUbergraph_Hud_PkStatus_Element");
		
		UHud_PkStatus_Element_C_ExecuteUbergraph_Hud_PkStatus_Element_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHud_PkStatus_Element_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHud_PkStatus_Element_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Hud_PkStatus_Element.Hud_PkStatus_Element_C");
		return ptr;
	}

}


