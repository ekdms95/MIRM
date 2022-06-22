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
	 * Function Hud_Vpad.Hud_Vpad_C.CheckStoryDungeonBlock
	 */
	struct UHud_Vpad_C_CheckStoryDungeonBlock_Params
	{
	public:
		bool                                                       bLock;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hud_Vpad.Hud_Vpad_C.SetScanButton
	 */
	struct UHud_Vpad_C_SetScanButton_Params
	{	};

	/**
	 * Function Hud_Vpad.Hud_Vpad_C.ToggleNormalAttack
	 */
	struct UHud_Vpad_C_ToggleNormalAttack_Params
	{	};

	/**
	 * Function Hud_Vpad.Hud_Vpad_C.GetScreenPosition
	 */
	struct UHud_Vpad_C_GetScreenPosition_Params
	{
	public:
		class UUserWidget*                                         Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           position;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_Vpad.Hud_Vpad_C.SetSkillWaitingState
	 */
	struct UHud_Vpad_C_SetSkillWaitingState_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_Vpad.Hud_Vpad_C.PlayWidgetAnimation
	 */
	struct UHud_Vpad_C_PlayWidgetAnimation_Params
	{
	public:
		class FString                                              AniName;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_Vpad.Hud_Vpad_C.BndEvt__SK_KyungrakSkill_Icon_K2Node_ComponentBoundEvent_17_OnSlotClicked__DelegateSignature
	 */
	struct UHud_Vpad_C_BndEvt__SK_KyungrakSkill_Icon_K2Node_ComponentBoundEvent_17_OnSlotClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    slotArrIdx;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_Vpad.Hud_Vpad_C.BndEvt__Target_Change_btn_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
	 */
	struct UHud_Vpad_C_BndEvt__Target_Change_btn_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Hud_Vpad.Hud_Vpad_C.OnFearState
	 */
	struct UHud_Vpad_C_OnFearState_Params
	{
	public:
		bool                                                       IsFear;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hud_Vpad.Hud_Vpad_C.Keypresscheck
	 */
	struct UHud_Vpad_C_Keypresscheck_Params
	{	};

	/**
	 * Function Hud_Vpad.Hud_Vpad_C.Tick
	 */
	struct UHud_Vpad_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_Vpad.Hud_Vpad_C.BndEvt__MirButton_0_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
	 */
	struct UHud_Vpad_C_BndEvt__MirButton_0_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Hud_Vpad.Hud_Vpad_C.OnChangeCflag
	 */
	struct UHud_Vpad_C_OnChangeCflag_Params
	{
	public:
		struct FCFlagValues                                        CFlagValues;                                             // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Hud_Vpad.Hud_Vpad_C.Destruct
	 */
	struct UHud_Vpad_C_Destruct_Params
	{	};

	/**
	 * Function Hud_Vpad.Hud_Vpad_C.OnSkill
	 */
	struct UHud_Vpad_C_OnSkill_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsSkillActivate;                                         // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hud_Vpad.Hud_Vpad_C.BndEvt__HUD_Skill_Quick_Slot_Group_K2Node_ComponentBoundEvent_6_ClickDispatcher__DelegateSignature
	 */
	struct UHud_Vpad_C_BndEvt__HUD_Skill_Quick_Slot_Group_K2Node_ComponentBoundEvent_6_ClickDispatcher__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_Vpad.Hud_Vpad_C.OnInitailizeWidget
	 */
	struct UHud_Vpad_C_OnInitailizeWidget_Params
	{
	public:
		class FString                                              Parameters;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_Vpad.Hud_Vpad_C.Construct
	 */
	struct UHud_Vpad_C_Construct_Params
	{	};

	/**
	 * Function Hud_Vpad.Hud_Vpad_C.PreConstruct
	 */
	struct UHud_Vpad_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hud_Vpad.Hud_Vpad_C.BndEvt__Hud_Vpad_HUD_Skill_Quick_Slot_Group_K2Node_ComponentBoundEvent_0_OnSkillPresetDispatcher__DelegateSignature
	 */
	struct UHud_Vpad_C_BndEvt__Hud_Vpad_HUD_Skill_Quick_Slot_Group_K2Node_ComponentBoundEvent_0_OnSkillPresetDispatcher__DelegateSignature_Params
	{
	public:
		int32_t                                                    Preset;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_Vpad.Hud_Vpad_C.OnSetVisible
	 */
	struct UHud_Vpad_C_OnSetVisible_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hud_Vpad.Hud_Vpad_C.BndEvt__Hud_Vpad_Targeting_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UHud_Vpad_C_BndEvt__Hud_Vpad_Targeting_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Hud_Vpad.Hud_Vpad_C.OnApplyOpacitySteetStallBtn
	 */
	struct UHud_Vpad_C_OnApplyOpacitySteetStallBtn_Params
	{
	public:
		bool                                                       IsApply;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hud_Vpad.Hud_Vpad_C.BndEvt__Hud_Vpad_StreetShop_btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UHud_Vpad_C_BndEvt__Hud_Vpad_StreetShop_btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Hud_Vpad.Hud_Vpad_C.OnApplyGaugeSteetStallBtn
	 */
	struct UHud_Vpad_C_OnApplyGaugeSteetStallBtn_Params
	{
	public:
		float                                                      Percent;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_Vpad.Hud_Vpad_C.BndEvt__Hud_Vpad_MirButton_83_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UHud_Vpad_C_BndEvt__Hud_Vpad_MirButton_83_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Hud_Vpad.Hud_Vpad_C.OnSkillLockState
	 */
	struct UHud_Vpad_C_OnSkillLockState_Params
	{
	public:
		bool                                                       IsFear;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hud_Vpad.Hud_Vpad_C.ExecuteUbergraph_Hud_Vpad
	 */
	struct UHud_Vpad_C_ExecuteUbergraph_Hud_Vpad_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
