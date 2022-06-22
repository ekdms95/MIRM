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
	 * 		Name   -> Function HUD_Character_Info_Pop.HUD_Character_Info_Pop_C.SetChangeTab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            tabIdx                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Character_Info_Pop_C::SetChangeTab(int32_t tabIdx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Character_Info_Pop.HUD_Character_Info_Pop_C.SetChangeTab");
		
		UHUD_Character_Info_Pop_C_SetChangeTab_Params params {};
		params.tabIdx = tabIdx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Character_Info_Pop.HUD_Character_Info_Pop_C.OnPreSet
	 * 		Flags  -> ()
	 */
	void UHUD_Character_Info_Pop_C::OnPreSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Character_Info_Pop.HUD_Character_Info_Pop_C.OnPreSet");
		
		UHUD_Character_Info_Pop_C_OnPreSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Character_Info_Pop.HUD_Character_Info_Pop_C.BndEvt__Basic_Info_Tab_btn_K2Node_ComponentBoundEvent_0_OnTabStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Character_Info_Pop_C::BndEvt__Basic_Info_Tab_btn_K2Node_ComponentBoundEvent_0_OnTabStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Character_Info_Pop.HUD_Character_Info_Pop_C.BndEvt__Basic_Info_Tab_btn_K2Node_ComponentBoundEvent_0_OnTabStateChanged__DelegateSignature");
		
		UHUD_Character_Info_Pop_C_BndEvt__Basic_Info_Tab_btn_K2Node_ComponentBoundEvent_0_OnTabStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Character_Info_Pop.HUD_Character_Info_Pop_C.BndEvt__Status_Tab_btn_K2Node_ComponentBoundEvent_1_OnTabStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Character_Info_Pop_C::BndEvt__Status_Tab_btn_K2Node_ComponentBoundEvent_1_OnTabStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Character_Info_Pop.HUD_Character_Info_Pop_C.BndEvt__Status_Tab_btn_K2Node_ComponentBoundEvent_1_OnTabStateChanged__DelegateSignature");
		
		UHUD_Character_Info_Pop_C_BndEvt__Status_Tab_btn_K2Node_ComponentBoundEvent_1_OnTabStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Character_Info_Pop.HUD_Character_Info_Pop_C.OnInitailizeWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Parameters                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UHUD_Character_Info_Pop_C::OnInitailizeWidget(const class FString& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Character_Info_Pop.HUD_Character_Info_Pop_C.OnInitailizeWidget");
		
		UHUD_Character_Info_Pop_C_OnInitailizeWidget_Params params {};
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Character_Info_Pop.HUD_Character_Info_Pop_C.OnSetActive
	 * 		Flags  -> ()
	 */
	void UHUD_Character_Info_Pop_C::OnSetActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Character_Info_Pop.HUD_Character_Info_Pop_C.OnSetActive");
		
		UHUD_Character_Info_Pop_C_OnSetActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Character_Info_Pop.HUD_Character_Info_Pop_C.BndEvt__HUD_Character_Info_Pop_K2Node_ComponentBoundEvent_3_PopClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_Character_Info_Pop_C::BndEvt__HUD_Character_Info_Pop_K2Node_ComponentBoundEvent_3_PopClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Character_Info_Pop.HUD_Character_Info_Pop_C.BndEvt__HUD_Character_Info_Pop_K2Node_ComponentBoundEvent_3_PopClose__DelegateSignature");
		
		UHUD_Character_Info_Pop_C_BndEvt__HUD_Character_Info_Pop_K2Node_ComponentBoundEvent_3_PopClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Character_Info_Pop.HUD_Character_Info_Pop_C.BndEvt__Goods_Tab_btn_K2Node_ComponentBoundEvent_4_OnTabStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Character_Info_Pop_C::BndEvt__Goods_Tab_btn_K2Node_ComponentBoundEvent_4_OnTabStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Character_Info_Pop.HUD_Character_Info_Pop_C.BndEvt__Goods_Tab_btn_K2Node_ComponentBoundEvent_4_OnTabStateChanged__DelegateSignature");
		
		UHUD_Character_Info_Pop_C_BndEvt__Goods_Tab_btn_K2Node_ComponentBoundEvent_4_OnTabStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Character_Info_Pop.HUD_Character_Info_Pop_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Character_Info_Pop_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Character_Info_Pop.HUD_Character_Info_Pop_C.Tick");
		
		UHUD_Character_Info_Pop_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Character_Info_Pop.HUD_Character_Info_Pop_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Character_Info_Pop_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Character_Info_Pop.HUD_Character_Info_Pop_C.PreConstruct");
		
		UHUD_Character_Info_Pop_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Character_Info_Pop.HUD_Character_Info_Pop_C.BndEvt__HUD_Character_Info_Pop_HUD_Character_Info_ToolTip_K2Node_ComponentBoundEvent_2_CloseDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_Character_Info_Pop_C::BndEvt__HUD_Character_Info_Pop_HUD_Character_Info_ToolTip_K2Node_ComponentBoundEvent_2_CloseDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Character_Info_Pop.HUD_Character_Info_Pop_C.BndEvt__HUD_Character_Info_Pop_HUD_Character_Info_ToolTip_K2Node_ComponentBoundEvent_2_CloseDispatcher__DelegateSignature");
		
		UHUD_Character_Info_Pop_C_BndEvt__HUD_Character_Info_Pop_HUD_Character_Info_ToolTip_K2Node_ComponentBoundEvent_2_CloseDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Character_Info_Pop.HUD_Character_Info_Pop_C.ExecuteUbergraph_HUD_Character_Info_Pop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Character_Info_Pop_C::ExecuteUbergraph_HUD_Character_Info_Pop(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Character_Info_Pop.HUD_Character_Info_Pop_C.ExecuteUbergraph_HUD_Character_Info_Pop");
		
		UHUD_Character_Info_Pop_C_ExecuteUbergraph_HUD_Character_Info_Pop_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Character_Info_Pop.HUD_Character_Info_Pop_C.CloseDispatch__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_Character_Info_Pop_C::CloseDispatch__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Character_Info_Pop.HUD_Character_Info_Pop_C.CloseDispatch__DelegateSignature");
		
		UHUD_Character_Info_Pop_C_CloseDispatch__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHUD_Character_Info_Pop_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Character_Info_Pop_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Character_Info_Pop.HUD_Character_Info_Pop_C");
		return ptr;
	}

}


