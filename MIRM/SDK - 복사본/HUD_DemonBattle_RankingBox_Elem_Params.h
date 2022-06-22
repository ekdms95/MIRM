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
	 * Function HUD_DemonBattle_RankingBox_Elem.HUD_DemonBattle_RankingBox_Elem_C.SetInfo
	 */
	struct UHUD_DemonBattle_RankingBox_Elem_C_SetInfo_Params
	{
	public:
		int32_t                                                    Ranking;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_CLASS_TYPE                                               ClassType;                                               // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              nickname;                                                // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    score;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EARENA_TEAM                                                Team;                                                    // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_DemonBattle_RankingBox_Elem.HUD_DemonBattle_RankingBox_Elem_C.PreConstruct
	 */
	struct UHUD_DemonBattle_RankingBox_Elem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_DemonBattle_RankingBox_Elem.HUD_DemonBattle_RankingBox_Elem_C.SetTeamIcon
	 */
	struct UHUD_DemonBattle_RankingBox_Elem_C_SetTeamIcon_Params
	{
	public:
		EARENA_TEAM                                                Team;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_DemonBattle_RankingBox_Elem.HUD_DemonBattle_RankingBox_Elem_C.ExecuteUbergraph_HUD_DemonBattle_RankingBox_Elem
	 */
	struct UHUD_DemonBattle_RankingBox_Elem_C_ExecuteUbergraph_HUD_DemonBattle_RankingBox_Elem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
