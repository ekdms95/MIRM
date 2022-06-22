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
	 * Function CM_Horizon_Goods_Value_Set.CM_Horizon_Goods_Value_Set_C.OnReg
	 */
	struct UCM_Horizon_Goods_Value_Set_C_OnReg_Params
	{	};

	/**
	 * Function CM_Horizon_Goods_Value_Set.CM_Horizon_Goods_Value_Set_C.GetValueTextBlock
	 */
	struct UCM_Horizon_Goods_Value_Set_C_GetValueTextBlock_Params
	{
	public:
		class UMirTextBlock*                                       NewParam;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Horizon_Goods_Value_Set.CM_Horizon_Goods_Value_Set_C.PreConstruct
	 */
	struct UCM_Horizon_Goods_Value_Set_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_Horizon_Goods_Value_Set.CM_Horizon_Goods_Value_Set_C.Reg
	 */
	struct UCM_Horizon_Goods_Value_Set_C_Reg_Params
	{	};

	/**
	 * Function CM_Horizon_Goods_Value_Set.CM_Horizon_Goods_Value_Set_C.ExecuteUbergraph_CM_Horizon_Goods_Value_Set
	 */
	struct UCM_Horizon_Goods_Value_Set_C_ExecuteUbergraph_CM_Horizon_Goods_Value_Set_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
