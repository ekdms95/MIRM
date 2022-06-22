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
	 * Function CM_BlackBg.CM_BlackBg_C.Blocking Set
	 */
	struct UCM_BlackBg_C_Blocking_Set_Params
	{
	public:
		bool                                                       On_Blocking_;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_BlackBg.CM_BlackBg_C.SetButtonEnable
	 */
	struct UCM_BlackBg_C_SetButtonEnable_Params
	{
	public:
		bool                                                       IsOn;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_BlackBg.CM_BlackBg_C.BndEvt__Close_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UCM_BlackBg_C_BndEvt__Close_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function CM_BlackBg.CM_BlackBg_C.ExecuteUbergraph_CM_BlackBg
	 */
	struct UCM_BlackBg_C_ExecuteUbergraph_CM_BlackBg_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_BlackBg.CM_BlackBg_C.CloseBtn_Event__DelegateSignature
	 */
	struct UCM_BlackBg_C_CloseBtn_Event__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
