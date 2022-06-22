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
	 * 		Name   -> Function HUD_UserTitle.HUD_UserTitle_C.SetTitleGrade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_TITLE_GRADE                                      grade                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_UserTitle_C::SetTitleGrade(E_TITLE_GRADE grade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_UserTitle.HUD_UserTitle_C.SetTitleGrade");
		
		UHUD_UserTitle_C_SetTitleGrade_Params params {};
		params.grade = grade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_UserTitle.HUD_UserTitle_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_UserTitle_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_UserTitle.HUD_UserTitle_C.Construct");
		
		UHUD_UserTitle_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_UserTitle.HUD_UserTitle_C.SetTitleType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUSER_TITLEACHIEVE_TAB_TYPE                        Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_UserTitle_C::SetTitleType(EUSER_TITLEACHIEVE_TAB_TYPE Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_UserTitle.HUD_UserTitle_C.SetTitleType");
		
		UHUD_UserTitle_C_SetTitleType_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_UserTitle.HUD_UserTitle_C.ExecuteUbergraph_HUD_UserTitle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_UserTitle_C::ExecuteUbergraph_HUD_UserTitle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_UserTitle.HUD_UserTitle_C.ExecuteUbergraph_HUD_UserTitle");
		
		UHUD_UserTitle_C_ExecuteUbergraph_HUD_UserTitle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHUD_UserTitle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_UserTitle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_UserTitle.HUD_UserTitle_C");
		return ptr;
	}

}


