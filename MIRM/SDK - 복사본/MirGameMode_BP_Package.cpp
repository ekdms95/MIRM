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
	 * 		Name   -> Function MirGameMode_BP.MirGameMode_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AMirGameMode_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGameMode_BP.MirGameMode_BP_C.ReceiveBeginPlay");
		
		AMirGameMode_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGameMode_BP.MirGameMode_BP_C.OnRecvNetworkMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            typenum                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMirGameMode_BP_C::OnRecvNetworkMessage(bool bSuccess, int32_t typenum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGameMode_BP.MirGameMode_BP_C.OnRecvNetworkMessage");
		
		AMirGameMode_BP_C_OnRecvNetworkMessage_Params params {};
		params.bSuccess = bSuccess;
		params.typenum = typenum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGameMode_BP.MirGameMode_BP_C.wake
	 * 		Flags  -> ()
	 */
	void AMirGameMode_BP_C::wake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGameMode_BP.MirGameMode_BP_C.wake");
		
		AMirGameMode_BP_C_wake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGameMode_BP.MirGameMode_BP_C.ExecuteUbergraph_MirGameMode_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMirGameMode_BP_C::ExecuteUbergraph_MirGameMode_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGameMode_BP.MirGameMode_BP_C.ExecuteUbergraph_MirGameMode_BP");
		
		AMirGameMode_BP_C_ExecuteUbergraph_MirGameMode_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AMirGameMode_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMirGameMode_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MirGameMode_BP.MirGameMode_BP_C");
		return ptr;
	}

}


