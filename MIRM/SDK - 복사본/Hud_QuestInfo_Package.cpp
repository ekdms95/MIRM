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
	 * 		Name   -> Function Hud_QuestInfo.Hud_QuestInfo_C.UpdateQuestProgressIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_QUEST_TYPE                                       QuestType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EQuestProgressType                                 ProgressType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_QuestInfo_C::UpdateQuestProgressIcon(E_QUEST_TYPE QuestType, EQuestProgressType ProgressType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_QuestInfo.Hud_QuestInfo_C.UpdateQuestProgressIcon");
		
		UHud_QuestInfo_C_UpdateQuestProgressIcon_Params params {};
		params.QuestType = QuestType;
		params.ProgressType = ProgressType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_QuestInfo.Hud_QuestInfo_C.Quest_Icon_State
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPaperSprite*                                accept                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPaperSprite*                                complete                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EQuestProgressType                                 ProgressType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bPlayAnimation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_QuestInfo_C::Quest_Icon_State(class UPaperSprite* accept, class UPaperSprite* complete, EQuestProgressType ProgressType, bool bPlayAnimation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_QuestInfo.Hud_QuestInfo_C.Quest_Icon_State");
		
		UHud_QuestInfo_C_Quest_Icon_State_Params params {};
		params.accept = accept;
		params.complete = complete;
		params.ProgressType = ProgressType;
		params.bPlayAnimation = bPlayAnimation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_QuestInfo.Hud_QuestInfo_C.GroupQuestHighLight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bActive                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_QuestInfo_C::GroupQuestHighLight(bool bActive, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_QuestInfo.Hud_QuestInfo_C.GroupQuestHighLight");
		
		UHud_QuestInfo_C_GroupQuestHighLight_Params params {};
		params.bActive = bActive;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_QuestInfo.Hud_QuestInfo_C.ChangeMultiObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_QuestInfo_C::ChangeMultiObject(int32_t count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_QuestInfo.Hud_QuestInfo_C.ChangeMultiObject");
		
		UHud_QuestInfo_C_ChangeMultiObject_Params params {};
		params.count = count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_QuestInfo.Hud_QuestInfo_C.ChangeSingleObject
	 * 		Flags  -> ()
	 */
	void UHud_QuestInfo_C::ChangeSingleObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_QuestInfo.Hud_QuestInfo_C.ChangeSingleObject");
		
		UHud_QuestInfo_C_ChangeSingleObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_QuestInfo.Hud_QuestInfo_C.UpdateQuestProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UHud_QuestInfo_C::UpdateQuestProgress(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_QuestInfo.Hud_QuestInfo_C.UpdateQuestProgress");
		
		UHud_QuestInfo_C_UpdateQuestProgress_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_QuestInfo.Hud_QuestInfo_C.UpdateQuestContext
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UHud_QuestInfo_C::UpdateQuestContext(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_QuestInfo.Hud_QuestInfo_C.UpdateQuestContext");
		
		UHud_QuestInfo_C_UpdateQuestContext_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_QuestInfo.Hud_QuestInfo_C.UpdateQuestTitle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UHud_QuestInfo_C::UpdateQuestTitle(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_QuestInfo.Hud_QuestInfo_C.UpdateQuestTitle");
		
		UHud_QuestInfo_C_UpdateQuestTitle_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_QuestInfo.Hud_QuestInfo_C.SetActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_QuestInfo_C::SetActive(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_QuestInfo.Hud_QuestInfo_C.SetActive");
		
		UHud_QuestInfo_C_SetActive_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_QuestInfo.Hud_QuestInfo_C.OnResetQuestInfo
	 * 		Flags  -> ()
	 */
	void UHud_QuestInfo_C::OnResetQuestInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_QuestInfo.Hud_QuestInfo_C.OnResetQuestInfo");
		
		UHud_QuestInfo_C_OnResetQuestInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_QuestInfo.Hud_QuestInfo_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_QuestInfo_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_QuestInfo.Hud_QuestInfo_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UHud_QuestInfo_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_QuestInfo.Hud_QuestInfo_C.SetLowQuestInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bComplete                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_QuestInfo_C::SetLowQuestInfo(int32_t ID, const class FText& Context, const class FText& Progress, bool bComplete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_QuestInfo.Hud_QuestInfo_C.SetLowQuestInfo");
		
		UHud_QuestInfo_C_SetLowQuestInfo_Params params {};
		params.ID = ID;
		params.Context = Context;
		params.Progress = Progress;
		params.bComplete = bComplete;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_QuestInfo.Hud_QuestInfo_C.OnSetActiveQuestInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               pActive                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_QuestInfo_C::OnSetActiveQuestInfo(bool pActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_QuestInfo.Hud_QuestInfo_C.OnSetActiveQuestInfo");
		
		UHud_QuestInfo_C_OnSetActiveQuestInfo_Params params {};
		params.pActive = pActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_QuestInfo.Hud_QuestInfo_C.SetQuestInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		E_QUEST_TYPE                                       QuestType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		EQuestProgressType                                 ProgressType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bWideTypeText                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_QuestInfo_C::SetQuestInfo(int32_t ID, const class FText& Title, const class FText& Context, E_QUEST_TYPE QuestType, const class FText& Progress, EQuestProgressType ProgressType, bool bWideTypeText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_QuestInfo.Hud_QuestInfo_C.SetQuestInfo");
		
		UHud_QuestInfo_C_SetQuestInfo_Params params {};
		params.ID = ID;
		params.Title = Title;
		params.Context = Context;
		params.QuestType = QuestType;
		params.Progress = Progress;
		params.ProgressType = ProgressType;
		params.bWideTypeText = bWideTypeText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_QuestInfo.Hud_QuestInfo_C.SetWideTypeText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWideTypeText                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_QuestInfo_C::SetWideTypeText(bool bWideTypeText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_QuestInfo.Hud_QuestInfo_C.SetWideTypeText");
		
		UHud_QuestInfo_C_SetWideTypeText_Params params {};
		params.bWideTypeText = bWideTypeText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_QuestInfo.Hud_QuestInfo_C.ExecuteUbergraph_Hud_QuestInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_QuestInfo_C::ExecuteUbergraph_Hud_QuestInfo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_QuestInfo.Hud_QuestInfo_C.ExecuteUbergraph_Hud_QuestInfo");
		
		UHud_QuestInfo_C_ExecuteUbergraph_Hud_QuestInfo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHud_QuestInfo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHud_QuestInfo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Hud_QuestInfo.Hud_QuestInfo_C");
		return ptr;
	}

}


