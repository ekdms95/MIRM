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
	 * 		Name   -> Function BP_ObjectTriggerMonsterIllusion.BP_ObjectTriggerMonsterIllusion_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_ObjectTriggerMonsterIllusion_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ObjectTriggerMonsterIllusion.BP_ObjectTriggerMonsterIllusion_C.UserConstructionScript");
		
		ABP_ObjectTriggerMonsterIllusion_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ObjectTriggerMonsterIllusion.BP_ObjectTriggerMonsterIllusion_C.ActiveGizmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ObjectTriggerMonsterIllusion_C::ActiveGizmo(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ObjectTriggerMonsterIllusion.BP_ObjectTriggerMonsterIllusion_C.ActiveGizmo");
		
		ABP_ObjectTriggerMonsterIllusion_C_ActiveGizmo_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ObjectTriggerMonsterIllusion.BP_ObjectTriggerMonsterIllusion_C.ExecuteUbergraph_BP_ObjectTriggerMonsterIllusion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ObjectTriggerMonsterIllusion_C::ExecuteUbergraph_BP_ObjectTriggerMonsterIllusion(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ObjectTriggerMonsterIllusion.BP_ObjectTriggerMonsterIllusion_C.ExecuteUbergraph_BP_ObjectTriggerMonsterIllusion");
		
		ABP_ObjectTriggerMonsterIllusion_C_ExecuteUbergraph_BP_ObjectTriggerMonsterIllusion_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_ObjectTriggerMonsterIllusion_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ObjectTriggerMonsterIllusion_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ObjectTriggerMonsterIllusion.BP_ObjectTriggerMonsterIllusion_C");
		return ptr;
	}

}


