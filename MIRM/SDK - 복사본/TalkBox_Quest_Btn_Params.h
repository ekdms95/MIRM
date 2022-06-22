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
	 * Function TalkBox_Quest_Btn.TalkBox_Quest_Btn_C.OnPreSet
	 */
	struct UTalkBox_Quest_Btn_C_OnPreSet_Params
	{	};

	/**
	 * Function TalkBox_Quest_Btn.TalkBox_Quest_Btn_C.BndEvt__NPC_Tabcan_K2Node_ComponentBoundEvent_1_OnTabCanvasStateChanged__DelegateSignature
	 */
	struct UTalkBox_Quest_Btn_C_BndEvt__NPC_Tabcan_K2Node_ComponentBoundEvent_1_OnTabCanvasStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TalkBox_Quest_Btn.TalkBox_Quest_Btn_C.OnReceivePrefabMessage
	 */
	struct UTalkBox_Quest_Btn_C_OnReceivePrefabMessage_Params
	{
	public:
		class FName                                                PrefabMessage;                                           // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              PrefabParameters;                                        // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function TalkBox_Quest_Btn.TalkBox_Quest_Btn_C.ExecuteUbergraph_TalkBox_Quest_Btn
	 */
	struct UTalkBox_Quest_Btn_C_ExecuteUbergraph_TalkBox_Quest_Btn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TalkBox_Quest_Btn.TalkBox_Quest_Btn_C.ClickDispatcher__DelegateSignature
	 */
	struct UTalkBox_Quest_Btn_C_ClickDispatcher__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
