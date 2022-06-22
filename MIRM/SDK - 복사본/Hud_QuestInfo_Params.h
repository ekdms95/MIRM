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
	 * Function Hud_QuestInfo.Hud_QuestInfo_C.UpdateQuestProgressIcon
	 */
	struct UHud_QuestInfo_C_UpdateQuestProgressIcon_Params
	{
	public:
		E_QUEST_TYPE                                               QuestType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EQuestProgressType                                         ProgressType;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_QuestInfo.Hud_QuestInfo_C.Quest_Icon_State
	 */
	struct UHud_QuestInfo_C_Quest_Icon_State_Params
	{
	public:
		class UPaperSprite*                                        accept;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPaperSprite*                                        complete;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EQuestProgressType                                         ProgressType;                                            // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bPlayAnimation;                                          // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hud_QuestInfo.Hud_QuestInfo_C.GroupQuestHighLight
	 */
	struct UHud_QuestInfo_C_GroupQuestHighLight_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Index;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_QuestInfo.Hud_QuestInfo_C.ChangeMultiObject
	 */
	struct UHud_QuestInfo_C_ChangeMultiObject_Params
	{
	public:
		int32_t                                                    count;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_QuestInfo.Hud_QuestInfo_C.ChangeSingleObject
	 */
	struct UHud_QuestInfo_C_ChangeSingleObject_Params
	{	};

	/**
	 * Function Hud_QuestInfo.Hud_QuestInfo_C.UpdateQuestProgress
	 */
	struct UHud_QuestInfo_C_UpdateQuestProgress_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Hud_QuestInfo.Hud_QuestInfo_C.UpdateQuestContext
	 */
	struct UHud_QuestInfo_C_UpdateQuestContext_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Hud_QuestInfo.Hud_QuestInfo_C.UpdateQuestTitle
	 */
	struct UHud_QuestInfo_C_UpdateQuestTitle_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Hud_QuestInfo.Hud_QuestInfo_C.SetActive
	 */
	struct UHud_QuestInfo_C_SetActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hud_QuestInfo.Hud_QuestInfo_C.OnResetQuestInfo
	 */
	struct UHud_QuestInfo_C_OnResetQuestInfo_Params
	{	};

	/**
	 * Function Hud_QuestInfo.Hud_QuestInfo_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UHud_QuestInfo_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Hud_QuestInfo.Hud_QuestInfo_C.SetLowQuestInfo
	 */
	struct UHud_QuestInfo_C_SetLowQuestInfo_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Context;                                                 // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Progress;                                                // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       bComplete;                                               // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hud_QuestInfo.Hud_QuestInfo_C.OnSetActiveQuestInfo
	 */
	struct UHud_QuestInfo_C_OnSetActiveQuestInfo_Params
	{
	public:
		bool                                                       pActive;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hud_QuestInfo.Hud_QuestInfo_C.SetQuestInfo
	 */
	struct UHud_QuestInfo_C_SetQuestInfo_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Title;                                                   // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                Context;                                                 // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		E_QUEST_TYPE                                               QuestType;                                               // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Progress;                                                // 0x0040(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		EQuestProgressType                                         ProgressType;                                            // 0x0058(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bWideTypeText;                                           // 0x0059(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hud_QuestInfo.Hud_QuestInfo_C.SetWideTypeText
	 */
	struct UHud_QuestInfo_C_SetWideTypeText_Params
	{
	public:
		bool                                                       bWideTypeText;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hud_QuestInfo.Hud_QuestInfo_C.ExecuteUbergraph_Hud_QuestInfo
	 */
	struct UHud_QuestInfo_C_ExecuteUbergraph_Hud_QuestInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
