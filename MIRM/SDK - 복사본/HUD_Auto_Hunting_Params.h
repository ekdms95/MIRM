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
	 * Function HUD_Auto_Hunting.HUD_Auto_Hunting_C.OnFearState_1
	 */
	struct UHUD_Auto_Hunting_C_OnFearState_1_Params
	{
	public:
		bool                                                       IsFear;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Auto_Hunting.HUD_Auto_Hunting_C.OnFearState
	 */
	struct UHUD_Auto_Hunting_C_OnFearState_Params
	{
	public:
		bool                                                       IsFear;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Auto_Hunting.HUD_Auto_Hunting_C.SetAnimation
	 */
	struct UHUD_Auto_Hunting_C_SetAnimation_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Auto_Hunting.HUD_Auto_Hunting_C.GetIsAutoPlay
	 */
	struct UHUD_Auto_Hunting_C_GetIsAutoPlay_Params
	{
	public:
		struct FAutoPlayProcessUnit                                AutoPlayProcessUnit;                                     // 0x0000(0x0068)  (Parm, OutParm)
	};

	/**
	 * Function HUD_Auto_Hunting.HUD_Auto_Hunting_C.SetAutoPlay
	 */
	struct UHUD_Auto_Hunting_C_SetAutoPlay_Params
	{
	public:
		struct FAutoPlayProcessUnit                                AutoPlayProcessUnit;                                     // 0x0000(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function HUD_Auto_Hunting.HUD_Auto_Hunting_C.OnActiveFromPageHUDDispatcher_Event
	 */
	struct UHUD_Auto_Hunting_C_OnActiveFromPageHUDDispatcher_Event_Params
	{
	public:
		struct FAutoPlayProcessUnit                                AutoPlayProcessUnit;                                     // 0x0000(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function HUD_Auto_Hunting.HUD_Auto_Hunting_C.BndEvt__HUD_Auto_Hunting_HUD_Auto_Other_Btn_K2Node_ComponentBoundEvent_0_AutoBtn__DelegateSignature
	 */
	struct UHUD_Auto_Hunting_C_BndEvt__HUD_Auto_Hunting_HUD_Auto_Other_Btn_K2Node_ComponentBoundEvent_0_AutoBtn__DelegateSignature_Params
	{	};

	/**
	 * Function HUD_Auto_Hunting.HUD_Auto_Hunting_C.ExecuteUbergraph_HUD_Auto_Hunting
	 */
	struct UHUD_Auto_Hunting_C_ExecuteUbergraph_HUD_Auto_Hunting_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Auto_Hunting.HUD_Auto_Hunting_C.OnChangeIconActive__DelegateSignature
	 */
	struct UHUD_Auto_Hunting_C_OnChangeIconActive__DelegateSignature_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
