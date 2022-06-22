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
	 * 		Name   -> Function BP_ObjectTriggerPosition.BP_ObjectTriggerPosition_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_ObjectTriggerPosition_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ObjectTriggerPosition.BP_ObjectTriggerPosition_C.UserConstructionScript");
		
		ABP_ObjectTriggerPosition_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ObjectTriggerPosition.BP_ObjectTriggerPosition_C.ActiveGizmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ObjectTriggerPosition_C::ActiveGizmo(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ObjectTriggerPosition.BP_ObjectTriggerPosition_C.ActiveGizmo");
		
		ABP_ObjectTriggerPosition_C_ActiveGizmo_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ObjectTriggerPosition.BP_ObjectTriggerPosition_C.ExecuteUbergraph_BP_ObjectTriggerPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ObjectTriggerPosition_C::ExecuteUbergraph_BP_ObjectTriggerPosition(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ObjectTriggerPosition.BP_ObjectTriggerPosition_C.ExecuteUbergraph_BP_ObjectTriggerPosition");
		
		ABP_ObjectTriggerPosition_C_ExecuteUbergraph_BP_ObjectTriggerPosition_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_ObjectTriggerPosition_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ObjectTriggerPosition_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ObjectTriggerPosition.BP_ObjectTriggerPosition_C");
		return ptr;
	}

}


