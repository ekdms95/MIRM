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
	 * Function Page_LoadingSet.Page_LoadingSet_C.RotationLoadingIcon
	 */
	struct UPage_LoadingSet_C_RotationLoadingIcon_Params
	{	};

	/**
	 * Function Page_LoadingSet.Page_LoadingSet_C.SetAnimSpd
	 */
	struct UPage_LoadingSet_C_SetAnimSpd_Params
	{
	public:
		float                                                      spd;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Page_LoadingSet.Page_LoadingSet_C.Run Icon
	 */
	struct UPage_LoadingSet_C_Run_Icon_Params
	{
	public:
		float                                                      GetPercent;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Page_LoadingSet.Page_LoadingSet_C.Construct
	 */
	struct UPage_LoadingSet_C_Construct_Params
	{	};

	/**
	 * Function Page_LoadingSet.Page_LoadingSet_C.PreConstruct
	 */
	struct UPage_LoadingSet_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Page_LoadingSet.Page_LoadingSet_C.OnInitialized
	 */
	struct UPage_LoadingSet_C_OnInitialized_Params
	{	};

	/**
	 * Function Page_LoadingSet.Page_LoadingSet_C.ExecuteUbergraph_Page_LoadingSet
	 */
	struct UPage_LoadingSet_C_ExecuteUbergraph_Page_LoadingSet_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
