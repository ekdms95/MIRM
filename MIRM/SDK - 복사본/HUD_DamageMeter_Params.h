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
	 * Function HUD_DamageMeter.HUD_DamageMeter_C.GetDamageMeterElem
	 */
	struct UHUD_DamageMeter_C_GetDamageMeterElem_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UHUD_DamageMeter_Element_C*                          UserElem;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_DamageMeter.HUD_DamageMeter_C.MeterElemnetVisible
	 */
	struct UHUD_DamageMeter_C_MeterElemnetVisible_Params
	{
	public:
		int32_t                                                    Num;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESlateVisibility                                           visible;                                                 // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_DamageMeter.HUD_DamageMeter_C.MetergyCalc
	 */
	struct UHUD_DamageMeter_C_MetergyCalc_Params
	{
	public:
		class FString                                              CharName;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      deal;                                                    // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_METERGY_USER_TYPE                                        usertype;                                                // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_DamageMeter.HUD_DamageMeter_C.Construct
	 */
	struct UHUD_DamageMeter_C_Construct_Params
	{	};

	/**
	 * Function HUD_DamageMeter.HUD_DamageMeter_C.ExecuteUbergraph_HUD_DamageMeter
	 */
	struct UHUD_DamageMeter_C_ExecuteUbergraph_HUD_DamageMeter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
