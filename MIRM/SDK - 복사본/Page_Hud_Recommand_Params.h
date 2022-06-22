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
	 * Function Page_Hud_Recommand.Page_Hud_Recommand_C.PreConstruct
	 */
	struct UPage_Hud_Recommand_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Page_Hud_Recommand.Page_Hud_Recommand_C.OnCreateMirPage
	 */
	struct UPage_Hud_Recommand_C_OnCreateMirPage_Params
	{
	public:
		class FString                                              Parameters;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Page_Hud_Recommand.Page_Hud_Recommand_C.OnSetPopup
	 */
	struct UPage_Hud_Recommand_C_OnSetPopup_Params
	{
	public:
		bool                                                       IsEnable;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Page_Hud_Recommand.Page_Hud_Recommand_C.BndEvt__CM_Recommend_Icon_K2Node_ComponentBoundEvent_0_EquipEventDispatcher__DelegateSignature
	 */
	struct UPage_Hud_Recommand_C_BndEvt__CM_Recommend_Icon_K2Node_ComponentBoundEvent_0_EquipEventDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function Page_Hud_Recommand.Page_Hud_Recommand_C.BndEvt__CM_Recommend_Icon_K2Node_ComponentBoundEvent_1_CloseEventDispatcher__DelegateSignature
	 */
	struct UPage_Hud_Recommand_C_BndEvt__CM_Recommend_Icon_K2Node_ComponentBoundEvent_1_CloseEventDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function Page_Hud_Recommand.Page_Hud_Recommand_C.OnEquipItemFail
	 */
	struct UPage_Hud_Recommand_C_OnEquipItemFail_Params
	{
	public:
		int32_t                                                    reason;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Page_Hud_Recommand.Page_Hud_Recommand_C.OnSetButtonText
	 */
	struct UPage_Hud_Recommand_C_OnSetButtonText_Params
	{
	public:
		class FText                                                ButtonText;                                              // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Page_Hud_Recommand.Page_Hud_Recommand_C.BndEvt__CM_Num_Item_Regi_Pop_K2Node_ComponentBoundEvent_2_ConfirmDispatcher__DelegateSignature
	 */
	struct UPage_Hud_Recommand_C_BndEvt__CM_Num_Item_Regi_Pop_K2Node_ComponentBoundEvent_2_ConfirmDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function Page_Hud_Recommand.Page_Hud_Recommand_C.BndEvt__CM_Num_Item_Regi_Pop_K2Node_ComponentBoundEvent_3_CloseDispatcher__DelegateSignature
	 */
	struct UPage_Hud_Recommand_C_BndEvt__CM_Num_Item_Regi_Pop_K2Node_ComponentBoundEvent_3_CloseDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function Page_Hud_Recommand.Page_Hud_Recommand_C.BndEvt__CM_Num_Item_Regi_Pop_K2Node_ComponentBoundEvent_4_OnChangeCurrNumberValue__DelegateSignature
	 */
	struct UPage_Hud_Recommand_C_BndEvt__CM_Num_Item_Regi_Pop_K2Node_ComponentBoundEvent_4_OnChangeCurrNumberValue__DelegateSignature_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Page_Hud_Recommand.Page_Hud_Recommand_C.OnSetTitleText
	 */
	struct UPage_Hud_Recommand_C_OnSetTitleText_Params
	{
	public:
		class FText                                                TitleText;                                               // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Page_Hud_Recommand.Page_Hud_Recommand_C.ExecuteUbergraph_Page_Hud_Recommand
	 */
	struct UPage_Hud_Recommand_C_ExecuteUbergraph_Page_Hud_Recommand_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
