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
	 * 		Name   -> Function Page_Story_Talk.Page_Story_Talk_C.OnShowDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isShow                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPage_Story_Talk_C::OnShowDialog(bool isShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Story_Talk.Page_Story_Talk_C.OnShowDialog");
		
		UPage_Story_Talk_C_OnShowDialog_Params params {};
		params.isShow = isShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Story_Talk.Page_Story_Talk_C.OnShowAll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isShow                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPage_Story_Talk_C::OnShowAll(bool isShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Story_Talk.Page_Story_Talk_C.OnShowAll");
		
		UPage_Story_Talk_C_OnShowAll_Params params {};
		params.isShow = isShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Story_Talk.Page_Story_Talk_C.CheckNeedUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECutSceneDialogType                                DialogType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TalkerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DialogID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPage_Story_Talk_C::CheckNeedUpdate(ECutSceneDialogType DialogType, int32_t TalkerId, int32_t DialogID, bool* result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Story_Talk.Page_Story_Talk_C.CheckNeedUpdate");
		
		UPage_Story_Talk_C_CheckNeedUpdate_Params params {};
		params.DialogType = DialogType;
		params.TalkerId = TalkerId;
		params.DialogID = DialogID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (result != nullptr)
			*result = params.result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Story_Talk.Page_Story_Talk_C.SetLastDialogData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECutSceneDialogType                                DialogType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TalkerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DialogID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPage_Story_Talk_C::SetLastDialogData(ECutSceneDialogType DialogType, int32_t TalkerId, int32_t DialogID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Story_Talk.Page_Story_Talk_C.SetLastDialogData");
		
		UPage_Story_Talk_C_SetLastDialogData_Params params {};
		params.DialogType = DialogType;
		params.TalkerId = TalkerId;
		params.DialogID = DialogID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Story_Talk.Page_Story_Talk_C.ResetLastDialogData
	 * 		Flags  -> ()
	 */
	void UPage_Story_Talk_C::ResetLastDialogData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Story_Talk.Page_Story_Talk_C.ResetLastDialogData");
		
		UPage_Story_Talk_C_ResetLastDialogData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Story_Talk.Page_Story_Talk_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPage_Story_Talk_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Story_Talk.Page_Story_Talk_C.Tick");
		
		UPage_Story_Talk_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Story_Talk.Page_Story_Talk_C.OnInitialized
	 * 		Flags  -> ()
	 */
	void UPage_Story_Talk_C::OnInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Story_Talk.Page_Story_Talk_C.OnInitialized");
		
		UPage_Story_Talk_C_OnInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Story_Talk.Page_Story_Talk_C.SetDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECutSceneDialogType                                DialogType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TalkerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            DialogID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPage_Story_Talk_C::SetDialog(ECutSceneDialogType DialogType, int32_t TalkerId, int32_t DialogID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Story_Talk.Page_Story_Talk_C.SetDialog");
		
		UPage_Story_Talk_C_SetDialog_Params params {};
		params.DialogType = DialogType;
		params.TalkerId = TalkerId;
		params.DialogID = DialogID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Story_Talk.Page_Story_Talk_C.BndEvt__Page_Story_Talk_CM_SkipBtn_K2Node_ComponentBoundEvent_0_ClickDispatch__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPage_Story_Talk_C::BndEvt__Page_Story_Talk_CM_SkipBtn_K2Node_ComponentBoundEvent_0_ClickDispatch__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Story_Talk.Page_Story_Talk_C.BndEvt__Page_Story_Talk_CM_SkipBtn_K2Node_ComponentBoundEvent_0_ClickDispatch__DelegateSignature");
		
		UPage_Story_Talk_C_BndEvt__Page_Story_Talk_CM_SkipBtn_K2Node_ComponentBoundEvent_0_ClickDispatch__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Story_Talk.Page_Story_Talk_C.ExecuteUbergraph_Page_Story_Talk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPage_Story_Talk_C::ExecuteUbergraph_Page_Story_Talk(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Story_Talk.Page_Story_Talk_C.ExecuteUbergraph_Page_Story_Talk");
		
		UPage_Story_Talk_C_ExecuteUbergraph_Page_Story_Talk_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Story_Talk.Page_Story_Talk_C.OnClickDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPage_Story_Talk_C::OnClickDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Story_Talk.Page_Story_Talk_C.OnClickDispatcher__DelegateSignature");
		
		UPage_Story_Talk_C_OnClickDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPage_Story_Talk_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPage_Story_Talk_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Page_Story_Talk.Page_Story_Talk_C");
		return ptr;
	}

}


