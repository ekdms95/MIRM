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
	 * 		Name   -> Function Hud_Mission_Box.Hud_Mission_Box_C.Construct
	 * 		Flags  -> ()
	 */
	void UHud_Mission_Box_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Mission_Box.Hud_Mission_Box_C.Construct");
		
		UHud_Mission_Box_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Mission_Box.Hud_Mission_Box_C.ExecuteUbergraph_Hud_Mission_Box
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_Mission_Box_C::ExecuteUbergraph_Hud_Mission_Box(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Mission_Box.Hud_Mission_Box_C.ExecuteUbergraph_Hud_Mission_Box");
		
		UHud_Mission_Box_C_ExecuteUbergraph_Hud_Mission_Box_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHud_Mission_Box_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHud_Mission_Box_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Hud_Mission_Box.Hud_Mission_Box_C");
		return ptr;
	}

}


