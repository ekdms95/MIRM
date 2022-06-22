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
	 * 		Name   -> Function UI_ClickEvent.UI_ClickEvent_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_ClickEvent_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ClickEvent.UI_ClickEvent_C.Construct");
		
		UUI_ClickEvent_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ClickEvent.UI_ClickEvent_C.Custom Event_1
	 * 		Flags  -> ()
	 */
	void UUI_ClickEvent_C::Custom_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ClickEvent.UI_ClickEvent_C.Custom Event_1");
		
		UUI_ClickEvent_C_Custom_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ClickEvent.UI_ClickEvent_C.ExecuteUbergraph_UI_ClickEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ClickEvent_C::ExecuteUbergraph_UI_ClickEvent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ClickEvent.UI_ClickEvent_C.ExecuteUbergraph_UI_ClickEvent");
		
		UUI_ClickEvent_C_ExecuteUbergraph_UI_ClickEvent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UUI_ClickEvent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ClickEvent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ClickEvent.UI_ClickEvent_C");
		return ptr;
	}

}


