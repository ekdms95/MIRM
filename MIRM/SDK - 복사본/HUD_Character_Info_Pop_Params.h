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
	 * Function HUD_Character_Info_Pop.HUD_Character_Info_Pop_C.SetChangeTab
	 */
	struct UHUD_Character_Info_Pop_C_SetChangeTab_Params
	{
	public:
		int32_t                                                    tabIdx;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Character_Info_Pop.HUD_Character_Info_Pop_C.OnPreSet
	 */
	struct UHUD_Character_Info_Pop_C_OnPreSet_Params
	{	};

	/**
	 * Function HUD_Character_Info_Pop.HUD_Character_Info_Pop_C.BndEvt__Basic_Info_Tab_btn_K2Node_ComponentBoundEvent_0_OnTabStateChanged__DelegateSignature
	 */
	struct UHUD_Character_Info_Pop_C_BndEvt__Basic_Info_Tab_btn_K2Node_ComponentBoundEvent_0_OnTabStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Character_Info_Pop.HUD_Character_Info_Pop_C.BndEvt__Status_Tab_btn_K2Node_ComponentBoundEvent_1_OnTabStateChanged__DelegateSignature
	 */
	struct UHUD_Character_Info_Pop_C_BndEvt__Status_Tab_btn_K2Node_ComponentBoundEvent_1_OnTabStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Character_Info_Pop.HUD_Character_Info_Pop_C.OnInitailizeWidget
	 */
	struct UHUD_Character_Info_Pop_C_OnInitailizeWidget_Params
	{
	public:
		class FString                                              Parameters;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Character_Info_Pop.HUD_Character_Info_Pop_C.OnSetActive
	 */
	struct UHUD_Character_Info_Pop_C_OnSetActive_Params
	{	};

	/**
	 * Function HUD_Character_Info_Pop.HUD_Character_Info_Pop_C.BndEvt__HUD_Character_Info_Pop_K2Node_ComponentBoundEvent_3_PopClose__DelegateSignature
	 */
	struct UHUD_Character_Info_Pop_C_BndEvt__HUD_Character_Info_Pop_K2Node_ComponentBoundEvent_3_PopClose__DelegateSignature_Params
	{	};

	/**
	 * Function HUD_Character_Info_Pop.HUD_Character_Info_Pop_C.BndEvt__Goods_Tab_btn_K2Node_ComponentBoundEvent_4_OnTabStateChanged__DelegateSignature
	 */
	struct UHUD_Character_Info_Pop_C_BndEvt__Goods_Tab_btn_K2Node_ComponentBoundEvent_4_OnTabStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Character_Info_Pop.HUD_Character_Info_Pop_C.Tick
	 */
	struct UHUD_Character_Info_Pop_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Character_Info_Pop.HUD_Character_Info_Pop_C.PreConstruct
	 */
	struct UHUD_Character_Info_Pop_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Character_Info_Pop.HUD_Character_Info_Pop_C.BndEvt__HUD_Character_Info_Pop_HUD_Character_Info_ToolTip_K2Node_ComponentBoundEvent_2_CloseDispatcher__DelegateSignature
	 */
	struct UHUD_Character_Info_Pop_C_BndEvt__HUD_Character_Info_Pop_HUD_Character_Info_ToolTip_K2Node_ComponentBoundEvent_2_CloseDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function HUD_Character_Info_Pop.HUD_Character_Info_Pop_C.ExecuteUbergraph_HUD_Character_Info_Pop
	 */
	struct UHUD_Character_Info_Pop_C_ExecuteUbergraph_HUD_Character_Info_Pop_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Character_Info_Pop.HUD_Character_Info_Pop_C.CloseDispatch__DelegateSignature
	 */
	struct UHUD_Character_Info_Pop_C_CloseDispatch__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
