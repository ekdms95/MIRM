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
	 * 		Name   -> Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.Finger_position
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Finger_Position                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   Arrow_Position                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Arrow_Angle                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Finger_Angle                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPage_SystemTutorialGuide_C::Finger_position(const struct FVector2D& Finger_Position, const struct FVector2D& Arrow_Position, float Arrow_Angle, float Finger_Angle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.Finger_position");
		
		UPage_SystemTutorialGuide_C_Finger_position_Params params {};
		params.Finger_Position = Finger_Position;
		params.Arrow_Position = Arrow_Position;
		params.Arrow_Angle = Arrow_Angle;
		params.Finger_Angle = Finger_Angle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.Finger_Int
	 * 		Flags  -> ()
	 */
	void UPage_SystemTutorialGuide_C::Finger_Int()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.Finger_Int");
		
		UPage_SystemTutorialGuide_C_Finger_Int_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.PlayHighlightWidgetAni
	 * 		Flags  -> ()
	 */
	void UPage_SystemTutorialGuide_C::PlayHighlightWidgetAni()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.PlayHighlightWidgetAni");
		
		UPage_SystemTutorialGuide_C_PlayHighlightWidgetAni_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.BndEvt__RectHighlight_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPage_SystemTutorialGuide_C::BndEvt__RectHighlight_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.BndEvt__RectHighlight_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UPage_SystemTutorialGuide_C_BndEvt__RectHighlight_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.BndEvt__CM_Btn_Close_K2Node_ComponentBoundEvent_4_Click__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPage_SystemTutorialGuide_C::BndEvt__CM_Btn_Close_K2Node_ComponentBoundEvent_4_Click__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.BndEvt__CM_Btn_Close_K2Node_ComponentBoundEvent_4_Click__DelegateSignature");
		
		UPage_SystemTutorialGuide_C_BndEvt__CM_Btn_Close_K2Node_ComponentBoundEvent_4_Click__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.ResetFingerImage
	 * 		Flags  -> ()
	 */
	void UPage_SystemTutorialGuide_C::ResetFingerImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.ResetFingerImage");
		
		UPage_SystemTutorialGuide_C_ResetFingerImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.PlayTouchAndDragAni
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_TOUCH_ANIMATION                                  TouchAnimationType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPage_SystemTutorialGuide_C::PlayTouchAndDragAni(E_TOUCH_ANIMATION TouchAnimationType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.PlayTouchAndDragAni");
		
		UPage_SystemTutorialGuide_C_PlayTouchAndDragAni_Params params {};
		params.TouchAnimationType = TouchAnimationType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.BndEvt__CM_Btn_4_K2Node_ComponentBoundEvent_5_ClickDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPage_SystemTutorialGuide_C::BndEvt__CM_Btn_4_K2Node_ComponentBoundEvent_5_ClickDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.BndEvt__CM_Btn_4_K2Node_ComponentBoundEvent_5_ClickDispatcher__DelegateSignature");
		
		UPage_SystemTutorialGuide_C_BndEvt__CM_Btn_4_K2Node_ComponentBoundEvent_5_ClickDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.BndEvt__CM_Btn_1_K2Node_ComponentBoundEvent_8_ClickDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPage_SystemTutorialGuide_C::BndEvt__CM_Btn_1_K2Node_ComponentBoundEvent_8_ClickDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.BndEvt__CM_Btn_1_K2Node_ComponentBoundEvent_8_ClickDispatcher__DelegateSignature");
		
		UPage_SystemTutorialGuide_C_BndEvt__CM_Btn_1_K2Node_ComponentBoundEvent_8_ClickDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.BndEvt__Right_K2Node_ComponentBoundEvent_9_ClickDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPage_SystemTutorialGuide_C::BndEvt__Right_K2Node_ComponentBoundEvent_9_ClickDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.BndEvt__Right_K2Node_ComponentBoundEvent_9_ClickDispatcher__DelegateSignature");
		
		UPage_SystemTutorialGuide_C_BndEvt__Right_K2Node_ComponentBoundEvent_9_ClickDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.WidgetAnimationEvt_Drag_Up_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UPage_SystemTutorialGuide_C::WidgetAnimationEvt_Drag_Up_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.WidgetAnimationEvt_Drag_Up_K2Node_WidgetAnimationEvent_1");
		
		UPage_SystemTutorialGuide_C_WidgetAnimationEvt_Drag_Up_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.BndEvt__Basic_K2Node_ComponentBoundEvent_10_ClickDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPage_SystemTutorialGuide_C::BndEvt__Basic_K2Node_ComponentBoundEvent_10_ClickDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.BndEvt__Basic_K2Node_ComponentBoundEvent_10_ClickDispatcher__DelegateSignature");
		
		UPage_SystemTutorialGuide_C_BndEvt__Basic_K2Node_ComponentBoundEvent_10_ClickDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.BndEvt__MirButton_74_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPage_SystemTutorialGuide_C::BndEvt__MirButton_74_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.BndEvt__MirButton_74_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");
		
		UPage_SystemTutorialGuide_C_BndEvt__MirButton_74_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.BndEvt__Down_K2Node_ComponentBoundEvent_11_ClickDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPage_SystemTutorialGuide_C::BndEvt__Down_K2Node_ComponentBoundEvent_11_ClickDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.BndEvt__Down_K2Node_ComponentBoundEvent_11_ClickDispatcher__DelegateSignature");
		
		UPage_SystemTutorialGuide_C_BndEvt__Down_K2Node_ComponentBoundEvent_11_ClickDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.ClearRenderTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                BaseColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPage_SystemTutorialGuide_C::ClearRenderTarget(const struct FLinearColor& BaseColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.ClearRenderTarget");
		
		UPage_SystemTutorialGuide_C_ClearRenderTarget_Params params {};
		params.BaseColor = BaseColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPage_SystemTutorialGuide_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.PreConstruct");
		
		UPage_SystemTutorialGuide_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.BndEvt__Skip_Button_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPage_SystemTutorialGuide_C::BndEvt__Skip_Button_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.BndEvt__Skip_Button_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
		UPage_SystemTutorialGuide_C_BndEvt__Skip_Button_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.Construct
	 * 		Flags  -> ()
	 */
	void UPage_SystemTutorialGuide_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.Construct");
		
		UPage_SystemTutorialGuide_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.BndEvt__Tuto_PageArrow_Btn_K2Node_ComponentBoundEvent_1_NextBtn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPage_SystemTutorialGuide_C::BndEvt__Tuto_PageArrow_Btn_K2Node_ComponentBoundEvent_1_NextBtn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.BndEvt__Tuto_PageArrow_Btn_K2Node_ComponentBoundEvent_1_NextBtn__DelegateSignature");
		
		UPage_SystemTutorialGuide_C_BndEvt__Tuto_PageArrow_Btn_K2Node_ComponentBoundEvent_1_NextBtn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.BndEvt__Tuto_PageArrow_Btn_K2Node_ComponentBoundEvent_5_PrevBtn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPage_SystemTutorialGuide_C::BndEvt__Tuto_PageArrow_Btn_K2Node_ComponentBoundEvent_5_PrevBtn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.BndEvt__Tuto_PageArrow_Btn_K2Node_ComponentBoundEvent_5_PrevBtn__DelegateSignature");
		
		UPage_SystemTutorialGuide_C_BndEvt__Tuto_PageArrow_Btn_K2Node_ComponentBoundEvent_5_PrevBtn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.ExecuteUbergraph_Page_SystemTutorialGuide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPage_SystemTutorialGuide_C::ExecuteUbergraph_Page_SystemTutorialGuide(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_SystemTutorialGuide.Page_SystemTutorialGuide_C.ExecuteUbergraph_Page_SystemTutorialGuide");
		
		UPage_SystemTutorialGuide_C_ExecuteUbergraph_Page_SystemTutorialGuide_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPage_SystemTutorialGuide_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPage_SystemTutorialGuide_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Page_SystemTutorialGuide.Page_SystemTutorialGuide_C");
		return ptr;
	}

}


