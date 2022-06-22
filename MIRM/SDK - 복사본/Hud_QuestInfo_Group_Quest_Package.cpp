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
	 * 		Name   -> Function Hud_QuestInfo_Group_Quest.Hud_QuestInfo_Group_Quest_C.SetComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bComplete                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_QuestInfo_Group_Quest_C::SetComplete(bool bComplete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_QuestInfo_Group_Quest.Hud_QuestInfo_Group_Quest_C.SetComplete");
		
		UHud_QuestInfo_Group_Quest_C_SetComplete_Params params {};
		params.bComplete = bComplete;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_QuestInfo_Group_Quest.Hud_QuestInfo_Group_Quest_C.SetHighlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Active                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_QuestInfo_Group_Quest_C::SetHighlight(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_QuestInfo_Group_Quest.Hud_QuestInfo_Group_Quest_C.SetHighlight");
		
		UHud_QuestInfo_Group_Quest_C_SetHighlight_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_QuestInfo_Group_Quest.Hud_QuestInfo_Group_Quest_C.SetProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UHud_QuestInfo_Group_Quest_C::SetProgress(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_QuestInfo_Group_Quest.Hud_QuestInfo_Group_Quest_C.SetProgress");
		
		UHud_QuestInfo_Group_Quest_C_SetProgress_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_QuestInfo_Group_Quest.Hud_QuestInfo_Group_Quest_C.SetContext
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UHud_QuestInfo_Group_Quest_C::SetContext(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_QuestInfo_Group_Quest.Hud_QuestInfo_Group_Quest_C.SetContext");
		
		UHud_QuestInfo_Group_Quest_C_SetContext_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHud_QuestInfo_Group_Quest_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHud_QuestInfo_Group_Quest_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Hud_QuestInfo_Group_Quest.Hud_QuestInfo_Group_Quest_C");
		return ptr;
	}

}


