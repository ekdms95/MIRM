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
	 * Function ComponentGrassCollision.ComponentGrassCollision_C.DrawGrassCollision
	 */
	struct UComponentGrassCollision_C_DrawGrassCollision_Params
	{	};

	/**
	 * Function ComponentGrassCollision.ComponentGrassCollision_C.ReceiveTick
	 */
	struct UComponentGrassCollision_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ComponentGrassCollision.ComponentGrassCollision_C.ExecuteUbergraph_ComponentGrassCollision
	 */
	struct UComponentGrassCollision_C_ExecuteUbergraph_ComponentGrassCollision_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
