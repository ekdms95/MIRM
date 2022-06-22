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
	 * 		Name   -> Function HUD_DamageMeter_Element.HUD_DamageMeter_Element_C.SetUserID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      nickname                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UHUD_DamageMeter_Element_C::SetUserID(const class FString& nickname)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_DamageMeter_Element.HUD_DamageMeter_Element_C.SetUserID");
		
		UHUD_DamageMeter_Element_C_SetUserID_Params params {};
		params.nickname = nickname;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_DamageMeter_Element.HUD_DamageMeter_Element_C.SetPercent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Percent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_DamageMeter_Element_C::SetPercent(float Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_DamageMeter_Element.HUD_DamageMeter_Element_C.SetPercent");
		
		UHUD_DamageMeter_Element_C_SetPercent_Params params {};
		params.Percent = Percent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_DamageMeter_Element.HUD_DamageMeter_Element_C.UserCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_METERGY_USER_TYPE                                User_Check                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_DamageMeter_Element_C::UserCheck(E_METERGY_USER_TYPE User_Check)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_DamageMeter_Element.HUD_DamageMeter_Element_C.UserCheck");
		
		UHUD_DamageMeter_Element_C_UserCheck_Params params {};
		params.User_Check = User_Check;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_DamageMeter_Element.HUD_DamageMeter_Element_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_DamageMeter_Element_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_DamageMeter_Element.HUD_DamageMeter_Element_C.PreConstruct");
		
		UHUD_DamageMeter_Element_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_DamageMeter_Element.HUD_DamageMeter_Element_C.ExecuteUbergraph_HUD_DamageMeter_Element
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_DamageMeter_Element_C::ExecuteUbergraph_HUD_DamageMeter_Element(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_DamageMeter_Element.HUD_DamageMeter_Element_C.ExecuteUbergraph_HUD_DamageMeter_Element");
		
		UHUD_DamageMeter_Element_C_ExecuteUbergraph_HUD_DamageMeter_Element_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHUD_DamageMeter_Element_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_DamageMeter_Element_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_DamageMeter_Element.HUD_DamageMeter_Element_C");
		return ptr;
	}

}


