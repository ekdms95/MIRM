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
	 * Function HUD_AutoMove.HUD_AutoMove_C.OnCheckUIOverlap
	 */
	struct UHUD_AutoMove_C_OnCheckUIOverlap_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_AutoMove.HUD_AutoMove_C.OnSetActiveRoot
	 */
	struct UHUD_AutoMove_C_OnSetActiveRoot_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_AutoMove.HUD_AutoMove_C.BndEvt__MirButton_Teleport_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UHUD_AutoMove_C_BndEvt__MirButton_Teleport_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function HUD_AutoMove.HUD_AutoMove_C.OnSetActive
	 */
	struct UHUD_AutoMove_C_OnSetActive_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_AutoMove.HUD_AutoMove_C.OnPlay
	 */
	struct UHUD_AutoMove_C_OnPlay_Params
	{
	public:
		bool                                                       bTeleport;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_AutoMove.HUD_AutoMove_C.OnNaviPathDistance
	 */
	struct UHUD_AutoMove_C_OnNaviPathDistance_Params
	{
	public:
		int32_t                                                    FormatId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Distance;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_AutoMove.HUD_AutoMove_C.OnTeleportFromScript
	 */
	struct UHUD_AutoMove_C_OnTeleportFromScript_Params
	{	};

	/**
	 * Function HUD_AutoMove.HUD_AutoMove_C.OnSetTextUI
	 */
	struct UHUD_AutoMove_C_OnSetTextUI_Params
	{
	public:
		int32_t                                                    FormatId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Value;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_AutoMove.HUD_AutoMove_C.PreConstruct
	 */
	struct UHUD_AutoMove_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_AutoMove.HUD_AutoMove_C.Construct
	 */
	struct UHUD_AutoMove_C_Construct_Params
	{	};

	/**
	 * Function HUD_AutoMove.HUD_AutoMove_C.ExecuteUbergraph_HUD_AutoMove
	 */
	struct UHUD_AutoMove_C_ExecuteUbergraph_HUD_AutoMove_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
