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
	 * Function CM_Affinity_Mark.CM_Affinity_Mark_C.State_Set
	 */
	struct UCM_Affinity_Mark_C_State_Set_Params
	{
	public:
		E_INTIMACY_GRADE_TYPE                                      Selection;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Affinity_Mark.CM_Affinity_Mark_C.PreConstruct
	 */
	struct UCM_Affinity_Mark_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_Affinity_Mark.CM_Affinity_Mark_C.ExecuteUbergraph_CM_Affinity_Mark
	 */
	struct UCM_Affinity_Mark_C_ExecuteUbergraph_CM_Affinity_Mark_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
