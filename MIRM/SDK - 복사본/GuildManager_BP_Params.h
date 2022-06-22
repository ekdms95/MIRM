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
	 * Function GuildManager_BP.GuildManager_BP_C.DoWhenUpdateFoundGuildInfos
	 */
	struct UGuildManager_BP_C_DoWhenUpdateFoundGuildInfos_Params
	{
	public:
		bool                                                       bIsFound;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GuildManager_BP.GuildManager_BP_C.OpenGuildPage
	 */
	struct UGuildManager_BP_C_OpenGuildPage_Params
	{	};

	/**
	 * Function GuildManager_BP.GuildManager_BP_C.GuildApply
	 */
	struct UGuildManager_BP_C_GuildApply_Params
	{
	public:
		int64_t                                                    GuildID;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildManager_BP.GuildManager_BP_C.OnUpdateMyGuildInfo
	 */
	struct UGuildManager_BP_C_OnUpdateMyGuildInfo_Params
	{	};

	/**
	 * Function GuildManager_BP.GuildManager_BP_C.OnGuildApplyCanceled
	 */
	struct UGuildManager_BP_C_OnGuildApplyCanceled_Params
	{
	public:
		int64_t                                                    GuildID;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GuildManager_BP.GuildManager_BP_C.OnUpdateHostileGuildInfos
	 */
	struct UGuildManager_BP_C_OnUpdateHostileGuildInfos_Params
	{	};

	/**
	 * Function GuildManager_BP.GuildManager_BP_C.OnGuildMakeNow
	 */
	struct UGuildManager_BP_C_OnGuildMakeNow_Params
	{	};

	/**
	 * Function GuildManager_BP.GuildManager_BP_C.OnGuildRegisterApprovalWait
	 */
	struct UGuildManager_BP_C_OnGuildRegisterApprovalWait_Params
	{	};

	/**
	 * Function GuildManager_BP.GuildManager_BP_C.OnUpdateRegisterApplyUserInfos
	 */
	struct UGuildManager_BP_C_OnUpdateRegisterApplyUserInfos_Params
	{	};

	/**
	 * Function GuildManager_BP.GuildManager_BP_C.OnUpdateGuildWarInfo
	 */
	struct UGuildManager_BP_C_OnUpdateGuildWarInfo_Params
	{	};

	/**
	 * Function GuildManager_BP.GuildManager_BP_C.OnUpdateFoundGuildInfos
	 */
	struct UGuildManager_BP_C_OnUpdateFoundGuildInfos_Params
	{
	public:
		bool                                                       bIsFound;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GuildManager_BP.GuildManager_BP_C.OnUpdateMyGuildAndMemberInfo
	 */
	struct UGuildManager_BP_C_OnUpdateMyGuildAndMemberInfo_Params
	{	};

	/**
	 * Function GuildManager_BP.GuildManager_BP_C.OnUpdateApplyGuildInfos
	 */
	struct UGuildManager_BP_C_OnUpdateApplyGuildInfos_Params
	{	};

	/**
	 * Function GuildManager_BP.GuildManager_BP_C.OnUpdateSurrenderToOurGuildInfos
	 */
	struct UGuildManager_BP_C_OnUpdateSurrenderToOurGuildInfos_Params
	{	};

	/**
	 * Function GuildManager_BP.GuildManager_BP_C.OpenGuildPage_BP
	 */
	struct UGuildManager_BP_C_OpenGuildPage_BP_Params
	{	};

	/**
	 * Function GuildManager_BP.GuildManager_BP_C.ExecuteUbergraph_GuildManager_BP
	 */
	struct UGuildManager_BP_C_ExecuteUbergraph_GuildManager_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
