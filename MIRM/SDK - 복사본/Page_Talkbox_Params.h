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
	 * Function Page_Talkbox.Page_Talkbox_C.ClearVoiceSound
	 */
	struct UPage_Talkbox_C_ClearVoiceSound_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Page_Talkbox.Page_Talkbox_C.ResetText
	 */
	struct UPage_Talkbox_C_ResetText_Params
	{	};

	/**
	 * Function Page_Talkbox.Page_Talkbox_C.GetImagePath
	 */
	struct UPage_Talkbox_C_GetImagePath_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FString>                                      ImagePathList;                                           // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Page_Talkbox.Page_Talkbox_C.SkipContents
	 */
	struct UPage_Talkbox_C_SkipContents_Params
	{	};

	/**
	 * Function Page_Talkbox.Page_Talkbox_C.SetName
	 */
	struct UPage_Talkbox_C_SetName_Params
	{
	public:
		TArray<class FString>                                      NameList;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<bool>                                               NpcTalkList;                                             // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    count;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Page_Talkbox.Page_Talkbox_C.OnTestAutoClick
	 */
	struct UPage_Talkbox_C_OnTestAutoClick_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Page_Talkbox.Page_Talkbox_C.InitContentsBox
	 */
	struct UPage_Talkbox_C_InitContentsBox_Params
	{	};

	/**
	 * Function Page_Talkbox.Page_Talkbox_C.SetContents
	 */
	struct UPage_Talkbox_C_SetContents_Params
	{
	public:
		TArray<class FText>                                        Text;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class FString>                                      ImagePath;                                               // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    ContentsCount;                                           // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Page_Talkbox.Page_Talkbox_C.OnInit
	 */
	struct UPage_Talkbox_C_OnInit_Params
	{
	public:
		class UTalkboxPageInitial*                                 InitialData;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Page_Talkbox.Page_Talkbox_C.BndEvt__MirButton_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UPage_Talkbox_C_BndEvt__MirButton_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Page_Talkbox.Page_Talkbox_C.OnClosePageAction
	 */
	struct UPage_Talkbox_C_OnClosePageAction_Params
	{
	public:
		float                                                      delaytime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Page_Talkbox.Page_Talkbox_C.OnAcceptPageAction
	 */
	struct UPage_Talkbox_C_OnAcceptPageAction_Params
	{	};

	/**
	 * Function Page_Talkbox.Page_Talkbox_C.BndEvt__MirButton_NextText_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UPage_Talkbox_C_BndEvt__MirButton_NextText_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Page_Talkbox.Page_Talkbox_C.CameraPosessEvent
	 */
	struct UPage_Talkbox_C_CameraPosessEvent_Params
	{
	public:
		class AMirCharacter*                                       Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ETalkboxCameraType                                         CameraType;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Page_Talkbox.Page_Talkbox_C.OnSetVisible
	 */
	struct UPage_Talkbox_C_OnSetVisible_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Page_Talkbox.Page_Talkbox_C.OnSetNPCTalkStatus
	 */
	struct UPage_Talkbox_C_OnSetNPCTalkStatus_Params
	{
	public:
		bool                                                       bnpctalk;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Page_Talkbox.Page_Talkbox_C.OnSetActive
	 */
	struct UPage_Talkbox_C_OnSetActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              Parameters;                                              // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Page_Talkbox.Page_Talkbox_C.BndEvt__Close_Btn_K2Node_ComponentBoundEvent_2_ClickDispatcher__DelegateSignature
	 */
	struct UPage_Talkbox_C_BndEvt__Close_Btn_K2Node_ComponentBoundEvent_2_ClickDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function Page_Talkbox.Page_Talkbox_C.OnPreSet
	 */
	struct UPage_Talkbox_C_OnPreSet_Params
	{	};

	/**
	 * Function Page_Talkbox.Page_Talkbox_C.SetTalkboxVisibility
	 */
	struct UPage_Talkbox_C_SetTalkboxVisibility_Params
	{
	public:
		bool                                                       bVisibility;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Page_Talkbox.Page_Talkbox_C.OnUpdateFavorabilityType
	 */
	struct UPage_Talkbox_C_OnUpdateFavorabilityType_Params
	{	};

	/**
	 * Function Page_Talkbox.Page_Talkbox_C.BndEvt__Page_Talkbox_CM_SkipBtn_K2Node_ComponentBoundEvent_5_ClickDispatch__DelegateSignature
	 */
	struct UPage_Talkbox_C_BndEvt__Page_Talkbox_CM_SkipBtn_K2Node_ComponentBoundEvent_5_ClickDispatch__DelegateSignature_Params
	{	};

	/**
	 * Function Page_Talkbox.Page_Talkbox_C.ExecuteUbergraph_Page_Talkbox
	 */
	struct UPage_Talkbox_C_ExecuteUbergraph_Page_Talkbox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
