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
	 * 		Name   -> Function Page_Talkbox.Page_Talkbox_C.ClearVoiceSound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPage_Talkbox_C::ClearVoiceSound(bool bVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Talkbox.Page_Talkbox_C.ClearVoiceSound");
		
		UPage_Talkbox_C_ClearVoiceSound_Params params {};
		params.bVisible = bVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Talkbox.Page_Talkbox_C.ResetText
	 * 		Flags  -> ()
	 */
	void UPage_Talkbox_C::ResetText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Talkbox.Page_Talkbox_C.ResetText");
		
		UPage_Talkbox_C_ResetText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Talkbox.Page_Talkbox_C.GetImagePath
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class FString>                              ImagePathList                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UPage_Talkbox_C::GetImagePath(int32_t Index, TArray<class FString>* ImagePathList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Talkbox.Page_Talkbox_C.GetImagePath");
		
		UPage_Talkbox_C_GetImagePath_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ImagePathList != nullptr)
			*ImagePathList = params.ImagePathList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Talkbox.Page_Talkbox_C.SkipContents
	 * 		Flags  -> ()
	 */
	void UPage_Talkbox_C::SkipContents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Talkbox.Page_Talkbox_C.SkipContents");
		
		UPage_Talkbox_C_SkipContents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Talkbox.Page_Talkbox_C.SetName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              NameList                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<bool>                                       NpcTalkList                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPage_Talkbox_C::SetName(TArray<class FString>* NameList, TArray<bool>* NpcTalkList, int32_t count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Talkbox.Page_Talkbox_C.SetName");
		
		UPage_Talkbox_C_SetName_Params params {};
		params.count = count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NameList != nullptr)
			*NameList = params.NameList;
		if (NpcTalkList != nullptr)
			*NpcTalkList = params.NpcTalkList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Talkbox.Page_Talkbox_C.OnTestAutoClick
	 * 		Flags  -> ()
	 */
	bool UPage_Talkbox_C::OnTestAutoClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Talkbox.Page_Talkbox_C.OnTestAutoClick");
		
		UPage_Talkbox_C_OnTestAutoClick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Talkbox.Page_Talkbox_C.InitContentsBox
	 * 		Flags  -> ()
	 */
	void UPage_Talkbox_C::InitContentsBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Talkbox.Page_Talkbox_C.InitContentsBox");
		
		UPage_Talkbox_C_InitContentsBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Talkbox.Page_Talkbox_C.SetContents
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FText>                                Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class FString>                              ImagePath                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            ContentsCount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPage_Talkbox_C::SetContents(TArray<class FText>* Text, TArray<class FString>* ImagePath, int32_t ContentsCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Talkbox.Page_Talkbox_C.SetContents");
		
		UPage_Talkbox_C_SetContents_Params params {};
		params.ContentsCount = ContentsCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
		if (ImagePath != nullptr)
			*ImagePath = params.ImagePath;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Talkbox.Page_Talkbox_C.OnInit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTalkboxPageInitial*                         InitialData                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPage_Talkbox_C::OnInit(class UTalkboxPageInitial* InitialData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Talkbox.Page_Talkbox_C.OnInit");
		
		UPage_Talkbox_C_OnInit_Params params {};
		params.InitialData = InitialData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Talkbox.Page_Talkbox_C.BndEvt__MirButton_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPage_Talkbox_C::BndEvt__MirButton_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Talkbox.Page_Talkbox_C.BndEvt__MirButton_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UPage_Talkbox_C_BndEvt__MirButton_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Talkbox.Page_Talkbox_C.OnClosePageAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              delaytime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPage_Talkbox_C::OnClosePageAction(float delaytime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Talkbox.Page_Talkbox_C.OnClosePageAction");
		
		UPage_Talkbox_C_OnClosePageAction_Params params {};
		params.delaytime = delaytime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Talkbox.Page_Talkbox_C.OnAcceptPageAction
	 * 		Flags  -> ()
	 */
	void UPage_Talkbox_C::OnAcceptPageAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Talkbox.Page_Talkbox_C.OnAcceptPageAction");
		
		UPage_Talkbox_C_OnAcceptPageAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Talkbox.Page_Talkbox_C.BndEvt__MirButton_NextText_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPage_Talkbox_C::BndEvt__MirButton_NextText_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Talkbox.Page_Talkbox_C.BndEvt__MirButton_NextText_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UPage_Talkbox_C_BndEvt__MirButton_NextText_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Talkbox.Page_Talkbox_C.CameraPosessEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AMirCharacter*                               Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETalkboxCameraType                                 CameraType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPage_Talkbox_C::CameraPosessEvent(class AMirCharacter* Character, ETalkboxCameraType CameraType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Talkbox.Page_Talkbox_C.CameraPosessEvent");
		
		UPage_Talkbox_C_CameraPosessEvent_Params params {};
		params.Character = Character;
		params.CameraType = CameraType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Talkbox.Page_Talkbox_C.OnSetVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPage_Talkbox_C::OnSetVisible(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Talkbox.Page_Talkbox_C.OnSetVisible");
		
		UPage_Talkbox_C_OnSetVisible_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Talkbox.Page_Talkbox_C.OnSetNPCTalkStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bnpctalk                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPage_Talkbox_C::OnSetNPCTalkStatus(bool bnpctalk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Talkbox.Page_Talkbox_C.OnSetNPCTalkStatus");
		
		UPage_Talkbox_C_OnSetNPCTalkStatus_Params params {};
		params.bnpctalk = bnpctalk;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Talkbox.Page_Talkbox_C.OnSetActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Parameters                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UPage_Talkbox_C::OnSetActive(bool IsActive, const class FString& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Talkbox.Page_Talkbox_C.OnSetActive");
		
		UPage_Talkbox_C_OnSetActive_Params params {};
		params.IsActive = IsActive;
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Talkbox.Page_Talkbox_C.BndEvt__Close_Btn_K2Node_ComponentBoundEvent_2_ClickDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPage_Talkbox_C::BndEvt__Close_Btn_K2Node_ComponentBoundEvent_2_ClickDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Talkbox.Page_Talkbox_C.BndEvt__Close_Btn_K2Node_ComponentBoundEvent_2_ClickDispatcher__DelegateSignature");
		
		UPage_Talkbox_C_BndEvt__Close_Btn_K2Node_ComponentBoundEvent_2_ClickDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Talkbox.Page_Talkbox_C.OnPreSet
	 * 		Flags  -> ()
	 */
	void UPage_Talkbox_C::OnPreSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Talkbox.Page_Talkbox_C.OnPreSet");
		
		UPage_Talkbox_C_OnPreSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Talkbox.Page_Talkbox_C.SetTalkboxVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bVisibility                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPage_Talkbox_C::SetTalkboxVisibility(bool bVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Talkbox.Page_Talkbox_C.SetTalkboxVisibility");
		
		UPage_Talkbox_C_SetTalkboxVisibility_Params params {};
		params.bVisibility = bVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Talkbox.Page_Talkbox_C.OnUpdateFavorabilityType
	 * 		Flags  -> ()
	 */
	void UPage_Talkbox_C::OnUpdateFavorabilityType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Talkbox.Page_Talkbox_C.OnUpdateFavorabilityType");
		
		UPage_Talkbox_C_OnUpdateFavorabilityType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Talkbox.Page_Talkbox_C.BndEvt__Page_Talkbox_CM_SkipBtn_K2Node_ComponentBoundEvent_5_ClickDispatch__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPage_Talkbox_C::BndEvt__Page_Talkbox_CM_SkipBtn_K2Node_ComponentBoundEvent_5_ClickDispatch__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Talkbox.Page_Talkbox_C.BndEvt__Page_Talkbox_CM_SkipBtn_K2Node_ComponentBoundEvent_5_ClickDispatch__DelegateSignature");
		
		UPage_Talkbox_C_BndEvt__Page_Talkbox_CM_SkipBtn_K2Node_ComponentBoundEvent_5_ClickDispatch__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Talkbox.Page_Talkbox_C.ExecuteUbergraph_Page_Talkbox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPage_Talkbox_C::ExecuteUbergraph_Page_Talkbox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Talkbox.Page_Talkbox_C.ExecuteUbergraph_Page_Talkbox");
		
		UPage_Talkbox_C_ExecuteUbergraph_Page_Talkbox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPage_Talkbox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPage_Talkbox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Page_Talkbox.Page_Talkbox_C");
		return ptr;
	}

}


