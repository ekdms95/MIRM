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
	 * Function HUD_Auto_Other_Btn.HUD_Auto_Other_Btn_C.SetIconActive
	 */
	struct UHUD_Auto_Other_Btn_C_SetIconActive_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Auto_Other_Btn.HUD_Auto_Other_Btn_C.Btn Disable State
	 */
	struct UHUD_Auto_Other_Btn_C_Btn_Disable_State_Params
	{
	public:
		int32_t                                                    MenuName_txt;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Auto_Other_Btn.HUD_Auto_Other_Btn_C.Auto Btn Switch
	 */
	struct UHUD_Auto_Other_Btn_C_Auto_Btn_Switch_Params
	{
	public:
		class FName                                                Selection;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Auto_Other_Btn.HUD_Auto_Other_Btn_C.Auto_INg_Ani_Play
	 */
	struct UHUD_Auto_Other_Btn_C_Auto_INg_Ani_Play_Params
	{
	public:
		bool                                                       Play;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Auto_Other_Btn.HUD_Auto_Other_Btn_C.PreConstruct
	 */
	struct UHUD_Auto_Other_Btn_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Auto_Other_Btn.HUD_Auto_Other_Btn_C.BndEvt__MirButton_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UHUD_Auto_Other_Btn_C_BndEvt__MirButton_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function HUD_Auto_Other_Btn.HUD_Auto_Other_Btn_C.ExecuteUbergraph_HUD_Auto_Other_Btn
	 */
	struct UHUD_Auto_Other_Btn_C_ExecuteUbergraph_HUD_Auto_Other_Btn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Auto_Other_Btn.HUD_Auto_Other_Btn_C.AutoBtn__DelegateSignature
	 */
	struct UHUD_Auto_Other_Btn_C_AutoBtn__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
