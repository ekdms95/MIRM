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
	 * 		Name   -> Function Page_Hud_Dungeon_Buttons.Page_Hud_Dungeon_Buttons_C.BndEvt__HUD_Buttons_Dungeon_K2Node_ComponentBoundEvent_0_ExitDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPage_Hud_Dungeon_Buttons_C::BndEvt__HUD_Buttons_Dungeon_K2Node_ComponentBoundEvent_0_ExitDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Hud_Dungeon_Buttons.Page_Hud_Dungeon_Buttons_C.BndEvt__HUD_Buttons_Dungeon_K2Node_ComponentBoundEvent_0_ExitDispatcher__DelegateSignature");
		
		UPage_Hud_Dungeon_Buttons_C_BndEvt__HUD_Buttons_Dungeon_K2Node_ComponentBoundEvent_0_ExitDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Hud_Dungeon_Buttons.Page_Hud_Dungeon_Buttons_C.ExecuteUbergraph_Page_Hud_Dungeon_Buttons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPage_Hud_Dungeon_Buttons_C::ExecuteUbergraph_Page_Hud_Dungeon_Buttons(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Hud_Dungeon_Buttons.Page_Hud_Dungeon_Buttons_C.ExecuteUbergraph_Page_Hud_Dungeon_Buttons");
		
		UPage_Hud_Dungeon_Buttons_C_ExecuteUbergraph_Page_Hud_Dungeon_Buttons_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPage_Hud_Dungeon_Buttons_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPage_Hud_Dungeon_Buttons_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Page_Hud_Dungeon_Buttons.Page_Hud_Dungeon_Buttons_C");
		return ptr;
	}

}


