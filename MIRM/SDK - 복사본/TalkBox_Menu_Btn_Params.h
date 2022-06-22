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
	 * Function TalkBox_Menu_Btn.TalkBox_Menu_Btn_C.SetImageBrushWithLock
	 */
	struct UTalkBox_Menu_Btn_C_SetImageBrushWithLock_Params
	{	};

	/**
	 * Function TalkBox_Menu_Btn.TalkBox_Menu_Btn_C.SetImageBrush
	 */
	struct UTalkBox_Menu_Btn_C_SetImageBrush_Params
	{
	public:
		ETalkSelectType                                            selecttype;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Alpha;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TalkBox_Menu_Btn.TalkBox_Menu_Btn_C.BndEvt__Qmenu_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UTalkBox_Menu_Btn_C_BndEvt__Qmenu_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function TalkBox_Menu_Btn.TalkBox_Menu_Btn_C.OnPreSet
	 */
	struct UTalkBox_Menu_Btn_C_OnPreSet_Params
	{	};

	/**
	 * Function TalkBox_Menu_Btn.TalkBox_Menu_Btn_C.OnSetTalkSelectBox
	 */
	struct UTalkBox_Menu_Btn_C_OnSetTalkSelectBox_Params
	{
	public:
		bool                                                       result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ETalkSelectType                                            Type;                                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SetIndex;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    stringindex;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TalkBox_Menu_Btn.TalkBox_Menu_Btn_C.OnReceivePrefabMessage
	 */
	struct UTalkBox_Menu_Btn_C_OnReceivePrefabMessage_Params
	{
	public:
		class FName                                                PrefabMessage;                                           // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              PrefabParameters;                                        // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function TalkBox_Menu_Btn.TalkBox_Menu_Btn_C.ExecuteUbergraph_TalkBox_Menu_Btn
	 */
	struct UTalkBox_Menu_Btn_C_ExecuteUbergraph_TalkBox_Menu_Btn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TalkBox_Menu_Btn.TalkBox_Menu_Btn_C.ClickDispatcher__DelegateSignature
	 */
	struct UTalkBox_Menu_Btn_C_ClickDispatcher__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
