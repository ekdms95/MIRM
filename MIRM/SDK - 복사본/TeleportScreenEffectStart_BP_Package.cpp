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
	 * 		Name   -> Function TeleportScreenEffectStart_BP.TeleportScreenEffectStart_BP_C.ReceiveDestroyed
	 * 		Flags  -> ()
	 */
	void ATeleportScreenEffectStart_BP_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeleportScreenEffectStart_BP.TeleportScreenEffectStart_BP_C.ReceiveDestroyed");
		
		ATeleportScreenEffectStart_BP_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TeleportScreenEffectStart_BP.TeleportScreenEffectStart_BP_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATeleportScreenEffectStart_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeleportScreenEffectStart_BP.TeleportScreenEffectStart_BP_C.ReceiveTick");
		
		ATeleportScreenEffectStart_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TeleportScreenEffectStart_BP.TeleportScreenEffectStart_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ATeleportScreenEffectStart_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeleportScreenEffectStart_BP.TeleportScreenEffectStart_BP_C.ReceiveBeginPlay");
		
		ATeleportScreenEffectStart_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TeleportScreenEffectStart_BP.TeleportScreenEffectStart_BP_C.ExecuteUbergraph_TeleportScreenEffectStart_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATeleportScreenEffectStart_BP_C::ExecuteUbergraph_TeleportScreenEffectStart_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeleportScreenEffectStart_BP.TeleportScreenEffectStart_BP_C.ExecuteUbergraph_TeleportScreenEffectStart_BP");
		
		ATeleportScreenEffectStart_BP_C_ExecuteUbergraph_TeleportScreenEffectStart_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ATeleportScreenEffectStart_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATeleportScreenEffectStart_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TeleportScreenEffectStart_BP.TeleportScreenEffectStart_BP_C");
		return ptr;
	}

}


