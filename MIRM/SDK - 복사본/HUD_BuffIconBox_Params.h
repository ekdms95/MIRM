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
	 * Function HUD_BuffIconBox.HUD_BuffIconBox_C.Preset
	 */
	struct UHUD_BuffIconBox_C_Preset_Params
	{	};

	/**
	 * Function HUD_BuffIconBox.HUD_BuffIconBox_C.PreConstruct
	 */
	struct UHUD_BuffIconBox_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_BuffIconBox.HUD_BuffIconBox_C.Tick
	 */
	struct UHUD_BuffIconBox_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_BuffIconBox.HUD_BuffIconBox_C.ExecuteUbergraph_HUD_BuffIconBox
	 */
	struct UHUD_BuffIconBox_C_ExecuteUbergraph_HUD_BuffIconBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
