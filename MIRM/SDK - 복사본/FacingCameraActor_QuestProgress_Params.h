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
	 * Function FacingCameraActor_QuestProgress.FacingCameraActor_QuestProgress_C.SetIconImage
	 */
	struct AFacingCameraActor_QuestProgress_C_SetIconImage_Params
	{
	public:
		class FString                                              IconName;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function FacingCameraActor_QuestProgress.FacingCameraActor_QuestProgress_C.StopProgress
	 */
	struct AFacingCameraActor_QuestProgress_C_StopProgress_Params
	{	};

	/**
	 * Function FacingCameraActor_QuestProgress.FacingCameraActor_QuestProgress_C.OnSetActor
	 */
	struct AFacingCameraActor_QuestProgress_C_OnSetActor_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FacingCameraActor_QuestProgress.FacingCameraActor_QuestProgress_C.ReadyProgress
	 */
	struct AFacingCameraActor_QuestProgress_C_ReadyProgress_Params
	{	};

	/**
	 * Function FacingCameraActor_QuestProgress.FacingCameraActor_QuestProgress_C.ButtonActive
	 */
	struct AFacingCameraActor_QuestProgress_C_ButtonActive_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FacingCameraActor_QuestProgress.FacingCameraActor_QuestProgress_C.CompleteProgress
	 */
	struct AFacingCameraActor_QuestProgress_C_CompleteProgress_Params
	{	};

	/**
	 * Function FacingCameraActor_QuestProgress.FacingCameraActor_QuestProgress_C.PlayAnimation
	 */
	struct AFacingCameraActor_QuestProgress_C_PlayAnimation_Params
	{
	public:
		EMirQuestProgressHUDAnimationType                          AnimationType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FacingCameraActor_QuestProgress.FacingCameraActor_QuestProgress_C.SetNameTagText
	 */
	struct AFacingCameraActor_QuestProgress_C_SetNameTagText_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function FacingCameraActor_QuestProgress.FacingCameraActor_QuestProgress_C.ReceiveBeginPlay
	 */
	struct AFacingCameraActor_QuestProgress_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function FacingCameraActor_QuestProgress.FacingCameraActor_QuestProgress_C.ReceiveActorOnInputTouchBegin
	 */
	struct AFacingCameraActor_QuestProgress_C_ReceiveActorOnInputTouchBegin_Params
	{
	public:
		ETouchIndex                                                FingerIndex;                                             // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FacingCameraActor_QuestProgress.FacingCameraActor_QuestProgress_C.CompleteEventDispatcher_Event_1
	 */
	struct AFacingCameraActor_QuestProgress_C_CompleteEventDispatcher_Event_1_Params
	{	};

	/**
	 * Function FacingCameraActor_QuestProgress.FacingCameraActor_QuestProgress_C.ExecuteUbergraph_FacingCameraActor_QuestProgress
	 */
	struct AFacingCameraActor_QuestProgress_C_ExecuteUbergraph_FacingCameraActor_QuestProgress_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FacingCameraActor_QuestProgress.FacingCameraActor_QuestProgress_C.CompleteEventDispatcher__DelegateSignature
	 */
	struct AFacingCameraActor_QuestProgress_C_CompleteEventDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function FacingCameraActor_QuestProgress.FacingCameraActor_QuestProgress_C.ButtonClickEventDispatcher__DelegateSignature
	 */
	struct AFacingCameraActor_QuestProgress_C_ButtonClickEventDispatcher__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
