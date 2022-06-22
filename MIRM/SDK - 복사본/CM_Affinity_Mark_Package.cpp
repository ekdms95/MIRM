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
	 * 		Name   -> Function CM_Affinity_Mark.CM_Affinity_Mark_C.State_Set
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_INTIMACY_GRADE_TYPE                              Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Affinity_Mark_C::State_Set(E_INTIMACY_GRADE_TYPE Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Affinity_Mark.CM_Affinity_Mark_C.State_Set");
		
		UCM_Affinity_Mark_C_State_Set_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Affinity_Mark.CM_Affinity_Mark_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_Affinity_Mark_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Affinity_Mark.CM_Affinity_Mark_C.PreConstruct");
		
		UCM_Affinity_Mark_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Affinity_Mark.CM_Affinity_Mark_C.ExecuteUbergraph_CM_Affinity_Mark
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Affinity_Mark_C::ExecuteUbergraph_CM_Affinity_Mark(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Affinity_Mark.CM_Affinity_Mark_C.ExecuteUbergraph_CM_Affinity_Mark");
		
		UCM_Affinity_Mark_C_ExecuteUbergraph_CM_Affinity_Mark_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCM_Affinity_Mark_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCM_Affinity_Mark_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CM_Affinity_Mark.CM_Affinity_Mark_C");
		return ptr;
	}

}


