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
	 * 		Name   -> Function HUD_Vehicle_Btn.HUD_Vehicle_Btn_C.Set_Hungry_Gauge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Vehicle_Hungry_Gauge_Float                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Vehicle_Btn_C::Set_Hungry_Gauge(float Vehicle_Hungry_Gauge_Float)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Vehicle_Btn.HUD_Vehicle_Btn_C.Set_Hungry_Gauge");
		
		UHUD_Vehicle_Btn_C_Set_Hungry_Gauge_Params params {};
		params.Vehicle_Hungry_Gauge_Float = Vehicle_Hungry_Gauge_Float;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Vehicle_Btn.HUD_Vehicle_Btn_C.State_Visibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   Disable_visi                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESlateVisibility                                   Progress_Circle_visi                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESlateVisibility                                   Hungry_Icon_visi                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Vehicle_Btn_C::State_Visibility(ESlateVisibility Disable_visi, ESlateVisibility Progress_Circle_visi, ESlateVisibility Hungry_Icon_visi)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Vehicle_Btn.HUD_Vehicle_Btn_C.State_Visibility");
		
		UHUD_Vehicle_Btn_C_State_Visibility_Params params {};
		params.Disable_visi = Disable_visi;
		params.Progress_Circle_visi = Progress_Circle_visi;
		params.Hungry_Icon_visi = Hungry_Icon_visi;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Vehicle_Btn.HUD_Vehicle_Btn_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Vehicle_Btn_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Vehicle_Btn.HUD_Vehicle_Btn_C.PreConstruct");
		
		UHUD_Vehicle_Btn_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Vehicle_Btn.HUD_Vehicle_Btn_C.OnPreSet
	 * 		Flags  -> ()
	 */
	void UHUD_Vehicle_Btn_C::OnPreSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Vehicle_Btn.HUD_Vehicle_Btn_C.OnPreSet");
		
		UHUD_Vehicle_Btn_C_OnPreSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Vehicle_Btn.HUD_Vehicle_Btn_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Vehicle_Btn_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Vehicle_Btn.HUD_Vehicle_Btn_C.Tick");
		
		UHUD_Vehicle_Btn_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Vehicle_Btn.HUD_Vehicle_Btn_C.BndEvt__Pet_Summon_btn_K2Node_ComponentBoundEvent_1_MbtnClick__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_Vehicle_Btn_C::BndEvt__Pet_Summon_btn_K2Node_ComponentBoundEvent_1_MbtnClick__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Vehicle_Btn.HUD_Vehicle_Btn_C.BndEvt__Pet_Summon_btn_K2Node_ComponentBoundEvent_1_MbtnClick__DelegateSignature");
		
		UHUD_Vehicle_Btn_C_BndEvt__Pet_Summon_btn_K2Node_ComponentBoundEvent_1_MbtnClick__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Vehicle_Btn.HUD_Vehicle_Btn_C.BndEvt__HUD_Vehicle_Btn_Disable_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_Vehicle_Btn_C::BndEvt__HUD_Vehicle_Btn_Disable_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Vehicle_Btn.HUD_Vehicle_Btn_C.BndEvt__HUD_Vehicle_Btn_Disable_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UHUD_Vehicle_Btn_C_BndEvt__HUD_Vehicle_Btn_Disable_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Vehicle_Btn.HUD_Vehicle_Btn_C.KeyInput
	 * 		Flags  -> ()
	 */
	void UHUD_Vehicle_Btn_C::KeyInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Vehicle_Btn.HUD_Vehicle_Btn_C.KeyInput");
		
		UHUD_Vehicle_Btn_C_KeyInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Vehicle_Btn.HUD_Vehicle_Btn_C.OnSatifyAnimTickCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsPlaying                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Vehicle_Btn_C::OnSatifyAnimTickCheck(bool IsPlaying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Vehicle_Btn.HUD_Vehicle_Btn_C.OnSatifyAnimTickCheck");
		
		UHUD_Vehicle_Btn_C_OnSatifyAnimTickCheck_Params params {};
		params.IsPlaying = IsPlaying;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Vehicle_Btn.HUD_Vehicle_Btn_C.ExecuteUbergraph_HUD_Vehicle_Btn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Vehicle_Btn_C::ExecuteUbergraph_HUD_Vehicle_Btn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Vehicle_Btn.HUD_Vehicle_Btn_C.ExecuteUbergraph_HUD_Vehicle_Btn");
		
		UHUD_Vehicle_Btn_C_ExecuteUbergraph_HUD_Vehicle_Btn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHUD_Vehicle_Btn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Vehicle_Btn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Vehicle_Btn.HUD_Vehicle_Btn_C");
		return ptr;
	}

}


