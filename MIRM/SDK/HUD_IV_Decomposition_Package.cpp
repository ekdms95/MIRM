/**
 * Name: MIRM
 * Version: 0623-2
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
	 * 		Name   -> Function HUD_IV_Decomposition.HUD_IV_Decomposition_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_IV_Decomposition_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_IV_Decomposition.HUD_IV_Decomposition_C.PreConstruct");
		
		UHUD_IV_Decomposition_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_IV_Decomposition.HUD_IV_Decomposition_C.ExecuteUbergraph_HUD_IV_Decomposition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_IV_Decomposition_C::ExecuteUbergraph_HUD_IV_Decomposition(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_IV_Decomposition.HUD_IV_Decomposition_C.ExecuteUbergraph_HUD_IV_Decomposition");
		
		UHUD_IV_Decomposition_C_ExecuteUbergraph_HUD_IV_Decomposition_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHUD_IV_Decomposition_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_IV_Decomposition_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_IV_Decomposition.HUD_IV_Decomposition_C");
		return ptr;
	}

}


