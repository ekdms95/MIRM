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
	 * 		Name   -> Function CM_Checkbox_31.CM_Checkbox_30_C.Chec K State Img
	 * 		Flags  -> ()
	 */
	void UCM_Checkbox_30_C::Chec_K_State_Img()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Checkbox_31.CM_Checkbox_30_C.Chec K State Img");
		
		UCM_Checkbox_30_C_Chec_K_State_Img_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Checkbox_31.CM_Checkbox_30_C.SetTextID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            textID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Checkbox_30_C::SetTextID(int32_t textID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Checkbox_31.CM_Checkbox_30_C.SetTextID");
		
		UCM_Checkbox_30_C_SetTextID_Params params {};
		params.textID = textID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Checkbox_31.CM_Checkbox_30_C.GetMirCheckBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMirCheckBox*                                Param                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Checkbox_30_C::GetMirCheckBox(class UMirCheckBox** Param)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Checkbox_31.CM_Checkbox_30_C.GetMirCheckBox");
		
		UCM_Checkbox_30_C_GetMirCheckBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Param != nullptr)
			*Param = params.Param;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Checkbox_31.CM_Checkbox_30_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_Checkbox_30_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Checkbox_31.CM_Checkbox_30_C.PreConstruct");
		
		UCM_Checkbox_30_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Checkbox_31.CM_Checkbox_30_C.Construct
	 * 		Flags  -> ()
	 */
	void UCM_Checkbox_30_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Checkbox_31.CM_Checkbox_30_C.Construct");
		
		UCM_Checkbox_30_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Checkbox_31.CM_Checkbox_30_C.BndEvt__MirCheckBox_0_K2Node_ComponentBoundEvent_0_OnMirCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_Checkbox_30_C::BndEvt__MirCheckBox_0_K2Node_ComponentBoundEvent_0_OnMirCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Checkbox_31.CM_Checkbox_30_C.BndEvt__MirCheckBox_0_K2Node_ComponentBoundEvent_0_OnMirCheckBoxComponentStateChanged__DelegateSignature");
		
		UCM_Checkbox_30_C_BndEvt__MirCheckBox_0_K2Node_ComponentBoundEvent_0_OnMirCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Checkbox_31.CM_Checkbox_30_C.OnChangeCflag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCFlagValues                                CFlagValues                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UCM_Checkbox_30_C::OnChangeCflag(const struct FCFlagValues& CFlagValues)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Checkbox_31.CM_Checkbox_30_C.OnChangeCflag");
		
		UCM_Checkbox_30_C_OnChangeCflag_Params params {};
		params.CFlagValues = CFlagValues;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Checkbox_31.CM_Checkbox_30_C.OnInitailizeWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Parameters                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UCM_Checkbox_30_C::OnInitailizeWidget(const class FString& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Checkbox_31.CM_Checkbox_30_C.OnInitailizeWidget");
		
		UCM_Checkbox_30_C_OnInitailizeWidget_Params params {};
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Checkbox_31.CM_Checkbox_30_C.OnMouseEnter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UCM_Checkbox_30_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Checkbox_31.CM_Checkbox_30_C.OnMouseEnter");
		
		UCM_Checkbox_30_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Checkbox_31.CM_Checkbox_30_C.OnMouseLeave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UCM_Checkbox_30_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Checkbox_31.CM_Checkbox_30_C.OnMouseLeave");
		
		UCM_Checkbox_30_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Checkbox_31.CM_Checkbox_30_C.RefreshCheckStateImage
	 * 		Flags  -> ()
	 */
	void UCM_Checkbox_30_C::RefreshCheckStateImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Checkbox_31.CM_Checkbox_30_C.RefreshCheckStateImage");
		
		UCM_Checkbox_30_C_RefreshCheckStateImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Checkbox_31.CM_Checkbox_30_C.ExecuteUbergraph_CM_Checkbox_31
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Checkbox_30_C::ExecuteUbergraph_CM_Checkbox_31(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Checkbox_31.CM_Checkbox_30_C.ExecuteUbergraph_CM_Checkbox_31");
		
		UCM_Checkbox_30_C_ExecuteUbergraph_CM_Checkbox_31_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Checkbox_31.CM_Checkbox_30_C.OnCheckChange__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChecked                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_Checkbox_30_C::OnCheckChange__DelegateSignature(bool IsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Checkbox_31.CM_Checkbox_30_C.OnCheckChange__DelegateSignature");
		
		UCM_Checkbox_30_C_OnCheckChange__DelegateSignature_Params params {};
		params.IsChecked = IsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCM_Checkbox_30_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCM_Checkbox_30_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CM_Checkbox_31.CM_Checkbox_30_C");
		return ptr;
	}

}


