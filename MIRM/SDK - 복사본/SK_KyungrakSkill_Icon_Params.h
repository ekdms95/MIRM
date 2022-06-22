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
	 * Function SK_KyungrakSkill_Icon.SK_KyungrakSkill_Icon_C.OnMouseMove
	 */
	struct USK_KyungrakSkill_Icon_C_OnMouseMove_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SK_KyungrakSkill_Icon.SK_KyungrakSkill_Icon_C.OnMouseButtonUp
	 */
	struct USK_KyungrakSkill_Icon_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SK_KyungrakSkill_Icon.SK_KyungrakSkill_Icon_C.OnMouseButtonDown
	 */
	struct USK_KyungrakSkill_Icon_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function SK_KyungrakSkill_Icon.SK_KyungrakSkill_Icon_C.PlaySkillSlotChangeProduct
	 */
	struct USK_KyungrakSkill_Icon_C_PlaySkillSlotChangeProduct_Params
	{
	public:
		int32_t                                                    arrIdx;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SK_KyungrakSkill_Icon.SK_KyungrakSkill_Icon_C.OnFearState
	 */
	struct USK_KyungrakSkill_Icon_C_OnFearState_Params
	{
	public:
		bool                                                       IsFear;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SK_KyungrakSkill_Icon.SK_KyungrakSkill_Icon_C.Tick
	 */
	struct USK_KyungrakSkill_Icon_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SK_KyungrakSkill_Icon.SK_KyungrakSkill_Icon_C.KeyPressed
	 */
	struct USK_KyungrakSkill_Icon_C_KeyPressed_Params
	{	};

	/**
	 * Function SK_KyungrakSkill_Icon.SK_KyungrakSkill_Icon_C.Next_Skill_Ani_Finished
	 */
	struct USK_KyungrakSkill_Icon_C_Next_Skill_Ani_Finished_Params
	{	};

	/**
	 * Function SK_KyungrakSkill_Icon.SK_KyungrakSkill_Icon_C.OnInitailizeWidget
	 */
	struct USK_KyungrakSkill_Icon_C_OnInitailizeWidget_Params
	{
	public:
		class FString                                              Parameters;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function SK_KyungrakSkill_Icon.SK_KyungrakSkill_Icon_C.OnChargeFinished
	 */
	struct USK_KyungrakSkill_Icon_C_OnChargeFinished_Params
	{	};

	/**
	 * Function SK_KyungrakSkill_Icon.SK_KyungrakSkill_Icon_C.BndEvt__Skill_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct USK_KyungrakSkill_Icon_C_BndEvt__Skill_Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function SK_KyungrakSkill_Icon.SK_KyungrakSkill_Icon_C.PreConstruct
	 */
	struct USK_KyungrakSkill_Icon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SK_KyungrakSkill_Icon.SK_KyungrakSkill_Icon_C.OnSetAutoMeridianSkill
	 */
	struct USK_KyungrakSkill_Icon_C_OnSetAutoMeridianSkill_Params
	{
	public:
		bool                                                       IsAuto;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SK_KyungrakSkill_Icon.SK_KyungrakSkill_Icon_C.ExecuteUbergraph_SK_KyungrakSkill_Icon
	 */
	struct USK_KyungrakSkill_Icon_C_ExecuteUbergraph_SK_KyungrakSkill_Icon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SK_KyungrakSkill_Icon.SK_KyungrakSkill_Icon_C.OnSlotClicked__DelegateSignature
	 */
	struct USK_KyungrakSkill_Icon_C_OnSlotClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    slotArrIdx;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
