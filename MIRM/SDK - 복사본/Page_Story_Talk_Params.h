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
	 * Function Page_Story_Talk.Page_Story_Talk_C.OnShowDialog
	 */
	struct UPage_Story_Talk_C_OnShowDialog_Params
	{
	public:
		bool                                                       isShow;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Page_Story_Talk.Page_Story_Talk_C.OnShowAll
	 */
	struct UPage_Story_Talk_C_OnShowAll_Params
	{
	public:
		bool                                                       isShow;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Page_Story_Talk.Page_Story_Talk_C.CheckNeedUpdate
	 */
	struct UPage_Story_Talk_C_CheckNeedUpdate_Params
	{
	public:
		ECutSceneDialogType                                        DialogType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TalkerId;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DialogID;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       result;                                                  // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Page_Story_Talk.Page_Story_Talk_C.SetLastDialogData
	 */
	struct UPage_Story_Talk_C_SetLastDialogData_Params
	{
	public:
		ECutSceneDialogType                                        DialogType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TalkerId;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DialogID;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Page_Story_Talk.Page_Story_Talk_C.ResetLastDialogData
	 */
	struct UPage_Story_Talk_C_ResetLastDialogData_Params
	{	};

	/**
	 * Function Page_Story_Talk.Page_Story_Talk_C.Tick
	 */
	struct UPage_Story_Talk_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Page_Story_Talk.Page_Story_Talk_C.OnInitialized
	 */
	struct UPage_Story_Talk_C_OnInitialized_Params
	{	};

	/**
	 * Function Page_Story_Talk.Page_Story_Talk_C.SetDialog
	 */
	struct UPage_Story_Talk_C_SetDialog_Params
	{
	public:
		ECutSceneDialogType                                        DialogType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TalkerId;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DialogID;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Page_Story_Talk.Page_Story_Talk_C.BndEvt__Page_Story_Talk_CM_SkipBtn_K2Node_ComponentBoundEvent_0_ClickDispatch__DelegateSignature
	 */
	struct UPage_Story_Talk_C_BndEvt__Page_Story_Talk_CM_SkipBtn_K2Node_ComponentBoundEvent_0_ClickDispatch__DelegateSignature_Params
	{	};

	/**
	 * Function Page_Story_Talk.Page_Story_Talk_C.ExecuteUbergraph_Page_Story_Talk
	 */
	struct UPage_Story_Talk_C_ExecuteUbergraph_Page_Story_Talk_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Page_Story_Talk.Page_Story_Talk_C.OnClickDispatcher__DelegateSignature
	 */
	struct UPage_Story_Talk_C_OnClickDispatcher__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
