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
	 * 		Name   -> Function EDAnimation_Bazier_BP.EDAnimation_Bazier_BP_C.OnDrawDebug
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVector>                             PointArray                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	bool AEDAnimation_Bazier_BP_C::OnDrawDebug(TArray<struct FVector> PointArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EDAnimation_Bazier_BP.EDAnimation_Bazier_BP_C.OnDrawDebug");
		
		AEDAnimation_Bazier_BP_C_OnDrawDebug_Params params {};
		params.PointArray = PointArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EDAnimation_Bazier_BP.EDAnimation_Bazier_BP_C.OnMakePath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVector>                             PointArray                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	bool AEDAnimation_Bazier_BP_C::OnMakePath(TArray<struct FVector> PointArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EDAnimation_Bazier_BP.EDAnimation_Bazier_BP_C.OnMakePath");
		
		AEDAnimation_Bazier_BP_C_OnMakePath_Params params {};
		params.PointArray = PointArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EDAnimation_Bazier_BP.EDAnimation_Bazier_BP_C.OnReset
	 * 		Flags  -> ()
	 */
	bool AEDAnimation_Bazier_BP_C::OnReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EDAnimation_Bazier_BP.EDAnimation_Bazier_BP_C.OnReset");
		
		AEDAnimation_Bazier_BP_C_OnReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EDAnimation_Bazier_BP.EDAnimation_Bazier_BP_C.OnGetLocation
	 * 		Flags  -> ()
	 */
	struct FVector AEDAnimation_Bazier_BP_C::OnGetLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EDAnimation_Bazier_BP.EDAnimation_Bazier_BP_C.OnGetLocation");
		
		AEDAnimation_Bazier_BP_C_OnGetLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EDAnimation_Bazier_BP.EDAnimation_Bazier_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AEDAnimation_Bazier_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EDAnimation_Bazier_BP.EDAnimation_Bazier_BP_C.UserConstructionScript");
		
		AEDAnimation_Bazier_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EDAnimation_Bazier_BP.EDAnimation_Bazier_BP_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEDAnimation_Bazier_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EDAnimation_Bazier_BP.EDAnimation_Bazier_BP_C.ReceiveTick");
		
		AEDAnimation_Bazier_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EDAnimation_Bazier_BP.EDAnimation_Bazier_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AEDAnimation_Bazier_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EDAnimation_Bazier_BP.EDAnimation_Bazier_BP_C.ReceiveBeginPlay");
		
		AEDAnimation_Bazier_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EDAnimation_Bazier_BP.EDAnimation_Bazier_BP_C.OnPlay
	 * 		Flags  -> ()
	 */
	void AEDAnimation_Bazier_BP_C::OnPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EDAnimation_Bazier_BP.EDAnimation_Bazier_BP_C.OnPlay");
		
		AEDAnimation_Bazier_BP_C_OnPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EDAnimation_Bazier_BP.EDAnimation_Bazier_BP_C.OnStop
	 * 		Flags  -> ()
	 */
	void AEDAnimation_Bazier_BP_C::OnStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EDAnimation_Bazier_BP.EDAnimation_Bazier_BP_C.OnStop");
		
		AEDAnimation_Bazier_BP_C_OnStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EDAnimation_Bazier_BP.EDAnimation_Bazier_BP_C.ExecuteUbergraph_EDAnimation_Bazier_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEDAnimation_Bazier_BP_C::ExecuteUbergraph_EDAnimation_Bazier_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EDAnimation_Bazier_BP.EDAnimation_Bazier_BP_C.ExecuteUbergraph_EDAnimation_Bazier_BP");
		
		AEDAnimation_Bazier_BP_C_ExecuteUbergraph_EDAnimation_Bazier_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AEDAnimation_Bazier_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEDAnimation_Bazier_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EDAnimation_Bazier_BP.EDAnimation_Bazier_BP_C");
		return ptr;
	}

}


