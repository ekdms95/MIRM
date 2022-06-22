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
	 * 		Name   -> Function HUD_Inner_Power_Stat.HUD_Inner_Power_Stat_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_Inner_Power_Stat_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Inner_Power_Stat.HUD_Inner_Power_Stat_C.Construct");
		
		UHUD_Inner_Power_Stat_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Inner_Power_Stat.HUD_Inner_Power_Stat_C.ExecuteUbergraph_HUD_Inner_Power_Stat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Inner_Power_Stat_C::ExecuteUbergraph_HUD_Inner_Power_Stat(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Inner_Power_Stat.HUD_Inner_Power_Stat_C.ExecuteUbergraph_HUD_Inner_Power_Stat");
		
		UHUD_Inner_Power_Stat_C_ExecuteUbergraph_HUD_Inner_Power_Stat_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHUD_Inner_Power_Stat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Inner_Power_Stat_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Inner_Power_Stat.HUD_Inner_Power_Stat_C");
		return ptr;
	}

}


