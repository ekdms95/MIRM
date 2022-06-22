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
	 * BlueprintGeneratedClass GuildManager_BP.GuildManager_BP_C
	 * Size -> 0x01A0 (FullSize[0x06C8] - InheritedSize[0x0528])
	 */
	class UGuildManager_BP_C : public UMirGuildManager
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0528(0x0008) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    GuildApplyID_;                                           // 0x0530(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsWaitingOpenGuildMain;                                 // 0x0534(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DBE0[0x3];                                   // 0x0535(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuildBasicInfo                                     NewVar_1;                                                // 0x0538(0x0190) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void DoWhenUpdateFoundGuildInfos(bool bIsFound);
		void OpenGuildPage();
		void GuildApply(int64_t GuildID);
		void OnUpdateMyGuildInfo();
		void OnGuildApplyCanceled(int64_t GuildID);
		void OnUpdateHostileGuildInfos();
		void OnGuildMakeNow();
		void OnGuildRegisterApprovalWait();
		void OnUpdateRegisterApplyUserInfos();
		void OnUpdateGuildWarInfo();
		void OnUpdateFoundGuildInfos(bool bIsFound);
		void OnUpdateMyGuildAndMemberInfo();
		void OnUpdateApplyGuildInfos();
		void OnUpdateSurrenderToOurGuildInfos();
		void OpenGuildPage_BP();
		void ExecuteUbergraph_GuildManager_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
