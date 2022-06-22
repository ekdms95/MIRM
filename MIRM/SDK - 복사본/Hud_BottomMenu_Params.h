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
	 * Function Hud_BottomMenu.Hud_BottomMenu_C.ShowMenuBar
	 */
	struct UHud_BottomMenu_C_ShowMenuBar_Params
	{
	public:
		bool                                                       IsOn;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hud_BottomMenu.Hud_BottomMenu_C.HideMenuEvent
	 */
	struct UHud_BottomMenu_C_HideMenuEvent_Params
	{	};

	/**
	 * Function Hud_BottomMenu.Hud_BottomMenu_C.ShowMenuEvent
	 */
	struct UHud_BottomMenu_C_ShowMenuEvent_Params
	{	};

	/**
	 * Function Hud_BottomMenu.Hud_BottomMenu_C.BndEvt__MenuUp_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UHud_BottomMenu_C_BndEvt__MenuUp_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Hud_BottomMenu.Hud_BottomMenu_C.OnInitailizeWidget
	 */
	struct UHud_BottomMenu_C_OnInitailizeWidget_Params
	{
	public:
		class FString                                              Parameters;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_BottomMenu.Hud_BottomMenu_C.PreConstruct
	 */
	struct UHud_BottomMenu_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hud_BottomMenu.Hud_BottomMenu_C.SetBatteryState
	 */
	struct UHud_BottomMenu_C_SetBatteryState_Params
	{
	public:
		E_BATTERY_STATE                                            BatteryState;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_BottomMenu.Hud_BottomMenu_C.SetNetworkState
	 */
	struct UHud_BottomMenu_C_SetNetworkState_Params
	{
	public:
		bool                                                       bIsWifi;                                                 // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    NTIdx;                                                   // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_BottomMenu.Hud_BottomMenu_C.ExecuteUbergraph_Hud_BottomMenu
	 */
	struct UHud_BottomMenu_C_ExecuteUbergraph_Hud_BottomMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_BottomMenu.Hud_BottomMenu_C.ShowMenuDispatcher__DelegateSignature
	 */
	struct UHud_BottomMenu_C_ShowMenuDispatcher__DelegateSignature_Params
	{
	public:
		bool                                                       IsOn;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
