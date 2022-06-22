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
	 * 		Name   -> Function HUD_Auto_Atk.HUD_Auto_Atk_C.IsPlayingAutoAttack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsPlaying                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Auto_Atk_C::IsPlayingAutoAttack(bool* IsPlaying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Auto_Atk.HUD_Auto_Atk_C.IsPlayingAutoAttack");
		
		UHUD_Auto_Atk_C_IsPlayingAutoAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsPlaying != nullptr)
			*IsPlaying = params.IsPlaying;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Auto_Atk.HUD_Auto_Atk_C.OnFearState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFear                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Auto_Atk_C::OnFearState(bool IsFear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Auto_Atk.HUD_Auto_Atk_C.OnFearState");
		
		UHUD_Auto_Atk_C_OnFearState_Params params {};
		params.IsFear = IsFear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Auto_Atk.HUD_Auto_Atk_C.SetAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Auto_Atk_C::SetAnimation(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Auto_Atk.HUD_Auto_Atk_C.SetAnimation");
		
		UHUD_Auto_Atk_C_SetAnimation_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Auto_Atk.HUD_Auto_Atk_C.GetIsAutoPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAutoPlayProcessUnit                        AutoPlayProcessUnit                                        (Parm, OutParm)
	 */
	void UHUD_Auto_Atk_C::GetIsAutoPlay(struct FAutoPlayProcessUnit* AutoPlayProcessUnit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Auto_Atk.HUD_Auto_Atk_C.GetIsAutoPlay");
		
		UHUD_Auto_Atk_C_GetIsAutoPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AutoPlayProcessUnit != nullptr)
			*AutoPlayProcessUnit = params.AutoPlayProcessUnit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Auto_Atk.HUD_Auto_Atk_C.SetAutoPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAutoPlayProcessUnit                        AutoPlayProcessUnit                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UHUD_Auto_Atk_C::SetAutoPlay(const struct FAutoPlayProcessUnit& AutoPlayProcessUnit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Auto_Atk.HUD_Auto_Atk_C.SetAutoPlay");
		
		UHUD_Auto_Atk_C_SetAutoPlay_Params params {};
		params.AutoPlayProcessUnit = AutoPlayProcessUnit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Auto_Atk.HUD_Auto_Atk_C.OnActiveFromPageHUDDispatcher_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAutoPlayProcessUnit                        AutoPlayProcessUnit                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UHUD_Auto_Atk_C::OnActiveFromPageHUDDispatcher_Event(const struct FAutoPlayProcessUnit& AutoPlayProcessUnit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Auto_Atk.HUD_Auto_Atk_C.OnActiveFromPageHUDDispatcher_Event");
		
		UHUD_Auto_Atk_C_OnActiveFromPageHUDDispatcher_Event_Params params {};
		params.AutoPlayProcessUnit = AutoPlayProcessUnit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Auto_Atk.HUD_Auto_Atk_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_Auto_Atk_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Auto_Atk.HUD_Auto_Atk_C.Construct");
		
		UHUD_Auto_Atk_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Auto_Atk.HUD_Auto_Atk_C.BndEvt__HUD_Auto_Atk_HUD_Auto_Other_Btn_K2Node_ComponentBoundEvent_0_AutoBtn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_Auto_Atk_C::BndEvt__HUD_Auto_Atk_HUD_Auto_Other_Btn_K2Node_ComponentBoundEvent_0_AutoBtn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Auto_Atk.HUD_Auto_Atk_C.BndEvt__HUD_Auto_Atk_HUD_Auto_Other_Btn_K2Node_ComponentBoundEvent_0_AutoBtn__DelegateSignature");
		
		UHUD_Auto_Atk_C_BndEvt__HUD_Auto_Atk_HUD_Auto_Other_Btn_K2Node_ComponentBoundEvent_0_AutoBtn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Auto_Atk.HUD_Auto_Atk_C.ExecuteUbergraph_HUD_Auto_Atk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Auto_Atk_C::ExecuteUbergraph_HUD_Auto_Atk(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Auto_Atk.HUD_Auto_Atk_C.ExecuteUbergraph_HUD_Auto_Atk");
		
		UHUD_Auto_Atk_C_ExecuteUbergraph_HUD_Auto_Atk_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Auto_Atk.HUD_Auto_Atk_C.OnChangeIconActive__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Auto_Atk_C::OnChangeIconActive__DelegateSignature(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Auto_Atk.HUD_Auto_Atk_C.OnChangeIconActive__DelegateSignature");
		
		UHUD_Auto_Atk_C_OnChangeIconActive__DelegateSignature_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHUD_Auto_Atk_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Auto_Atk_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Auto_Atk.HUD_Auto_Atk_C");
		return ptr;
	}

}


