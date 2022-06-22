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
	 * 		Name   -> Function SK_KyungrakSkill_Icon.SK_KyungrakSkill_Icon_C.OnMouseMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply USK_KyungrakSkill_Icon_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_KyungrakSkill_Icon.SK_KyungrakSkill_Icon_C.OnMouseMove");
		
		USK_KyungrakSkill_Icon_C_OnMouseMove_Params params {};
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
	 * 		Name   -> Function SK_KyungrakSkill_Icon.SK_KyungrakSkill_Icon_C.OnMouseButtonUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply USK_KyungrakSkill_Icon_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_KyungrakSkill_Icon.SK_KyungrakSkill_Icon_C.OnMouseButtonUp");
		
		USK_KyungrakSkill_Icon_C_OnMouseButtonUp_Params params {};
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
	 * 		Name   -> Function SK_KyungrakSkill_Icon.SK_KyungrakSkill_Icon_C.OnMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply USK_KyungrakSkill_Icon_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_KyungrakSkill_Icon.SK_KyungrakSkill_Icon_C.OnMouseButtonDown");
		
		USK_KyungrakSkill_Icon_C_OnMouseButtonDown_Params params {};
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
	 * 		Name   -> Function SK_KyungrakSkill_Icon.SK_KyungrakSkill_Icon_C.PlaySkillSlotChangeProduct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            arrIdx                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool USK_KyungrakSkill_Icon_C::PlaySkillSlotChangeProduct(int32_t arrIdx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_KyungrakSkill_Icon.SK_KyungrakSkill_Icon_C.PlaySkillSlotChangeProduct");
		
		USK_KyungrakSkill_Icon_C_PlaySkillSlotChangeProduct_Params params {};
		params.arrIdx = arrIdx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SK_KyungrakSkill_Icon.SK_KyungrakSkill_Icon_C.OnFearState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFear                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USK_KyungrakSkill_Icon_C::OnFearState(bool IsFear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_KyungrakSkill_Icon.SK_KyungrakSkill_Icon_C.OnFearState");
		
		USK_KyungrakSkill_Icon_C_OnFearState_Params params {};
		params.IsFear = IsFear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SK_KyungrakSkill_Icon.SK_KyungrakSkill_Icon_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USK_KyungrakSkill_Icon_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_KyungrakSkill_Icon.SK_KyungrakSkill_Icon_C.Tick");
		
		USK_KyungrakSkill_Icon_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SK_KyungrakSkill_Icon.SK_KyungrakSkill_Icon_C.KeyPressed
	 * 		Flags  -> ()
	 */
	void USK_KyungrakSkill_Icon_C::KeyPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_KyungrakSkill_Icon.SK_KyungrakSkill_Icon_C.KeyPressed");
		
		USK_KyungrakSkill_Icon_C_KeyPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SK_KyungrakSkill_Icon.SK_KyungrakSkill_Icon_C.Next_Skill_Ani_Finished
	 * 		Flags  -> ()
	 */
	void USK_KyungrakSkill_Icon_C::Next_Skill_Ani_Finished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_KyungrakSkill_Icon.SK_KyungrakSkill_Icon_C.Next_Skill_Ani_Finished");
		
		USK_KyungrakSkill_Icon_C_Next_Skill_Ani_Finished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SK_KyungrakSkill_Icon.SK_KyungrakSkill_Icon_C.OnInitailizeWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Parameters                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USK_KyungrakSkill_Icon_C::OnInitailizeWidget(const class FString& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_KyungrakSkill_Icon.SK_KyungrakSkill_Icon_C.OnInitailizeWidget");
		
		USK_KyungrakSkill_Icon_C_OnInitailizeWidget_Params params {};
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SK_KyungrakSkill_Icon.SK_KyungrakSkill_Icon_C.OnChargeFinished
	 * 		Flags  -> ()
	 */
	void USK_KyungrakSkill_Icon_C::OnChargeFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_KyungrakSkill_Icon.SK_KyungrakSkill_Icon_C.OnChargeFinished");
		
		USK_KyungrakSkill_Icon_C_OnChargeFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SK_KyungrakSkill_Icon.SK_KyungrakSkill_Icon_C.BndEvt__Skill_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void USK_KyungrakSkill_Icon_C::BndEvt__Skill_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_KyungrakSkill_Icon.SK_KyungrakSkill_Icon_C.BndEvt__Skill_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		USK_KyungrakSkill_Icon_C_BndEvt__Skill_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SK_KyungrakSkill_Icon.SK_KyungrakSkill_Icon_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USK_KyungrakSkill_Icon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_KyungrakSkill_Icon.SK_KyungrakSkill_Icon_C.PreConstruct");
		
		USK_KyungrakSkill_Icon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SK_KyungrakSkill_Icon.SK_KyungrakSkill_Icon_C.OnSetAutoMeridianSkill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsAuto                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USK_KyungrakSkill_Icon_C::OnSetAutoMeridianSkill(bool IsAuto)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_KyungrakSkill_Icon.SK_KyungrakSkill_Icon_C.OnSetAutoMeridianSkill");
		
		USK_KyungrakSkill_Icon_C_OnSetAutoMeridianSkill_Params params {};
		params.IsAuto = IsAuto;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SK_KyungrakSkill_Icon.SK_KyungrakSkill_Icon_C.ExecuteUbergraph_SK_KyungrakSkill_Icon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USK_KyungrakSkill_Icon_C::ExecuteUbergraph_SK_KyungrakSkill_Icon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_KyungrakSkill_Icon.SK_KyungrakSkill_Icon_C.ExecuteUbergraph_SK_KyungrakSkill_Icon");
		
		USK_KyungrakSkill_Icon_C_ExecuteUbergraph_SK_KyungrakSkill_Icon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SK_KyungrakSkill_Icon.SK_KyungrakSkill_Icon_C.OnSlotClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            slotArrIdx                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USK_KyungrakSkill_Icon_C::OnSlotClicked__DelegateSignature(int32_t slotArrIdx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_KyungrakSkill_Icon.SK_KyungrakSkill_Icon_C.OnSlotClicked__DelegateSignature");
		
		USK_KyungrakSkill_Icon_C_OnSlotClicked__DelegateSignature_Params params {};
		params.slotArrIdx = slotArrIdx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USK_KyungrakSkill_Icon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USK_KyungrakSkill_Icon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SK_KyungrakSkill_Icon.SK_KyungrakSkill_Icon_C");
		return ptr;
	}

}


