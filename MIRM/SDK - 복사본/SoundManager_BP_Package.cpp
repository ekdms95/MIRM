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
	 * 		Name   -> Function SoundManager_BP.SoundManager_BP_C.Setup
	 * 		Flags  -> ()
	 */
	void USoundManager_BP_C::Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundManager_BP.SoundManager_BP_C.Setup");
		
		USoundManager_BP_C_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundManager_BP.SoundManager_BP_C.OnSetup
	 * 		Flags  -> ()
	 */
	void USoundManager_BP_C::OnSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundManager_BP.SoundManager_BP_C.OnSetup");
		
		USoundManager_BP_C_OnSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SoundManager_BP.SoundManager_BP_C.ExecuteUbergraph_SoundManager_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USoundManager_BP_C::ExecuteUbergraph_SoundManager_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SoundManager_BP.SoundManager_BP_C.ExecuteUbergraph_SoundManager_BP");
		
		USoundManager_BP_C_ExecuteUbergraph_SoundManager_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction USoundManager_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoundManager_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SoundManager_BP.SoundManager_BP_C");
		return ptr;
	}

}


