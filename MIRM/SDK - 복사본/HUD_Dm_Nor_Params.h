﻿#pragma once

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
	 * Function HUD_Dm_Nor.HUD_Dm_Nor_C.OnSetText
	 */
	struct UHUD_Dm_Nor_C_OnSetText_Params
	{	};

	/**
	 * Function HUD_Dm_Nor.HUD_Dm_Nor_C.Construct
	 */
	struct UHUD_Dm_Nor_C_Construct_Params
	{	};

	/**
	 * Function HUD_Dm_Nor.HUD_Dm_Nor_C.Destruct
	 */
	struct UHUD_Dm_Nor_C_Destruct_Params
	{	};

	/**
	 * Function HUD_Dm_Nor.HUD_Dm_Nor_C.PreConstruct
	 */
	struct UHUD_Dm_Nor_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Dm_Nor.HUD_Dm_Nor_C.ExecuteUbergraph_HUD_Dm_Nor
	 */
	struct UHUD_Dm_Nor_C_ExecuteUbergraph_HUD_Dm_Nor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
