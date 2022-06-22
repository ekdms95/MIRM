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
	 * 		Name   -> Function MotionBlur_BP.MotionBlur_BP_C.OnInvisibleMesh
	 * 		Flags  -> ()
	 */
	void AMotionBlur_BP_C::OnInvisibleMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MotionBlur_BP.MotionBlur_BP_C.OnInvisibleMesh");
		
		AMotionBlur_BP_C_OnInvisibleMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MotionBlur_BP.MotionBlur_BP_C.ExecuteUbergraph_MotionBlur_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMotionBlur_BP_C::ExecuteUbergraph_MotionBlur_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MotionBlur_BP.MotionBlur_BP_C.ExecuteUbergraph_MotionBlur_BP");
		
		AMotionBlur_BP_C_ExecuteUbergraph_MotionBlur_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AMotionBlur_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMotionBlur_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MotionBlur_BP.MotionBlur_BP_C");
		return ptr;
	}

}


