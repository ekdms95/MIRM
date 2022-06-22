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
	 * Function HUD_ComProfile.HUD_ComProfile_C.PreConstruct
	 */
	struct UHUD_ComProfile_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_ComProfile.HUD_ComProfile_C.Construct
	 */
	struct UHUD_ComProfile_C_Construct_Params
	{	};

	/**
	 * Function HUD_ComProfile.HUD_ComProfile_C.ExecuteUbergraph_HUD_ComProfile
	 */
	struct UHUD_ComProfile_C_ExecuteUbergraph_HUD_ComProfile_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
