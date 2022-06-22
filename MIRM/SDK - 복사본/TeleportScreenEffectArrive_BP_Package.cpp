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
	 * 		Name   -> Function TeleportScreenEffectArrive_BP.TeleportScreenEffectArrive_BP_C.ReceiveDestroyed
	 * 		Flags  -> ()
	 */
	void ATeleportScreenEffectArrive_BP_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeleportScreenEffectArrive_BP.TeleportScreenEffectArrive_BP_C.ReceiveDestroyed");
		
		ATeleportScreenEffectArrive_BP_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TeleportScreenEffectArrive_BP.TeleportScreenEffectArrive_BP_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATeleportScreenEffectArrive_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeleportScreenEffectArrive_BP.TeleportScreenEffectArrive_BP_C.ReceiveTick");
		
		ATeleportScreenEffectArrive_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TeleportScreenEffectArrive_BP.TeleportScreenEffectArrive_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ATeleportScreenEffectArrive_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeleportScreenEffectArrive_BP.TeleportScreenEffectArrive_BP_C.ReceiveBeginPlay");
		
		ATeleportScreenEffectArrive_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TeleportScreenEffectArrive_BP.TeleportScreenEffectArrive_BP_C.ExecuteUbergraph_TeleportScreenEffectArrive_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATeleportScreenEffectArrive_BP_C::ExecuteUbergraph_TeleportScreenEffectArrive_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TeleportScreenEffectArrive_BP.TeleportScreenEffectArrive_BP_C.ExecuteUbergraph_TeleportScreenEffectArrive_BP");
		
		ATeleportScreenEffectArrive_BP_C_ExecuteUbergraph_TeleportScreenEffectArrive_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ATeleportScreenEffectArrive_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATeleportScreenEffectArrive_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TeleportScreenEffectArrive_BP.TeleportScreenEffectArrive_BP_C");
		return ptr;
	}

}


