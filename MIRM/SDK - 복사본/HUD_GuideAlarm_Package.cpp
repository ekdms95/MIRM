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
	 * 		Name   -> Function HUD_GuideAlarm.HUD_GuideAlarm_C.OnPreSet
	 * 		Flags  -> ()
	 */
	void UHUD_GuideAlarm_C::OnPreSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_GuideAlarm.HUD_GuideAlarm_C.OnPreSet");
		
		UHUD_GuideAlarm_C_OnPreSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_GuideAlarm.HUD_GuideAlarm_C.ExecuteUbergraph_HUD_GuideAlarm
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_GuideAlarm_C::ExecuteUbergraph_HUD_GuideAlarm(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_GuideAlarm.HUD_GuideAlarm_C.ExecuteUbergraph_HUD_GuideAlarm");
		
		UHUD_GuideAlarm_C_ExecuteUbergraph_HUD_GuideAlarm_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHUD_GuideAlarm_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_GuideAlarm_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_GuideAlarm.HUD_GuideAlarm_C");
		return ptr;
	}

}


