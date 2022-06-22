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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass MyPlayer_BP.MyPlayer_BP_C
	 * Size -> 0x0124 (FullSize[0x1594] - InheritedSize[0x1470])
	 */
	class AMyPlayer_BP_C : public AMyMirPlayer
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1470(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USpotLightComponent*                                 SpotLight_Shadow;                                        // 0x1478(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpotLightComponent*                                 SpotLight;                                               // 0x1480(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SM_PlayerShadow;                                         // 0x1488(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       LevelStreamingActor;                                     // 0x1490(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                PointLight_Shadow;                                       // 0x1498(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      _____1______0_6319BC5B45871B3F92E5CCAD98CA44A9;          // 0x14A0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         _____1__Direction_6319BC5B45871B3F92E5CCAD98CA44A9;      // 0x14A4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_47EO[0x3];                                   // 0x14A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  타임라인_2;                                                  // 0x14A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      _____0______0_0E67C04F4D60BA5CBFE1208E1B44C32E;          // 0x14B0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         _____0__Direction_0E67C04F4D60BA5CBFE1208E1B44C32E;      // 0x14B4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1SOM[0x3];                                   // 0x14B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  타임라인_1;                                                  // 0x14B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AlphaValue;                                              // 0x14C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_780E[0x4];                                   // 0x14C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnStartSkillDispatcher;                                  // 0x14C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSetTatgetUIDDispatcher;                                // 0x14D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsHide;                                                  // 0x14E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UDRD[0x7];                                   // 0x14E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAutoPlayProcessUnit                                AutoUnit;                                                // 0x14F0(0x0068) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    SkillIndex;                                              // 0x1558(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NewVar_1;                                                // 0x155C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       NewVar_2;                                                // 0x1560(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsOnPointLight;                                          // 0x1561(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z1SJ[0x2];                                   // 0x1562(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PLIntensity;                                             // 0x1564(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      EnterPLTriggerTime;                                      // 0x1568(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ExitPLTriggerTime;                                       // 0x156C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsUpdatePLTrigger;                                       // 0x1570(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6DYK[0x3];                                   // 0x1571(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AccumulateTime;                                          // 0x1574(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SLIntensity;                                             // 0x1578(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsOnSpotLight;                                           // 0x157C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FL7W[0x3];                                   // 0x157D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              execGmItemGet;                                           // 0x1580(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		int32_t                                                    item_id;                                                 // 0x1590(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdatePointLight(float DeltaTime);
		void ExitPointLightTrigger(bool InForceUpdate);
		void EnterPointLightTrigger(bool InForceUpdate);
		void 타임라인_0__FinishedFunc();
		void 타임라인_0__UpdateFunc();
		void 타임라인_1__FinishedFunc();
		void 타임라인_1__UpdateFunc();
		void CheckGrassCollision();
		void ReceiveBeginPlay();
		void OnStartSkillEvent(int32_t Index);
		void OnSetTargetInfo();
		void BndEvt__VehicleSkeletalMesh__K2Node_ComponentBoundEvent_11_ActorComponentDeactivateSignature__DelegateSignature(class UActorComponent* Component);
		void BndEvt__VehicleSkeletalMesh__K2Node_ComponentBoundEvent_0_OnAnimInitialized__DelegateSignature();
		void ReceiveTick(float DeltaSeconds);
		void OnScanEffectEvent();
		void OnCancelSkillEvent(int32_t Index);
		void OnSetLookAt(bool IsLookAt, const struct FVector& position);
		void OnSetBoneShake(bool IsBoneShake);
		void ExecuteUbergraph_MyPlayer_BP(int32_t EntryPoint);
		void OnSetTatgetUIDDispatcher__DelegateSignature();
		void OnStartSkillDispatcher__DelegateSignature(int32_t Index, bool IsSkillActivate);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
