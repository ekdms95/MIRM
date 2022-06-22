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
	 * 		Name   -> Function ComponentGrassCollision.ComponentGrassCollision_C.DrawGrassCollision
	 * 		Flags  -> ()
	 */
	void UComponentGrassCollision_C::DrawGrassCollision()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ComponentGrassCollision.ComponentGrassCollision_C.DrawGrassCollision");
		
		UComponentGrassCollision_C_DrawGrassCollision_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ComponentGrassCollision.ComponentGrassCollision_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UComponentGrassCollision_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ComponentGrassCollision.ComponentGrassCollision_C.ReceiveTick");
		
		UComponentGrassCollision_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ComponentGrassCollision.ComponentGrassCollision_C.ExecuteUbergraph_ComponentGrassCollision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UComponentGrassCollision_C::ExecuteUbergraph_ComponentGrassCollision(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ComponentGrassCollision.ComponentGrassCollision_C.ExecuteUbergraph_ComponentGrassCollision");
		
		UComponentGrassCollision_C_ExecuteUbergraph_ComponentGrassCollision_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UComponentGrassCollision_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UComponentGrassCollision_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ComponentGrassCollision.ComponentGrassCollision_C");
		return ptr;
	}

}


