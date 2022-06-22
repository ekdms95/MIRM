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
	 * 		Name   -> Function CM_Recommend_Icon.CM_Recommend_Icon_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_Recommend_Icon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Recommend_Icon.CM_Recommend_Icon_C.PreConstruct");
		
		UCM_Recommend_Icon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Recommend_Icon.CM_Recommend_Icon_C.BndEvt__CM_Btn_Close_K2Node_ComponentBoundEvent_1_Click__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_Recommend_Icon_C::BndEvt__CM_Btn_Close_K2Node_ComponentBoundEvent_1_Click__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Recommend_Icon.CM_Recommend_Icon_C.BndEvt__CM_Btn_Close_K2Node_ComponentBoundEvent_1_Click__DelegateSignature");
		
		UCM_Recommend_Icon_C_BndEvt__CM_Btn_Close_K2Node_ComponentBoundEvent_1_Click__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Recommend_Icon.CM_Recommend_Icon_C.BndEvt__Equip_btn_K2Node_ComponentBoundEvent_3_ClickDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_Recommend_Icon_C::BndEvt__Equip_btn_K2Node_ComponentBoundEvent_3_ClickDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Recommend_Icon.CM_Recommend_Icon_C.BndEvt__Equip_btn_K2Node_ComponentBoundEvent_3_ClickDispatcher__DelegateSignature");
		
		UCM_Recommend_Icon_C_BndEvt__Equip_btn_K2Node_ComponentBoundEvent_3_ClickDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Recommend_Icon.CM_Recommend_Icon_C.OnSetItemInfo
	 * 		Flags  -> ()
	 */
	void UCM_Recommend_Icon_C::OnSetItemInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Recommend_Icon.CM_Recommend_Icon_C.OnSetItemInfo");
		
		UCM_Recommend_Icon_C_OnSetItemInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Recommend_Icon.CM_Recommend_Icon_C.BndEvt__CM_Recommend_Icon_TutorialHighlightPrefab_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   InVisibility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Recommend_Icon_C::BndEvt__CM_Recommend_Icon_TutorialHighlightPrefab_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature(ESlateVisibility InVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Recommend_Icon.CM_Recommend_Icon_C.BndEvt__CM_Recommend_Icon_TutorialHighlightPrefab_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature");
		
		UCM_Recommend_Icon_C_BndEvt__CM_Recommend_Icon_TutorialHighlightPrefab_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature_Params params {};
		params.InVisibility = InVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Recommend_Icon.CM_Recommend_Icon_C.ExecuteUbergraph_CM_Recommend_Icon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_Recommend_Icon_C::ExecuteUbergraph_CM_Recommend_Icon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Recommend_Icon.CM_Recommend_Icon_C.ExecuteUbergraph_CM_Recommend_Icon");
		
		UCM_Recommend_Icon_C_ExecuteUbergraph_CM_Recommend_Icon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Recommend_Icon.CM_Recommend_Icon_C.CloseEventDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_Recommend_Icon_C::CloseEventDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Recommend_Icon.CM_Recommend_Icon_C.CloseEventDispatcher__DelegateSignature");
		
		UCM_Recommend_Icon_C_CloseEventDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Recommend_Icon.CM_Recommend_Icon_C.EquipEventDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_Recommend_Icon_C::EquipEventDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Recommend_Icon.CM_Recommend_Icon_C.EquipEventDispatcher__DelegateSignature");
		
		UCM_Recommend_Icon_C_EquipEventDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCM_Recommend_Icon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCM_Recommend_Icon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CM_Recommend_Icon.CM_Recommend_Icon_C");
		return ptr;
	}

}


