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
	 * 		Name   -> Function CM_ItemBar_Array.CM_ItemBar_Array_C.OverImgFunc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isOver_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_ItemBar_Array_C::OverImgFunc(bool isOver_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_ItemBar_Array.CM_ItemBar_Array_C.OverImgFunc");
		
		UCM_ItemBar_Array_C_OverImgFunc_Params params {};
		params.isOver_ = isOver_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_ItemBar_Array.CM_ItemBar_Array_C.ShowSelectedMark
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsShow                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_ItemBar_Array_C::ShowSelectedMark(bool bIsShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_ItemBar_Array.CM_ItemBar_Array_C.ShowSelectedMark");
		
		UCM_ItemBar_Array_C_ShowSelectedMark_Params params {};
		params.bIsShow = bIsShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_ItemBar_Array.CM_ItemBar_Array_C.SpacerW
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Input_Index                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<float>                                      Input_Wsize_Float                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UCM_ItemBar_Array_C::SpacerW(int32_t Input_Index, TArray<float>* Input_Wsize_Float)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_ItemBar_Array.CM_ItemBar_Array_C.SpacerW");
		
		UCM_ItemBar_Array_C_SpacerW_Params params {};
		params.Input_Index = Input_Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Input_Wsize_Float != nullptr)
			*Input_Wsize_Float = params.Input_Wsize_Float;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_ItemBar_Array.CM_ItemBar_Array_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_ItemBar_Array_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_ItemBar_Array.CM_ItemBar_Array_C.PreConstruct");
		
		UCM_ItemBar_Array_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_ItemBar_Array.CM_ItemBar_Array_C.BndEvt__ItmBarArray_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_ItemBar_Array_C::BndEvt__ItmBarArray_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_ItemBar_Array.CM_ItemBar_Array_C.BndEvt__ItmBarArray_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UCM_ItemBar_Array_C_BndEvt__ItmBarArray_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_ItemBar_Array.CM_ItemBar_Array_C.OnMouseEnter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UCM_ItemBar_Array_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_ItemBar_Array.CM_ItemBar_Array_C.OnMouseEnter");
		
		UCM_ItemBar_Array_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_ItemBar_Array.CM_ItemBar_Array_C.OnMouseLeave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UCM_ItemBar_Array_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_ItemBar_Array.CM_ItemBar_Array_C.OnMouseLeave");
		
		UCM_ItemBar_Array_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_ItemBar_Array.CM_ItemBar_Array_C.ExecuteUbergraph_CM_ItemBar_Array
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_ItemBar_Array_C::ExecuteUbergraph_CM_ItemBar_Array(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_ItemBar_Array.CM_ItemBar_Array_C.ExecuteUbergraph_CM_ItemBar_Array");
		
		UCM_ItemBar_Array_C_ExecuteUbergraph_CM_ItemBar_Array_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_ItemBar_Array.CM_ItemBar_Array_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_ItemBar_Array_C::OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_ItemBar_Array.CM_ItemBar_Array_C.OnClicked__DelegateSignature");
		
		UCM_ItemBar_Array_C_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCM_ItemBar_Array_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCM_ItemBar_Array_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CM_ItemBar_Array.CM_ItemBar_Array_C");
		return ptr;
	}

}


