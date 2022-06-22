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
	 * 		Name   -> Function FacingCameraActor_QuestProgress.FacingCameraActor_QuestProgress_C.SetIconImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      IconName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AFacingCameraActor_QuestProgress_C::SetIconImage(const class FString& IconName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FacingCameraActor_QuestProgress.FacingCameraActor_QuestProgress_C.SetIconImage");
		
		AFacingCameraActor_QuestProgress_C_SetIconImage_Params params {};
		params.IconName = IconName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FacingCameraActor_QuestProgress.FacingCameraActor_QuestProgress_C.StopProgress
	 * 		Flags  -> ()
	 */
	void AFacingCameraActor_QuestProgress_C::StopProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FacingCameraActor_QuestProgress.FacingCameraActor_QuestProgress_C.StopProgress");
		
		AFacingCameraActor_QuestProgress_C_StopProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FacingCameraActor_QuestProgress.FacingCameraActor_QuestProgress_C.OnSetActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bActive                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFacingCameraActor_QuestProgress_C::OnSetActor(bool bActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FacingCameraActor_QuestProgress.FacingCameraActor_QuestProgress_C.OnSetActor");
		
		AFacingCameraActor_QuestProgress_C_OnSetActor_Params params {};
		params.bActive = bActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FacingCameraActor_QuestProgress.FacingCameraActor_QuestProgress_C.ReadyProgress
	 * 		Flags  -> ()
	 */
	void AFacingCameraActor_QuestProgress_C::ReadyProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FacingCameraActor_QuestProgress.FacingCameraActor_QuestProgress_C.ReadyProgress");
		
		AFacingCameraActor_QuestProgress_C_ReadyProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FacingCameraActor_QuestProgress.FacingCameraActor_QuestProgress_C.ButtonActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bActive                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFacingCameraActor_QuestProgress_C::ButtonActive(bool bActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FacingCameraActor_QuestProgress.FacingCameraActor_QuestProgress_C.ButtonActive");
		
		AFacingCameraActor_QuestProgress_C_ButtonActive_Params params {};
		params.bActive = bActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FacingCameraActor_QuestProgress.FacingCameraActor_QuestProgress_C.CompleteProgress
	 * 		Flags  -> ()
	 */
	void AFacingCameraActor_QuestProgress_C::CompleteProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FacingCameraActor_QuestProgress.FacingCameraActor_QuestProgress_C.CompleteProgress");
		
		AFacingCameraActor_QuestProgress_C_CompleteProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FacingCameraActor_QuestProgress.FacingCameraActor_QuestProgress_C.PlayAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMirQuestProgressHUDAnimationType                  AnimationType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFacingCameraActor_QuestProgress_C::PlayAnimation(EMirQuestProgressHUDAnimationType AnimationType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FacingCameraActor_QuestProgress.FacingCameraActor_QuestProgress_C.PlayAnimation");
		
		AFacingCameraActor_QuestProgress_C_PlayAnimation_Params params {};
		params.AnimationType = AnimationType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FacingCameraActor_QuestProgress.FacingCameraActor_QuestProgress_C.SetNameTagText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void AFacingCameraActor_QuestProgress_C::SetNameTagText(const class FString& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FacingCameraActor_QuestProgress.FacingCameraActor_QuestProgress_C.SetNameTagText");
		
		AFacingCameraActor_QuestProgress_C_SetNameTagText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FacingCameraActor_QuestProgress.FacingCameraActor_QuestProgress_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AFacingCameraActor_QuestProgress_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FacingCameraActor_QuestProgress.FacingCameraActor_QuestProgress_C.ReceiveBeginPlay");
		
		AFacingCameraActor_QuestProgress_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FacingCameraActor_QuestProgress.FacingCameraActor_QuestProgress_C.ReceiveActorOnInputTouchBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETouchIndex                                        FingerIndex                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFacingCameraActor_QuestProgress_C::ReceiveActorOnInputTouchBegin(ETouchIndex FingerIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FacingCameraActor_QuestProgress.FacingCameraActor_QuestProgress_C.ReceiveActorOnInputTouchBegin");
		
		AFacingCameraActor_QuestProgress_C_ReceiveActorOnInputTouchBegin_Params params {};
		params.FingerIndex = FingerIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FacingCameraActor_QuestProgress.FacingCameraActor_QuestProgress_C.CompleteEventDispatcher_Event_1
	 * 		Flags  -> ()
	 */
	void AFacingCameraActor_QuestProgress_C::CompleteEventDispatcher_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FacingCameraActor_QuestProgress.FacingCameraActor_QuestProgress_C.CompleteEventDispatcher_Event_1");
		
		AFacingCameraActor_QuestProgress_C_CompleteEventDispatcher_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FacingCameraActor_QuestProgress.FacingCameraActor_QuestProgress_C.ExecuteUbergraph_FacingCameraActor_QuestProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AFacingCameraActor_QuestProgress_C::ExecuteUbergraph_FacingCameraActor_QuestProgress(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FacingCameraActor_QuestProgress.FacingCameraActor_QuestProgress_C.ExecuteUbergraph_FacingCameraActor_QuestProgress");
		
		AFacingCameraActor_QuestProgress_C_ExecuteUbergraph_FacingCameraActor_QuestProgress_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FacingCameraActor_QuestProgress.FacingCameraActor_QuestProgress_C.CompleteEventDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AFacingCameraActor_QuestProgress_C::CompleteEventDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FacingCameraActor_QuestProgress.FacingCameraActor_QuestProgress_C.CompleteEventDispatcher__DelegateSignature");
		
		AFacingCameraActor_QuestProgress_C_CompleteEventDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function FacingCameraActor_QuestProgress.FacingCameraActor_QuestProgress_C.ButtonClickEventDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AFacingCameraActor_QuestProgress_C::ButtonClickEventDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FacingCameraActor_QuestProgress.FacingCameraActor_QuestProgress_C.ButtonClickEventDispatcher__DelegateSignature");
		
		AFacingCameraActor_QuestProgress_C_ButtonClickEventDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AFacingCameraActor_QuestProgress_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFacingCameraActor_QuestProgress_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FacingCameraActor_QuestProgress.FacingCameraActor_QuestProgress_C");
		return ptr;
	}

}


