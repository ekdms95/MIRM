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
	 * 		Name   -> Function Ginkgo_Village_Sound.Ginkgo_Village_Sound_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGinkgo_Village_Sound_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ginkgo_Village_Sound.Ginkgo_Village_Sound_C.ReceiveEndPlay");
		
		AGinkgo_Village_Sound_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ginkgo_Village_Sound.Ginkgo_Village_Sound_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AGinkgo_Village_Sound_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ginkgo_Village_Sound.Ginkgo_Village_Sound_C.ReceiveBeginPlay");
		
		AGinkgo_Village_Sound_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ginkgo_Village_Sound.Ginkgo_Village_Sound_C.BndEvt__Ginkgo_Village_Sound_Sound_TrigerVolume_001_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OverlappedActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGinkgo_Village_Sound_C::BndEvt__Ginkgo_Village_Sound_Sound_TrigerVolume_001_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ginkgo_Village_Sound.Ginkgo_Village_Sound_C.BndEvt__Ginkgo_Village_Sound_Sound_TrigerVolume_001_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature");
		
		AGinkgo_Village_Sound_C_BndEvt__Ginkgo_Village_Sound_Sound_TrigerVolume_001_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedActor = OverlappedActor;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ginkgo_Village_Sound.Ginkgo_Village_Sound_C.BndEvt__Ginkgo_Village_Sound_Sound_TrigerVolume_001_K2Node_ActorBoundEvent_5_ActorEndOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OverlappedActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGinkgo_Village_Sound_C::BndEvt__Ginkgo_Village_Sound_Sound_TrigerVolume_001_K2Node_ActorBoundEvent_5_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ginkgo_Village_Sound.Ginkgo_Village_Sound_C.BndEvt__Ginkgo_Village_Sound_Sound_TrigerVolume_001_K2Node_ActorBoundEvent_5_ActorEndOverlapSignature__DelegateSignature");
		
		AGinkgo_Village_Sound_C_BndEvt__Ginkgo_Village_Sound_Sound_TrigerVolume_001_K2Node_ActorBoundEvent_5_ActorEndOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedActor = OverlappedActor;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ginkgo_Village_Sound.Ginkgo_Village_Sound_C.ExecuteUbergraph_Ginkgo_Village_Sound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGinkgo_Village_Sound_C::ExecuteUbergraph_Ginkgo_Village_Sound(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ginkgo_Village_Sound.Ginkgo_Village_Sound_C.ExecuteUbergraph_Ginkgo_Village_Sound");
		
		AGinkgo_Village_Sound_C_ExecuteUbergraph_Ginkgo_Village_Sound_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AGinkgo_Village_Sound_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGinkgo_Village_Sound_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ginkgo_Village_Sound.Ginkgo_Village_Sound_C");
		return ptr;
	}

}


