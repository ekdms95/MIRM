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
	 * 		Name   -> Function HUD_Auto_FixedCharacter.HUD_Auto_FixedCharacter_C.SetIconActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Auto_FixedCharacter_C::SetIconActive(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Auto_FixedCharacter.HUD_Auto_FixedCharacter_C.SetIconActive");
		
		UHUD_Auto_FixedCharacter_C_SetIconActive_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Auto_FixedCharacter.HUD_Auto_FixedCharacter_C.Btn Disable State
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MenuName_txt                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Auto_FixedCharacter_C::Btn_Disable_State(int32_t MenuName_txt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Auto_FixedCharacter.HUD_Auto_FixedCharacter_C.Btn Disable State");
		
		UHUD_Auto_FixedCharacter_C_Btn_Disable_State_Params params {};
		params.MenuName_txt = MenuName_txt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Auto_FixedCharacter.HUD_Auto_FixedCharacter_C.Auto_INg_Ani_Play
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Play                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Auto_FixedCharacter_C::Auto_INg_Ani_Play(bool Play)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Auto_FixedCharacter.HUD_Auto_FixedCharacter_C.Auto_INg_Ani_Play");
		
		UHUD_Auto_FixedCharacter_C_Auto_INg_Ani_Play_Params params {};
		params.Play = Play;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Auto_FixedCharacter.HUD_Auto_FixedCharacter_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Auto_FixedCharacter_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Auto_FixedCharacter.HUD_Auto_FixedCharacter_C.PreConstruct");
		
		UHUD_Auto_FixedCharacter_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Auto_FixedCharacter.HUD_Auto_FixedCharacter_C.BndEvt__MirButton_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_Auto_FixedCharacter_C::BndEvt__MirButton_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Auto_FixedCharacter.HUD_Auto_FixedCharacter_C.BndEvt__MirButton_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UHUD_Auto_FixedCharacter_C_BndEvt__MirButton_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Auto_FixedCharacter.HUD_Auto_FixedCharacter_C.ExecuteUbergraph_HUD_Auto_FixedCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Auto_FixedCharacter_C::ExecuteUbergraph_HUD_Auto_FixedCharacter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Auto_FixedCharacter.HUD_Auto_FixedCharacter_C.ExecuteUbergraph_HUD_Auto_FixedCharacter");
		
		UHUD_Auto_FixedCharacter_C_ExecuteUbergraph_HUD_Auto_FixedCharacter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Auto_FixedCharacter.HUD_Auto_FixedCharacter_C.AutoBtn__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_Auto_FixedCharacter_C::AutoBtn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Auto_FixedCharacter.HUD_Auto_FixedCharacter_C.AutoBtn__DelegateSignature");
		
		UHUD_Auto_FixedCharacter_C_AutoBtn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHUD_Auto_FixedCharacter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Auto_FixedCharacter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Auto_FixedCharacter.HUD_Auto_FixedCharacter_C");
		return ptr;
	}

}


