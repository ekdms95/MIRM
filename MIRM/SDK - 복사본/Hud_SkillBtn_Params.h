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
	 * Function Hud_SkillBtn.Hud_SkillBtn_C.Auto_OnOff_Function
	 */
	struct UHud_SkillBtn_C_Auto_OnOff_Function_Params
	{
	public:
		E_HudSkillAutoType                                         Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_SkillBtn.Hud_SkillBtn_C.OnMouseMove
	 */
	struct UHud_SkillBtn_C_OnMouseMove_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Hud_SkillBtn.Hud_SkillBtn_C.OnMouseButtonUp
	 */
	struct UHud_SkillBtn_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Hud_SkillBtn.Hud_SkillBtn_C.OnMouseButtonDown
	 */
	struct UHud_SkillBtn_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Hud_SkillBtn.Hud_SkillBtn_C.PressedNormalSkill
	 */
	struct UHud_SkillBtn_C_PressedNormalSkill_Params
	{	};

	/**
	 * Function Hud_SkillBtn.Hud_SkillBtn_C.OnSetSkillInfo
	 */
	struct UHud_SkillBtn_C_OnSetSkillInfo_Params
	{
	public:
		int32_t                                                    SkillIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_SkillBtn.Hud_SkillBtn_C.OnSkillWaitingState
	 */
	struct UHud_SkillBtn_C_OnSkillWaitingState_Params
	{
	public:
		bool                                                       isWaiting;                                               // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    msgIndex;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_SkillBtn.Hud_SkillBtn_C.BndEvt__HudCoolTime_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UHud_SkillBtn_C_BndEvt__HudCoolTime_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Hud_SkillBtn.Hud_SkillBtn_C.OnCoolTimeProgressComplete
	 */
	struct UHud_SkillBtn_C_OnCoolTimeProgressComplete_Params
	{	};

	/**
	 * Function Hud_SkillBtn.Hud_SkillBtn_C.OnCoolTimeProgressStart
	 */
	struct UHud_SkillBtn_C_OnCoolTimeProgressStart_Params
	{	};

	/**
	 * Function Hud_SkillBtn.Hud_SkillBtn_C.Destruct
	 */
	struct UHud_SkillBtn_C_Destruct_Params
	{	};

	/**
	 * Function Hud_SkillBtn.Hud_SkillBtn_C.OnSkill
	 */
	struct UHud_SkillBtn_C_OnSkill_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsSkillActivate;                                         // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hud_SkillBtn.Hud_SkillBtn_C.Construct
	 */
	struct UHud_SkillBtn_C_Construct_Params
	{	};

	/**
	 * Function Hud_SkillBtn.Hud_SkillBtn_C.OnSetAutoSkill
	 */
	struct UHud_SkillBtn_C_OnSetAutoSkill_Params
	{
	public:
		E_HudSkillAutoType                                         Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_SkillBtn.Hud_SkillBtn_C.OnMouseLeave
	 */
	struct UHud_SkillBtn_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Hud_SkillBtn.Hud_SkillBtn_C.Tick
	 */
	struct UHud_SkillBtn_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_SkillBtn.Hud_SkillBtn_C.PreConstruct
	 */
	struct UHud_SkillBtn_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hud_SkillBtn.Hud_SkillBtn_C.SkillAniEnd
	 */
	struct UHud_SkillBtn_C_SkillAniEnd_Params
	{	};

	/**
	 * Function Hud_SkillBtn.Hud_SkillBtn_C.BndEvt__MirButton_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UHud_SkillBtn_C_BndEvt__MirButton_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Hud_SkillBtn.Hud_SkillBtn_C.BndEvt__Hud_SkillBtn_SkillCancelBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UHud_SkillBtn_C_BndEvt__Hud_SkillBtn_SkillCancelBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Hud_SkillBtn.Hud_SkillBtn_C.OnSkillLockState
	 */
	struct UHud_SkillBtn_C_OnSkillLockState_Params
	{
	public:
		bool                                                       IsFear;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hud_SkillBtn.Hud_SkillBtn_C.ExecuteUbergraph_Hud_SkillBtn
	 */
	struct UHud_SkillBtn_C_ExecuteUbergraph_Hud_SkillBtn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_SkillBtn.Hud_SkillBtn_C.DragSkillClicked__DelegateSignature
	 */
	struct UHud_SkillBtn_C_DragSkillClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    SkillIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_SkillBtn.Hud_SkillBtn_C.ClickDispatcher__DelegateSignature
	 */
	struct UHud_SkillBtn_C_ClickDispatcher__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
