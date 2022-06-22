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
	 * Function HUD_Auto_Collect.HUD_Auto_Collect_C.OnFearState
	 */
	struct UHUD_Auto_Collect_C_OnFearState_Params
	{
	public:
		bool                                                       IsFear;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Auto_Collect.HUD_Auto_Collect_C.SetAnimation
	 */
	struct UHUD_Auto_Collect_C_SetAnimation_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Auto_Collect.HUD_Auto_Collect_C.GetIsAutoPlay
	 */
	struct UHUD_Auto_Collect_C_GetIsAutoPlay_Params
	{
	public:
		struct FAutoPlayProcessUnit                                AutoPlayProcessUnit;                                     // 0x0000(0x0068)  (Parm, OutParm)
	};

	/**
	 * Function HUD_Auto_Collect.HUD_Auto_Collect_C.SetAutoPlay
	 */
	struct UHUD_Auto_Collect_C_SetAutoPlay_Params
	{
	public:
		struct FAutoPlayProcessUnit                                AutoPlayProcessUnit;                                     // 0x0000(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function HUD_Auto_Collect.HUD_Auto_Collect_C.Construct
	 */
	struct UHUD_Auto_Collect_C_Construct_Params
	{	};

	/**
	 * Function HUD_Auto_Collect.HUD_Auto_Collect_C.OnActiveFromPageHUDDispatcher_Event
	 */
	struct UHUD_Auto_Collect_C_OnActiveFromPageHUDDispatcher_Event_Params
	{
	public:
		struct FAutoPlayProcessUnit                                AutoPlayProcessUnit;                                     // 0x0000(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function HUD_Auto_Collect.HUD_Auto_Collect_C.BndEvt__HUD_Auto_Collect_HUD_Auto_Other_Btn_K2Node_ComponentBoundEvent_1_AutoBtn__DelegateSignature
	 */
	struct UHUD_Auto_Collect_C_BndEvt__HUD_Auto_Collect_HUD_Auto_Other_Btn_K2Node_ComponentBoundEvent_1_AutoBtn__DelegateSignature_Params
	{	};

	/**
	 * Function HUD_Auto_Collect.HUD_Auto_Collect_C.ExecuteUbergraph_HUD_Auto_Collect
	 */
	struct UHUD_Auto_Collect_C_ExecuteUbergraph_HUD_Auto_Collect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Auto_Collect.HUD_Auto_Collect_C.OnChangeIconActive__DelegateSignature
	 */
	struct UHUD_Auto_Collect_C_OnChangeIconActive__DelegateSignature_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
