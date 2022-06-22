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
	 * Function CM_GetQuestItem.CM_GetQuestItem_C.OnMouseButtonDown_1
	 */
	struct UCM_GetQuestItem_C_OnMouseButtonDown_1_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function CM_GetQuestItem.CM_GetQuestItem_C.OnPlayAnimation
	 */
	struct UCM_GetQuestItem_C_OnPlayAnimation_Params
	{	};

	/**
	 * Function CM_GetQuestItem.CM_GetQuestItem_C.OnSetData
	 */
	struct UCM_GetQuestItem_C_OnSetData_Params
	{
	public:
		int32_t                                                    Title;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ItemId;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ItemNameId;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    count;                                                   // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MaxCount;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_GetQuestItem.CM_GetQuestItem_C.Construct
	 */
	struct UCM_GetQuestItem_C_Construct_Params
	{	};

	/**
	 * Function CM_GetQuestItem.CM_GetQuestItem_C.WidgetAnimationEvt_Message_Ani_K2Node_WidgetAnimationEvent_1
	 */
	struct UCM_GetQuestItem_C_WidgetAnimationEvt_Message_Ani_K2Node_WidgetAnimationEvent_1_Params
	{	};

	/**
	 * Function CM_GetQuestItem.CM_GetQuestItem_C.WidgetAnimationEvt_Message_Ani_K2Node_WidgetAnimationEvent_2
	 */
	struct UCM_GetQuestItem_C_WidgetAnimationEvt_Message_Ani_K2Node_WidgetAnimationEvent_2_Params
	{	};

	/**
	 * Function CM_GetQuestItem.CM_GetQuestItem_C.ExecuteUbergraph_CM_GetQuestItem
	 */
	struct UCM_GetQuestItem_C_ExecuteUbergraph_CM_GetQuestItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
