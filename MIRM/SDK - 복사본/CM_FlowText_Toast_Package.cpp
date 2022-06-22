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
	 * 		Name   -> Function CM_FlowText_Toast.CM_FlowText_Toast_C.Construct
	 * 		Flags  -> ()
	 */
	void UCM_FlowText_Toast_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_FlowText_Toast.CM_FlowText_Toast_C.Construct");
		
		UCM_FlowText_Toast_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_FlowText_Toast.CM_FlowText_Toast_C.ExecuteUbergraph_CM_FlowText_Toast
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_FlowText_Toast_C::ExecuteUbergraph_CM_FlowText_Toast(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_FlowText_Toast.CM_FlowText_Toast_C.ExecuteUbergraph_CM_FlowText_Toast");
		
		UCM_FlowText_Toast_C_ExecuteUbergraph_CM_FlowText_Toast_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCM_FlowText_Toast_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCM_FlowText_Toast_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CM_FlowText_Toast.CM_FlowText_Toast_C");
		return ptr;
	}

}


