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
	 * 		Name   -> Function Hud_PkStatus.Hud_PkStatus_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_PkStatus_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_PkStatus.Hud_PkStatus_C.PreConstruct");
		
		UHud_PkStatus_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_PkStatus.Hud_PkStatus_C.Construct
	 * 		Flags  -> ()
	 */
	void UHud_PkStatus_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_PkStatus.Hud_PkStatus_C.Construct");
		
		UHud_PkStatus_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_PkStatus.Hud_PkStatus_C.BndEvt__Hud_PkStatus_CM_ToolTip_K2Node_ComponentBoundEvent_1_CloseDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_PkStatus_C::BndEvt__Hud_PkStatus_CM_ToolTip_K2Node_ComponentBoundEvent_1_CloseDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_PkStatus.Hud_PkStatus_C.BndEvt__Hud_PkStatus_CM_ToolTip_K2Node_ComponentBoundEvent_1_CloseDispatcher__DelegateSignature");
		
		UHud_PkStatus_C_BndEvt__Hud_PkStatus_CM_ToolTip_K2Node_ComponentBoundEvent_1_CloseDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_PkStatus.Hud_PkStatus_C.ExecuteUbergraph_Hud_PkStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_PkStatus_C::ExecuteUbergraph_Hud_PkStatus(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_PkStatus.Hud_PkStatus_C.ExecuteUbergraph_Hud_PkStatus");
		
		UHud_PkStatus_C_ExecuteUbergraph_Hud_PkStatus_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_PkStatus.Hud_PkStatus_C.CloseDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_PkStatus_C::CloseDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_PkStatus.Hud_PkStatus_C.CloseDispatcher__DelegateSignature");
		
		UHud_PkStatus_C_CloseDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHud_PkStatus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHud_PkStatus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Hud_PkStatus.Hud_PkStatus_C");
		return ptr;
	}

}


