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
	 * Function HUD_DamageMeter_Element.HUD_DamageMeter_Element_C.SetUserID
	 */
	struct UHUD_DamageMeter_Element_C_SetUserID_Params
	{
	public:
		class FString                                              nickname;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_DamageMeter_Element.HUD_DamageMeter_Element_C.SetPercent
	 */
	struct UHUD_DamageMeter_Element_C_SetPercent_Params
	{
	public:
		float                                                      Percent;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_DamageMeter_Element.HUD_DamageMeter_Element_C.UserCheck
	 */
	struct UHUD_DamageMeter_Element_C_UserCheck_Params
	{
	public:
		E_METERGY_USER_TYPE                                        User_Check;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_DamageMeter_Element.HUD_DamageMeter_Element_C.PreConstruct
	 */
	struct UHUD_DamageMeter_Element_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_DamageMeter_Element.HUD_DamageMeter_Element_C.ExecuteUbergraph_HUD_DamageMeter_Element
	 */
	struct UHUD_DamageMeter_Element_C_ExecuteUbergraph_HUD_DamageMeter_Element_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
