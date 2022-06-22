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
	 * Function CM_Page_Dot.CM_Page_Dot_C.Twinkle_Ani_Function
	 */
	struct UCM_Page_Dot_C_Twinkle_Ani_Function_Params
	{	};

	/**
	 * Function CM_Page_Dot.CM_Page_Dot_C.OnOff
	 */
	struct UCM_Page_Dot_C_OnOff_Params
	{
	public:
		bool                                                       IsOn;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_Page_Dot.CM_Page_Dot_C.PreConstruct
	 */
	struct UCM_Page_Dot_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_Page_Dot.CM_Page_Dot_C.Twinkle_Finished
	 */
	struct UCM_Page_Dot_C_Twinkle_Finished_Params
	{	};

	/**
	 * Function CM_Page_Dot.CM_Page_Dot_C.Twinkle_Start
	 */
	struct UCM_Page_Dot_C_Twinkle_Start_Params
	{	};

	/**
	 * Function CM_Page_Dot.CM_Page_Dot_C.ExecuteUbergraph_CM_Page_Dot
	 */
	struct UCM_Page_Dot_C_ExecuteUbergraph_CM_Page_Dot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
