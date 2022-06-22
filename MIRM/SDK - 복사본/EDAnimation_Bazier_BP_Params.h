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
	 * Function EDAnimation_Bazier_BP.EDAnimation_Bazier_BP_C.OnDrawDebug
	 */
	struct AEDAnimation_Bazier_BP_C_OnDrawDebug_Params
	{
	public:
		TArray<struct FVector>                                     PointArray;                                              // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EDAnimation_Bazier_BP.EDAnimation_Bazier_BP_C.OnMakePath
	 */
	struct AEDAnimation_Bazier_BP_C_OnMakePath_Params
	{
	public:
		TArray<struct FVector>                                     PointArray;                                              // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EDAnimation_Bazier_BP.EDAnimation_Bazier_BP_C.OnReset
	 */
	struct AEDAnimation_Bazier_BP_C_OnReset_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EDAnimation_Bazier_BP.EDAnimation_Bazier_BP_C.OnGetLocation
	 */
	struct AEDAnimation_Bazier_BP_C_OnGetLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EDAnimation_Bazier_BP.EDAnimation_Bazier_BP_C.UserConstructionScript
	 */
	struct AEDAnimation_Bazier_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function EDAnimation_Bazier_BP.EDAnimation_Bazier_BP_C.ReceiveTick
	 */
	struct AEDAnimation_Bazier_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function EDAnimation_Bazier_BP.EDAnimation_Bazier_BP_C.ReceiveBeginPlay
	 */
	struct AEDAnimation_Bazier_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function EDAnimation_Bazier_BP.EDAnimation_Bazier_BP_C.OnPlay
	 */
	struct AEDAnimation_Bazier_BP_C_OnPlay_Params
	{	};

	/**
	 * Function EDAnimation_Bazier_BP.EDAnimation_Bazier_BP_C.OnStop
	 */
	struct AEDAnimation_Bazier_BP_C_OnStop_Params
	{	};

	/**
	 * Function EDAnimation_Bazier_BP.EDAnimation_Bazier_BP_C.ExecuteUbergraph_EDAnimation_Bazier_BP
	 */
	struct AEDAnimation_Bazier_BP_C_ExecuteUbergraph_EDAnimation_Bazier_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
