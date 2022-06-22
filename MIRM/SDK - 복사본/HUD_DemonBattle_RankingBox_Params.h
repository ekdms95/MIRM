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
	 * Function HUD_DemonBattle_RankingBox.HUD_DemonBattle_RankingBox_C.SetInfo
	 */
	struct UHUD_DemonBattle_RankingBox_C_SetInfo_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FDungeonArenaRankInfo                               Info;                                                    // 0x0008(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function HUD_DemonBattle_RankingBox.HUD_DemonBattle_RankingBox_C.SetRanking
	 */
	struct UHUD_DemonBattle_RankingBox_C_SetRanking_Params
	{
	public:
		TArray<struct FDungeonArenaRankInfo>                       Ranking;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function HUD_DemonBattle_RankingBox.HUD_DemonBattle_RankingBox_C.SetTeamIcon
	 */
	struct UHUD_DemonBattle_RankingBox_C_SetTeamIcon_Params
	{
	public:
		EARENA_TEAM                                                Team;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_DemonBattle_RankingBox.HUD_DemonBattle_RankingBox_C.PreConstruct
	 */
	struct UHUD_DemonBattle_RankingBox_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_DemonBattle_RankingBox.HUD_DemonBattle_RankingBox_C.ExecuteUbergraph_HUD_DemonBattle_RankingBox
	 */
	struct UHUD_DemonBattle_RankingBox_C_ExecuteUbergraph_HUD_DemonBattle_RankingBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
