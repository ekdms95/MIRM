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
	 * Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.ActiveHUD
	 */
	struct ABP_ObjectTriggerQuestObjectControl_C_ActiveHUD_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.OnExit
	 */
	struct ABP_ObjectTriggerQuestObjectControl_C_OnExit_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.OnCheck
	 */
	struct ABP_ObjectTriggerQuestObjectControl_C_OnCheck_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.SetObjectCollision
	 */
	struct ABP_ObjectTriggerQuestObjectControl_C_SetObjectCollision_Params
	{	};

	/**
	 * Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.IsAlwaysPlacement
	 */
	struct ABP_ObjectTriggerQuestObjectControl_C_IsAlwaysPlacement_Params
	{
	public:
		bool                                                       bAlwaysPlacement;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.SetObjectData
	 */
	struct ABP_ObjectTriggerQuestObjectControl_C_SetObjectData_Params
	{	};

	/**
	 * Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.UserConstructionScript
	 */
	struct ABP_ObjectTriggerQuestObjectControl_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.ReceiveBeginPlay
	 */
	struct ABP_ObjectTriggerQuestObjectControl_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.ActiveGizmo
	 */
	struct ABP_ObjectTriggerQuestObjectControl_C_ActiveGizmo_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.OnSetActor
	 */
	struct ABP_ObjectTriggerQuestObjectControl_C_OnSetActor_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.SetActive_Blueprint
	 */
	struct ABP_ObjectTriggerQuestObjectControl_C_SetActive_Blueprint_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.OnSetEffect
	 */
	struct ABP_ObjectTriggerQuestObjectControl_C_OnSetEffect_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.SetNameTagText
	 */
	struct ABP_ObjectTriggerQuestObjectControl_C_SetNameTagText_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.SetNameTagIcon
	 */
	struct ABP_ObjectTriggerQuestObjectControl_C_SetNameTagIcon_Params
	{
	public:
		class FString                                              IconName;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.SetNameTagAnimation
	 */
	struct ABP_ObjectTriggerQuestObjectControl_C_SetNameTagAnimation_Params
	{
	public:
		EMirQuestProgressHUDAnimationType                          AnimationType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.ButtonClickEvent
	 */
	struct ABP_ObjectTriggerQuestObjectControl_C_ButtonClickEvent_Params
	{	};

	/**
	 * Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.OnStartProgress
	 */
	struct ABP_ObjectTriggerQuestObjectControl_C_OnStartProgress_Params
	{	};

	/**
	 * Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.OnCompleteProgress
	 */
	struct ABP_ObjectTriggerQuestObjectControl_C_OnCompleteProgress_Params
	{	};

	/**
	 * Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.OnStopProgress
	 */
	struct ABP_ObjectTriggerQuestObjectControl_C_OnStopProgress_Params
	{	};

	/**
	 * Function BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C.ExecuteUbergraph_BP_ObjectTriggerQuestObjectControl
	 */
	struct ABP_ObjectTriggerQuestObjectControl_C_ExecuteUbergraph_BP_ObjectTriggerQuestObjectControl_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
