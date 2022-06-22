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
	 * Function MyMirAIController_BP.MyMirAIController_BP_C.ReceiveBeginPlay
	 */
	struct AMyMirAIController_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MyMirAIController_BP.MyMirAIController_BP_C.ReceivePossess
	 */
	struct AMyMirAIController_BP_C_ReceivePossess_Params
	{
	public:
		class APawn*                                               PossessedPawn;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyMirAIController_BP.MyMirAIController_BP_C.ExecuteUbergraph_MyMirAIController_BP
	 */
	struct AMyMirAIController_BP_C_ExecuteUbergraph_MyMirAIController_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
