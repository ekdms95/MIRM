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
	 * 		Name   -> Function Page_Hud_Recommand.Page_Hud_Recommand_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPage_Hud_Recommand_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Hud_Recommand.Page_Hud_Recommand_C.PreConstruct");
		
		UPage_Hud_Recommand_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Hud_Recommand.Page_Hud_Recommand_C.OnCreateMirPage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Parameters                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UPage_Hud_Recommand_C::OnCreateMirPage(const class FString& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Hud_Recommand.Page_Hud_Recommand_C.OnCreateMirPage");
		
		UPage_Hud_Recommand_C_OnCreateMirPage_Params params {};
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Hud_Recommand.Page_Hud_Recommand_C.OnSetPopup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnable                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPage_Hud_Recommand_C::OnSetPopup(bool IsEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Hud_Recommand.Page_Hud_Recommand_C.OnSetPopup");
		
		UPage_Hud_Recommand_C_OnSetPopup_Params params {};
		params.IsEnable = IsEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Hud_Recommand.Page_Hud_Recommand_C.BndEvt__CM_Recommend_Icon_K2Node_ComponentBoundEvent_0_EquipEventDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPage_Hud_Recommand_C::BndEvt__CM_Recommend_Icon_K2Node_ComponentBoundEvent_0_EquipEventDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Hud_Recommand.Page_Hud_Recommand_C.BndEvt__CM_Recommend_Icon_K2Node_ComponentBoundEvent_0_EquipEventDispatcher__DelegateSignature");
		
		UPage_Hud_Recommand_C_BndEvt__CM_Recommend_Icon_K2Node_ComponentBoundEvent_0_EquipEventDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Hud_Recommand.Page_Hud_Recommand_C.BndEvt__CM_Recommend_Icon_K2Node_ComponentBoundEvent_1_CloseEventDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPage_Hud_Recommand_C::BndEvt__CM_Recommend_Icon_K2Node_ComponentBoundEvent_1_CloseEventDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Hud_Recommand.Page_Hud_Recommand_C.BndEvt__CM_Recommend_Icon_K2Node_ComponentBoundEvent_1_CloseEventDispatcher__DelegateSignature");
		
		UPage_Hud_Recommand_C_BndEvt__CM_Recommend_Icon_K2Node_ComponentBoundEvent_1_CloseEventDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Hud_Recommand.Page_Hud_Recommand_C.OnEquipItemFail
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            reason                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPage_Hud_Recommand_C::OnEquipItemFail(int32_t reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Hud_Recommand.Page_Hud_Recommand_C.OnEquipItemFail");
		
		UPage_Hud_Recommand_C_OnEquipItemFail_Params params {};
		params.reason = reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Hud_Recommand.Page_Hud_Recommand_C.OnSetButtonText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ButtonText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UPage_Hud_Recommand_C::OnSetButtonText(const class FText& ButtonText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Hud_Recommand.Page_Hud_Recommand_C.OnSetButtonText");
		
		UPage_Hud_Recommand_C_OnSetButtonText_Params params {};
		params.ButtonText = ButtonText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Hud_Recommand.Page_Hud_Recommand_C.BndEvt__CM_Num_Item_Regi_Pop_K2Node_ComponentBoundEvent_2_ConfirmDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPage_Hud_Recommand_C::BndEvt__CM_Num_Item_Regi_Pop_K2Node_ComponentBoundEvent_2_ConfirmDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Hud_Recommand.Page_Hud_Recommand_C.BndEvt__CM_Num_Item_Regi_Pop_K2Node_ComponentBoundEvent_2_ConfirmDispatcher__DelegateSignature");
		
		UPage_Hud_Recommand_C_BndEvt__CM_Num_Item_Regi_Pop_K2Node_ComponentBoundEvent_2_ConfirmDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Hud_Recommand.Page_Hud_Recommand_C.BndEvt__CM_Num_Item_Regi_Pop_K2Node_ComponentBoundEvent_3_CloseDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPage_Hud_Recommand_C::BndEvt__CM_Num_Item_Regi_Pop_K2Node_ComponentBoundEvent_3_CloseDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Hud_Recommand.Page_Hud_Recommand_C.BndEvt__CM_Num_Item_Regi_Pop_K2Node_ComponentBoundEvent_3_CloseDispatcher__DelegateSignature");
		
		UPage_Hud_Recommand_C_BndEvt__CM_Num_Item_Regi_Pop_K2Node_ComponentBoundEvent_3_CloseDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Hud_Recommand.Page_Hud_Recommand_C.BndEvt__CM_Num_Item_Regi_Pop_K2Node_ComponentBoundEvent_4_OnChangeCurrNumberValue__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPage_Hud_Recommand_C::BndEvt__CM_Num_Item_Regi_Pop_K2Node_ComponentBoundEvent_4_OnChangeCurrNumberValue__DelegateSignature(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Hud_Recommand.Page_Hud_Recommand_C.BndEvt__CM_Num_Item_Regi_Pop_K2Node_ComponentBoundEvent_4_OnChangeCurrNumberValue__DelegateSignature");
		
		UPage_Hud_Recommand_C_BndEvt__CM_Num_Item_Regi_Pop_K2Node_ComponentBoundEvent_4_OnChangeCurrNumberValue__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Hud_Recommand.Page_Hud_Recommand_C.OnSetTitleText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        TitleText                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UPage_Hud_Recommand_C::OnSetTitleText(const class FText& TitleText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Hud_Recommand.Page_Hud_Recommand_C.OnSetTitleText");
		
		UPage_Hud_Recommand_C_OnSetTitleText_Params params {};
		params.TitleText = TitleText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Page_Hud_Recommand.Page_Hud_Recommand_C.ExecuteUbergraph_Page_Hud_Recommand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPage_Hud_Recommand_C::ExecuteUbergraph_Page_Hud_Recommand(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Page_Hud_Recommand.Page_Hud_Recommand_C.ExecuteUbergraph_Page_Hud_Recommand");
		
		UPage_Hud_Recommand_C_ExecuteUbergraph_Page_Hud_Recommand_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UPage_Hud_Recommand_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPage_Hud_Recommand_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Page_Hud_Recommand.Page_Hud_Recommand_C");
		return ptr;
	}

}


