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
	 * 		Name   -> Function MotionBlur_InterfaceBP.MotionBlur_InterfaceBP_C.SetCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseSnapshot                               Pose                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               IsFreeze                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMotionBlur_InterfaceBP_C::SetCharacter(const struct FPoseSnapshot& Pose, bool IsFreeze, bool* success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MotionBlur_InterfaceBP.MotionBlur_InterfaceBP_C.SetCharacter");
		
		UMotionBlur_InterfaceBP_C_SetCharacter_Params params {};
		params.Pose = Pose;
		params.IsFreeze = IsFreeze;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (success != nullptr)
			*success = params.success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMotionBlur_InterfaceBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMotionBlur_InterfaceBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MotionBlur_InterfaceBP.MotionBlur_InterfaceBP_C");
		return ptr;
	}

}


