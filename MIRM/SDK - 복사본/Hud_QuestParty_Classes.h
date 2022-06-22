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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass Hud_QuestParty.Hud_QuestParty_C
	 * Size -> 0x0100 (FullSize[0x0470] - InheritedSize[0x0370])
	 */
	class UHud_QuestParty_C : public UQuestPartyBoxPrefab
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0370(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHud_QuestTab_C*                                     DamageMeter_tab;                                         // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_QuestTab_C*                                     DemonBattleRanking_tab;                                  // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_QuestTab_C*                                     GuildBattle_tab;                                         // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_15_Recruit_C*                                   Hud_15_Recruit;                                          // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_15Dungeon_Box_C*                                Hud_15Dungeon_Box;                                       // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHUD_DamageMeter_C*                                  HUD_DamageMeter;                                         // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHUD_DemonBattle_RankingBox_C*                       HUD_DemonBattle_RankingBox;                              // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHUD_GuildBattle_Board_Box_C*                        HUD_GuildBattle_Board_Box;                               // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_Mission_Box_C*                                  Hud_Mission_Box;                                         // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_Mornach_Monster_Box_C*                          Hud_Mornach_Monster_Box;                                 // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_PaCreate_C*                                     Hud_PaCreate;                                            // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_PartyBox_New_C*                                 Hud_PartyBox_New;                                        // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_QuestBox_C*                                     Hud_QuestBox;                                            // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_ScanBox_C*                                      Hud_ScanBox;                                             // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHUD_Siege_MissionBox_C*                             HUD_Siege_MissionBox;                                    // 0x03E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHUD_Siege_NaviBox_C*                                HUD_Siege_NaviBox;                                       // 0x03F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHUD_Town_Dungeon_Box_C*                             HUD_Town_Dungeon_Box;                                    // 0x03F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHUD_TownBox_C*                                      HUD_TownBox;                                             // 0x0400(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_QuestTab_C*                                     Mornach_Dungeon_tab;                                     // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_QuestTab_C*                                     Party_Tab;                                               // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_QuestTab_C*                                     Quest_Tab;                                               // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirCanvasPanel*                                     QuestBoxGroup_can;                                       // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_QuestTab_C*                                     ScanBox_tab;                                             // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_QuestTab_C*                                     SiegeWar_Mission_tab;                                    // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_QuestTab_C*                                     SiegeWar_tab;                                            // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_QuestTab_C*                                     Town_Dungeon_tab;                                        // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_QuestTab_C*                                     Town_Tab;                                                // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTutorialHighlightPrefab_C*                          TutorialHighlightPrefab;                                 // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       IsboxHide;                                               // 0x0458(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_R40K[0x7];                                   // 0x0459(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMirPrefab*>                                  TabWidgetArray;                                          // 0x0460(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void CheckStoryDungeonBlock(bool* bLock);
		void SetTabState(E_HUDTabBboxState State);
		void SetPartyState(bool* bResult);
		void InitTownBox();
		void InitDungeonTargetBox();
		void OnInitailizeWidget(const class FString& Parameters);
		void BndEvt__Quest_Tab_K2Node_ComponentBoundEvent_4_OnClickDispatcher__DelegateSignature();
		void BndEvt__Party_Tab_K2Node_ComponentBoundEvent_2_OnClickDispatcher__DelegateSignature();
		void BndEvt__Town_Tab_K2Node_ComponentBoundEvent_5_OnClickDispatcher__DelegateSignature();
		void BndEvt__DamageMeter_tab_K2Node_ComponentBoundEvent_6_OnClickDispatcher__DelegateSignature();
		void BndEvt__Mornach_Dungeon_tab_K2Node_ComponentBoundEvent_7_OnClickDispatcher__DelegateSignature();
		void OnQuestState();
		void OnPartyState();
		void OnSetBoxState(E_HUDTabBboxState BoxState);
		void BndEvt__Hud_QuestParty_Town_Dungeon_tab_K2Node_ComponentBoundEvent_0_OnClickDispatcher__DelegateSignature();
		void BndEvt__Hud_QuestParty_ScanBox_tab_K2Node_ComponentBoundEvent_1_OnClickDispatcher__DelegateSignature();
		void OnReceivePrefabMessage(const class FName& PrefabMessage, const class FString& PrefabParameters);
		void BndEvt__Hud_QuestParty_GuildBattle_tab_K2Node_ComponentBoundEvent_3_OnClickDispatcher__DelegateSignature();
		void BndEvt__Hud_QuestParty_DemonBattleRanking_tab_K2Node_ComponentBoundEvent_8_OnClickDispatcher__DelegateSignature();
		void UpdateRanking(TArray<struct FDungeonArenaRankInfo> RankingArray);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__Hud_QuestParty_SiegeWar_tab_K2Node_ComponentBoundEvent_9_OnClickDispatcher__DelegateSignature();
		void BndEvt__Hud_QuestParty_SiegeWar_Mission_tab_K2Node_ComponentBoundEvent_10_OnClickDispatcher__DelegateSignature();
		void ExecuteUbergraph_Hud_QuestParty(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
