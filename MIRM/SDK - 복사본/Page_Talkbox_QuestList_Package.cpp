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
	 * 		Name   -> Function Page_Talkbox_QuestList.Page_Talkbox_QuestList_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPage_Talkbox_QuestList_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Talkbox_QuestList.Page_Talkbox_QuestList_C.PreConstruct");
		
		UPage_Talkbox_QuestList_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Talkbox_QuestList.Page_Talkbox_QuestList_C.OnPreSet
	 * 		Flags  -> ()
	 */
	void UPage_Talkbox_QuestList_C::OnPreSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Talkbox_QuestList.Page_Talkbox_QuestList_C.OnPreSet");
		
		UPage_Talkbox_QuestList_C_OnPreSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Talkbox_QuestList.Page_Talkbox_QuestList_C.BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPage_Talkbox_QuestList_C::BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Talkbox_QuestList.Page_Talkbox_QuestList_C.BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UPage_Talkbox_QuestList_C_BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Talkbox_QuestList.Page_Talkbox_QuestList_C.BndEvt__Page_Talkbox_QuestList_TB_QuestName_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   InVisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPage_Talkbox_QuestList_C::BndEvt__Page_Talkbox_QuestList_TB_QuestName_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature(ESlateVisibility InVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Talkbox_QuestList.Page_Talkbox_QuestList_C.BndEvt__Page_Talkbox_QuestList_TB_QuestName_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature");
		
		UPage_Talkbox_QuestList_C_BndEvt__Page_Talkbox_QuestList_TB_QuestName_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature_Params params {};
		params.InVisibility = InVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Talkbox_QuestList.Page_Talkbox_QuestList_C.BndEvt__Page_Talkbox_QuestList_Close_btn_K2Node_ComponentBoundEvent_3_ClickDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPage_Talkbox_QuestList_C::BndEvt__Page_Talkbox_QuestList_Close_btn_K2Node_ComponentBoundEvent_3_ClickDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Talkbox_QuestList.Page_Talkbox_QuestList_C.BndEvt__Page_Talkbox_QuestList_Close_btn_K2Node_ComponentBoundEvent_3_ClickDispatcher__DelegateSignature");
		
		UPage_Talkbox_QuestList_C_BndEvt__Page_Talkbox_QuestList_Close_btn_K2Node_ComponentBoundEvent_3_ClickDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Talkbox_QuestList.Page_Talkbox_QuestList_C.BndEvt__Page_Talkbox_QuestList_CM_SkipBtn_K2Node_ComponentBoundEvent_4_ClickDispatch__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPage_Talkbox_QuestList_C::BndEvt__Page_Talkbox_QuestList_CM_SkipBtn_K2Node_ComponentBoundEvent_4_ClickDispatch__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Talkbox_QuestList.Page_Talkbox_QuestList_C.BndEvt__Page_Talkbox_QuestList_CM_SkipBtn_K2Node_ComponentBoundEvent_4_ClickDispatch__DelegateSignature");
		
		UPage_Talkbox_QuestList_C_BndEvt__Page_Talkbox_QuestList_CM_SkipBtn_K2Node_ComponentBoundEvent_4_ClickDispatch__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Talkbox_QuestList.Page_Talkbox_QuestList_C.ExecuteUbergraph_Page_Talkbox_QuestList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPage_Talkbox_QuestList_C::ExecuteUbergraph_Page_Talkbox_QuestList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Talkbox_QuestList.Page_Talkbox_QuestList_C.ExecuteUbergraph_Page_Talkbox_QuestList");
		
		UPage_Talkbox_QuestList_C_ExecuteUbergraph_Page_Talkbox_QuestList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPage_Talkbox_QuestList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPage_Talkbox_QuestList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Page_Talkbox_QuestList.Page_Talkbox_QuestList_C");
		return ptr;
	}

}


