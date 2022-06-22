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
	 * Function HUD_UserTitle.HUD_UserTitle_C.SetTitleGrade
	 */
	struct UHUD_UserTitle_C_SetTitleGrade_Params
	{
	public:
		E_TITLE_GRADE                                              grade;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_UserTitle.HUD_UserTitle_C.Construct
	 */
	struct UHUD_UserTitle_C_Construct_Params
	{	};

	/**
	 * Function HUD_UserTitle.HUD_UserTitle_C.SetTitleType
	 */
	struct UHUD_UserTitle_C_SetTitleType_Params
	{
	public:
		EUSER_TITLEACHIEVE_TAB_TYPE                                Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_UserTitle.HUD_UserTitle_C.ExecuteUbergraph_HUD_UserTitle
	 */
	struct UHUD_UserTitle_C_ExecuteUbergraph_HUD_UserTitle_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
