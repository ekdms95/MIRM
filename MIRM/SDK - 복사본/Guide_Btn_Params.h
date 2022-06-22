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
	 * Function Guide_Btn.Guide_Btn_C.MarkOnOff
	 */
	struct UGuide_Btn_C_MarkOnOff_Params
	{
	public:
		int32_t                                                    Guide_StringID;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Mark_Left_Or_Right;                                      // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Guide_Btn.Guide_Btn_C.PreConstruct
	 */
	struct UGuide_Btn_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Guide_Btn.Guide_Btn_C.BndEvt__Guide_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UGuide_Btn_C_BndEvt__Guide_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Guide_Btn.Guide_Btn_C.BndEvt__Guide_Btn_Guide_btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UGuide_Btn_C_BndEvt__Guide_Btn_Guide_btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Guide_Btn.Guide_Btn_C.ExecuteUbergraph_Guide_Btn
	 */
	struct UGuide_Btn_C_ExecuteUbergraph_Guide_Btn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Guide_Btn.Guide_Btn_C.GuideBtnClick__DelegateSignature
	 */
	struct UGuide_Btn_C_GuideBtnClick__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
