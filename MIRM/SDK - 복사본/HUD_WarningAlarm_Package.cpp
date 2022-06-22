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
	 * 		Name   -> Function HUD_WarningAlarm.HUD_WarningAlarm_C.HidePopup
	 * 		Flags  -> ()
	 */
	void UHUD_WarningAlarm_C::HidePopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_WarningAlarm.HUD_WarningAlarm_C.HidePopup");
		
		UHUD_WarningAlarm_C_HidePopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_WarningAlarm.HUD_WarningAlarm_C.OnSetInventorySpace
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            curr                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_WarningAlarm_C::OnSetInventorySpace(int32_t curr, int32_t Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_WarningAlarm.HUD_WarningAlarm_C.OnSetInventorySpace");
		
		UHUD_WarningAlarm_C_OnSetInventorySpace_Params params {};
		params.curr = curr;
		params.Size = Size;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_WarningAlarm.HUD_WarningAlarm_C.BndEvt__Buy_btn_K2Node_ComponentBoundEvent_4_ClickDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_WarningAlarm_C::BndEvt__Buy_btn_K2Node_ComponentBoundEvent_4_ClickDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_WarningAlarm.HUD_WarningAlarm_C.BndEvt__Buy_btn_K2Node_ComponentBoundEvent_4_ClickDispatcher__DelegateSignature");
		
		UHUD_WarningAlarm_C_BndEvt__Buy_btn_K2Node_ComponentBoundEvent_4_ClickDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_WarningAlarm.HUD_WarningAlarm_C.BndEvt__Info_btn_K2Node_ComponentBoundEvent_8_ClickDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_WarningAlarm_C::BndEvt__Info_btn_K2Node_ComponentBoundEvent_8_ClickDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_WarningAlarm.HUD_WarningAlarm_C.BndEvt__Info_btn_K2Node_ComponentBoundEvent_8_ClickDispatcher__DelegateSignature");
		
		UHUD_WarningAlarm_C_BndEvt__Info_btn_K2Node_ComponentBoundEvent_8_ClickDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_WarningAlarm.HUD_WarningAlarm_C.BndEvt__Move_btn_K2Node_ComponentBoundEvent_9_ClickDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_WarningAlarm_C::BndEvt__Move_btn_K2Node_ComponentBoundEvent_9_ClickDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_WarningAlarm.HUD_WarningAlarm_C.BndEvt__Move_btn_K2Node_ComponentBoundEvent_9_ClickDispatcher__DelegateSignature");
		
		UHUD_WarningAlarm_C_BndEvt__Move_btn_K2Node_ComponentBoundEvent_9_ClickDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_WarningAlarm.HUD_WarningAlarm_C.OnInitailizeWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Parameters                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UHUD_WarningAlarm_C::OnInitailizeWidget(const class FString& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_WarningAlarm.HUD_WarningAlarm_C.OnInitailizeWidget");
		
		UHUD_WarningAlarm_C_OnInitailizeWidget_Params params {};
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_WarningAlarm.HUD_WarningAlarm_C.OnSetAlarmVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isAlram                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_WarningAlarm_C::OnSetAlarmVisibility(bool isAlram)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_WarningAlarm.HUD_WarningAlarm_C.OnSetAlarmVisibility");
		
		UHUD_WarningAlarm_C_OnSetAlarmVisibility_Params params {};
		params.isAlram = isAlram;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_WarningAlarm.HUD_WarningAlarm_C.BndEvt__Equip_Durability_Refair_btn_K2Node_ComponentBoundEvent_2_ClickDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_WarningAlarm_C::BndEvt__Equip_Durability_Refair_btn_K2Node_ComponentBoundEvent_2_ClickDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_WarningAlarm.HUD_WarningAlarm_C.BndEvt__Equip_Durability_Refair_btn_K2Node_ComponentBoundEvent_2_ClickDispatcher__DelegateSignature");
		
		UHUD_WarningAlarm_C_BndEvt__Equip_Durability_Refair_btn_K2Node_ComponentBoundEvent_2_ClickDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_WarningAlarm.HUD_WarningAlarm_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_WarningAlarm_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_WarningAlarm.HUD_WarningAlarm_C.PreConstruct");
		
		UHUD_WarningAlarm_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_WarningAlarm.HUD_WarningAlarm_C.BndEvt__CM_BlackBg_K2Node_ComponentBoundEvent_6_CloseBtn_Event__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_WarningAlarm_C::BndEvt__CM_BlackBg_K2Node_ComponentBoundEvent_6_CloseBtn_Event__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_WarningAlarm.HUD_WarningAlarm_C.BndEvt__CM_BlackBg_K2Node_ComponentBoundEvent_6_CloseBtn_Event__DelegateSignature");
		
		UHUD_WarningAlarm_C_BndEvt__CM_BlackBg_K2Node_ComponentBoundEvent_6_CloseBtn_Event__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_WarningAlarm.HUD_WarningAlarm_C.OnWarningOrder
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Idx                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESlateVisibility                                   eVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_WarningAlarm_C::OnWarningOrder(int32_t Idx, ESlateVisibility eVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_WarningAlarm.HUD_WarningAlarm_C.OnWarningOrder");
		
		UHUD_WarningAlarm_C_OnWarningOrder_Params params {};
		params.Idx = Idx;
		params.eVisible = eVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_WarningAlarm.HUD_WarningAlarm_C.BndEvt__HUD_WarningAlarm_Exp_Restore_btn_K2Node_ComponentBoundEvent_5_ClickDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_WarningAlarm_C::BndEvt__HUD_WarningAlarm_Exp_Restore_btn_K2Node_ComponentBoundEvent_5_ClickDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_WarningAlarm.HUD_WarningAlarm_C.BndEvt__HUD_WarningAlarm_Exp_Restore_btn_K2Node_ComponentBoundEvent_5_ClickDispatcher__DelegateSignature");
		
		UHUD_WarningAlarm_C_BndEvt__HUD_WarningAlarm_Exp_Restore_btn_K2Node_ComponentBoundEvent_5_ClickDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_WarningAlarm.HUD_WarningAlarm_C.ResourceRegistration
	 * 		Flags  -> ()
	 */
	void UHUD_WarningAlarm_C::ResourceRegistration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_WarningAlarm.HUD_WarningAlarm_C.ResourceRegistration");
		
		UHUD_WarningAlarm_C_ResourceRegistration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_WarningAlarm.HUD_WarningAlarm_C.BndEvt__HUD_WarningAlarm_CM_Btn_Close_K2Node_ComponentBoundEvent_1_Click__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_WarningAlarm_C::BndEvt__HUD_WarningAlarm_CM_Btn_Close_K2Node_ComponentBoundEvent_1_Click__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_WarningAlarm.HUD_WarningAlarm_C.BndEvt__HUD_WarningAlarm_CM_Btn_Close_K2Node_ComponentBoundEvent_1_Click__DelegateSignature");
		
		UHUD_WarningAlarm_C_BndEvt__HUD_WarningAlarm_CM_Btn_Close_K2Node_ComponentBoundEvent_1_Click__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_WarningAlarm.HUD_WarningAlarm_C.BndEvt__HUD_WarningAlarm_Inven_Warning_btn_K2Node_ComponentBoundEvent_7_ClickDipatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_WarningAlarm_C::BndEvt__HUD_WarningAlarm_Inven_Warning_btn_K2Node_ComponentBoundEvent_7_ClickDipatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_WarningAlarm.HUD_WarningAlarm_C.BndEvt__HUD_WarningAlarm_Inven_Warning_btn_K2Node_ComponentBoundEvent_7_ClickDipatcher__DelegateSignature");
		
		UHUD_WarningAlarm_C_BndEvt__HUD_WarningAlarm_Inven_Warning_btn_K2Node_ComponentBoundEvent_7_ClickDipatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_WarningAlarm.HUD_WarningAlarm_C.BndEvt__HUD_WarningAlarm_Weight_Warning_btn_K2Node_ComponentBoundEvent_10_ClickDipatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_WarningAlarm_C::BndEvt__HUD_WarningAlarm_Weight_Warning_btn_K2Node_ComponentBoundEvent_10_ClickDipatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_WarningAlarm.HUD_WarningAlarm_C.BndEvt__HUD_WarningAlarm_Weight_Warning_btn_K2Node_ComponentBoundEvent_10_ClickDipatcher__DelegateSignature");
		
		UHUD_WarningAlarm_C_BndEvt__HUD_WarningAlarm_Weight_Warning_btn_K2Node_ComponentBoundEvent_10_ClickDipatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_WarningAlarm.HUD_WarningAlarm_C.BndEvt__HUD_WarningAlarm_Reputation_Warning_btn_K2Node_ComponentBoundEvent_11_ClickDipatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_WarningAlarm_C::BndEvt__HUD_WarningAlarm_Reputation_Warning_btn_K2Node_ComponentBoundEvent_11_ClickDipatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_WarningAlarm.HUD_WarningAlarm_C.BndEvt__HUD_WarningAlarm_Reputation_Warning_btn_K2Node_ComponentBoundEvent_11_ClickDipatcher__DelegateSignature");
		
		UHUD_WarningAlarm_C_BndEvt__HUD_WarningAlarm_Reputation_Warning_btn_K2Node_ComponentBoundEvent_11_ClickDipatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_WarningAlarm.HUD_WarningAlarm_C.BndEvt__HUD_WarningAlarm_Armor_Warning_btn_K2Node_ComponentBoundEvent_12_ClickDipatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_WarningAlarm_C::BndEvt__HUD_WarningAlarm_Armor_Warning_btn_K2Node_ComponentBoundEvent_12_ClickDipatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_WarningAlarm.HUD_WarningAlarm_C.BndEvt__HUD_WarningAlarm_Armor_Warning_btn_K2Node_ComponentBoundEvent_12_ClickDipatcher__DelegateSignature");
		
		UHUD_WarningAlarm_C_BndEvt__HUD_WarningAlarm_Armor_Warning_btn_K2Node_ComponentBoundEvent_12_ClickDipatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_WarningAlarm.HUD_WarningAlarm_C.BndEvt__HUD_WarningAlarm_Exp_Warning_btn_K2Node_ComponentBoundEvent_13_ClickDipatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_WarningAlarm_C::BndEvt__HUD_WarningAlarm_Exp_Warning_btn_K2Node_ComponentBoundEvent_13_ClickDipatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_WarningAlarm.HUD_WarningAlarm_C.BndEvt__HUD_WarningAlarm_Exp_Warning_btn_K2Node_ComponentBoundEvent_13_ClickDipatcher__DelegateSignature");
		
		UHUD_WarningAlarm_C_BndEvt__HUD_WarningAlarm_Exp_Warning_btn_K2Node_ComponentBoundEvent_13_ClickDipatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_WarningAlarm.HUD_WarningAlarm_C.BndEvt__Btn_Coution_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_WarningAlarm_C::BndEvt__Btn_Coution_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_WarningAlarm.HUD_WarningAlarm_C.BndEvt__Btn_Coution_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UHUD_WarningAlarm_C_BndEvt__Btn_Coution_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_WarningAlarm.HUD_WarningAlarm_C.ExecuteUbergraph_HUD_WarningAlarm
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_WarningAlarm_C::ExecuteUbergraph_HUD_WarningAlarm(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_WarningAlarm.HUD_WarningAlarm_C.ExecuteUbergraph_HUD_WarningAlarm");
		
		UHUD_WarningAlarm_C_ExecuteUbergraph_HUD_WarningAlarm_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHUD_WarningAlarm_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_WarningAlarm_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_WarningAlarm.HUD_WarningAlarm_C");
		return ptr;
	}

}


