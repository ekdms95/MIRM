#pragma once

/**
 * Name: MIRM
 * Version: 0623
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function QuestMark_BP.QuestMark_BP_C.OnSetMarkState
	 */
	struct AQuestMark_BP_C_OnSetMarkState_Params
	{
	public:
		E_QUEST_TYPE                                               Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsQuestionMark;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function QuestMark_BP.QuestMark_BP_C.ReceiveBeginPlay
	 */
	struct AQuestMark_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function QuestMark_BP.QuestMark_BP_C.ExecuteUbergraph_QuestMark_BP
	 */
	struct AQuestMark_BP_C_ExecuteUbergraph_QuestMark_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
