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
	 * Function NPC_Guard_BP.NPC_Guard_BP_C.SetCameraZoom
	 */
	struct ANPC_Guard_BP_C_SetCameraZoom_Params
	{
	public:
		bool                                                       isZoom;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function NPC_Guard_BP.NPC_Guard_BP_C.GetBillboardRotator
	 */
	struct ANPC_Guard_BP_C_GetBillboardRotator_Params
	{
	public:
		struct FRotator                                            Rotation;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function NPC_Guard_BP.NPC_Guard_BP_C.OnSetBoneShake
	 */
	struct ANPC_Guard_BP_C_OnSetBoneShake_Params
	{
	public:
		bool                                                       IsBoneShake;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function NPC_Guard_BP.NPC_Guard_BP_C.OnAfterPossessed
	 */
	struct ANPC_Guard_BP_C_OnAfterPossessed_Params
	{	};

	/**
	 * Function NPC_Guard_BP.NPC_Guard_BP_C.OnBeforeUnPossessed
	 */
	struct ANPC_Guard_BP_C_OnBeforeUnPossessed_Params
	{	};

	/**
	 * Function NPC_Guard_BP.NPC_Guard_BP_C.ReceiveBeginPlay
	 */
	struct ANPC_Guard_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function NPC_Guard_BP.NPC_Guard_BP_C.OnDrawQuestTalkMark
	 */
	struct ANPC_Guard_BP_C_OnDrawQuestTalkMark_Params
	{
	public:
		bool                                                       bDraw;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		E_QUEST_TYPE                                               QuestType;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NPC_Guard_BP.NPC_Guard_BP_C.OnDrawNPCStoreMark
	 */
	struct ANPC_Guard_BP_C_OnDrawNPCStoreMark_Params
	{
	public:
		bool                                                       bDraw;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function NPC_Guard_BP.NPC_Guard_BP_C.OnDrawQuestionMark
	 */
	struct ANPC_Guard_BP_C_OnDrawQuestionMark_Params
	{
	public:
		bool                                                       bDraw;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		E_QUEST_TYPE                                               QuestType;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NPC_Guard_BP.NPC_Guard_BP_C.OnDrawExclamationMark
	 */
	struct ANPC_Guard_BP_C_OnDrawExclamationMark_Params
	{
	public:
		bool                                                       bDraw;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		E_QUEST_TYPE                                               QuestType;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function NPC_Guard_BP.NPC_Guard_BP_C.ExecuteUbergraph_NPC_Guard_BP
	 */
	struct ANPC_Guard_BP_C_ExecuteUbergraph_NPC_Guard_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
