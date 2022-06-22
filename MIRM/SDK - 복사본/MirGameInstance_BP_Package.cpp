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
	 * 		Name   -> Function MirGameInstance_BP.MirGameInstance_BP_C.BGM_Sound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundBase*                                  sound                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              VolumeMultiplier                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bPersistAcrossLevelTransition                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMirGameInstance_BP_C::BGM_Sound(class USoundBase* sound, float VolumeMultiplier, bool bPersistAcrossLevelTransition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGameInstance_BP.MirGameInstance_BP_C.BGM_Sound");
		
		UMirGameInstance_BP_C_BGM_Sound_Params params {};
		params.sound = sound;
		params.VolumeMultiplier = VolumeMultiplier;
		params.bPersistAcrossLevelTransition = bPersistAcrossLevelTransition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGameInstance_BP.MirGameInstance_BP_C.SetNoticeAddItemWithImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMirGameInstance_BP_C::SetNoticeAddItemWithImage(int32_t ItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGameInstance_BP.MirGameInstance_BP_C.SetNoticeAddItemWithImage");
		
		UMirGameInstance_BP_C_SetNoticeAddItemWithImage_Params params {};
		params.ItemIndex = ItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGameInstance_BP.MirGameInstance_BP_C.SetNoticeWorldBossMessageWithText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMirGameInstance_BP_C::SetNoticeWorldBossMessageWithText(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGameInstance_BP.MirGameInstance_BP_C.SetNoticeWorldBossMessageWithText");
		
		UMirGameInstance_BP_C_SetNoticeWorldBossMessageWithText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGameInstance_BP.MirGameInstance_BP_C.OnEventToastMsgDelayTime
	 * 		Flags  -> ()
	 */
	void UMirGameInstance_BP_C::OnEventToastMsgDelayTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGameInstance_BP.MirGameInstance_BP_C.OnEventToastMsgDelayTime");
		
		UMirGameInstance_BP_C_OnEventToastMsgDelayTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGameInstance_BP.MirGameInstance_BP_C.SetNoticeBossMessageWithText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UMirGameInstance_BP_C::SetNoticeBossMessageWithText(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGameInstance_BP.MirGameInstance_BP_C.SetNoticeBossMessageWithText");
		
		UMirGameInstance_BP_C_SetNoticeBossMessageWithText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGameInstance_BP.MirGameInstance_BP_C.CallBlackCurtain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOn                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ESlateVisibility                                   slateVisibility                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMirGameInstance_BP_C::CallBlackCurtain(bool IsOn, ESlateVisibility slateVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGameInstance_BP.MirGameInstance_BP_C.CallBlackCurtain");
		
		UMirGameInstance_BP_C_CallBlackCurtain_Params params {};
		params.IsOn = IsOn;
		params.slateVisibility = slateVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGameInstance_BP.MirGameInstance_BP_C.BeginServerReconnectScreenEvent
	 * 		Flags  -> ()
	 */
	void UMirGameInstance_BP_C::BeginServerReconnectScreenEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGameInstance_BP.MirGameInstance_BP_C.BeginServerReconnectScreenEvent");
		
		UMirGameInstance_BP_C_BeginServerReconnectScreenEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGameInstance_BP.MirGameInstance_BP_C.EndServerReconnectScreenEvent
	 * 		Flags  -> ()
	 */
	void UMirGameInstance_BP_C::EndServerReconnectScreenEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGameInstance_BP.MirGameInstance_BP_C.EndServerReconnectScreenEvent");
		
		UMirGameInstance_BP_C_EndServerReconnectScreenEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGameInstance_BP.MirGameInstance_BP_C.OnChekToastStack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ToastMsg                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMirGameInstance_BP_C::OnChekToastStack(const class FText& ToastMsg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGameInstance_BP.MirGameInstance_BP_C.OnChekToastStack");
		
		UMirGameInstance_BP_C_OnChekToastStack_Params params {};
		params.ToastMsg = ToastMsg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGameInstance_BP.MirGameInstance_BP_C.BeginLoadingScreenEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MapIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsTeleport                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsEditor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMirGameInstance_BP_C::BeginLoadingScreenEvent(int32_t MapIndex, bool IsTeleport, bool IsEditor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGameInstance_BP.MirGameInstance_BP_C.BeginLoadingScreenEvent");
		
		UMirGameInstance_BP_C_BeginLoadingScreenEvent_Params params {};
		params.MapIndex = MapIndex;
		params.IsTeleport = IsTeleport;
		params.IsEditor = IsEditor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGameInstance_BP.MirGameInstance_BP_C.ToastMessageArrayClear
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsClearMessage                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMirGameInstance_BP_C::ToastMessageArrayClear(bool bIsClearMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGameInstance_BP.MirGameInstance_BP_C.ToastMessageArrayClear");
		
		UMirGameInstance_BP_C_ToastMessageArrayClear_Params params {};
		params.bIsClearMessage = bIsClearMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGameInstance_BP.MirGameInstance_BP_C.OnToastMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bIsUIEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMirGameInstance_BP_C::OnToastMessage(const class FText& Text, bool bIsUIEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGameInstance_BP.MirGameInstance_BP_C.OnToastMessage");
		
		UMirGameInstance_BP_C_OnToastMessage_Params params {};
		params.Text = Text;
		params.bIsUIEvent = bIsUIEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGameInstance_BP.MirGameInstance_BP_C.OnToastMessageWithoutDuplicate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UMirGameInstance_BP_C::OnToastMessageWithoutDuplicate(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGameInstance_BP.MirGameInstance_BP_C.OnToastMessageWithoutDuplicate");
		
		UMirGameInstance_BP_C_OnToastMessageWithoutDuplicate_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGameInstance_BP.MirGameInstance_BP_C.BeginResetOptionScreenEvent
	 * 		Flags  -> ()
	 */
	void UMirGameInstance_BP_C::BeginResetOptionScreenEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGameInstance_BP.MirGameInstance_BP_C.BeginResetOptionScreenEvent");
		
		UMirGameInstance_BP_C_BeginResetOptionScreenEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGameInstance_BP.MirGameInstance_BP_C.EndResetOptionEvent
	 * 		Flags  -> ()
	 */
	void UMirGameInstance_BP_C::EndResetOptionEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGameInstance_BP.MirGameInstance_BP_C.EndResetOptionEvent");
		
		UMirGameInstance_BP_C_EndResetOptionEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGameInstance_BP.MirGameInstance_BP_C.OnSetToastMessageWithText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bIsoverlap                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsClearMessage                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsUIEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMirGameInstance_BP_C::OnSetToastMessageWithText(const class FText& Text, bool bIsoverlap, bool bIsClearMessage, bool bIsUIEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGameInstance_BP.MirGameInstance_BP_C.OnSetToastMessageWithText");
		
		UMirGameInstance_BP_C_OnSetToastMessageWithText_Params params {};
		params.Text = Text;
		params.bIsoverlap = bIsoverlap;
		params.bIsClearMessage = bIsClearMessage;
		params.bIsUIEvent = bIsUIEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGameInstance_BP.MirGameInstance_BP_C.OnSetToastMessageWithIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsoverlap                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsClearMessage                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsUIEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMirGameInstance_BP_C::OnSetToastMessageWithIndex(int32_t Index, bool bIsoverlap, bool bIsClearMessage, bool bIsUIEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGameInstance_BP.MirGameInstance_BP_C.OnSetToastMessageWithIndex");
		
		UMirGameInstance_BP_C_OnSetToastMessageWithIndex_Params params {};
		params.Index = Index;
		params.bIsoverlap = bIsoverlap;
		params.bIsClearMessage = bIsClearMessage;
		params.bIsUIEvent = bIsUIEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGameInstance_BP.MirGameInstance_BP_C.EndLoadingScreenEvent
	 * 		Flags  -> ()
	 */
	void UMirGameInstance_BP_C::EndLoadingScreenEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGameInstance_BP.MirGameInstance_BP_C.EndLoadingScreenEvent");
		
		UMirGameInstance_BP_C_EndLoadingScreenEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGameInstance_BP.MirGameInstance_BP_C.ExecuteUbergraph_MirGameInstance_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMirGameInstance_BP_C::ExecuteUbergraph_MirGameInstance_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGameInstance_BP.MirGameInstance_BP_C.ExecuteUbergraph_MirGameInstance_BP");
		
		UMirGameInstance_BP_C_ExecuteUbergraph_MirGameInstance_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MirGameInstance_BP.MirGameInstance_BP_C.ToastEventDispatcehr__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMirGameInstance_BP_C::ToastEventDispatcehr__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MirGameInstance_BP.MirGameInstance_BP_C.ToastEventDispatcehr__DelegateSignature");
		
		UMirGameInstance_BP_C_ToastEventDispatcehr__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMirGameInstance_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMirGameInstance_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MirGameInstance_BP.MirGameInstance_BP_C");
		return ptr;
	}

}


