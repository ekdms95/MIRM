/**
 * Name: MIRM
 * Version: 0623-2
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
	 * 		Name   -> Function CM_IV_Frame.CM_IV_Frame_C.Init Use Tab Alarm
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               UseTabAlarm                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_IV_Frame_C::Init_Use_Tab_Alarm(bool UseTabAlarm)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_IV_Frame.CM_IV_Frame_C.Init Use Tab Alarm");
		
		UCM_IV_Frame_C_Init_Use_Tab_Alarm_Params params {};
		params.UseTabAlarm = UseTabAlarm;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_IV_Frame.CM_IV_Frame_C.Tab_Visi_Function
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   Tab_All_visi                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESlateVisibility                                   Tab_Armor_visi                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESlateVisibility                                   Tab_Stone_visi                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESlateVisibility                                   Tab_Cos_visi                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESlateVisibility                                   Tab_Etc_visi                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_IV_Frame_C::Tab_Visi_Function(ESlateVisibility Tab_All_visi, ESlateVisibility Tab_Armor_visi, ESlateVisibility Tab_Stone_visi, ESlateVisibility Tab_Cos_visi, ESlateVisibility Tab_Etc_visi)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_IV_Frame.CM_IV_Frame_C.Tab_Visi_Function");
		
		UCM_IV_Frame_C_Tab_Visi_Function_Params params {};
		params.Tab_All_visi = Tab_All_visi;
		params.Tab_Armor_visi = Tab_Armor_visi;
		params.Tab_Stone_visi = Tab_Stone_visi;
		params.Tab_Cos_visi = Tab_Cos_visi;
		params.Tab_Etc_visi = Tab_Etc_visi;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_IV_Frame.CM_IV_Frame_C.HUD_Page_Changer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_IV_Frame_C::HUD_Page_Changer(bool NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_IV_Frame.CM_IV_Frame_C.HUD_Page_Changer");
		
		UCM_IV_Frame_C_HUD_Page_Changer_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_IV_Frame.CM_IV_Frame_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            inTabIdx                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_IV_Frame_C::Init(int32_t inTabIdx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_IV_Frame.CM_IV_Frame_C.Init");
		
		UCM_IV_Frame_C_Init_Params params {};
		params.inTabIdx = inTabIdx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_IV_Frame.CM_IV_Frame_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_IV_Frame_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_IV_Frame.CM_IV_Frame_C.PreConstruct");
		
		UCM_IV_Frame_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_IV_Frame.CM_IV_Frame_C.BndEvt__Weapon_tab_K2Node_ComponentBoundEvent_0_OnChangeState__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_IV_Frame_C::BndEvt__Weapon_tab_K2Node_ComponentBoundEvent_0_OnChangeState__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_IV_Frame.CM_IV_Frame_C.BndEvt__Weapon_tab_K2Node_ComponentBoundEvent_0_OnChangeState__DelegateSignature");
		
		UCM_IV_Frame_C_BndEvt__Weapon_tab_K2Node_ComponentBoundEvent_0_OnChangeState__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_IV_Frame.CM_IV_Frame_C.BndEvt__Armor_tab_K2Node_ComponentBoundEvent_1_OnChangeState__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_IV_Frame_C::BndEvt__Armor_tab_K2Node_ComponentBoundEvent_1_OnChangeState__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_IV_Frame.CM_IV_Frame_C.BndEvt__Armor_tab_K2Node_ComponentBoundEvent_1_OnChangeState__DelegateSignature");
		
		UCM_IV_Frame_C_BndEvt__Armor_tab_K2Node_ComponentBoundEvent_1_OnChangeState__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_IV_Frame.CM_IV_Frame_C.BndEvt__Ring_tab_K2Node_ComponentBoundEvent_2_OnChangeState__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_IV_Frame_C::BndEvt__Ring_tab_K2Node_ComponentBoundEvent_2_OnChangeState__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_IV_Frame.CM_IV_Frame_C.BndEvt__Ring_tab_K2Node_ComponentBoundEvent_2_OnChangeState__DelegateSignature");
		
		UCM_IV_Frame_C_BndEvt__Ring_tab_K2Node_ComponentBoundEvent_2_OnChangeState__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_IV_Frame.CM_IV_Frame_C.BndEvt__ETC_tab_K2Node_ComponentBoundEvent_3_OnChangeState__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_IV_Frame_C::BndEvt__ETC_tab_K2Node_ComponentBoundEvent_3_OnChangeState__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_IV_Frame.CM_IV_Frame_C.BndEvt__ETC_tab_K2Node_ComponentBoundEvent_3_OnChangeState__DelegateSignature");
		
		UCM_IV_Frame_C_BndEvt__ETC_tab_K2Node_ComponentBoundEvent_3_OnChangeState__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_IV_Frame.CM_IV_Frame_C.BndEvt__CM_Btn_Close_K2Node_ComponentBoundEvent_4_Click__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_IV_Frame_C::BndEvt__CM_Btn_Close_K2Node_ComponentBoundEvent_4_Click__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_IV_Frame.CM_IV_Frame_C.BndEvt__CM_Btn_Close_K2Node_ComponentBoundEvent_4_Click__DelegateSignature");
		
		UCM_IV_Frame_C_BndEvt__CM_Btn_Close_K2Node_ComponentBoundEvent_4_Click__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_IV_Frame.CM_IV_Frame_C.ExecuteUbergraph_CM_IV_Frame
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_IV_Frame_C::ExecuteUbergraph_CM_IV_Frame(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_IV_Frame.CM_IV_Frame_C.ExecuteUbergraph_CM_IV_Frame");
		
		UCM_IV_Frame_C_ExecuteUbergraph_CM_IV_Frame_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_IV_Frame.CM_IV_Frame_C.CostumeDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_IV_Frame_C::CostumeDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_IV_Frame.CM_IV_Frame_C.CostumeDispatcher__DelegateSignature");
		
		UCM_IV_Frame_C_CostumeDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_IV_Frame.CM_IV_Frame_C.EtcDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_IV_Frame_C::EtcDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_IV_Frame.CM_IV_Frame_C.EtcDispatcher__DelegateSignature");
		
		UCM_IV_Frame_C_EtcDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_IV_Frame.CM_IV_Frame_C.DragonstoneTabDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_IV_Frame_C::DragonstoneTabDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_IV_Frame.CM_IV_Frame_C.DragonstoneTabDispatcher__DelegateSignature");
		
		UCM_IV_Frame_C_DragonstoneTabDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_IV_Frame.CM_IV_Frame_C.EquipmentTabDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_IV_Frame_C::EquipmentTabDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_IV_Frame.CM_IV_Frame_C.EquipmentTabDispatcher__DelegateSignature");
		
		UCM_IV_Frame_C_EquipmentTabDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_IV_Frame.CM_IV_Frame_C.AllTabDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_IV_Frame_C::AllTabDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_IV_Frame.CM_IV_Frame_C.AllTabDispatcher__DelegateSignature");
		
		UCM_IV_Frame_C_AllTabDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_IV_Frame.CM_IV_Frame_C.ClosePopupDispatch__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_IV_Frame_C::ClosePopupDispatch__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_IV_Frame.CM_IV_Frame_C.ClosePopupDispatch__DelegateSignature");
		
		UCM_IV_Frame_C_ClosePopupDispatch__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCM_IV_Frame_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCM_IV_Frame_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CM_IV_Frame.CM_IV_Frame_C");
		return ptr;
	}

}


