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
	 * Function CM_Quest_HighLight.Quest_HighLight_C.SetHighlight
	 */
	struct UQuest_HighLight_C_SetHighlight_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_Quest_HighLight.Quest_HighLight_C.Point_play_Function
	 */
	struct UQuest_HighLight_C_Point_play_Function_Params
	{	};

	/**
	 * Function CM_Quest_HighLight.Quest_HighLight_C.Scale_Ani_Finish
	 */
	struct UQuest_HighLight_C_Scale_Ani_Finish_Params
	{	};

	/**
	 * Function CM_Quest_HighLight.Quest_HighLight_C.PreConstruct
	 */
	struct UQuest_HighLight_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_Quest_HighLight.Quest_HighLight_C.OnReceivePrefabMessage
	 */
	struct UQuest_HighLight_C_OnReceivePrefabMessage_Params
	{
	public:
		class FName                                                PrefabMessage;                                           // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              PrefabParameters;                                        // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_Quest_HighLight.Quest_HighLight_C.BndEvt__Quest_HighLight_Click_btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UQuest_HighLight_C_BndEvt__Quest_HighLight_Click_btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CM_Quest_HighLight.Quest_HighLight_C.ExecuteUbergraph_Quest_HighLight
	 */
	struct UQuest_HighLight_C_ExecuteUbergraph_Quest_HighLight_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
