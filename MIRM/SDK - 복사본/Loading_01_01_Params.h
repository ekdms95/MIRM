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
	 * Function Loading_01_01.Loading_01_01_C.EndLoading
	 */
	struct ULoading_01_01_C_EndLoading_Params
	{	};

	/**
	 * Function Loading_01_01.Loading_01_01_C.OnInitialized
	 */
	struct ULoading_01_01_C_OnInitialized_Params
	{	};

	/**
	 * Function Loading_01_01.Loading_01_01_C.OnAnimSpd
	 */
	struct ULoading_01_01_C_OnAnimSpd_Params
	{
	public:
		float                                                      timeVal;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Loading_01_01.Loading_01_01_C.OnTickbyNativeTick
	 */
	struct ULoading_01_01_C_OnTickbyNativeTick_Params
	{
	public:
		float                                                      InDeltaTime;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Loading_01_01.Loading_01_01_C.OnProgressVal
	 */
	struct ULoading_01_01_C_OnProgressVal_Params
	{
	public:
		float                                                      Val;                                                     // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Loading_01_01.Loading_01_01_C.OnPreSet
	 */
	struct ULoading_01_01_C_OnPreSet_Params
	{	};

	/**
	 * Function Loading_01_01.Loading_01_01_C.PreConstruct
	 */
	struct ULoading_01_01_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Loading_01_01.Loading_01_01_C.ExecuteUbergraph_Loading_01_01
	 */
	struct ULoading_01_01_C_ExecuteUbergraph_Loading_01_01_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
