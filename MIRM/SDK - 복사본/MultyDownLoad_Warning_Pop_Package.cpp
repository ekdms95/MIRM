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
	 * 		Name   -> Function MultyDownLoad_Warning_Pop.MultyDownLoad_Warning_Pop_C.OnPreSet
	 * 		Flags  -> ()
	 */
	void UMultyDownLoad_Warning_Pop_C::OnPreSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultyDownLoad_Warning_Pop.MultyDownLoad_Warning_Pop_C.OnPreSet");
		
		UMultyDownLoad_Warning_Pop_C_OnPreSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultyDownLoad_Warning_Pop.MultyDownLoad_Warning_Pop_C.OnSetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMultyDownLoad_Warning_Pop_C::OnSetText(int32_t Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultyDownLoad_Warning_Pop.MultyDownLoad_Warning_Pop_C.OnSetText");
		
		UMultyDownLoad_Warning_Pop_C_OnSetText_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultyDownLoad_Warning_Pop.MultyDownLoad_Warning_Pop_C.BndEvt__MultyDownLoad_Warning_Pop_Local_Common_Pop_slot_K2Node_ComponentBoundEvent_1_Ok_Btn_Click__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UMultyDownLoad_Warning_Pop_C::BndEvt__MultyDownLoad_Warning_Pop_Local_Common_Pop_slot_K2Node_ComponentBoundEvent_1_Ok_Btn_Click__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultyDownLoad_Warning_Pop.MultyDownLoad_Warning_Pop_C.BndEvt__MultyDownLoad_Warning_Pop_Local_Common_Pop_slot_K2Node_ComponentBoundEvent_1_Ok_Btn_Click__DelegateSignature");
		
		UMultyDownLoad_Warning_Pop_C_BndEvt__MultyDownLoad_Warning_Pop_Local_Common_Pop_slot_K2Node_ComponentBoundEvent_1_Ok_Btn_Click__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultyDownLoad_Warning_Pop.MultyDownLoad_Warning_Pop_C.ExecuteUbergraph_MultyDownLoad_Warning_Pop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMultyDownLoad_Warning_Pop_C::ExecuteUbergraph_MultyDownLoad_Warning_Pop(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultyDownLoad_Warning_Pop.MultyDownLoad_Warning_Pop_C.ExecuteUbergraph_MultyDownLoad_Warning_Pop");
		
		UMultyDownLoad_Warning_Pop_C_ExecuteUbergraph_MultyDownLoad_Warning_Pop_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UMultyDownLoad_Warning_Pop_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMultyDownLoad_Warning_Pop_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MultyDownLoad_Warning_Pop.MultyDownLoad_Warning_Pop_C");
		return ptr;
	}

}


