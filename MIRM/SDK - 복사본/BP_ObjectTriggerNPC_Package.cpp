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
	 * 		Name   -> Function BP_ObjectTriggerNPC.BP_ObjectTriggerNPC_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_ObjectTriggerNPC_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ObjectTriggerNPC.BP_ObjectTriggerNPC_C.UserConstructionScript");
		
		ABP_ObjectTriggerNPC_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ObjectTriggerNPC.BP_ObjectTriggerNPC_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_ObjectTriggerNPC_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ObjectTriggerNPC.BP_ObjectTriggerNPC_C.ReceiveBeginPlay");
		
		ABP_ObjectTriggerNPC_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ObjectTriggerNPC.BP_ObjectTriggerNPC_C.ActiveGizmo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ObjectTriggerNPC_C::ActiveGizmo(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ObjectTriggerNPC.BP_ObjectTriggerNPC_C.ActiveGizmo");
		
		ABP_ObjectTriggerNPC_C_ActiveGizmo_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ObjectTriggerNPC.BP_ObjectTriggerNPC_C.ExecuteUbergraph_BP_ObjectTriggerNPC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ObjectTriggerNPC_C::ExecuteUbergraph_BP_ObjectTriggerNPC(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ObjectTriggerNPC.BP_ObjectTriggerNPC_C.ExecuteUbergraph_BP_ObjectTriggerNPC");
		
		ABP_ObjectTriggerNPC_C_ExecuteUbergraph_BP_ObjectTriggerNPC_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ABP_ObjectTriggerNPC_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ObjectTriggerNPC_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ObjectTriggerNPC.BP_ObjectTriggerNPC_C");
		return ptr;
	}

}


