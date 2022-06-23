#pragma once

/**
 * Name: MIRM
 * Version: 0623-2
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
	 * Function CM_IV_Frame.CM_IV_Frame_C.Init Use Tab Alarm
	 */
	struct UCM_IV_Frame_C_Init_Use_Tab_Alarm_Params
	{
	public:
		bool                                                       UseTabAlarm;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_IV_Frame.CM_IV_Frame_C.Tab_Visi_Function
	 */
	struct UCM_IV_Frame_C_Tab_Visi_Function_Params
	{
	public:
		ESlateVisibility                                           Tab_All_visi;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESlateVisibility                                           Tab_Armor_visi;                                          // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESlateVisibility                                           Tab_Stone_visi;                                          // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESlateVisibility                                           Tab_Cos_visi;                                            // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESlateVisibility                                           Tab_Etc_visi;                                            // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_IV_Frame.CM_IV_Frame_C.HUD_Page_Changer
	 */
	struct UCM_IV_Frame_C_HUD_Page_Changer_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_IV_Frame.CM_IV_Frame_C.Init
	 */
	struct UCM_IV_Frame_C_Init_Params
	{
	public:
		int32_t                                                    inTabIdx;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_IV_Frame.CM_IV_Frame_C.PreConstruct
	 */
	struct UCM_IV_Frame_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_IV_Frame.CM_IV_Frame_C.BndEvt__Weapon_tab_K2Node_ComponentBoundEvent_0_OnChangeState__DelegateSignature
	 */
	struct UCM_IV_Frame_C_BndEvt__Weapon_tab_K2Node_ComponentBoundEvent_0_OnChangeState__DelegateSignature_Params
	{	};

	/**
	 * Function CM_IV_Frame.CM_IV_Frame_C.BndEvt__Armor_tab_K2Node_ComponentBoundEvent_1_OnChangeState__DelegateSignature
	 */
	struct UCM_IV_Frame_C_BndEvt__Armor_tab_K2Node_ComponentBoundEvent_1_OnChangeState__DelegateSignature_Params
	{	};

	/**
	 * Function CM_IV_Frame.CM_IV_Frame_C.BndEvt__Ring_tab_K2Node_ComponentBoundEvent_2_OnChangeState__DelegateSignature
	 */
	struct UCM_IV_Frame_C_BndEvt__Ring_tab_K2Node_ComponentBoundEvent_2_OnChangeState__DelegateSignature_Params
	{	};

	/**
	 * Function CM_IV_Frame.CM_IV_Frame_C.BndEvt__ETC_tab_K2Node_ComponentBoundEvent_3_OnChangeState__DelegateSignature
	 */
	struct UCM_IV_Frame_C_BndEvt__ETC_tab_K2Node_ComponentBoundEvent_3_OnChangeState__DelegateSignature_Params
	{	};

	/**
	 * Function CM_IV_Frame.CM_IV_Frame_C.BndEvt__CM_Btn_Close_K2Node_ComponentBoundEvent_4_Click__DelegateSignature
	 */
	struct UCM_IV_Frame_C_BndEvt__CM_Btn_Close_K2Node_ComponentBoundEvent_4_Click__DelegateSignature_Params
	{	};

	/**
	 * Function CM_IV_Frame.CM_IV_Frame_C.ExecuteUbergraph_CM_IV_Frame
	 */
	struct UCM_IV_Frame_C_ExecuteUbergraph_CM_IV_Frame_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_IV_Frame.CM_IV_Frame_C.CostumeDispatcher__DelegateSignature
	 */
	struct UCM_IV_Frame_C_CostumeDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function CM_IV_Frame.CM_IV_Frame_C.EtcDispatcher__DelegateSignature
	 */
	struct UCM_IV_Frame_C_EtcDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function CM_IV_Frame.CM_IV_Frame_C.DragonstoneTabDispatcher__DelegateSignature
	 */
	struct UCM_IV_Frame_C_DragonstoneTabDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function CM_IV_Frame.CM_IV_Frame_C.EquipmentTabDispatcher__DelegateSignature
	 */
	struct UCM_IV_Frame_C_EquipmentTabDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function CM_IV_Frame.CM_IV_Frame_C.AllTabDispatcher__DelegateSignature
	 */
	struct UCM_IV_Frame_C_AllTabDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function CM_IV_Frame.CM_IV_Frame_C.ClosePopupDispatch__DelegateSignature
	 */
	struct UCM_IV_Frame_C_ClosePopupDispatch__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
