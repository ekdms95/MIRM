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
	 * Function Hud_UProfile.Hud_UProfile_C.IsSleepMode
	 */
	struct UHud_UProfile_C_IsSleepMode_Params
	{
	public:
		bool                                                       IsSleepMode;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hud_UProfile.Hud_UProfile_C.Keypresscheck
	 */
	struct UHud_UProfile_C_Keypresscheck_Params
	{	};

	/**
	 * Function Hud_UProfile.Hud_UProfile_C.Construct
	 */
	struct UHud_UProfile_C_Construct_Params
	{	};

	/**
	 * Function Hud_UProfile.Hud_UProfile_C.Tick
	 */
	struct UHud_UProfile_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_UProfile.Hud_UProfile_C.BndEvt__Character_Info_Open_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UHud_UProfile_C_BndEvt__Character_Info_Open_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Hud_UProfile.Hud_UProfile_C.BndEvt__HUD_Buff_Icon_Box_K2Node_ComponentBoundEvent_2_BuffPopupDelegate__DelegateSignature
	 */
	struct UHud_UProfile_C_BndEvt__HUD_Buff_Icon_Box_K2Node_ComponentBoundEvent_2_BuffPopupDelegate__DelegateSignature_Params
	{	};

	/**
	 * Function Hud_UProfile.Hud_UProfile_C.PreConstruct
	 */
	struct UHud_UProfile_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hud_UProfile.Hud_UProfile_C.OnCharacterStatusByKeypress
	 */
	struct UHud_UProfile_C_OnCharacterStatusByKeypress_Params
	{	};

	/**
	 * Function Hud_UProfile.Hud_UProfile_C.OnPkStatusProfileByKeypress
	 */
	struct UHud_UProfile_C_OnPkStatusProfileByKeypress_Params
	{	};

	/**
	 * Function Hud_UProfile.Hud_UProfile_C.PowerCalculate
	 */
	struct UHud_UProfile_C_PowerCalculate_Params
	{	};

	/**
	 * Function Hud_UProfile.Hud_UProfile_C.OnChangeCflag
	 */
	struct UHud_UProfile_C_OnChangeCflag_Params
	{
	public:
		struct FCFlagValues                                        CFlagValues;                                             // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Hud_UProfile.Hud_UProfile_C.OnInitailizeWidget
	 */
	struct UHud_UProfile_C_OnInitailizeWidget_Params
	{
	public:
		class FString                                              Parameters;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_UProfile.Hud_UProfile_C.BndEvt__Hud_PkStatus_Profile_K2Node_ComponentBoundEvent_36_ClickDispatcher__DelegateSignature
	 */
	struct UHud_UProfile_C_BndEvt__Hud_PkStatus_Profile_K2Node_ComponentBoundEvent_36_ClickDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function Hud_UProfile.Hud_UProfile_C.SetGradeBG
	 */
	struct UHud_UProfile_C_SetGradeBG_Params
	{
	public:
		E_GRADE                                                    grade;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_UProfile.Hud_UProfile_C.OnReceivePrefabMessage
	 */
	struct UHud_UProfile_C_OnReceivePrefabMessage_Params
	{
	public:
		class FName                                                PrefabMessage;                                           // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              PrefabParameters;                                        // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_UProfile.Hud_UProfile_C.BndEvt__Hud_UProfile_HUD_Vitality_Btn_K2Node_ComponentBoundEvent_0_Click_Dispatch__DelegateSignature
	 */
	struct UHud_UProfile_C_BndEvt__Hud_UProfile_HUD_Vitality_Btn_K2Node_ComponentBoundEvent_0_Click_Dispatch__DelegateSignature_Params
	{	};

	/**
	 * Function Hud_UProfile.Hud_UProfile_C.ExecuteUbergraph_Hud_UProfile
	 */
	struct UHud_UProfile_C_ExecuteUbergraph_Hud_UProfile_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_UProfile.Hud_UProfile_C.ClickDispatcher__DelegateSignature
	 */
	struct UHud_UProfile_C_ClickDispatcher__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
