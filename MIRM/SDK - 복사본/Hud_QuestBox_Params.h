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
	 * Function Hud_QuestBox.Hud_QuestBox_C.OnInitailizeWidget
	 */
	struct UHud_QuestBox_C_OnInitailizeWidget_Params
	{
	public:
		class FString                                              Parameters;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_QuestBox.Hud_QuestBox_C.OnResetQuestInfo
	 */
	struct UHud_QuestBox_C_OnResetQuestInfo_Params
	{	};

	/**
	 * Function Hud_QuestBox.Hud_QuestBox_C.OnSetQuestInfo
	 */
	struct UHud_QuestBox_C_OnSetQuestInfo_Params
	{
	public:
		int32_t                                                    pIndex;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    pId;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              pTitle;                                                  // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              pContext;                                                // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Progress;                                                // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		E_QUEST_TYPE                                               QuestType;                                               // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EQuestProgressType                                         ProgressType;                                            // 0x0039(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bWideTypeText;                                           // 0x003A(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hud_QuestBox.Hud_QuestBox_C.OnUpdateQuestInfo
	 */
	struct UHud_QuestBox_C_OnUpdateQuestInfo_Params
	{
	public:
		int32_t                                                    pIndex;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              pContext;                                                // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Progress;                                                // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		E_QUEST_TYPE                                               QuestType;                                               // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EQuestProgressType                                         ProgressType;                                            // 0x0029(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_QuestBox.Hud_QuestBox_C.OnSetActiveQuestInfo
	 */
	struct UHud_QuestBox_C_OnSetActiveQuestInfo_Params
	{
	public:
		int32_t                                                    pIndex;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       pActive;                                                 // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hud_QuestBox.Hud_QuestBox_C.OnTabButtonState
	 */
	struct UHud_QuestBox_C_OnTabButtonState_Params
	{
	public:
		bool                                                       bIsCheched;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hud_QuestBox.Hud_QuestBox_C.EnableAreaQuest
	 */
	struct UHud_QuestBox_C_EnableAreaQuest_Params
	{	};

	/**
	 * Function Hud_QuestBox.Hud_QuestBox_C.BndEvt__Hud_AreaQuest_Btn_K2Node_ComponentBoundEvent_0_ClickDispatcher__DelegateSignature
	 */
	struct UHud_QuestBox_C_BndEvt__Hud_AreaQuest_Btn_K2Node_ComponentBoundEvent_0_ClickDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function Hud_QuestBox.Hud_QuestBox_C.OnUpdateLowQuestInfo
	 */
	struct UHud_QuestBox_C_OnUpdateLowQuestInfo_Params
	{
	public:
		int32_t                                                    pIndex;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    LowQuestID;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              pContext;                                                // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Progress;                                                // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       bComplete;                                               // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hud_QuestBox.Hud_QuestBox_C.OnSetAreaQuestInfo
	 */
	struct UHud_QuestBox_C_OnSetAreaQuestInfo_Params
	{
	public:
		int32_t                                                    pId;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              pTitle;                                                  // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              pContext;                                                // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Progress;                                                // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		E_QUEST_TYPE                                               QuestType;                                               // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EQuestProgressType                                         ProgressType;                                            // 0x0039(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_QuestBox.Hud_QuestBox_C.ExecuteUbergraph_Hud_QuestBox
	 */
	struct UHud_QuestBox_C_ExecuteUbergraph_Hud_QuestBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
