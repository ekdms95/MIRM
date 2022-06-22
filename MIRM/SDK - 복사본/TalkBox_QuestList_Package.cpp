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
	 * 		Name   -> Function TalkBox_QuestList.TalkBox_QuestList_C.OnPreSet
	 * 		Flags  -> ()
	 */
	void UTalkBox_QuestList_C::OnPreSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TalkBox_QuestList.TalkBox_QuestList_C.OnPreSet");
		
		UTalkBox_QuestList_C_OnPreSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TalkBox_QuestList.TalkBox_QuestList_C.ExecuteUbergraph_TalkBox_QuestList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTalkBox_QuestList_C::ExecuteUbergraph_TalkBox_QuestList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TalkBox_QuestList.TalkBox_QuestList_C.ExecuteUbergraph_TalkBox_QuestList");
		
		UTalkBox_QuestList_C_ExecuteUbergraph_TalkBox_QuestList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TalkBox_QuestList.TalkBox_QuestList_C.ClickDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTalkBox_QuestList_C::ClickDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TalkBox_QuestList.TalkBox_QuestList_C.ClickDispatcher__DelegateSignature");
		
		UTalkBox_QuestList_C_ClickDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTalkBox_QuestList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTalkBox_QuestList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TalkBox_QuestList.TalkBox_QuestList_C");
		return ptr;
	}

}


