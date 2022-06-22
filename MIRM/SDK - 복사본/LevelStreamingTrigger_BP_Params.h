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
	 * Function LevelStreamingTrigger_BP.LevelStreamingTrigger_BP_C.UserConstructionScript
	 */
	struct ALevelStreamingTrigger_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function LevelStreamingTrigger_BP.LevelStreamingTrigger_BP_C.ReceiveActorBeginOverlap
	 */
	struct ALevelStreamingTrigger_BP_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LevelStreamingTrigger_BP.LevelStreamingTrigger_BP_C.ReceiveActorEndOverlap
	 */
	struct ALevelStreamingTrigger_BP_C_ReceiveActorEndOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LevelStreamingTrigger_BP.LevelStreamingTrigger_BP_C.ReceiveTick
	 */
	struct ALevelStreamingTrigger_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LevelStreamingTrigger_BP.LevelStreamingTrigger_BP_C.OnSetActive
	 */
	struct ALevelStreamingTrigger_BP_C_OnSetActive_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LevelStreamingTrigger_BP.LevelStreamingTrigger_BP_C.ReceiveBeginPlay
	 */
	struct ALevelStreamingTrigger_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function LevelStreamingTrigger_BP.LevelStreamingTrigger_BP_C.OnLoadStreamingLevel
	 */
	struct ALevelStreamingTrigger_BP_C_OnLoadStreamingLevel_Params
	{	};

	/**
	 * Function LevelStreamingTrigger_BP.LevelStreamingTrigger_BP_C.OnUnLoadStreamingLevel
	 */
	struct ALevelStreamingTrigger_BP_C_OnUnLoadStreamingLevel_Params
	{	};

	/**
	 * Function LevelStreamingTrigger_BP.LevelStreamingTrigger_BP_C.ExecuteUbergraph_LevelStreamingTrigger_BP
	 */
	struct ALevelStreamingTrigger_BP_C_ExecuteUbergraph_LevelStreamingTrigger_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
