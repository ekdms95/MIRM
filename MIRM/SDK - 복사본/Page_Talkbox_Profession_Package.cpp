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
	 * 		Name   -> Function Page_Talkbox_Profession.Page_Talkbox_Profession_C.On_BG_MouseButtonDown_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UPage_Talkbox_Profession_C::On_BG_MouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Talkbox_Profession.Page_Talkbox_Profession_C.On_BG_MouseButtonDown_1");
		
		UPage_Talkbox_Profession_C_On_BG_MouseButtonDown_1_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Talkbox_Profession.Page_Talkbox_Profession_C.OnSetAlram_Already
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      upgrade                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UPage_Talkbox_Profession_C::OnSetAlram_Already(const class FString& Title, const class FString& upgrade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Talkbox_Profession.Page_Talkbox_Profession_C.OnSetAlram_Already");
		
		UPage_Talkbox_Profession_C_OnSetAlram_Already_Params params {};
		params.Title = Title;
		params.upgrade = upgrade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Talkbox_Profession.Page_Talkbox_Profession_C.OnPreSet
	 * 		Flags  -> ()
	 */
	void UPage_Talkbox_Profession_C::OnPreSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Talkbox_Profession.Page_Talkbox_Profession_C.OnPreSet");
		
		UPage_Talkbox_Profession_C_OnPreSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Talkbox_Profession.Page_Talkbox_Profession_C.BndEvt__TB_Craftsman_Reset_K2Node_ComponentBoundEvent_1_CloseDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPage_Talkbox_Profession_C::BndEvt__TB_Craftsman_Reset_K2Node_ComponentBoundEvent_1_CloseDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Talkbox_Profession.Page_Talkbox_Profession_C.BndEvt__TB_Craftsman_Reset_K2Node_ComponentBoundEvent_1_CloseDispatcher__DelegateSignature");
		
		UPage_Talkbox_Profession_C_BndEvt__TB_Craftsman_Reset_K2Node_ComponentBoundEvent_1_CloseDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Talkbox_Profession.Page_Talkbox_Profession_C.BndEvt__TB_Craftsman_Upgrade_K2Node_ComponentBoundEvent_2_CloseDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPage_Talkbox_Profession_C::BndEvt__TB_Craftsman_Upgrade_K2Node_ComponentBoundEvent_2_CloseDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Talkbox_Profession.Page_Talkbox_Profession_C.BndEvt__TB_Craftsman_Upgrade_K2Node_ComponentBoundEvent_2_CloseDispatcher__DelegateSignature");
		
		UPage_Talkbox_Profession_C_BndEvt__TB_Craftsman_Upgrade_K2Node_ComponentBoundEvent_2_CloseDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Talkbox_Profession.Page_Talkbox_Profession_C.BndEvt__TB_Craftsman_Reset_K2Node_ComponentBoundEvent_3_ResetDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPage_Talkbox_Profession_C::BndEvt__TB_Craftsman_Reset_K2Node_ComponentBoundEvent_3_ResetDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Talkbox_Profession.Page_Talkbox_Profession_C.BndEvt__TB_Craftsman_Reset_K2Node_ComponentBoundEvent_3_ResetDispatcher__DelegateSignature");
		
		UPage_Talkbox_Profession_C_BndEvt__TB_Craftsman_Reset_K2Node_ComponentBoundEvent_3_ResetDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Talkbox_Profession.Page_Talkbox_Profession_C.BndEvt__TB_Craftsman_Upgrade_K2Node_ComponentBoundEvent_4_UpgradeDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPage_Talkbox_Profession_C::BndEvt__TB_Craftsman_Upgrade_K2Node_ComponentBoundEvent_4_UpgradeDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Talkbox_Profession.Page_Talkbox_Profession_C.BndEvt__TB_Craftsman_Upgrade_K2Node_ComponentBoundEvent_4_UpgradeDispatcher__DelegateSignature");
		
		UPage_Talkbox_Profession_C_BndEvt__TB_Craftsman_Upgrade_K2Node_ComponentBoundEvent_4_UpgradeDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Talkbox_Profession.Page_Talkbox_Profession_C.BndEvt__TB_Craftsman_Already_K2Node_ComponentBoundEvent_0_CloseDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPage_Talkbox_Profession_C::BndEvt__TB_Craftsman_Already_K2Node_ComponentBoundEvent_0_CloseDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Talkbox_Profession.Page_Talkbox_Profession_C.BndEvt__TB_Craftsman_Already_K2Node_ComponentBoundEvent_0_CloseDispatcher__DelegateSignature");
		
		UPage_Talkbox_Profession_C_BndEvt__TB_Craftsman_Already_K2Node_ComponentBoundEvent_0_CloseDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Talkbox_Profession.Page_Talkbox_Profession_C.OnSetSelectType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPage_Talkbox_Profession_C::OnSetSelectType(int32_t Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Talkbox_Profession.Page_Talkbox_Profession_C.OnSetSelectType");
		
		UPage_Talkbox_Profession_C_OnSetSelectType_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Talkbox_Profession.Page_Talkbox_Profession_C.OnSetAlram_Reset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      upgrade                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UPage_Talkbox_Profession_C::OnSetAlram_Reset(const class FString& Title, const class FString& upgrade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Talkbox_Profession.Page_Talkbox_Profession_C.OnSetAlram_Reset");
		
		UPage_Talkbox_Profession_C_OnSetAlram_Reset_Params params {};
		params.Title = Title;
		params.upgrade = upgrade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Talkbox_Profession.Page_Talkbox_Profession_C.CancelPopup
	 * 		Flags  -> ()
	 */
	void UPage_Talkbox_Profession_C::CancelPopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Talkbox_Profession.Page_Talkbox_Profession_C.CancelPopup");
		
		UPage_Talkbox_Profession_C_CancelPopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Talkbox_Profession.Page_Talkbox_Profession_C.ExecuteUbergraph_Page_Talkbox_Profession
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPage_Talkbox_Profession_C::ExecuteUbergraph_Page_Talkbox_Profession(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Talkbox_Profession.Page_Talkbox_Profession_C.ExecuteUbergraph_Page_Talkbox_Profession");
		
		UPage_Talkbox_Profession_C_ExecuteUbergraph_Page_Talkbox_Profession_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPage_Talkbox_Profession_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPage_Talkbox_Profession_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Page_Talkbox_Profession.Page_Talkbox_Profession_C");
		return ptr;
	}

}


