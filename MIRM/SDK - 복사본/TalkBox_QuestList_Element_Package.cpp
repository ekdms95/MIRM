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
	 * 		Name   -> Function TalkBox_QuestList_Element.TalkBox_QuestList_Element_C.OnPreSet
	 * 		Flags  -> ()
	 */
	void UTalkBox_QuestList_Element_C::OnPreSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TalkBox_QuestList_Element.TalkBox_QuestList_Element_C.OnPreSet");
		
		UTalkBox_QuestList_Element_C_OnPreSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TalkBox_QuestList_Element.TalkBox_QuestList_Element_C.BndEvt__MirButton_319_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTalkBox_QuestList_Element_C::BndEvt__MirButton_319_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TalkBox_QuestList_Element.TalkBox_QuestList_Element_C.BndEvt__MirButton_319_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UTalkBox_QuestList_Element_C_BndEvt__MirButton_319_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TalkBox_QuestList_Element.TalkBox_QuestList_Element_C.ExecuteUbergraph_TalkBox_QuestList_Element
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTalkBox_QuestList_Element_C::ExecuteUbergraph_TalkBox_QuestList_Element(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TalkBox_QuestList_Element.TalkBox_QuestList_Element_C.ExecuteUbergraph_TalkBox_QuestList_Element");
		
		UTalkBox_QuestList_Element_C_ExecuteUbergraph_TalkBox_QuestList_Element_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TalkBox_QuestList_Element.TalkBox_QuestList_Element_C.ClickDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTalkBox_QuestList_Element_C::ClickDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TalkBox_QuestList_Element.TalkBox_QuestList_Element_C.ClickDispatcher__DelegateSignature");
		
		UTalkBox_QuestList_Element_C_ClickDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTalkBox_QuestList_Element_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTalkBox_QuestList_Element_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TalkBox_QuestList_Element.TalkBox_QuestList_Element_C");
		return ptr;
	}

}


