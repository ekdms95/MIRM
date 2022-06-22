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
	 * Function MirGameInstance_BP.MirGameInstance_BP_C.BGM_Sound
	 */
	struct UMirGameInstance_BP_C_BGM_Sound_Params
	{
	public:
		class USoundBase*                                          sound;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      VolumeMultiplier;                                        // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bPersistAcrossLevelTransition;                           // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MirGameInstance_BP.MirGameInstance_BP_C.SetNoticeAddItemWithImage
	 */
	struct UMirGameInstance_BP_C_SetNoticeAddItemWithImage_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MirGameInstance_BP.MirGameInstance_BP_C.SetNoticeWorldBossMessageWithText
	 */
	struct UMirGameInstance_BP_C_SetNoticeWorldBossMessageWithText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MirGameInstance_BP.MirGameInstance_BP_C.OnEventToastMsgDelayTime
	 */
	struct UMirGameInstance_BP_C_OnEventToastMsgDelayTime_Params
	{	};

	/**
	 * Function MirGameInstance_BP.MirGameInstance_BP_C.SetNoticeBossMessageWithText
	 */
	struct UMirGameInstance_BP_C_SetNoticeBossMessageWithText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function MirGameInstance_BP.MirGameInstance_BP_C.CallBlackCurtain
	 */
	struct UMirGameInstance_BP_C_CallBlackCurtain_Params
	{
	public:
		bool                                                       IsOn;                                                    // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ESlateVisibility                                           slateVisibility;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MirGameInstance_BP.MirGameInstance_BP_C.BeginServerReconnectScreenEvent
	 */
	struct UMirGameInstance_BP_C_BeginServerReconnectScreenEvent_Params
	{	};

	/**
	 * Function MirGameInstance_BP.MirGameInstance_BP_C.EndServerReconnectScreenEvent
	 */
	struct UMirGameInstance_BP_C_EndServerReconnectScreenEvent_Params
	{	};

	/**
	 * Function MirGameInstance_BP.MirGameInstance_BP_C.OnChekToastStack
	 */
	struct UMirGameInstance_BP_C_OnChekToastStack_Params
	{
	public:
		class FText                                                ToastMsg;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MirGameInstance_BP.MirGameInstance_BP_C.BeginLoadingScreenEvent
	 */
	struct UMirGameInstance_BP_C_BeginLoadingScreenEvent_Params
	{
	public:
		int32_t                                                    MapIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsTeleport;                                              // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsEditor;                                                // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MirGameInstance_BP.MirGameInstance_BP_C.ToastMessageArrayClear
	 */
	struct UMirGameInstance_BP_C_ToastMessageArrayClear_Params
	{
	public:
		bool                                                       bIsClearMessage;                                         // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MirGameInstance_BP.MirGameInstance_BP_C.OnToastMessage
	 */
	struct UMirGameInstance_BP_C_OnToastMessage_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bIsUIEvent;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MirGameInstance_BP.MirGameInstance_BP_C.OnToastMessageWithoutDuplicate
	 */
	struct UMirGameInstance_BP_C_OnToastMessageWithoutDuplicate_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MirGameInstance_BP.MirGameInstance_BP_C.BeginResetOptionScreenEvent
	 */
	struct UMirGameInstance_BP_C_BeginResetOptionScreenEvent_Params
	{	};

	/**
	 * Function MirGameInstance_BP.MirGameInstance_BP_C.EndResetOptionEvent
	 */
	struct UMirGameInstance_BP_C_EndResetOptionEvent_Params
	{	};

	/**
	 * Function MirGameInstance_BP.MirGameInstance_BP_C.OnSetToastMessageWithText
	 */
	struct UMirGameInstance_BP_C_OnSetToastMessageWithText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bIsoverlap;                                              // 0x0018(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsClearMessage;                                         // 0x0019(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsUIEvent;                                              // 0x001A(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MirGameInstance_BP.MirGameInstance_BP_C.OnSetToastMessageWithIndex
	 */
	struct UMirGameInstance_BP_C_OnSetToastMessageWithIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsoverlap;                                              // 0x0004(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsClearMessage;                                         // 0x0005(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsUIEvent;                                              // 0x0006(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MirGameInstance_BP.MirGameInstance_BP_C.EndLoadingScreenEvent
	 */
	struct UMirGameInstance_BP_C_EndLoadingScreenEvent_Params
	{	};

	/**
	 * Function MirGameInstance_BP.MirGameInstance_BP_C.ExecuteUbergraph_MirGameInstance_BP
	 */
	struct UMirGameInstance_BP_C_ExecuteUbergraph_MirGameInstance_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MirGameInstance_BP.MirGameInstance_BP_C.ToastEventDispatcehr__DelegateSignature
	 */
	struct UMirGameInstance_BP_C_ToastEventDispatcehr__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
