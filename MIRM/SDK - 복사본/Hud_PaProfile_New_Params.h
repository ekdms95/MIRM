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
	 * Function Hud_PaProfile_New.Hud_PaProfile_New_C.PartyPf_Status
	 */
	struct UHud_PaProfile_New_C_PartyPf_Status_Params
	{
	public:
		ESlateVisibility                                           User_Basic_visi;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      User_Basic_render;                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESlateVisibility                                           NoChannel_visi;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESlateVisibility                                           UserWating_visi;                                         // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_PaProfile_New.Hud_PaProfile_New_C.Tick
	 */
	struct UHud_PaProfile_New_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_PaProfile_New.Hud_PaProfile_New_C.ConnectCheck
	 */
	struct UHud_PaProfile_New_C_ConnectCheck_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       online;                                                  // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hud_PaProfile_New.Hud_PaProfile_New_C.OnExileVoteState
	 */
	struct UHud_PaProfile_New_C_OnExileVoteState_Params
	{
	public:
		bool                                                       isTarget;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    allowed;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    denied;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_PaProfile_New.Hud_PaProfile_New_C.OnInitialize
	 */
	struct UHud_PaProfile_New_C_OnInitialize_Params
	{
	public:
		bool                                                       IsOwner;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    zoneid;                                                  // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsOnLine;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hud_PaProfile_New.Hud_PaProfile_New_C.OnSetEmpty
	 */
	struct UHud_PaProfile_New_C_OnSetEmpty_Params
	{	};

	/**
	 * Function Hud_PaProfile_New.Hud_PaProfile_New_C.OnSetInviteUser_2
	 */
	struct UHud_PaProfile_New_C_OnSetInviteUser_2_Params
	{	};

	/**
	 * Function Hud_PaProfile_New.Hud_PaProfile_New_C.RegResource
	 */
	struct UHud_PaProfile_New_C_RegResource_Params
	{	};

	/**
	 * Function Hud_PaProfile_New.Hud_PaProfile_New_C.OnSetHpGauge
	 */
	struct UHud_PaProfile_New_C_OnSetHpGauge_Params
	{
	public:
		float                                                      Percent;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_PaProfile_New.Hud_PaProfile_New_C.BndEvt__Hud_PaProfile_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UHud_PaProfile_New_C_BndEvt__Hud_PaProfile_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Hud_PaProfile_New.Hud_PaProfile_New_C.BndEvt__MirButton_121_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UHud_PaProfile_New_C_BndEvt__MirButton_121_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Hud_PaProfile_New.Hud_PaProfile_New_C.PreConstruct
	 */
	struct UHud_PaProfile_New_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hud_PaProfile_New.Hud_PaProfile_New_C.OnDeadState
	 */
	struct UHud_PaProfile_New_C_OnDeadState_Params
	{
	public:
		bool                                                       isDead;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hud_PaProfile_New.Hud_PaProfile_New_C.ExecuteUbergraph_Hud_PaProfile_New
	 */
	struct UHud_PaProfile_New_C_ExecuteUbergraph_Hud_PaProfile_New_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Hud_PaProfile_New.Hud_PaProfile_New_C.List_Click_Dispatch__DelegateSignature
	 */
	struct UHud_PaProfile_New_C_List_Click_Dispatch__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
