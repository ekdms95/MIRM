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
	 * Function MyPlayer_BP.MyPlayer_BP_C.UpdatePointLight
	 */
	struct AMyPlayer_BP_C_UpdatePointLight_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyPlayer_BP.MyPlayer_BP_C.ExitPointLightTrigger
	 */
	struct AMyPlayer_BP_C_ExitPointLightTrigger_Params
	{
	public:
		bool                                                       InForceUpdate;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyPlayer_BP.MyPlayer_BP_C.EnterPointLightTrigger
	 */
	struct AMyPlayer_BP_C_EnterPointLightTrigger_Params
	{
	public:
		bool                                                       InForceUpdate;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyPlayer_BP.MyPlayer_BP_C.타임라인_0__FinishedFunc
	 */
	struct AMyPlayer_BP_C_타임라인_0__FinishedFunc_Params
	{	};

	/**
	 * Function MyPlayer_BP.MyPlayer_BP_C.타임라인_0__UpdateFunc
	 */
	struct AMyPlayer_BP_C_타임라인_0__UpdateFunc_Params
	{	};

	/**
	 * Function MyPlayer_BP.MyPlayer_BP_C.타임라인_1__FinishedFunc
	 */
	struct AMyPlayer_BP_C_타임라인_1__FinishedFunc_Params
	{	};

	/**
	 * Function MyPlayer_BP.MyPlayer_BP_C.타임라인_1__UpdateFunc
	 */
	struct AMyPlayer_BP_C_타임라인_1__UpdateFunc_Params
	{	};

	/**
	 * Function MyPlayer_BP.MyPlayer_BP_C.CheckGrassCollision
	 */
	struct AMyPlayer_BP_C_CheckGrassCollision_Params
	{	};

	/**
	 * Function MyPlayer_BP.MyPlayer_BP_C.ReceiveBeginPlay
	 */
	struct AMyPlayer_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MyPlayer_BP.MyPlayer_BP_C.OnStartSkillEvent
	 */
	struct AMyPlayer_BP_C_OnStartSkillEvent_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyPlayer_BP.MyPlayer_BP_C.OnSetTargetInfo
	 */
	struct AMyPlayer_BP_C_OnSetTargetInfo_Params
	{	};

	/**
	 * Function MyPlayer_BP.MyPlayer_BP_C.BndEvt__VehicleSkeletalMesh__K2Node_ComponentBoundEvent_11_ActorComponentDeactivateSignature__DelegateSignature
	 */
	struct AMyPlayer_BP_C_BndEvt__VehicleSkeletalMesh__K2Node_ComponentBoundEvent_11_ActorComponentDeactivateSignature__DelegateSignature_Params
	{
	public:
		class UActorComponent*                                     Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyPlayer_BP.MyPlayer_BP_C.BndEvt__VehicleSkeletalMesh__K2Node_ComponentBoundEvent_0_OnAnimInitialized__DelegateSignature
	 */
	struct AMyPlayer_BP_C_BndEvt__VehicleSkeletalMesh__K2Node_ComponentBoundEvent_0_OnAnimInitialized__DelegateSignature_Params
	{	};

	/**
	 * Function MyPlayer_BP.MyPlayer_BP_C.ReceiveTick
	 */
	struct AMyPlayer_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyPlayer_BP.MyPlayer_BP_C.OnScanEffectEvent
	 */
	struct AMyPlayer_BP_C_OnScanEffectEvent_Params
	{	};

	/**
	 * Function MyPlayer_BP.MyPlayer_BP_C.OnCancelSkillEvent
	 */
	struct AMyPlayer_BP_C_OnCancelSkillEvent_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyPlayer_BP.MyPlayer_BP_C.OnSetLookAt
	 */
	struct AMyPlayer_BP_C_OnSetLookAt_Params
	{
	public:
		bool                                                       IsLookAt;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             position;                                                // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyPlayer_BP.MyPlayer_BP_C.OnSetBoneShake
	 */
	struct AMyPlayer_BP_C_OnSetBoneShake_Params
	{
	public:
		bool                                                       IsBoneShake;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MyPlayer_BP.MyPlayer_BP_C.ExecuteUbergraph_MyPlayer_BP
	 */
	struct AMyPlayer_BP_C_ExecuteUbergraph_MyPlayer_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MyPlayer_BP.MyPlayer_BP_C.OnSetTatgetUIDDispatcher__DelegateSignature
	 */
	struct AMyPlayer_BP_C_OnSetTatgetUIDDispatcher__DelegateSignature_Params
	{	};

	/**
	 * Function MyPlayer_BP.MyPlayer_BP_C.OnStartSkillDispatcher__DelegateSignature
	 */
	struct AMyPlayer_BP_C_OnStartSkillDispatcher__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsSkillActivate;                                         // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
