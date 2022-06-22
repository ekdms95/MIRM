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
	 * Function UserNamTag_NPC_BP.UserNamTag_NPC_BP_C.ReceiveBeginPlay
	 */
	struct AUserNamTag_NPC_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function UserNamTag_NPC_BP.UserNamTag_NPC_BP_C.OnCharacterZoomState
	 */
	struct AUserNamTag_NPC_BP_C_OnCharacterZoomState_Params
	{
	public:
		bool                                                       isZoom;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UserNamTag_NPC_BP.UserNamTag_NPC_BP_C.ReceiveEndPlay
	 */
	struct AUserNamTag_NPC_BP_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UserNamTag_NPC_BP.UserNamTag_NPC_BP_C.OnPreSet
	 */
	struct AUserNamTag_NPC_BP_C_OnPreSet_Params
	{	};

	/**
	 * Function UserNamTag_NPC_BP.UserNamTag_NPC_BP_C.SetProgressImageEvent
	 */
	struct AUserNamTag_NPC_BP_C_SetProgressImageEvent_Params
	{	};

	/**
	 * Function UserNamTag_NPC_BP.UserNamTag_NPC_BP_C.ReceiveTick
	 */
	struct AUserNamTag_NPC_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UserNamTag_NPC_BP.UserNamTag_NPC_BP_C.ExecuteUbergraph_UserNamTag_NPC_BP
	 */
	struct AUserNamTag_NPC_BP_C_ExecuteUbergraph_UserNamTag_NPC_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
