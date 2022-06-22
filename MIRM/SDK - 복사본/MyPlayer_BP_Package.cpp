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
	 * 		Name   -> Function MyPlayer_BP.MyPlayer_BP_C.UpdatePointLight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMyPlayer_BP_C::UpdatePointLight(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyPlayer_BP.MyPlayer_BP_C.UpdatePointLight");
		
		AMyPlayer_BP_C_UpdatePointLight_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyPlayer_BP.MyPlayer_BP_C.ExitPointLightTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InForceUpdate                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMyPlayer_BP_C::ExitPointLightTrigger(bool InForceUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyPlayer_BP.MyPlayer_BP_C.ExitPointLightTrigger");
		
		AMyPlayer_BP_C_ExitPointLightTrigger_Params params {};
		params.InForceUpdate = InForceUpdate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyPlayer_BP.MyPlayer_BP_C.EnterPointLightTrigger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InForceUpdate                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMyPlayer_BP_C::EnterPointLightTrigger(bool InForceUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyPlayer_BP.MyPlayer_BP_C.EnterPointLightTrigger");
		
		AMyPlayer_BP_C_EnterPointLightTrigger_Params params {};
		params.InForceUpdate = InForceUpdate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyPlayer_BP.MyPlayer_BP_C.타임라인_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AMyPlayer_BP_C::타임라인_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyPlayer_BP.MyPlayer_BP_C.타임라인_0__FinishedFunc");
		
		AMyPlayer_BP_C_타임라인_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyPlayer_BP.MyPlayer_BP_C.타임라인_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AMyPlayer_BP_C::타임라인_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyPlayer_BP.MyPlayer_BP_C.타임라인_0__UpdateFunc");
		
		AMyPlayer_BP_C_타임라인_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyPlayer_BP.MyPlayer_BP_C.타임라인_1__FinishedFunc
	 * 		Flags  -> ()
	 */
	void AMyPlayer_BP_C::타임라인_1__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyPlayer_BP.MyPlayer_BP_C.타임라인_1__FinishedFunc");
		
		AMyPlayer_BP_C_타임라인_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyPlayer_BP.MyPlayer_BP_C.타임라인_1__UpdateFunc
	 * 		Flags  -> ()
	 */
	void AMyPlayer_BP_C::타임라인_1__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyPlayer_BP.MyPlayer_BP_C.타임라인_1__UpdateFunc");
		
		AMyPlayer_BP_C_타임라인_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyPlayer_BP.MyPlayer_BP_C.CheckGrassCollision
	 * 		Flags  -> ()
	 */
	void AMyPlayer_BP_C::CheckGrassCollision()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyPlayer_BP.MyPlayer_BP_C.CheckGrassCollision");
		
		AMyPlayer_BP_C_CheckGrassCollision_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyPlayer_BP.MyPlayer_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AMyPlayer_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyPlayer_BP.MyPlayer_BP_C.ReceiveBeginPlay");
		
		AMyPlayer_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyPlayer_BP.MyPlayer_BP_C.OnStartSkillEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMyPlayer_BP_C::OnStartSkillEvent(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyPlayer_BP.MyPlayer_BP_C.OnStartSkillEvent");
		
		AMyPlayer_BP_C_OnStartSkillEvent_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyPlayer_BP.MyPlayer_BP_C.OnSetTargetInfo
	 * 		Flags  -> ()
	 */
	void AMyPlayer_BP_C::OnSetTargetInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyPlayer_BP.MyPlayer_BP_C.OnSetTargetInfo");
		
		AMyPlayer_BP_C_OnSetTargetInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyPlayer_BP.MyPlayer_BP_C.BndEvt__VehicleSkeletalMesh__K2Node_ComponentBoundEvent_11_ActorComponentDeactivateSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UActorComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMyPlayer_BP_C::BndEvt__VehicleSkeletalMesh__K2Node_ComponentBoundEvent_11_ActorComponentDeactivateSignature__DelegateSignature(class UActorComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyPlayer_BP.MyPlayer_BP_C.BndEvt__VehicleSkeletalMesh__K2Node_ComponentBoundEvent_11_ActorComponentDeactivateSignature__DelegateSignature");
		
		AMyPlayer_BP_C_BndEvt__VehicleSkeletalMesh__K2Node_ComponentBoundEvent_11_ActorComponentDeactivateSignature__DelegateSignature_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyPlayer_BP.MyPlayer_BP_C.BndEvt__VehicleSkeletalMesh__K2Node_ComponentBoundEvent_0_OnAnimInitialized__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AMyPlayer_BP_C::BndEvt__VehicleSkeletalMesh__K2Node_ComponentBoundEvent_0_OnAnimInitialized__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyPlayer_BP.MyPlayer_BP_C.BndEvt__VehicleSkeletalMesh__K2Node_ComponentBoundEvent_0_OnAnimInitialized__DelegateSignature");
		
		AMyPlayer_BP_C_BndEvt__VehicleSkeletalMesh__K2Node_ComponentBoundEvent_0_OnAnimInitialized__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyPlayer_BP.MyPlayer_BP_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMyPlayer_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyPlayer_BP.MyPlayer_BP_C.ReceiveTick");
		
		AMyPlayer_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyPlayer_BP.MyPlayer_BP_C.OnScanEffectEvent
	 * 		Flags  -> ()
	 */
	void AMyPlayer_BP_C::OnScanEffectEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyPlayer_BP.MyPlayer_BP_C.OnScanEffectEvent");
		
		AMyPlayer_BP_C_OnScanEffectEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyPlayer_BP.MyPlayer_BP_C.OnCancelSkillEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMyPlayer_BP_C::OnCancelSkillEvent(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyPlayer_BP.MyPlayer_BP_C.OnCancelSkillEvent");
		
		AMyPlayer_BP_C_OnCancelSkillEvent_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyPlayer_BP.MyPlayer_BP_C.OnSetLookAt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsLookAt                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     position                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMyPlayer_BP_C::OnSetLookAt(bool IsLookAt, const struct FVector& position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyPlayer_BP.MyPlayer_BP_C.OnSetLookAt");
		
		AMyPlayer_BP_C_OnSetLookAt_Params params {};
		params.IsLookAt = IsLookAt;
		params.position = position;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyPlayer_BP.MyPlayer_BP_C.OnSetBoneShake
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsBoneShake                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMyPlayer_BP_C::OnSetBoneShake(bool IsBoneShake)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyPlayer_BP.MyPlayer_BP_C.OnSetBoneShake");
		
		AMyPlayer_BP_C_OnSetBoneShake_Params params {};
		params.IsBoneShake = IsBoneShake;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyPlayer_BP.MyPlayer_BP_C.ExecuteUbergraph_MyPlayer_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMyPlayer_BP_C::ExecuteUbergraph_MyPlayer_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyPlayer_BP.MyPlayer_BP_C.ExecuteUbergraph_MyPlayer_BP");
		
		AMyPlayer_BP_C_ExecuteUbergraph_MyPlayer_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyPlayer_BP.MyPlayer_BP_C.OnSetTatgetUIDDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AMyPlayer_BP_C::OnSetTatgetUIDDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyPlayer_BP.MyPlayer_BP_C.OnSetTatgetUIDDispatcher__DelegateSignature");
		
		AMyPlayer_BP_C_OnSetTatgetUIDDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyPlayer_BP.MyPlayer_BP_C.OnStartSkillDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsSkillActivate                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMyPlayer_BP_C::OnStartSkillDispatcher__DelegateSignature(int32_t Index, bool IsSkillActivate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyPlayer_BP.MyPlayer_BP_C.OnStartSkillDispatcher__DelegateSignature");
		
		AMyPlayer_BP_C_OnStartSkillDispatcher__DelegateSignature_Params params {};
		params.Index = Index;
		params.IsSkillActivate = IsSkillActivate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AMyPlayer_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMyPlayer_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MyPlayer_BP.MyPlayer_BP_C");
		return ptr;
	}

}


