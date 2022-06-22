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
	 * Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.GetButton
	 */
	struct UHUD_Skill_Quick_Slot_Group_C_GetButton_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UHud_SkillBtn_C*                                     Button;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.OnSwipe
	 */
	struct UHUD_Skill_Quick_Slot_Group_C_OnSwipe_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.OnMouseButtonUp
	 */
	struct UHUD_Skill_Quick_Slot_Group_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.OnMouseMove
	 */
	struct UHUD_Skill_Quick_Slot_Group_C_OnMouseMove_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.OnMouseButtonDown
	 */
	struct UHUD_Skill_Quick_Slot_Group_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.OnPreSet
	 */
	struct UHUD_Skill_Quick_Slot_Group_C_OnPreSet_Params
	{	};

	/**
	 * Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.OnSetSKillPreSetEvent
	 */
	struct UHUD_Skill_Quick_Slot_Group_C_OnSetSKillPreSetEvent_Params
	{
	public:
		int32_t                                                    Preset;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.OnSwipeAniEvent
	 */
	struct UHUD_Skill_Quick_Slot_Group_C_OnSwipeAniEvent_Params
	{
	public:
		bool                                                       isRight;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isSuccess;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.BndEvt__HUD_Skill_Quick_Slot_Elem_K2Node_ComponentBoundEvent_0_ClickDispatcher__DelegateSignature
	 */
	struct UHUD_Skill_Quick_Slot_Group_C_BndEvt__HUD_Skill_Quick_Slot_Elem_K2Node_ComponentBoundEvent_0_ClickDispatcher__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.Tick
	 */
	struct UHUD_Skill_Quick_Slot_Group_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.BndEvt__HUD_Skill_Quick_Slot_Group_HUD_Skill_Quick_Slot_Elem_K2Node_ComponentBoundEvent_1_OnSwipeAnimPivot__DelegateSignature
	 */
	struct UHUD_Skill_Quick_Slot_Group_C_BndEvt__HUD_Skill_Quick_Slot_Group_HUD_Skill_Quick_Slot_Elem_K2Node_ComponentBoundEvent_1_OnSwipeAnimPivot__DelegateSignature_Params
	{	};

	/**
	 * Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.BndEvt__HUD_Skill_Quick_Slot_Group_HUD_Skill_Quick_Slot_Elem_K2Node_ComponentBoundEvent_2_OnFinishSwipeAnim__DelegateSignature
	 */
	struct UHUD_Skill_Quick_Slot_Group_C_BndEvt__HUD_Skill_Quick_Slot_Group_HUD_Skill_Quick_Slot_Elem_K2Node_ComponentBoundEvent_2_OnFinishSwipeAnim__DelegateSignature_Params
	{	};

	/**
	 * Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.OnMouseLeave
	 */
	struct UHUD_Skill_Quick_Slot_Group_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.OnMouseEnter
	 */
	struct UHUD_Skill_Quick_Slot_Group_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.ExecuteUbergraph_HUD_Skill_Quick_Slot_Group
	 */
	struct UHUD_Skill_Quick_Slot_Group_C_ExecuteUbergraph_HUD_Skill_Quick_Slot_Group_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.OnSkillPresetDispatcher__DelegateSignature
	 */
	struct UHUD_Skill_Quick_Slot_Group_C_OnSkillPresetDispatcher__DelegateSignature_Params
	{
	public:
		int32_t                                                    Preset;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.ClickDispatcher__DelegateSignature
	 */
	struct UHUD_Skill_Quick_Slot_Group_C_ClickDispatcher__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
