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
	 * Function Hud_Mission_Info.Hud_Mission_Info_C.UpdateQuestContext
	 */
	struct UHud_Mission_Info_C_UpdateQuestContext_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Hud_Mission_Info.Hud_Mission_Info_C.UpdateQuestTitle
	 */
	struct UHud_Mission_Info_C_UpdateQuestTitle_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Hud_Mission_Info.Hud_Mission_Info_C.UpdateQuestInfo1
	 */
	struct UHud_Mission_Info_C_UpdateQuestInfo1_Params
	{
	public:
		class FText                                                Context;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Hud_Mission_Info.Hud_Mission_Info_C.SetActive
	 */
	struct UHud_Mission_Info_C_SetActive_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hud_Mission_Info.Hud_Mission_Info_C.PlayActiveAni
	 */
	struct UHud_Mission_Info_C_PlayActiveAni_Params
	{
	public:
		bool                                                       bIsPlay;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hud_Mission_Info.Hud_Mission_Info_C.OnBindAutoButtonToController
	 */
	struct UHud_Mission_Info_C_OnBindAutoButtonToController_Params
	{	};

	/**
	 * Function Hud_Mission_Info.Hud_Mission_Info_C.BindOnSetAutoProcess_이벤트_1
	 */
	struct UHud_Mission_Info_C_BindOnSetAutoProcess_이벤트_1_Params
	{
	public:
		struct FAutoPlayProcessUnit                                AutoPlayProcessUnit;                                     // 0x0000(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Hud_Mission_Info.Hud_Mission_Info_C.BndEvt__MissionBox_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UHud_Mission_Info_C_BndEvt__MissionBox_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Hud_Mission_Info.Hud_Mission_Info_C.AutoClick
	 */
	struct UHud_Mission_Info_C_AutoClick_Params
	{	};

	/**
	 * Function Hud_Mission_Info.Hud_Mission_Info_C.Construct
	 */
	struct UHud_Mission_Info_C_Construct_Params
	{	};

	/**
	 * Function Hud_Mission_Info.Hud_Mission_Info_C.ExecuteUbergraph_Hud_Mission_Info
	 */
	struct UHud_Mission_Info_C_ExecuteUbergraph_Hud_Mission_Info_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
