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
	 * 		Name   -> Function HUD_QuestEvent.HUD_QuestEvent_C.Stop
	 * 		Flags  -> ()
	 */
	void UHUD_QuestEvent_C::Stop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_QuestEvent.HUD_QuestEvent_C.Stop");
		
		UHUD_QuestEvent_C_Stop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_QuestEvent.HUD_QuestEvent_C.HUD_QuestEvent_CompleteCallback
	 * 		Flags  -> ()
	 */
	void UHUD_QuestEvent_C::HUD_QuestEvent_CompleteCallback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_QuestEvent.HUD_QuestEvent_C.HUD_QuestEvent_CompleteCallback");
		
		UHUD_QuestEvent_C_HUD_QuestEvent_CompleteCallback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_QuestEvent.HUD_QuestEvent_C.SetImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ImageName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UHUD_QuestEvent_C::SetImage(const class FString& ImageName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_QuestEvent.HUD_QuestEvent_C.SetImage");
		
		UHUD_QuestEvent_C_SetImage_Params params {};
		params.ImageName = ImageName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_QuestEvent.HUD_QuestEvent_C.SetName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UHUD_QuestEvent_C::SetName(const class FText& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_QuestEvent.HUD_QuestEvent_C.SetName");
		
		UHUD_QuestEvent_C_SetName_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_QuestEvent.HUD_QuestEvent_C.Hide
	 * 		Flags  -> ()
	 */
	void UHUD_QuestEvent_C::Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_QuestEvent.HUD_QuestEvent_C.Hide");
		
		UHUD_QuestEvent_C_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_QuestEvent.HUD_QuestEvent_C.Show
	 * 		Flags  -> ()
	 */
	void UHUD_QuestEvent_C::Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_QuestEvent.HUD_QuestEvent_C.Show");
		
		UHUD_QuestEvent_C_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_QuestEvent.HUD_QuestEvent_C.CompleteEventDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_QuestEvent_C::CompleteEventDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_QuestEvent.HUD_QuestEvent_C.CompleteEventDispatcher__DelegateSignature");
		
		UHUD_QuestEvent_C_CompleteEventDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_QuestEvent.HUD_QuestEvent_C.ButtonClickEventDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_QuestEvent_C::ButtonClickEventDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_QuestEvent.HUD_QuestEvent_C.ButtonClickEventDispatcher__DelegateSignature");
		
		UHUD_QuestEvent_C_ButtonClickEventDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHUD_QuestEvent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_QuestEvent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_QuestEvent.HUD_QuestEvent_C");
		return ptr;
	}

}


