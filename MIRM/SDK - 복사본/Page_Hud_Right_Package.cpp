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
	 * 		Name   -> Function Page_Hud_Right.Page_Hud_Right_C.Construct
	 * 		Flags  -> ()
	 */
	void UPage_Hud_Right_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Hud_Right.Page_Hud_Right_C.Construct");
		
		UPage_Hud_Right_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Hud_Right.Page_Hud_Right_C.ExecuteUbergraph_Page_Hud_Right
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPage_Hud_Right_C::ExecuteUbergraph_Page_Hud_Right(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Hud_Right.Page_Hud_Right_C.ExecuteUbergraph_Page_Hud_Right");
		
		UPage_Hud_Right_C_ExecuteUbergraph_Page_Hud_Right_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPage_Hud_Right_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPage_Hud_Right_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Page_Hud_Right.Page_Hud_Right_C");
		return ptr;
	}

}


