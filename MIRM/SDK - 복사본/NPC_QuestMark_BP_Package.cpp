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
	 * 		Name   -> Function NPC_QuestMark_BP.NPC_QuestMark_BP_C.OnExclamationMark
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_QUEST_TYPE                                       Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANPC_QuestMark_BP_C::OnExclamationMark(E_QUEST_TYPE Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPC_QuestMark_BP.NPC_QuestMark_BP_C.OnExclamationMark");
		
		ANPC_QuestMark_BP_C_OnExclamationMark_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPC_QuestMark_BP.NPC_QuestMark_BP_C.OnQuestionMark
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_QUEST_TYPE                                       Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANPC_QuestMark_BP_C::OnQuestionMark(E_QUEST_TYPE Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPC_QuestMark_BP.NPC_QuestMark_BP_C.OnQuestionMark");
		
		ANPC_QuestMark_BP_C_OnQuestionMark_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPC_QuestMark_BP.NPC_QuestMark_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ANPC_QuestMark_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPC_QuestMark_BP.NPC_QuestMark_BP_C.ReceiveBeginPlay");
		
		ANPC_QuestMark_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPC_QuestMark_BP.NPC_QuestMark_BP_C.OnSetMarkState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_QUEST_TYPE                                       Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsQuestionMark                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ANPC_QuestMark_BP_C::OnSetMarkState(E_QUEST_TYPE Type, bool bIsQuestionMark)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPC_QuestMark_BP.NPC_QuestMark_BP_C.OnSetMarkState");
		
		ANPC_QuestMark_BP_C_OnSetMarkState_Params params {};
		params.Type = Type;
		params.bIsQuestionMark = bIsQuestionMark;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function NPC_QuestMark_BP.NPC_QuestMark_BP_C.ExecuteUbergraph_NPC_QuestMark_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANPC_QuestMark_BP_C::ExecuteUbergraph_NPC_QuestMark_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NPC_QuestMark_BP.NPC_QuestMark_BP_C.ExecuteUbergraph_NPC_QuestMark_BP");
		
		ANPC_QuestMark_BP_C_ExecuteUbergraph_NPC_QuestMark_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction ANPC_QuestMark_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANPC_QuestMark_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass NPC_QuestMark_BP.NPC_QuestMark_BP_C");
		return ptr;
	}

}


