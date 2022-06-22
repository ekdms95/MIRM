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
	 * 		Name   -> Function HUD_GuildBattle_Board_Box_Elem.HUD_GuildBattle_Board_Box_Elem_C.BndEvt__MirButton_112_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_GuildBattle_Board_Box_Elem_C::BndEvt__MirButton_112_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_GuildBattle_Board_Box_Elem.HUD_GuildBattle_Board_Box_Elem_C.BndEvt__MirButton_112_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UHUD_GuildBattle_Board_Box_Elem_C_BndEvt__MirButton_112_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_GuildBattle_Board_Box_Elem.HUD_GuildBattle_Board_Box_Elem_C.ElemTeam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETEAM                                              curTeam                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_GuildBattle_Board_Box_Elem_C::ElemTeam(ETEAM curTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_GuildBattle_Board_Box_Elem.HUD_GuildBattle_Board_Box_Elem_C.ElemTeam");
		
		UHUD_GuildBattle_Board_Box_Elem_C_ElemTeam_Params params {};
		params.curTeam = curTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_GuildBattle_Board_Box_Elem.HUD_GuildBattle_Board_Box_Elem_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_GuildBattle_Board_Box_Elem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_GuildBattle_Board_Box_Elem.HUD_GuildBattle_Board_Box_Elem_C.Construct");
		
		UHUD_GuildBattle_Board_Box_Elem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_GuildBattle_Board_Box_Elem.HUD_GuildBattle_Board_Box_Elem_C.ExecuteUbergraph_HUD_GuildBattle_Board_Box_Elem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_GuildBattle_Board_Box_Elem_C::ExecuteUbergraph_HUD_GuildBattle_Board_Box_Elem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_GuildBattle_Board_Box_Elem.HUD_GuildBattle_Board_Box_Elem_C.ExecuteUbergraph_HUD_GuildBattle_Board_Box_Elem");
		
		UHUD_GuildBattle_Board_Box_Elem_C_ExecuteUbergraph_HUD_GuildBattle_Board_Box_Elem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHUD_GuildBattle_Board_Box_Elem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_GuildBattle_Board_Box_Elem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_GuildBattle_Board_Box_Elem.HUD_GuildBattle_Board_Box_Elem_C");
		return ptr;
	}

}


