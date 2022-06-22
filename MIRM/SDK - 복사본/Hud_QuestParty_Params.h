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
	 * Function Hud_QuestParty.Hud_QuestParty_C.CheckStoryDungeonBlock
	 */
	struct UHud_QuestParty_C_CheckStoryDungeonBlock_Params
	{
	public:
		bool                                                       bLock;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hud_QuestParty.Hud_QuestParty_C.SetTabState
	 */
	struct UHud_QuestParty_C_SetTabState_Params
	{
	public:
		E_HUDTabBboxState                                          State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_QuestParty.Hud_QuestParty_C.SetPartyState
	 */
	struct UHud_QuestParty_C_SetPartyState_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hud_QuestParty.Hud_QuestParty_C.InitTownBox
	 */
	struct UHud_QuestParty_C_InitTownBox_Params
	{	};

	/**
	 * Function Hud_QuestParty.Hud_QuestParty_C.InitDungeonTargetBox
	 */
	struct UHud_QuestParty_C_InitDungeonTargetBox_Params
	{	};

	/**
	 * Function Hud_QuestParty.Hud_QuestParty_C.OnInitailizeWidget
	 */
	struct UHud_QuestParty_C_OnInitailizeWidget_Params
	{
	public:
		class FString                                              Parameters;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_QuestParty.Hud_QuestParty_C.BndEvt__Quest_Tab_K2Node_ComponentBoundEvent_4_OnClickDispatcher__DelegateSignature
	 */
	struct UHud_QuestParty_C_BndEvt__Quest_Tab_K2Node_ComponentBoundEvent_4_OnClickDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function Hud_QuestParty.Hud_QuestParty_C.BndEvt__Party_Tab_K2Node_ComponentBoundEvent_2_OnClickDispatcher__DelegateSignature
	 */
	struct UHud_QuestParty_C_BndEvt__Party_Tab_K2Node_ComponentBoundEvent_2_OnClickDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function Hud_QuestParty.Hud_QuestParty_C.BndEvt__Town_Tab_K2Node_ComponentBoundEvent_5_OnClickDispatcher__DelegateSignature
	 */
	struct UHud_QuestParty_C_BndEvt__Town_Tab_K2Node_ComponentBoundEvent_5_OnClickDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function Hud_QuestParty.Hud_QuestParty_C.BndEvt__DamageMeter_tab_K2Node_ComponentBoundEvent_6_OnClickDispatcher__DelegateSignature
	 */
	struct UHud_QuestParty_C_BndEvt__DamageMeter_tab_K2Node_ComponentBoundEvent_6_OnClickDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function Hud_QuestParty.Hud_QuestParty_C.BndEvt__Mornach_Dungeon_tab_K2Node_ComponentBoundEvent_7_OnClickDispatcher__DelegateSignature
	 */
	struct UHud_QuestParty_C_BndEvt__Mornach_Dungeon_tab_K2Node_ComponentBoundEvent_7_OnClickDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function Hud_QuestParty.Hud_QuestParty_C.OnQuestState
	 */
	struct UHud_QuestParty_C_OnQuestState_Params
	{	};

	/**
	 * Function Hud_QuestParty.Hud_QuestParty_C.OnPartyState
	 */
	struct UHud_QuestParty_C_OnPartyState_Params
	{	};

	/**
	 * Function Hud_QuestParty.Hud_QuestParty_C.OnSetBoxState
	 */
	struct UHud_QuestParty_C_OnSetBoxState_Params
	{
	public:
		E_HUDTabBboxState                                          BoxState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_QuestParty.Hud_QuestParty_C.BndEvt__Hud_QuestParty_Town_Dungeon_tab_K2Node_ComponentBoundEvent_0_OnClickDispatcher__DelegateSignature
	 */
	struct UHud_QuestParty_C_BndEvt__Hud_QuestParty_Town_Dungeon_tab_K2Node_ComponentBoundEvent_0_OnClickDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function Hud_QuestParty.Hud_QuestParty_C.BndEvt__Hud_QuestParty_ScanBox_tab_K2Node_ComponentBoundEvent_1_OnClickDispatcher__DelegateSignature
	 */
	struct UHud_QuestParty_C_BndEvt__Hud_QuestParty_ScanBox_tab_K2Node_ComponentBoundEvent_1_OnClickDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function Hud_QuestParty.Hud_QuestParty_C.OnReceivePrefabMessage
	 */
	struct UHud_QuestParty_C_OnReceivePrefabMessage_Params
	{
	public:
		class FName                                                PrefabMessage;                                           // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              PrefabParameters;                                        // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_QuestParty.Hud_QuestParty_C.BndEvt__Hud_QuestParty_GuildBattle_tab_K2Node_ComponentBoundEvent_3_OnClickDispatcher__DelegateSignature
	 */
	struct UHud_QuestParty_C_BndEvt__Hud_QuestParty_GuildBattle_tab_K2Node_ComponentBoundEvent_3_OnClickDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function Hud_QuestParty.Hud_QuestParty_C.BndEvt__Hud_QuestParty_DemonBattleRanking_tab_K2Node_ComponentBoundEvent_8_OnClickDispatcher__DelegateSignature
	 */
	struct UHud_QuestParty_C_BndEvt__Hud_QuestParty_DemonBattleRanking_tab_K2Node_ComponentBoundEvent_8_OnClickDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function Hud_QuestParty.Hud_QuestParty_C.UpdateRanking
	 */
	struct UHud_QuestParty_C_UpdateRanking_Params
	{
	public:
		TArray<struct FDungeonArenaRankInfo>                       RankingArray;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Hud_QuestParty.Hud_QuestParty_C.PreConstruct
	 */
	struct UHud_QuestParty_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hud_QuestParty.Hud_QuestParty_C.BndEvt__Hud_QuestParty_SiegeWar_tab_K2Node_ComponentBoundEvent_9_OnClickDispatcher__DelegateSignature
	 */
	struct UHud_QuestParty_C_BndEvt__Hud_QuestParty_SiegeWar_tab_K2Node_ComponentBoundEvent_9_OnClickDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function Hud_QuestParty.Hud_QuestParty_C.BndEvt__Hud_QuestParty_SiegeWar_Mission_tab_K2Node_ComponentBoundEvent_10_OnClickDispatcher__DelegateSignature
	 */
	struct UHud_QuestParty_C_BndEvt__Hud_QuestParty_SiegeWar_Mission_tab_K2Node_ComponentBoundEvent_10_OnClickDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function Hud_QuestParty.Hud_QuestParty_C.ExecuteUbergraph_Hud_QuestParty
	 */
	struct UHud_QuestParty_C_ExecuteUbergraph_Hud_QuestParty_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
