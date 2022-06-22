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
	 * Function MirGuidePlayLogic_BP.MirGuidePlayLogic_BP_C.ReceiveBeginPlay
	 */
	struct AMirGuidePlayLogic_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MirGuidePlayLogic_BP.MirGuidePlayLogic_BP_C.ReceiveTick
	 */
	struct AMirGuidePlayLogic_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MirGuidePlayLogic_BP.MirGuidePlayLogic_BP_C.OnStopBP
	 */
	struct AMirGuidePlayLogic_BP_C_OnStopBP_Params
	{
	public:
		class FString                                              Contents;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MirGuidePlayLogic_BP.MirGuidePlayLogic_BP_C.OnStartBP
	 */
	struct AMirGuidePlayLogic_BP_C_OnStartBP_Params
	{
	public:
		class FString                                              Contents;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function MirGuidePlayLogic_BP.MirGuidePlayLogic_BP_C.OnInitBP
	 */
	struct AMirGuidePlayLogic_BP_C_OnInitBP_Params
	{	};

	/**
	 * Function MirGuidePlayLogic_BP.MirGuidePlayLogic_BP_C.OnDestroyBP
	 */
	struct AMirGuidePlayLogic_BP_C_OnDestroyBP_Params
	{	};

	/**
	 * Function MirGuidePlayLogic_BP.MirGuidePlayLogic_BP_C.ExecuteUbergraph_MirGuidePlayLogic_BP
	 */
	struct AMirGuidePlayLogic_BP_C_ExecuteUbergraph_MirGuidePlayLogic_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
