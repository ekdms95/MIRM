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
	 * 		Name   -> Function UserNamTag_NPC_BP.UserNamTag_NPC_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AUserNamTag_NPC_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UserNamTag_NPC_BP.UserNamTag_NPC_BP_C.ReceiveBeginPlay");
		
		AUserNamTag_NPC_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UserNamTag_NPC_BP.UserNamTag_NPC_BP_C.OnCharacterZoomState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isZoom                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AUserNamTag_NPC_BP_C::OnCharacterZoomState(bool isZoom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UserNamTag_NPC_BP.UserNamTag_NPC_BP_C.OnCharacterZoomState");
		
		AUserNamTag_NPC_BP_C_OnCharacterZoomState_Params params {};
		params.isZoom = isZoom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UserNamTag_NPC_BP.UserNamTag_NPC_BP_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUserNamTag_NPC_BP_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UserNamTag_NPC_BP.UserNamTag_NPC_BP_C.ReceiveEndPlay");
		
		AUserNamTag_NPC_BP_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UserNamTag_NPC_BP.UserNamTag_NPC_BP_C.OnPreSet
	 * 		Flags  -> ()
	 */
	void AUserNamTag_NPC_BP_C::OnPreSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UserNamTag_NPC_BP.UserNamTag_NPC_BP_C.OnPreSet");
		
		AUserNamTag_NPC_BP_C_OnPreSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UserNamTag_NPC_BP.UserNamTag_NPC_BP_C.SetProgressImageEvent
	 * 		Flags  -> ()
	 */
	void AUserNamTag_NPC_BP_C::SetProgressImageEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UserNamTag_NPC_BP.UserNamTag_NPC_BP_C.SetProgressImageEvent");
		
		AUserNamTag_NPC_BP_C_SetProgressImageEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UserNamTag_NPC_BP.UserNamTag_NPC_BP_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUserNamTag_NPC_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UserNamTag_NPC_BP.UserNamTag_NPC_BP_C.ReceiveTick");
		
		AUserNamTag_NPC_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UserNamTag_NPC_BP.UserNamTag_NPC_BP_C.ExecuteUbergraph_UserNamTag_NPC_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUserNamTag_NPC_BP_C::ExecuteUbergraph_UserNamTag_NPC_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UserNamTag_NPC_BP.UserNamTag_NPC_BP_C.ExecuteUbergraph_UserNamTag_NPC_BP");
		
		AUserNamTag_NPC_BP_C_ExecuteUbergraph_UserNamTag_NPC_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AUserNamTag_NPC_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUserNamTag_NPC_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass UserNamTag_NPC_BP.UserNamTag_NPC_BP_C");
		return ptr;
	}

}


