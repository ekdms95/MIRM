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
	 * Function CM_TabBtn.CM_TabBtn_C.Bottom_2ndTab_Set
	 */
	struct UCM_TabBtn_C_Bottom_2ndTab_Set_Params
	{	};

	/**
	 * Function CM_TabBtn.CM_TabBtn_C.SetNotifications
	 */
	struct UCM_TabBtn_C_SetNotifications_Params
	{
	public:
		TArray<E_NOTI_TYPE>                                        notiFlag;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CM_TabBtn.CM_TabBtn_C.GetRedDotWidget
	 */
	struct UCM_TabBtn_C_GetRedDotWidget_Params
	{
	public:
		class UUserWidget*                                         Widget;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_TabBtn.CM_TabBtn_C.PreConstruct
	 */
	struct UCM_TabBtn_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CM_TabBtn.CM_TabBtn_C.OnInit
	 */
	struct UCM_TabBtn_C_OnInit_Params
	{	};

	/**
	 * Function CM_TabBtn.CM_TabBtn_C.Construct
	 */
	struct UCM_TabBtn_C_Construct_Params
	{	};

	/**
	 * Function CM_TabBtn.CM_TabBtn_C.OnSetTabSize
	 */
	struct UCM_TabBtn_C_OnSetTabSize_Params
	{
	public:
		float                                                      Width;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Height;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_TabBtn.CM_TabBtn_C.BndEvt__CM_TabBtn_PageTab01_tabcan_K2Node_ComponentBoundEvent_0_OnTabCanvasCheckStateChanged__DelegateSignature
	 */
	struct UCM_TabBtn_C_BndEvt__CM_TabBtn_PageTab01_tabcan_K2Node_ComponentBoundEvent_0_OnTabCanvasCheckStateChanged__DelegateSignature_Params
	{
	public:
		EMirCheckBoxState                                          CheckState;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_TabBtn.CM_TabBtn_C.OnPreSet
	 */
	struct UCM_TabBtn_C_OnPreSet_Params
	{	};

	/**
	 * Function CM_TabBtn.CM_TabBtn_C.ExecuteUbergraph_CM_TabBtn
	 */
	struct UCM_TabBtn_C_ExecuteUbergraph_CM_TabBtn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CM_TabBtn.CM_TabBtn_C.ClickDispatcher__DelegateSignature
	 */
	struct UCM_TabBtn_C_ClickDispatcher__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
