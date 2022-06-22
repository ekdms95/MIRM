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
	 * WidgetBlueprintGeneratedClass Hud_QuestBox.Hud_QuestBox_C
	 * Size -> 0x0098 (FullSize[0x03F8] - InheritedSize[0x0360])
	 */
	class UHud_QuestBox_C : public UQuestBoxPrefab
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0360(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHud_AreaQuest_Btn_C*                                Hud_AreaQuest_Btn;                                       // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_QuestInfo_C*                                    Hud_QuestInfo;                                           // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_QuestInfo_C*                                    Hud_QuestInfo_1;                                         // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_QuestInfo_C*                                    Hud_QuestInfo_2;                                         // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_QuestInfo_C*                                    Hud_QuestInfo_3;                                         // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_QuestInfo_C*                                    Hud_QuestInfo_4;                                         // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_QuestInfo_C*                                    Hud_QuestInfo_5;                                         // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_QuestInfo_C*                                    Hud_QuestInfo_6;                                         // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_QuestInfo_C*                                    Hud_QuestInfo_7;                                         // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_QuestInfo_C*                                    Hud_QuestInfo_8;                                         // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_QuestInfo_C*                                    Hud_QuestInfo_9;                                         // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_QuestInfo_C*                                    Hud_QuestInfo_10;                                        // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_QuestInfo_C*                                    Hud_QuestInfo_11;                                        // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_QuestInfo_C*                                    Hud_QuestInfo_12;                                        // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_QuestInfo_C*                                    Hud_QuestInfo_13;                                        // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_QuestInfo_C*                                    Hud_QuestInfo_14;                                        // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FString                                              String;                                                  // 0x03E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void OnInitailizeWidget(const class FString& Parameters);
		void OnResetQuestInfo();
		void OnSetQuestInfo(int32_t pIndex, int32_t pId, const class FString& pTitle, const class FString& pContext, const class FString& Progress, E_QUEST_TYPE QuestType, EQuestProgressType ProgressType, bool bWideTypeText);
		void OnUpdateQuestInfo(int32_t pIndex, const class FString& pContext, const class FString& Progress, E_QUEST_TYPE QuestType, EQuestProgressType ProgressType);
		void OnSetActiveQuestInfo(int32_t pIndex, bool pActive);
		void OnTabButtonState(bool bIsCheched);
		void EnableAreaQuest();
		void BndEvt__Hud_AreaQuest_Btn_K2Node_ComponentBoundEvent_0_ClickDispatcher__DelegateSignature();
		void OnUpdateLowQuestInfo(int32_t pIndex, int32_t LowQuestID, const class FString& pContext, const class FString& Progress, bool bComplete);
		void OnSetAreaQuestInfo(int32_t pId, const class FString& pTitle, const class FString& pContext, const class FString& Progress, E_QUEST_TYPE QuestType, EQuestProgressType ProgressType);
		void ExecuteUbergraph_Hud_QuestBox(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
