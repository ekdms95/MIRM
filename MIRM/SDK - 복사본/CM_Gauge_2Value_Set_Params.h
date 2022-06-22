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
	 * Function CM_Gauge_2Value_Set.CM_Gauge_2Value_Set_C.SetSecondValueVisible
	 */
	struct UCM_Gauge_2Value_Set_C_SetSecondValueVisible_Params
	{
	public:
		bool                                                       visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_Gauge_2Value_Set.CM_Gauge_2Value_Set_C.SetPercent
	 */
	struct UCM_Gauge_2Value_Set_C_SetPercent_Params
	{
	public:
		float                                                      InPercent;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Gauge_2Value_Set.CM_Gauge_2Value_Set_C.PreConstruct
	 */
	struct UCM_Gauge_2Value_Set_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_Gauge_2Value_Set.CM_Gauge_2Value_Set_C.Construct
	 */
	struct UCM_Gauge_2Value_Set_C_Construct_Params
	{	};

	/**
	 * Function CM_Gauge_2Value_Set.CM_Gauge_2Value_Set_C.ExecuteUbergraph_CM_Gauge_2Value_Set
	 */
	struct UCM_Gauge_2Value_Set_C_ExecuteUbergraph_CM_Gauge_2Value_Set_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
