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
	 * Function Hud_QuestInfo_Group_Quest.Hud_QuestInfo_Group_Quest_C.SetComplete
	 */
	struct UHud_QuestInfo_Group_Quest_C_SetComplete_Params
	{
	public:
		bool                                                       bComplete;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hud_QuestInfo_Group_Quest.Hud_QuestInfo_Group_Quest_C.SetHighlight
	 */
	struct UHud_QuestInfo_Group_Quest_C_SetHighlight_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hud_QuestInfo_Group_Quest.Hud_QuestInfo_Group_Quest_C.SetProgress
	 */
	struct UHud_QuestInfo_Group_Quest_C_SetProgress_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Hud_QuestInfo_Group_Quest.Hud_QuestInfo_Group_Quest_C.SetContext
	 */
	struct UHud_QuestInfo_Group_Quest_C_SetContext_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
