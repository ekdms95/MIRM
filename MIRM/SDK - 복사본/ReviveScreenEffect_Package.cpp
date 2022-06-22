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
	 * 		Name   -> Function ReviveScreenEffect.ReviveScreenEffect_C.ReceiveDestroyed
	 * 		Flags  -> ()
	 */
	void AReviveScreenEffect_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReviveScreenEffect.ReviveScreenEffect_C.ReceiveDestroyed");
		
		AReviveScreenEffect_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReviveScreenEffect.ReviveScreenEffect_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AReviveScreenEffect_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReviveScreenEffect.ReviveScreenEffect_C.ReceiveTick");
		
		AReviveScreenEffect_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReviveScreenEffect.ReviveScreenEffect_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AReviveScreenEffect_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReviveScreenEffect.ReviveScreenEffect_C.ReceiveBeginPlay");
		
		AReviveScreenEffect_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReviveScreenEffect.ReviveScreenEffect_C.ExecuteUbergraph_ReviveScreenEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AReviveScreenEffect_C::ExecuteUbergraph_ReviveScreenEffect(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReviveScreenEffect.ReviveScreenEffect_C.ExecuteUbergraph_ReviveScreenEffect");
		
		AReviveScreenEffect_C_ExecuteUbergraph_ReviveScreenEffect_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AReviveScreenEffect_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AReviveScreenEffect_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ReviveScreenEffect.ReviveScreenEffect_C");
		return ptr;
	}

}


