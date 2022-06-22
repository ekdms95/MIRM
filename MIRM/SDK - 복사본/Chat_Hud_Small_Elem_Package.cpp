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
	 * 		Name   -> Function Chat_Hud_Small_Elem.Chat_Hud_Small_Elem_C.BndEvt__ChatPage_Btn_K2Node_ComponentBoundEvent_221_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChat_Hud_Small_Elem_C::BndEvt__ChatPage_Btn_K2Node_ComponentBoundEvent_221_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chat_Hud_Small_Elem.Chat_Hud_Small_Elem_C.BndEvt__ChatPage_Btn_K2Node_ComponentBoundEvent_221_OnButtonClickedEvent__DelegateSignature");
		
		UChat_Hud_Small_Elem_C_BndEvt__ChatPage_Btn_K2Node_ComponentBoundEvent_221_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chat_Hud_Small_Elem.Chat_Hud_Small_Elem_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChat_Hud_Small_Elem_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chat_Hud_Small_Elem.Chat_Hud_Small_Elem_C.PreConstruct");
		
		UChat_Hud_Small_Elem_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chat_Hud_Small_Elem.Chat_Hud_Small_Elem_C.ExecuteUbergraph_Chat_Hud_Small_Elem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChat_Hud_Small_Elem_C::ExecuteUbergraph_Chat_Hud_Small_Elem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chat_Hud_Small_Elem.Chat_Hud_Small_Elem_C.ExecuteUbergraph_Chat_Hud_Small_Elem");
		
		UChat_Hud_Small_Elem_C_ExecuteUbergraph_Chat_Hud_Small_Elem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UChat_Hud_Small_Elem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChat_Hud_Small_Elem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Chat_Hud_Small_Elem.Chat_Hud_Small_Elem_C");
		return ptr;
	}

}


