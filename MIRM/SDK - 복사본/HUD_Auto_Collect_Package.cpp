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
	 * 		Name   -> Function HUD_Auto_Collect.HUD_Auto_Collect_C.OnFearState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFear                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Auto_Collect_C::OnFearState(bool IsFear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Auto_Collect.HUD_Auto_Collect_C.OnFearState");
		
		UHUD_Auto_Collect_C_OnFearState_Params params {};
		params.IsFear = IsFear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Auto_Collect.HUD_Auto_Collect_C.SetAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Auto_Collect_C::SetAnimation(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Auto_Collect.HUD_Auto_Collect_C.SetAnimation");
		
		UHUD_Auto_Collect_C_SetAnimation_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Auto_Collect.HUD_Auto_Collect_C.GetIsAutoPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAutoPlayProcessUnit                        AutoPlayProcessUnit                                        (Parm, OutParm)
	 */
	void UHUD_Auto_Collect_C::GetIsAutoPlay(struct FAutoPlayProcessUnit* AutoPlayProcessUnit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Auto_Collect.HUD_Auto_Collect_C.GetIsAutoPlay");
		
		UHUD_Auto_Collect_C_GetIsAutoPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AutoPlayProcessUnit != nullptr)
			*AutoPlayProcessUnit = params.AutoPlayProcessUnit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Auto_Collect.HUD_Auto_Collect_C.SetAutoPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAutoPlayProcessUnit                        AutoPlayProcessUnit                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UHUD_Auto_Collect_C::SetAutoPlay(const struct FAutoPlayProcessUnit& AutoPlayProcessUnit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Auto_Collect.HUD_Auto_Collect_C.SetAutoPlay");
		
		UHUD_Auto_Collect_C_SetAutoPlay_Params params {};
		params.AutoPlayProcessUnit = AutoPlayProcessUnit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Auto_Collect.HUD_Auto_Collect_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_Auto_Collect_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Auto_Collect.HUD_Auto_Collect_C.Construct");
		
		UHUD_Auto_Collect_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Auto_Collect.HUD_Auto_Collect_C.OnActiveFromPageHUDDispatcher_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAutoPlayProcessUnit                        AutoPlayProcessUnit                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UHUD_Auto_Collect_C::OnActiveFromPageHUDDispatcher_Event(const struct FAutoPlayProcessUnit& AutoPlayProcessUnit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Auto_Collect.HUD_Auto_Collect_C.OnActiveFromPageHUDDispatcher_Event");
		
		UHUD_Auto_Collect_C_OnActiveFromPageHUDDispatcher_Event_Params params {};
		params.AutoPlayProcessUnit = AutoPlayProcessUnit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Auto_Collect.HUD_Auto_Collect_C.BndEvt__HUD_Auto_Collect_HUD_Auto_Other_Btn_K2Node_ComponentBoundEvent_1_AutoBtn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_Auto_Collect_C::BndEvt__HUD_Auto_Collect_HUD_Auto_Other_Btn_K2Node_ComponentBoundEvent_1_AutoBtn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Auto_Collect.HUD_Auto_Collect_C.BndEvt__HUD_Auto_Collect_HUD_Auto_Other_Btn_K2Node_ComponentBoundEvent_1_AutoBtn__DelegateSignature");
		
		UHUD_Auto_Collect_C_BndEvt__HUD_Auto_Collect_HUD_Auto_Other_Btn_K2Node_ComponentBoundEvent_1_AutoBtn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Auto_Collect.HUD_Auto_Collect_C.ExecuteUbergraph_HUD_Auto_Collect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Auto_Collect_C::ExecuteUbergraph_HUD_Auto_Collect(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Auto_Collect.HUD_Auto_Collect_C.ExecuteUbergraph_HUD_Auto_Collect");
		
		UHUD_Auto_Collect_C_ExecuteUbergraph_HUD_Auto_Collect_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Auto_Collect.HUD_Auto_Collect_C.OnChangeIconActive__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Auto_Collect_C::OnChangeIconActive__DelegateSignature(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Auto_Collect.HUD_Auto_Collect_C.OnChangeIconActive__DelegateSignature");
		
		UHUD_Auto_Collect_C_OnChangeIconActive__DelegateSignature_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHUD_Auto_Collect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Auto_Collect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Auto_Collect.HUD_Auto_Collect_C");
		return ptr;
	}

}


