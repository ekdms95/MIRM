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
	 * 		Name   -> Function Local_Common_Pop_slot.Local_Common_Pop_slot_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULocal_Common_Pop_slot_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Local_Common_Pop_slot.Local_Common_Pop_slot_C.PreConstruct");
		
		ULocal_Common_Pop_slot_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Local_Common_Pop_slot.Local_Common_Pop_slot_C.BndEvt__Local_Common_Pop_slot_Cancel_Btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULocal_Common_Pop_slot_C::BndEvt__Local_Common_Pop_slot_Cancel_Btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Local_Common_Pop_slot.Local_Common_Pop_slot_C.BndEvt__Local_Common_Pop_slot_Cancel_Btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		ULocal_Common_Pop_slot_C_BndEvt__Local_Common_Pop_slot_Cancel_Btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Local_Common_Pop_slot.Local_Common_Pop_slot_C.BndEvt__Local_Common_Pop_slot_Ok_Btn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULocal_Common_Pop_slot_C::BndEvt__Local_Common_Pop_slot_Ok_Btn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Local_Common_Pop_slot.Local_Common_Pop_slot_C.BndEvt__Local_Common_Pop_slot_Ok_Btn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		ULocal_Common_Pop_slot_C_BndEvt__Local_Common_Pop_slot_Ok_Btn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Local_Common_Pop_slot.Local_Common_Pop_slot_C.ExecuteUbergraph_Local_Common_Pop_slot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULocal_Common_Pop_slot_C::ExecuteUbergraph_Local_Common_Pop_slot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Local_Common_Pop_slot.Local_Common_Pop_slot_C.ExecuteUbergraph_Local_Common_Pop_slot");
		
		ULocal_Common_Pop_slot_C_ExecuteUbergraph_Local_Common_Pop_slot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Local_Common_Pop_slot.Local_Common_Pop_slot_C.Cancel_Btn_Click__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULocal_Common_Pop_slot_C::Cancel_Btn_Click__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Local_Common_Pop_slot.Local_Common_Pop_slot_C.Cancel_Btn_Click__DelegateSignature");
		
		ULocal_Common_Pop_slot_C_Cancel_Btn_Click__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Local_Common_Pop_slot.Local_Common_Pop_slot_C.Ok_Btn_Click__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULocal_Common_Pop_slot_C::Ok_Btn_Click__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Local_Common_Pop_slot.Local_Common_Pop_slot_C.Ok_Btn_Click__DelegateSignature");
		
		ULocal_Common_Pop_slot_C_Ok_Btn_Click__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ULocal_Common_Pop_slot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULocal_Common_Pop_slot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Local_Common_Pop_slot.Local_Common_Pop_slot_C");
		return ptr;
	}

}


