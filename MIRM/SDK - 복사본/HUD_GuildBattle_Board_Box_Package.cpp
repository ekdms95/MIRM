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
	 * 		Name   -> Function HUD_GuildBattle_Board_Box.HUD_GuildBattle_Board_Box_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_GuildBattle_Board_Box_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_GuildBattle_Board_Box.HUD_GuildBattle_Board_Box_C.Construct");
		
		UHUD_GuildBattle_Board_Box_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_GuildBattle_Board_Box.HUD_GuildBattle_Board_Box_C.ExecuteUbergraph_HUD_GuildBattle_Board_Box
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_GuildBattle_Board_Box_C::ExecuteUbergraph_HUD_GuildBattle_Board_Box(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_GuildBattle_Board_Box.HUD_GuildBattle_Board_Box_C.ExecuteUbergraph_HUD_GuildBattle_Board_Box");
		
		UHUD_GuildBattle_Board_Box_C_ExecuteUbergraph_HUD_GuildBattle_Board_Box_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHUD_GuildBattle_Board_Box_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_GuildBattle_Board_Box_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_GuildBattle_Board_Box.HUD_GuildBattle_Board_Box_C");
		return ptr;
	}

}


