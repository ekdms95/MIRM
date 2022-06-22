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
	 * 		Name   -> Function CM_TabBtn.CM_TabBtn_C.Bottom_2ndTab_Set
	 * 		Flags  -> ()
	 */
	void UCM_TabBtn_C::Bottom_2ndTab_Set()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_TabBtn.CM_TabBtn_C.Bottom_2ndTab_Set");
		
		UCM_TabBtn_C_Bottom_2ndTab_Set_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_TabBtn.CM_TabBtn_C.SetNotifications
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<E_NOTI_TYPE>                                notiFlag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UCM_TabBtn_C::SetNotifications(TArray<E_NOTI_TYPE>* notiFlag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_TabBtn.CM_TabBtn_C.SetNotifications");
		
		UCM_TabBtn_C_SetNotifications_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (notiFlag != nullptr)
			*notiFlag = params.notiFlag;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_TabBtn.CM_TabBtn_C.GetRedDotWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_TabBtn_C::GetRedDotWidget(class UUserWidget** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_TabBtn.CM_TabBtn_C.GetRedDotWidget");
		
		UCM_TabBtn_C_GetRedDotWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_TabBtn.CM_TabBtn_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCM_TabBtn_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_TabBtn.CM_TabBtn_C.PreConstruct");
		
		UCM_TabBtn_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_TabBtn.CM_TabBtn_C.OnInit
	 * 		Flags  -> ()
	 */
	void UCM_TabBtn_C::OnInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_TabBtn.CM_TabBtn_C.OnInit");
		
		UCM_TabBtn_C_OnInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_TabBtn.CM_TabBtn_C.Construct
	 * 		Flags  -> ()
	 */
	void UCM_TabBtn_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_TabBtn.CM_TabBtn_C.Construct");
		
		UCM_TabBtn_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_TabBtn.CM_TabBtn_C.OnSetTabSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Width                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Height                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_TabBtn_C::OnSetTabSize(float Width, float Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_TabBtn.CM_TabBtn_C.OnSetTabSize");
		
		UCM_TabBtn_C_OnSetTabSize_Params params {};
		params.Width = Width;
		params.Height = Height;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_TabBtn.CM_TabBtn_C.BndEvt__CM_TabBtn_PageTab01_tabcan_K2Node_ComponentBoundEvent_0_OnTabCanvasCheckStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMirCheckBoxState                                  CheckState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_TabBtn_C::BndEvt__CM_TabBtn_PageTab01_tabcan_K2Node_ComponentBoundEvent_0_OnTabCanvasCheckStateChanged__DelegateSignature(EMirCheckBoxState CheckState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_TabBtn.CM_TabBtn_C.BndEvt__CM_TabBtn_PageTab01_tabcan_K2Node_ComponentBoundEvent_0_OnTabCanvasCheckStateChanged__DelegateSignature");
		
		UCM_TabBtn_C_BndEvt__CM_TabBtn_PageTab01_tabcan_K2Node_ComponentBoundEvent_0_OnTabCanvasCheckStateChanged__DelegateSignature_Params params {};
		params.CheckState = CheckState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_TabBtn.CM_TabBtn_C.OnPreSet
	 * 		Flags  -> ()
	 */
	void UCM_TabBtn_C::OnPreSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_TabBtn.CM_TabBtn_C.OnPreSet");
		
		UCM_TabBtn_C_OnPreSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_TabBtn.CM_TabBtn_C.ExecuteUbergraph_CM_TabBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_TabBtn_C::ExecuteUbergraph_CM_TabBtn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_TabBtn.CM_TabBtn_C.ExecuteUbergraph_CM_TabBtn");
		
		UCM_TabBtn_C_ExecuteUbergraph_CM_TabBtn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_TabBtn.CM_TabBtn_C.ClickDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UCM_TabBtn_C::ClickDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_TabBtn.CM_TabBtn_C.ClickDispatcher__DelegateSignature");
		
		UCM_TabBtn_C_ClickDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCM_TabBtn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCM_TabBtn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CM_TabBtn.CM_TabBtn_C");
		return ptr;
	}

}


