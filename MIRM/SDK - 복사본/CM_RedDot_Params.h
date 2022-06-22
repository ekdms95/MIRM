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
	 * Function CM_RedDot.CM_RedDot_C.OnPreSet
	 */
	struct UCM_RedDot_C_OnPreSet_Params
	{	};

	/**
	 * Function CM_RedDot.CM_RedDot_C.PreConstruct
	 */
	struct UCM_RedDot_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_RedDot.CM_RedDot_C.OnSetAlarmState
	 */
	struct UCM_RedDot_C_OnSetAlarmState_Params
	{
	public:
		E_NOTI_Alarm                                               State;                                                   // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_RedDot.CM_RedDot_C.ExecuteUbergraph_CM_RedDot
	 */
	struct UCM_RedDot_C_ExecuteUbergraph_CM_RedDot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
