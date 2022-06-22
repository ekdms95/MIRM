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
	 * Function CM_Class_LVName_Set.CM_Class_LVName_Set_C.PreConstruct
	 */
	struct UCM_Class_LVName_Set_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_Class_LVName_Set.CM_Class_LVName_Set_C.OnSetClassType
	 */
	struct UCM_Class_LVName_Set_C_OnSetClassType_Params
	{
	public:
		E_CLASS_TYPE                                               ClassType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Class_LVName_Set.CM_Class_LVName_Set_C.ExecuteUbergraph_CM_Class_LVName_Set
	 */
	struct UCM_Class_LVName_Set_C_ExecuteUbergraph_CM_Class_LVName_Set_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
