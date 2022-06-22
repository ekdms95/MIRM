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
	 * 		Name   -> Function HUD_Siege_NaviBox_Elem.HUD_Siege_NaviBox_Elem_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Siege_NaviBox_Elem_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Siege_NaviBox_Elem.HUD_Siege_NaviBox_Elem_C.PreConstruct");
		
		UHUD_Siege_NaviBox_Elem_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Siege_NaviBox_Elem.HUD_Siege_NaviBox_Elem_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Siege_NaviBox_Elem_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Siege_NaviBox_Elem.HUD_Siege_NaviBox_Elem_C.Tick");
		
		UHUD_Siege_NaviBox_Elem_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Siege_NaviBox_Elem.HUD_Siege_NaviBox_Elem_C.BndEvt__HUD_Siege_NaviBox_Elem_HUD_Siege_War_Box_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_Siege_NaviBox_Elem_C::BndEvt__HUD_Siege_NaviBox_Elem_HUD_Siege_War_Box_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Siege_NaviBox_Elem.HUD_Siege_NaviBox_Elem_C.BndEvt__HUD_Siege_NaviBox_Elem_HUD_Siege_War_Box_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UHUD_Siege_NaviBox_Elem_C_BndEvt__HUD_Siege_NaviBox_Elem_HUD_Siege_War_Box_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Siege_NaviBox_Elem.HUD_Siege_NaviBox_Elem_C.OnPreSet
	 * 		Flags  -> ()
	 */
	void UHUD_Siege_NaviBox_Elem_C::OnPreSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Siege_NaviBox_Elem.HUD_Siege_NaviBox_Elem_C.OnPreSet");
		
		UHUD_Siege_NaviBox_Elem_C_OnPreSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Siege_NaviBox_Elem.HUD_Siege_NaviBox_Elem_C.OnActiveAutoMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOn                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Siege_NaviBox_Elem_C::OnActiveAutoMove(bool IsOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Siege_NaviBox_Elem.HUD_Siege_NaviBox_Elem_C.OnActiveAutoMove");
		
		UHUD_Siege_NaviBox_Elem_C_OnActiveAutoMove_Params params {};
		params.IsOn = IsOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Siege_NaviBox_Elem.HUD_Siege_NaviBox_Elem_C.ExecuteUbergraph_HUD_Siege_NaviBox_Elem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Siege_NaviBox_Elem_C::ExecuteUbergraph_HUD_Siege_NaviBox_Elem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Siege_NaviBox_Elem.HUD_Siege_NaviBox_Elem_C.ExecuteUbergraph_HUD_Siege_NaviBox_Elem");
		
		UHUD_Siege_NaviBox_Elem_C_ExecuteUbergraph_HUD_Siege_NaviBox_Elem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHUD_Siege_NaviBox_Elem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Siege_NaviBox_Elem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Siege_NaviBox_Elem.HUD_Siege_NaviBox_Elem_C");
		return ptr;
	}

}


