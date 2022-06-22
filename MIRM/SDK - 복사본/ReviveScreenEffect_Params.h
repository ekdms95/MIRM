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
	 * Function ReviveScreenEffect.ReviveScreenEffect_C.ReceiveDestroyed
	 */
	struct AReviveScreenEffect_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function ReviveScreenEffect.ReviveScreenEffect_C.ReceiveTick
	 */
	struct AReviveScreenEffect_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ReviveScreenEffect.ReviveScreenEffect_C.ReceiveBeginPlay
	 */
	struct AReviveScreenEffect_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ReviveScreenEffect.ReviveScreenEffect_C.ExecuteUbergraph_ReviveScreenEffect
	 */
	struct AReviveScreenEffect_C_ExecuteUbergraph_ReviveScreenEffect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
