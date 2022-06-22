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
	 * 		Name   -> Function CM_Class_LVName_Set.CM_Class_LVName_Set_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_Class_LVName_Set_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Class_LVName_Set.CM_Class_LVName_Set_C.PreConstruct");
		
		UCM_Class_LVName_Set_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Class_LVName_Set.CM_Class_LVName_Set_C.OnSetClassType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_CLASS_TYPE                                       ClassType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Class_LVName_Set_C::OnSetClassType(E_CLASS_TYPE ClassType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Class_LVName_Set.CM_Class_LVName_Set_C.OnSetClassType");
		
		UCM_Class_LVName_Set_C_OnSetClassType_Params params {};
		params.ClassType = ClassType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Class_LVName_Set.CM_Class_LVName_Set_C.ExecuteUbergraph_CM_Class_LVName_Set
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Class_LVName_Set_C::ExecuteUbergraph_CM_Class_LVName_Set(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Class_LVName_Set.CM_Class_LVName_Set_C.ExecuteUbergraph_CM_Class_LVName_Set");
		
		UCM_Class_LVName_Set_C_ExecuteUbergraph_CM_Class_LVName_Set_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCM_Class_LVName_Set_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCM_Class_LVName_Set_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CM_Class_LVName_Set.CM_Class_LVName_Set_C");
		return ptr;
	}

}


