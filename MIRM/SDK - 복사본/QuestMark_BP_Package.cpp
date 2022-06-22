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
	 * 		Name   -> Function QuestMark_BP.QuestMark_BP_C.OnSetMarkState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_QUEST_TYPE                                       Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsQuestionMark                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AQuestMark_BP_C::OnSetMarkState(E_QUEST_TYPE Type, bool bIsQuestionMark)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestMark_BP.QuestMark_BP_C.OnSetMarkState");
		
		AQuestMark_BP_C_OnSetMarkState_Params params {};
		params.Type = Type;
		params.bIsQuestionMark = bIsQuestionMark;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestMark_BP.QuestMark_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AQuestMark_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestMark_BP.QuestMark_BP_C.ReceiveBeginPlay");
		
		AQuestMark_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function QuestMark_BP.QuestMark_BP_C.ExecuteUbergraph_QuestMark_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AQuestMark_BP_C::ExecuteUbergraph_QuestMark_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function QuestMark_BP.QuestMark_BP_C.ExecuteUbergraph_QuestMark_BP");
		
		AQuestMark_BP_C_ExecuteUbergraph_QuestMark_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AQuestMark_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AQuestMark_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass QuestMark_BP.QuestMark_BP_C");
		return ptr;
	}

}


