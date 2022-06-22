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
	 * 		Name   -> Function UserTeamTag_BP.UserTeamTag_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AUserTeamTag_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UserTeamTag_BP.UserTeamTag_BP_C.ReceiveBeginPlay");
		
		AUserTeamTag_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UserTeamTag_BP.UserTeamTag_BP_C.OnCharacterZoomState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isZoom                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AUserTeamTag_BP_C::OnCharacterZoomState(bool isZoom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UserTeamTag_BP.UserTeamTag_BP_C.OnCharacterZoomState");
		
		AUserTeamTag_BP_C_OnCharacterZoomState_Params params {};
		params.isZoom = isZoom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UserTeamTag_BP.UserTeamTag_BP_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUserTeamTag_BP_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UserTeamTag_BP.UserTeamTag_BP_C.ReceiveEndPlay");
		
		AUserTeamTag_BP_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UserTeamTag_BP.UserTeamTag_BP_C.OnPreSet
	 * 		Flags  -> ()
	 */
	void AUserTeamTag_BP_C::OnPreSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UserTeamTag_BP.UserTeamTag_BP_C.OnPreSet");
		
		AUserTeamTag_BP_C_OnPreSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UserTeamTag_BP.UserTeamTag_BP_C.SetProgressImageEvent
	 * 		Flags  -> ()
	 */
	void AUserTeamTag_BP_C::SetProgressImageEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UserTeamTag_BP.UserTeamTag_BP_C.SetProgressImageEvent");
		
		AUserTeamTag_BP_C_SetProgressImageEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UserTeamTag_BP.UserTeamTag_BP_C.ExecuteUbergraph_UserTeamTag_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUserTeamTag_BP_C::ExecuteUbergraph_UserTeamTag_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UserTeamTag_BP.UserTeamTag_BP_C.ExecuteUbergraph_UserTeamTag_BP");
		
		AUserTeamTag_BP_C_ExecuteUbergraph_UserTeamTag_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AUserTeamTag_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUserTeamTag_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass UserTeamTag_BP.UserTeamTag_BP_C");
		return ptr;
	}

}


