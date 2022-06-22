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
	 * Function HUD_PartyMatching.HUD_PartyMatching_C.Matching_Swich
	 */
	struct UHUD_PartyMatching_C_Matching_Swich_Params
	{
	public:
		class FName                                                Selection;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function HUD_PartyMatching.HUD_PartyMatching_C.BndEvt__CM_User_Confirm_slot_K2Node_ComponentBoundEvent_0_Yes_Btn_dispatch__DelegateSignature
	 */
	struct UHUD_PartyMatching_C_BndEvt__CM_User_Confirm_slot_K2Node_ComponentBoundEvent_0_Yes_Btn_dispatch__DelegateSignature_Params
	{	};

	/**
	 * Function HUD_PartyMatching.HUD_PartyMatching_C.BndEvt__CM_User_Confirm_slot_K2Node_ComponentBoundEvent_1_No_Btn_dispatch__DelegateSignature
	 */
	struct UHUD_PartyMatching_C_BndEvt__CM_User_Confirm_slot_K2Node_ComponentBoundEvent_1_No_Btn_dispatch__DelegateSignature_Params
	{	};

	/**
	 * Function HUD_PartyMatching.HUD_PartyMatching_C.BndEvt__Matching_Cancel_btn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UHUD_PartyMatching_C_BndEvt__Matching_Cancel_btn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function HUD_PartyMatching.HUD_PartyMatching_C.Destruct
	 */
	struct UHUD_PartyMatching_C_Destruct_Params
	{	};

	/**
	 * Function HUD_PartyMatching.HUD_PartyMatching_C.Construct
	 */
	struct UHUD_PartyMatching_C_Construct_Params
	{	};

	/**
	 * Function HUD_PartyMatching.HUD_PartyMatching_C.ChangeToAutoMatchingUIState
	 */
	struct UHUD_PartyMatching_C_ChangeToAutoMatchingUIState_Params
	{	};

	/**
	 * Function HUD_PartyMatching.HUD_PartyMatching_C.ChangeToVoteUIState
	 */
	struct UHUD_PartyMatching_C_ChangeToVoteUIState_Params
	{
	public:
		bool                                                       bIsManyUser;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsWating;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_PartyMatching.HUD_PartyMatching_C.PreConstruct
	 */
	struct UHUD_PartyMatching_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HUD_PartyMatching.HUD_PartyMatching_C.ExecuteUbergraph_HUD_PartyMatching
	 */
	struct UHUD_PartyMatching_C_ExecuteUbergraph_HUD_PartyMatching_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
