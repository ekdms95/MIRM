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
	 * 		Name   -> Function Hud_Mission_Info.Hud_Mission_Info_C.UpdateQuestContext
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UHud_Mission_Info_C::UpdateQuestContext(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Mission_Info.Hud_Mission_Info_C.UpdateQuestContext");
		
		UHud_Mission_Info_C_UpdateQuestContext_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Mission_Info.Hud_Mission_Info_C.UpdateQuestTitle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UHud_Mission_Info_C::UpdateQuestTitle(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Mission_Info.Hud_Mission_Info_C.UpdateQuestTitle");
		
		UHud_Mission_Info_C_UpdateQuestTitle_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Mission_Info.Hud_Mission_Info_C.UpdateQuestInfo1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Context                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UHud_Mission_Info_C::UpdateQuestInfo1(const class FText& Context)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Mission_Info.Hud_Mission_Info_C.UpdateQuestInfo1");
		
		UHud_Mission_Info_C_UpdateQuestInfo1_Params params {};
		params.Context = Context;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Mission_Info.Hud_Mission_Info_C.SetActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsActive                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_Mission_Info_C::SetActive(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Mission_Info.Hud_Mission_Info_C.SetActive");
		
		UHud_Mission_Info_C_SetActive_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Mission_Info.Hud_Mission_Info_C.PlayActiveAni
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsPlay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_Mission_Info_C::PlayActiveAni(bool bIsPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Mission_Info.Hud_Mission_Info_C.PlayActiveAni");
		
		UHud_Mission_Info_C_PlayActiveAni_Params params {};
		params.bIsPlay = bIsPlay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Mission_Info.Hud_Mission_Info_C.OnBindAutoButtonToController
	 * 		Flags  -> ()
	 */
	void UHud_Mission_Info_C::OnBindAutoButtonToController()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Mission_Info.Hud_Mission_Info_C.OnBindAutoButtonToController");
		
		UHud_Mission_Info_C_OnBindAutoButtonToController_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Mission_Info.Hud_Mission_Info_C.BindOnSetAutoProcess_이벤트_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAutoPlayProcessUnit                        AutoPlayProcessUnit                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UHud_Mission_Info_C::BindOnSetAutoProcess_이벤트_1(const struct FAutoPlayProcessUnit& AutoPlayProcessUnit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Mission_Info.Hud_Mission_Info_C.BindOnSetAutoProcess_이벤트_1");
		
		UHud_Mission_Info_C_BindOnSetAutoProcess_이벤트_1_Params params {};
		params.AutoPlayProcessUnit = AutoPlayProcessUnit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Mission_Info.Hud_Mission_Info_C.BndEvt__MissionBox_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_Mission_Info_C::BndEvt__MissionBox_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Mission_Info.Hud_Mission_Info_C.BndEvt__MissionBox_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UHud_Mission_Info_C_BndEvt__MissionBox_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Mission_Info.Hud_Mission_Info_C.AutoClick
	 * 		Flags  -> ()
	 */
	void UHud_Mission_Info_C::AutoClick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Mission_Info.Hud_Mission_Info_C.AutoClick");
		
		UHud_Mission_Info_C_AutoClick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Mission_Info.Hud_Mission_Info_C.Construct
	 * 		Flags  -> ()
	 */
	void UHud_Mission_Info_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Mission_Info.Hud_Mission_Info_C.Construct");
		
		UHud_Mission_Info_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Mission_Info.Hud_Mission_Info_C.ExecuteUbergraph_Hud_Mission_Info
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_Mission_Info_C::ExecuteUbergraph_Hud_Mission_Info(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Mission_Info.Hud_Mission_Info_C.ExecuteUbergraph_Hud_Mission_Info");
		
		UHud_Mission_Info_C_ExecuteUbergraph_Hud_Mission_Info_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHud_Mission_Info_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHud_Mission_Info_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Hud_Mission_Info.Hud_Mission_Info_C");
		return ptr;
	}

}


