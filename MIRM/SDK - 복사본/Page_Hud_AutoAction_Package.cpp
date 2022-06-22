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
	 * 		Name   -> Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.DungeonActionButtonVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Pet                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Vehicle                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPage_Hud_AutoAction_C::DungeonActionButtonVisible(bool Pet, bool Vehicle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.DungeonActionButtonVisible");
		
		UPage_Hud_AutoAction_C_DungeonActionButtonVisible_Params params {};
		params.Pet = Pet;
		params.Vehicle = Vehicle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.SetDungeonActionButtons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_DUNGEON_TYPE                                     Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPage_Hud_AutoAction_C::SetDungeonActionButtons(E_DUNGEON_TYPE Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.SetDungeonActionButtons");
		
		UPage_Hud_AutoAction_C_SetDungeonActionButtons_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.OnChangeAutoState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAutoPlayProcessUnit                        inAutoProcess                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UPage_Hud_AutoAction_C::OnChangeAutoState(const struct FAutoPlayProcessUnit& inAutoProcess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.OnChangeAutoState");
		
		UPage_Hud_AutoAction_C_OnChangeAutoState_Params params {};
		params.inAutoProcess = inAutoProcess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.ResetAutoBtnsVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               showBtns                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPage_Hud_AutoAction_C::ResetAutoBtnsVisible(bool showBtns)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.ResetAutoBtnsVisible");
		
		UPage_Hud_AutoAction_C_ResetAutoBtnsVisible_Params params {};
		params.showBtns = showBtns;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.ShowAutoBtnVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            inBottomIdx                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPage_Hud_AutoAction_C::ShowAutoBtnVisible(int32_t inBottomIdx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.ShowAutoBtnVisible");
		
		UPage_Hud_AutoAction_C_ShowAutoBtnVisible_Params params {};
		params.inBottomIdx = inBottomIdx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.OnChangeCflag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCFlagValues                                CFlagValues                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UPage_Hud_AutoAction_C::OnChangeCflag(const struct FCFlagValues& CFlagValues)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.OnChangeCflag");
		
		UPage_Hud_AutoAction_C_OnChangeCflag_Params params {};
		params.CFlagValues = CFlagValues;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.OnSetVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPage_Hud_AutoAction_C::OnSetVisible(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.OnSetVisible");
		
		UPage_Hud_AutoAction_C_OnSetVisible_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.BndEvt__CM_Camera_Btn_K2Node_ComponentBoundEvent_0_Camera_BtnClick_Dispatch__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPage_Hud_AutoAction_C::BndEvt__CM_Camera_Btn_K2Node_ComponentBoundEvent_0_Camera_BtnClick_Dispatch__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.BndEvt__CM_Camera_Btn_K2Node_ComponentBoundEvent_0_Camera_BtnClick_Dispatch__DelegateSignature");
		
		UPage_Hud_AutoAction_C_BndEvt__CM_Camera_Btn_K2Node_ComponentBoundEvent_0_Camera_BtnClick_Dispatch__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.OnFearState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFear                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPage_Hud_AutoAction_C::OnFearState(bool IsFear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.OnFearState");
		
		UPage_Hud_AutoAction_C_OnFearState_Params params {};
		params.IsFear = IsFear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.BindOnSetAutoProcess_이벤트_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAutoPlayProcessUnit                        AutoPlayProcessUnit                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UPage_Hud_AutoAction_C::BindOnSetAutoProcess_이벤트_1(const struct FAutoPlayProcessUnit& AutoPlayProcessUnit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.BindOnSetAutoProcess_이벤트_1");
		
		UPage_Hud_AutoAction_C_BindOnSetAutoProcess_이벤트_1_Params params {};
		params.AutoPlayProcessUnit = AutoPlayProcessUnit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPage_Hud_AutoAction_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.Tick");
		
		UPage_Hud_AutoAction_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.BndEvt__HUD_Vehicle_Btn_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   InVisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPage_Hud_AutoAction_C::BndEvt__HUD_Vehicle_Btn_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature(ESlateVisibility InVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.BndEvt__HUD_Vehicle_Btn_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature");
		
		UPage_Hud_AutoAction_C_BndEvt__HUD_Vehicle_Btn_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature_Params params {};
		params.InVisibility = InVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.OnBindAutoButtonToController
	 * 		Flags  -> ()
	 */
	void UPage_Hud_AutoAction_C::OnBindAutoButtonToController()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.OnBindAutoButtonToController");
		
		UPage_Hud_AutoAction_C_OnBindAutoButtonToController_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.BndEvt__Page_Hud_AutoAction_HUD_AutoMenu_btn_K2Node_ComponentBoundEvent_2_AutoMenuBtnClick__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPage_Hud_AutoAction_C::BndEvt__Page_Hud_AutoAction_HUD_AutoMenu_btn_K2Node_ComponentBoundEvent_2_AutoMenuBtnClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.BndEvt__Page_Hud_AutoAction_HUD_AutoMenu_btn_K2Node_ComponentBoundEvent_2_AutoMenuBtnClick__DelegateSignature");
		
		UPage_Hud_AutoAction_C_BndEvt__Page_Hud_AutoAction_HUD_AutoMenu_btn_K2Node_ComponentBoundEvent_2_AutoMenuBtnClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.BndEvt__Page_Hud_AutoAction_AutoMenu_Cancel_btn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPage_Hud_AutoAction_C::BndEvt__Page_Hud_AutoAction_AutoMenu_Cancel_btn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.BndEvt__Page_Hud_AutoAction_AutoMenu_Cancel_btn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UPage_Hud_AutoAction_C_BndEvt__Page_Hud_AutoAction_AutoMenu_Cancel_btn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPage_Hud_AutoAction_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.PreConstruct");
		
		UPage_Hud_AutoAction_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.BndEvt__Page_Hud_AutoAction_SleepMode_btn_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPage_Hud_AutoAction_C::BndEvt__Page_Hud_AutoAction_SleepMode_btn_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.BndEvt__Page_Hud_AutoAction_SleepMode_btn_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UPage_Hud_AutoAction_C_BndEvt__Page_Hud_AutoAction_SleepMode_btn_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.ExecuteUbergraph_Page_Hud_AutoAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPage_Hud_AutoAction_C::ExecuteUbergraph_Page_Hud_AutoAction(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Hud_AutoAction.Page_Hud_AutoAction_C.ExecuteUbergraph_Page_Hud_AutoAction");
		
		UPage_Hud_AutoAction_C_ExecuteUbergraph_Page_Hud_AutoAction_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPage_Hud_AutoAction_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPage_Hud_AutoAction_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Page_Hud_AutoAction.Page_Hud_AutoAction_C");
		return ptr;
	}

}


