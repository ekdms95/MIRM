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
	 * Function MirGameMode_BP.MirGameMode_BP_C.ReceiveBeginPlay
	 */
	struct AMirGameMode_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MirGameMode_BP.MirGameMode_BP_C.OnRecvNetworkMessage
	 */
	struct AMirGameMode_BP_C_OnRecvNetworkMessage_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    typenum;                                                 // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MirGameMode_BP.MirGameMode_BP_C.wake
	 */
	struct AMirGameMode_BP_C_wake_Params
	{	};

	/**
	 * Function MirGameMode_BP.MirGameMode_BP_C.ExecuteUbergraph_MirGameMode_BP
	 */
	struct AMirGameMode_BP_C_ExecuteUbergraph_MirGameMode_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
