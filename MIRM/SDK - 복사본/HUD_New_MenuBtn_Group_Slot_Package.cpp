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
	 * 		Name   -> Function HUD_New_MenuBtn_Group_Slot.HUD_New_MenuBtn_Group_Slot_C.Menu_OnOff_Function
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   InVisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EUMGSequencePlayMode                               PlayMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_New_MenuBtn_Group_Slot_C::Menu_OnOff_Function(ESlateVisibility InVisibility, EUMGSequencePlayMode PlayMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_New_MenuBtn_Group_Slot.HUD_New_MenuBtn_Group_Slot_C.Menu_OnOff_Function");
		
		UHUD_New_MenuBtn_Group_Slot_C_Menu_OnOff_Function_Params params {};
		params.InVisibility = InVisibility;
		params.PlayMode = PlayMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_New_MenuBtn_Group_Slot.HUD_New_MenuBtn_Group_Slot_C.ExecuteUbergraph_HUD_New_MenuBtn_Group_Slot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_New_MenuBtn_Group_Slot_C::ExecuteUbergraph_HUD_New_MenuBtn_Group_Slot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_New_MenuBtn_Group_Slot.HUD_New_MenuBtn_Group_Slot_C.ExecuteUbergraph_HUD_New_MenuBtn_Group_Slot");
		
		UHUD_New_MenuBtn_Group_Slot_C_ExecuteUbergraph_HUD_New_MenuBtn_Group_Slot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHUD_New_MenuBtn_Group_Slot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_New_MenuBtn_Group_Slot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_New_MenuBtn_Group_Slot.HUD_New_MenuBtn_Group_Slot_C");
		return ptr;
	}

}


