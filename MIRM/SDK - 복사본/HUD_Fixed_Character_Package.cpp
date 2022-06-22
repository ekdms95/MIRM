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
	 * 		Name   -> Function HUD_Fixed_Character.HUD_Fixed_Character_C.OnFearState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFear                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Fixed_Character_C::OnFearState(bool IsFear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Fixed_Character.HUD_Fixed_Character_C.OnFearState");
		
		UHUD_Fixed_Character_C_OnFearState_Params params {};
		params.IsFear = IsFear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Fixed_Character.HUD_Fixed_Character_C.SetAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Fixed_Character_C::SetAnimation(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Fixed_Character.HUD_Fixed_Character_C.SetAnimation");
		
		UHUD_Fixed_Character_C_SetAnimation_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Fixed_Character.HUD_Fixed_Character_C.GetIsAutoPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAutoPlayProcessUnit                        AutoPlayProcessUnit                                        (Parm, OutParm)
	 */
	void UHUD_Fixed_Character_C::GetIsAutoPlay(struct FAutoPlayProcessUnit* AutoPlayProcessUnit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Fixed_Character.HUD_Fixed_Character_C.GetIsAutoPlay");
		
		UHUD_Fixed_Character_C_GetIsAutoPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AutoPlayProcessUnit != nullptr)
			*AutoPlayProcessUnit = params.AutoPlayProcessUnit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Fixed_Character.HUD_Fixed_Character_C.SetAutoPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAutoPlayProcessUnit                        AutoPlayProcessUnit                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UHUD_Fixed_Character_C::SetAutoPlay(const struct FAutoPlayProcessUnit& AutoPlayProcessUnit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Fixed_Character.HUD_Fixed_Character_C.SetAutoPlay");
		
		UHUD_Fixed_Character_C_SetAutoPlay_Params params {};
		params.AutoPlayProcessUnit = AutoPlayProcessUnit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Fixed_Character.HUD_Fixed_Character_C.BndEvt__HUD_Fixed_Character_HUD_Auto_FixedCharacter_K2Node_ComponentBoundEvent_1_AutoBtn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_Fixed_Character_C::BndEvt__HUD_Fixed_Character_HUD_Auto_FixedCharacter_K2Node_ComponentBoundEvent_1_AutoBtn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Fixed_Character.HUD_Fixed_Character_C.BndEvt__HUD_Fixed_Character_HUD_Auto_FixedCharacter_K2Node_ComponentBoundEvent_1_AutoBtn__DelegateSignature");
		
		UHUD_Fixed_Character_C_BndEvt__HUD_Fixed_Character_HUD_Auto_FixedCharacter_K2Node_ComponentBoundEvent_1_AutoBtn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Fixed_Character.HUD_Fixed_Character_C.ExecuteUbergraph_HUD_Fixed_Character
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Fixed_Character_C::ExecuteUbergraph_HUD_Fixed_Character(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Fixed_Character.HUD_Fixed_Character_C.ExecuteUbergraph_HUD_Fixed_Character");
		
		UHUD_Fixed_Character_C_ExecuteUbergraph_HUD_Fixed_Character_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Fixed_Character.HUD_Fixed_Character_C.ToggleDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Fixed_Character_C::ToggleDispatcher__DelegateSignature(bool IsOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Fixed_Character.HUD_Fixed_Character_C.ToggleDispatcher__DelegateSignature");
		
		UHUD_Fixed_Character_C_ToggleDispatcher__DelegateSignature_Params params {};
		params.IsOn = IsOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHUD_Fixed_Character_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Fixed_Character_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Fixed_Character.HUD_Fixed_Character_C");
		return ptr;
	}

}


