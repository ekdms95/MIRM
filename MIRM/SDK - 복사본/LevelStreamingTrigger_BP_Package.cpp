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
	 * 		Name   -> Function LevelStreamingTrigger_BP.LevelStreamingTrigger_BP_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ALevelStreamingTrigger_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelStreamingTrigger_BP.LevelStreamingTrigger_BP_C.UserConstructionScript");
		
		ALevelStreamingTrigger_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LevelStreamingTrigger_BP.LevelStreamingTrigger_BP_C.ReceiveActorBeginOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALevelStreamingTrigger_BP_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelStreamingTrigger_BP.LevelStreamingTrigger_BP_C.ReceiveActorBeginOverlap");
		
		ALevelStreamingTrigger_BP_C_ReceiveActorBeginOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LevelStreamingTrigger_BP.LevelStreamingTrigger_BP_C.ReceiveActorEndOverlap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALevelStreamingTrigger_BP_C::ReceiveActorEndOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelStreamingTrigger_BP.LevelStreamingTrigger_BP_C.ReceiveActorEndOverlap");
		
		ALevelStreamingTrigger_BP_C_ReceiveActorEndOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LevelStreamingTrigger_BP.LevelStreamingTrigger_BP_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALevelStreamingTrigger_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelStreamingTrigger_BP.LevelStreamingTrigger_BP_C.ReceiveTick");
		
		ALevelStreamingTrigger_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LevelStreamingTrigger_BP.LevelStreamingTrigger_BP_C.OnSetActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bActive                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALevelStreamingTrigger_BP_C::OnSetActive(bool bActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelStreamingTrigger_BP.LevelStreamingTrigger_BP_C.OnSetActive");
		
		ALevelStreamingTrigger_BP_C_OnSetActive_Params params {};
		params.bActive = bActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LevelStreamingTrigger_BP.LevelStreamingTrigger_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ALevelStreamingTrigger_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelStreamingTrigger_BP.LevelStreamingTrigger_BP_C.ReceiveBeginPlay");
		
		ALevelStreamingTrigger_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LevelStreamingTrigger_BP.LevelStreamingTrigger_BP_C.OnLoadStreamingLevel
	 * 		Flags  -> ()
	 */
	void ALevelStreamingTrigger_BP_C::OnLoadStreamingLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelStreamingTrigger_BP.LevelStreamingTrigger_BP_C.OnLoadStreamingLevel");
		
		ALevelStreamingTrigger_BP_C_OnLoadStreamingLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LevelStreamingTrigger_BP.LevelStreamingTrigger_BP_C.OnUnLoadStreamingLevel
	 * 		Flags  -> ()
	 */
	void ALevelStreamingTrigger_BP_C::OnUnLoadStreamingLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelStreamingTrigger_BP.LevelStreamingTrigger_BP_C.OnUnLoadStreamingLevel");
		
		ALevelStreamingTrigger_BP_C_OnUnLoadStreamingLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LevelStreamingTrigger_BP.LevelStreamingTrigger_BP_C.ExecuteUbergraph_LevelStreamingTrigger_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALevelStreamingTrigger_BP_C::ExecuteUbergraph_LevelStreamingTrigger_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LevelStreamingTrigger_BP.LevelStreamingTrigger_BP_C.ExecuteUbergraph_LevelStreamingTrigger_BP");
		
		ALevelStreamingTrigger_BP_C_ExecuteUbergraph_LevelStreamingTrigger_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ALevelStreamingTrigger_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALevelStreamingTrigger_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LevelStreamingTrigger_BP.LevelStreamingTrigger_BP_C");
		return ptr;
	}

}


