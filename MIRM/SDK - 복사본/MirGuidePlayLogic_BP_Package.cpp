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
	 * 		Name   -> Function MirGuidePlayLogic_BP.MirGuidePlayLogic_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AMirGuidePlayLogic_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGuidePlayLogic_BP.MirGuidePlayLogic_BP_C.ReceiveBeginPlay");
		
		AMirGuidePlayLogic_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGuidePlayLogic_BP.MirGuidePlayLogic_BP_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMirGuidePlayLogic_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGuidePlayLogic_BP.MirGuidePlayLogic_BP_C.ReceiveTick");
		
		AMirGuidePlayLogic_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGuidePlayLogic_BP.MirGuidePlayLogic_BP_C.OnStopBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Contents                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AMirGuidePlayLogic_BP_C::OnStopBP(const class FString& Contents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGuidePlayLogic_BP.MirGuidePlayLogic_BP_C.OnStopBP");
		
		AMirGuidePlayLogic_BP_C_OnStopBP_Params params {};
		params.Contents = Contents;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGuidePlayLogic_BP.MirGuidePlayLogic_BP_C.OnStartBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Contents                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AMirGuidePlayLogic_BP_C::OnStartBP(const class FString& Contents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGuidePlayLogic_BP.MirGuidePlayLogic_BP_C.OnStartBP");
		
		AMirGuidePlayLogic_BP_C_OnStartBP_Params params {};
		params.Contents = Contents;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGuidePlayLogic_BP.MirGuidePlayLogic_BP_C.OnInitBP
	 * 		Flags  -> ()
	 */
	void AMirGuidePlayLogic_BP_C::OnInitBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGuidePlayLogic_BP.MirGuidePlayLogic_BP_C.OnInitBP");
		
		AMirGuidePlayLogic_BP_C_OnInitBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGuidePlayLogic_BP.MirGuidePlayLogic_BP_C.OnDestroyBP
	 * 		Flags  -> ()
	 */
	void AMirGuidePlayLogic_BP_C::OnDestroyBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGuidePlayLogic_BP.MirGuidePlayLogic_BP_C.OnDestroyBP");
		
		AMirGuidePlayLogic_BP_C_OnDestroyBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGuidePlayLogic_BP.MirGuidePlayLogic_BP_C.ExecuteUbergraph_MirGuidePlayLogic_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMirGuidePlayLogic_BP_C::ExecuteUbergraph_MirGuidePlayLogic_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGuidePlayLogic_BP.MirGuidePlayLogic_BP_C.ExecuteUbergraph_MirGuidePlayLogic_BP");
		
		AMirGuidePlayLogic_BP_C_ExecuteUbergraph_MirGuidePlayLogic_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AMirGuidePlayLogic_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMirGuidePlayLogic_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MirGuidePlayLogic_BP.MirGuidePlayLogic_BP_C");
		return ptr;
	}

}


