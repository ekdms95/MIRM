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
	 * 		Name   -> Function Hud_QuestBox.Hud_QuestBox_C.OnInitailizeWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Parameters                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UHud_QuestBox_C::OnInitailizeWidget(const class FString& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_QuestBox.Hud_QuestBox_C.OnInitailizeWidget");
		
		UHud_QuestBox_C_OnInitailizeWidget_Params params {};
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_QuestBox.Hud_QuestBox_C.OnResetQuestInfo
	 * 		Flags  -> ()
	 */
	void UHud_QuestBox_C::OnResetQuestInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_QuestBox.Hud_QuestBox_C.OnResetQuestInfo");
		
		UHud_QuestBox_C_OnResetQuestInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_QuestBox.Hud_QuestBox_C.OnSetQuestInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            pIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            pId                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      pTitle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      pContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		E_QUEST_TYPE                                       QuestType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EQuestProgressType                                 ProgressType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bWideTypeText                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_QuestBox_C::OnSetQuestInfo(int32_t pIndex, int32_t pId, const class FString& pTitle, const class FString& pContext, const class FString& Progress, E_QUEST_TYPE QuestType, EQuestProgressType ProgressType, bool bWideTypeText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_QuestBox.Hud_QuestBox_C.OnSetQuestInfo");
		
		UHud_QuestBox_C_OnSetQuestInfo_Params params {};
		params.pIndex = pIndex;
		params.pId = pId;
		params.pTitle = pTitle;
		params.pContext = pContext;
		params.Progress = Progress;
		params.QuestType = QuestType;
		params.ProgressType = ProgressType;
		params.bWideTypeText = bWideTypeText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_QuestBox.Hud_QuestBox_C.OnUpdateQuestInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            pIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      pContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		E_QUEST_TYPE                                       QuestType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EQuestProgressType                                 ProgressType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_QuestBox_C::OnUpdateQuestInfo(int32_t pIndex, const class FString& pContext, const class FString& Progress, E_QUEST_TYPE QuestType, EQuestProgressType ProgressType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_QuestBox.Hud_QuestBox_C.OnUpdateQuestInfo");
		
		UHud_QuestBox_C_OnUpdateQuestInfo_Params params {};
		params.pIndex = pIndex;
		params.pContext = pContext;
		params.Progress = Progress;
		params.QuestType = QuestType;
		params.ProgressType = ProgressType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_QuestBox.Hud_QuestBox_C.OnSetActiveQuestInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            pIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               pActive                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_QuestBox_C::OnSetActiveQuestInfo(int32_t pIndex, bool pActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_QuestBox.Hud_QuestBox_C.OnSetActiveQuestInfo");
		
		UHud_QuestBox_C_OnSetActiveQuestInfo_Params params {};
		params.pIndex = pIndex;
		params.pActive = pActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_QuestBox.Hud_QuestBox_C.OnTabButtonState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsCheched                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_QuestBox_C::OnTabButtonState(bool bIsCheched)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_QuestBox.Hud_QuestBox_C.OnTabButtonState");
		
		UHud_QuestBox_C_OnTabButtonState_Params params {};
		params.bIsCheched = bIsCheched;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_QuestBox.Hud_QuestBox_C.EnableAreaQuest
	 * 		Flags  -> ()
	 */
	void UHud_QuestBox_C::EnableAreaQuest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_QuestBox.Hud_QuestBox_C.EnableAreaQuest");
		
		UHud_QuestBox_C_EnableAreaQuest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_QuestBox.Hud_QuestBox_C.BndEvt__Hud_AreaQuest_Btn_K2Node_ComponentBoundEvent_0_ClickDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_QuestBox_C::BndEvt__Hud_AreaQuest_Btn_K2Node_ComponentBoundEvent_0_ClickDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_QuestBox.Hud_QuestBox_C.BndEvt__Hud_AreaQuest_Btn_K2Node_ComponentBoundEvent_0_ClickDispatcher__DelegateSignature");
		
		UHud_QuestBox_C_BndEvt__Hud_AreaQuest_Btn_K2Node_ComponentBoundEvent_0_ClickDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_QuestBox.Hud_QuestBox_C.OnUpdateLowQuestInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            pIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            LowQuestID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      pContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               bComplete                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_QuestBox_C::OnUpdateLowQuestInfo(int32_t pIndex, int32_t LowQuestID, const class FString& pContext, const class FString& Progress, bool bComplete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_QuestBox.Hud_QuestBox_C.OnUpdateLowQuestInfo");
		
		UHud_QuestBox_C_OnUpdateLowQuestInfo_Params params {};
		params.pIndex = pIndex;
		params.LowQuestID = LowQuestID;
		params.pContext = pContext;
		params.Progress = Progress;
		params.bComplete = bComplete;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_QuestBox.Hud_QuestBox_C.OnSetAreaQuestInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            pId                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      pTitle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      pContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		E_QUEST_TYPE                                       QuestType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EQuestProgressType                                 ProgressType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_QuestBox_C::OnSetAreaQuestInfo(int32_t pId, const class FString& pTitle, const class FString& pContext, const class FString& Progress, E_QUEST_TYPE QuestType, EQuestProgressType ProgressType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_QuestBox.Hud_QuestBox_C.OnSetAreaQuestInfo");
		
		UHud_QuestBox_C_OnSetAreaQuestInfo_Params params {};
		params.pId = pId;
		params.pTitle = pTitle;
		params.pContext = pContext;
		params.Progress = Progress;
		params.QuestType = QuestType;
		params.ProgressType = ProgressType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_QuestBox.Hud_QuestBox_C.ExecuteUbergraph_Hud_QuestBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_QuestBox_C::ExecuteUbergraph_Hud_QuestBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_QuestBox.Hud_QuestBox_C.ExecuteUbergraph_Hud_QuestBox");
		
		UHud_QuestBox_C_ExecuteUbergraph_Hud_QuestBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHud_QuestBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHud_QuestBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Hud_QuestBox.Hud_QuestBox_C");
		return ptr;
	}

}


