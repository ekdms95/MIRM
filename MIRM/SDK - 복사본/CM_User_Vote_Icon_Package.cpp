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
	 * 		Name   -> Function CM_User_Vote_Icon.CM_User_Vote_Icon_C.Icon_State_Color
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_User_Vote_Icon_C::Icon_State_Color(int32_t Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_User_Vote_Icon.CM_User_Vote_Icon_C.Icon_State_Color");
		
		UCM_User_Vote_Icon_C_Icon_State_Color_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_User_Vote_Icon.CM_User_Vote_Icon_C.PrintVoteUIState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsVisible                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsBeforeVote                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsAgreeVote                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_User_Vote_Icon_C::PrintVoteUIState(bool bIsVisible, bool bIsBeforeVote, bool bIsAgreeVote)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_User_Vote_Icon.CM_User_Vote_Icon_C.PrintVoteUIState");
		
		UCM_User_Vote_Icon_C_PrintVoteUIState_Params params {};
		params.bIsVisible = bIsVisible;
		params.bIsBeforeVote = bIsBeforeVote;
		params.bIsAgreeVote = bIsAgreeVote;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_User_Vote_Icon.CM_User_Vote_Icon_C.ExecuteUbergraph_CM_User_Vote_Icon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_User_Vote_Icon_C::ExecuteUbergraph_CM_User_Vote_Icon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_User_Vote_Icon.CM_User_Vote_Icon_C.ExecuteUbergraph_CM_User_Vote_Icon");
		
		UCM_User_Vote_Icon_C_ExecuteUbergraph_CM_User_Vote_Icon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCM_User_Vote_Icon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCM_User_Vote_Icon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CM_User_Vote_Icon.CM_User_Vote_Icon_C");
		return ptr;
	}

}


