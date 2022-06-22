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
	 * 		Name   -> Function HUD_BuffBox_Pop_Elem.HUD_BuffBox_Pop_Elem_C.OnPreSet
	 * 		Flags  -> ()
	 */
	void UHUD_BuffBox_Pop_Elem_C::OnPreSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_BuffBox_Pop_Elem.HUD_BuffBox_Pop_Elem_C.OnPreSet");
		
		UHUD_BuffBox_Pop_Elem_C_OnPreSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_BuffBox_Pop_Elem.HUD_BuffBox_Pop_Elem_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_BuffBox_Pop_Elem_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_BuffBox_Pop_Elem.HUD_BuffBox_Pop_Elem_C.Tick");
		
		UHUD_BuffBox_Pop_Elem_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_BuffBox_Pop_Elem.HUD_BuffBox_Pop_Elem_C.ExecuteUbergraph_HUD_BuffBox_Pop_Elem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_BuffBox_Pop_Elem_C::ExecuteUbergraph_HUD_BuffBox_Pop_Elem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_BuffBox_Pop_Elem.HUD_BuffBox_Pop_Elem_C.ExecuteUbergraph_HUD_BuffBox_Pop_Elem");
		
		UHUD_BuffBox_Pop_Elem_C_ExecuteUbergraph_HUD_BuffBox_Pop_Elem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHUD_BuffBox_Pop_Elem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_BuffBox_Pop_Elem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_BuffBox_Pop_Elem.HUD_BuffBox_Pop_Elem_C");
		return ptr;
	}

}


