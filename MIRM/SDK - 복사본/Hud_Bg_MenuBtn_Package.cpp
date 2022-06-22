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
	 * 		Name   -> Function Hud_Bg_MenuBtn.Hud_Bg_MenuBtn_C.Btn_Bg_State_Function
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Image                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_Bg_MenuBtn_C::Btn_Bg_State_Function(class UObject* Image)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Bg_MenuBtn.Hud_Bg_MenuBtn_C.Btn_Bg_State_Function");
		
		UHud_Bg_MenuBtn_C_Btn_Bg_State_Function_Params params {};
		params.Image = Image;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Bg_MenuBtn.Hud_Bg_MenuBtn_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_Bg_MenuBtn_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Bg_MenuBtn.Hud_Bg_MenuBtn_C.PreConstruct");
		
		UHud_Bg_MenuBtn_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Bg_MenuBtn.Hud_Bg_MenuBtn_C.BndEvt__Second_Menu_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_Bg_MenuBtn_C::BndEvt__Second_Menu_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Bg_MenuBtn.Hud_Bg_MenuBtn_C.BndEvt__Second_Menu_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UHud_Bg_MenuBtn_C_BndEvt__Second_Menu_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Bg_MenuBtn.Hud_Bg_MenuBtn_C.OnChangeCflag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCFlagValues                                CFlagValues                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UHud_Bg_MenuBtn_C::OnChangeCflag(const struct FCFlagValues& CFlagValues)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Bg_MenuBtn.Hud_Bg_MenuBtn_C.OnChangeCflag");
		
		UHud_Bg_MenuBtn_C_OnChangeCflag_Params params {};
		params.CFlagValues = CFlagValues;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Bg_MenuBtn.Hud_Bg_MenuBtn_C.OnInitailizeWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Parameters                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UHud_Bg_MenuBtn_C::OnInitailizeWidget(const class FString& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Bg_MenuBtn.Hud_Bg_MenuBtn_C.OnInitailizeWidget");
		
		UHud_Bg_MenuBtn_C_OnInitailizeWidget_Params params {};
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Bg_MenuBtn.Hud_Bg_MenuBtn_C.OnReceivePrefabMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        PrefabMessage                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      PrefabParameters                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UHud_Bg_MenuBtn_C::OnReceivePrefabMessage(const class FName& PrefabMessage, const class FString& PrefabParameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Bg_MenuBtn.Hud_Bg_MenuBtn_C.OnReceivePrefabMessage");
		
		UHud_Bg_MenuBtn_C_OnReceivePrefabMessage_Params params {};
		params.PrefabMessage = PrefabMessage;
		params.PrefabParameters = PrefabParameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Bg_MenuBtn.Hud_Bg_MenuBtn_C.BndEvt__Over_Button_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_Bg_MenuBtn_C::BndEvt__Over_Button_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Bg_MenuBtn.Hud_Bg_MenuBtn_C.BndEvt__Over_Button_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");
		
		UHud_Bg_MenuBtn_C_BndEvt__Over_Button_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Bg_MenuBtn.Hud_Bg_MenuBtn_C.BndEvt__Over_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_Bg_MenuBtn_C::BndEvt__Over_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Bg_MenuBtn.Hud_Bg_MenuBtn_C.BndEvt__Over_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UHud_Bg_MenuBtn_C_BndEvt__Over_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Bg_MenuBtn.Hud_Bg_MenuBtn_C.BndEvt__Second_Menu_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_Bg_MenuBtn_C::BndEvt__Second_Menu_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Bg_MenuBtn.Hud_Bg_MenuBtn_C.BndEvt__Second_Menu_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UHud_Bg_MenuBtn_C_BndEvt__Second_Menu_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Bg_MenuBtn.Hud_Bg_MenuBtn_C.BndEvt__Second_Menu_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_Bg_MenuBtn_C::BndEvt__Second_Menu_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Bg_MenuBtn.Hud_Bg_MenuBtn_C.BndEvt__Second_Menu_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");
		
		UHud_Bg_MenuBtn_C_BndEvt__Second_Menu_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Bg_MenuBtn.Hud_Bg_MenuBtn_C.BndEvt__Over_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_Bg_MenuBtn_C::BndEvt__Over_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Bg_MenuBtn.Hud_Bg_MenuBtn_C.BndEvt__Over_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");
		
		UHud_Bg_MenuBtn_C_BndEvt__Over_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Bg_MenuBtn.Hud_Bg_MenuBtn_C.BndEvt__Second_Menu_Button_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_Bg_MenuBtn_C::BndEvt__Second_Menu_Button_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Bg_MenuBtn.Hud_Bg_MenuBtn_C.BndEvt__Second_Menu_Button_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature");
		
		UHud_Bg_MenuBtn_C_BndEvt__Second_Menu_Button_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Bg_MenuBtn.Hud_Bg_MenuBtn_C.BndEvt__Over_Button_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_Bg_MenuBtn_C::BndEvt__Over_Button_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Bg_MenuBtn.Hud_Bg_MenuBtn_C.BndEvt__Over_Button_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature");
		
		UHud_Bg_MenuBtn_C_BndEvt__Over_Button_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Bg_MenuBtn.Hud_Bg_MenuBtn_C.OnSetSystemOpen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_Bg_MenuBtn_C::OnSetSystemOpen(bool IsOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Bg_MenuBtn.Hud_Bg_MenuBtn_C.OnSetSystemOpen");
		
		UHud_Bg_MenuBtn_C_OnSetSystemOpen_Params params {};
		params.IsOn = IsOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Bg_MenuBtn.Hud_Bg_MenuBtn_C.ExecuteUbergraph_Hud_Bg_MenuBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_Bg_MenuBtn_C::ExecuteUbergraph_Hud_Bg_MenuBtn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Bg_MenuBtn.Hud_Bg_MenuBtn_C.ExecuteUbergraph_Hud_Bg_MenuBtn");
		
		UHud_Bg_MenuBtn_C_ExecuteUbergraph_Hud_Bg_MenuBtn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Bg_MenuBtn.Hud_Bg_MenuBtn_C.MenuBtn_Click__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_Bg_MenuBtn_C::MenuBtn_Click__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Bg_MenuBtn.Hud_Bg_MenuBtn_C.MenuBtn_Click__DelegateSignature");
		
		UHud_Bg_MenuBtn_C_MenuBtn_Click__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHud_Bg_MenuBtn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHud_Bg_MenuBtn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Hud_Bg_MenuBtn.Hud_Bg_MenuBtn_C");
		return ptr;
	}

}


