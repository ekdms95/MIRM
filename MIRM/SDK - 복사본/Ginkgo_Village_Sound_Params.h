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
	 * Function Ginkgo_Village_Sound.Ginkgo_Village_Sound_C.ReceiveEndPlay
	 */
	struct AGinkgo_Village_Sound_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ginkgo_Village_Sound.Ginkgo_Village_Sound_C.ReceiveBeginPlay
	 */
	struct AGinkgo_Village_Sound_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Ginkgo_Village_Sound.Ginkgo_Village_Sound_C.BndEvt__Ginkgo_Village_Sound_Sound_TrigerVolume_001_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature
	 */
	struct AGinkgo_Village_Sound_C_BndEvt__Ginkgo_Village_Sound_Sound_TrigerVolume_001_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ginkgo_Village_Sound.Ginkgo_Village_Sound_C.BndEvt__Ginkgo_Village_Sound_Sound_TrigerVolume_001_K2Node_ActorBoundEvent_5_ActorEndOverlapSignature__DelegateSignature
	 */
	struct AGinkgo_Village_Sound_C_BndEvt__Ginkgo_Village_Sound_Sound_TrigerVolume_001_K2Node_ActorBoundEvent_5_ActorEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ginkgo_Village_Sound.Ginkgo_Village_Sound_C.ExecuteUbergraph_Ginkgo_Village_Sound
	 */
	struct AGinkgo_Village_Sound_C_ExecuteUbergraph_Ginkgo_Village_Sound_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
