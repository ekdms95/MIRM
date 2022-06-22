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
	 * Function HUD_Icon_Buff.HUD_Icon_Buff_C.PreConstruct
	 */
	struct UHUD_Icon_Buff_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Icon_Buff.HUD_Icon_Buff_C.OnDisableBuffIcon
	 */
	struct UHUD_Icon_Buff_C_OnDisableBuffIcon_Params
	{	};

	/**
	 * Function HUD_Icon_Buff.HUD_Icon_Buff_C.RemoveBuffIcon
	 */
	struct UHUD_Icon_Buff_C_RemoveBuffIcon_Params
	{	};

	/**
	 * Function HUD_Icon_Buff.HUD_Icon_Buff_C.OnCreatedBuffIcon
	 */
	struct UHUD_Icon_Buff_C_OnCreatedBuffIcon_Params
	{	};

	/**
	 * Function HUD_Icon_Buff.HUD_Icon_Buff_C.OnSetBuffIcon
	 */
	struct UHUD_Icon_Buff_C_OnSetBuffIcon_Params
	{
	public:
		float                                                      Remaintime;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      CurrRemaintime;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Icon_Buff.HUD_Icon_Buff_C.Tick
	 */
	struct UHUD_Icon_Buff_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Icon_Buff.HUD_Icon_Buff_C.ExecuteUbergraph_HUD_Icon_Buff
	 */
	struct UHUD_Icon_Buff_C_ExecuteUbergraph_HUD_Icon_Buff_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
