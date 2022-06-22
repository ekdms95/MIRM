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
	 * BlueprintGeneratedClass BP_ObjectTriggerQuestObjectControl.BP_ObjectTriggerQuestObjectControl_C
	 * Size -> 0x008C (FullSize[0x032C] - InheritedSize[0x02A0])
	 */
	class ABP_ObjectTriggerQuestObjectControl_C : public AObjectTriggerDestPointProgressHUD
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            P_Questsign;                                             // 0x02A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBillboardComponent*                                 Billboard;                                               // 0x02B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class AActor*                                              MainActor;                                               // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AActor*>                                      SubActor;                                                // 0x02C0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
		struct FQuest_Object_TableEntity                           QuestObjectInfo;                                         // 0x02D0(0x0048) Edit, BlueprintVisible
		bool                                                       Init;                                                    // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EWP1[0x7];                                   // 0x0319(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AFacingCameraActor_QuestProgress_C*                  HUD;                                                     // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HUD_height;                                              // 0x0328(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ActiveHUD(bool bActive);
		bool OnExit();
		bool OnCheck();
		void SetObjectCollision();
		void IsAlwaysPlacement(bool* bAlwaysPlacement);
		void SetObjectData();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ActiveGizmo(bool IsActive);
		void OnSetActor(bool bActive);
		void SetActive_Blueprint(bool bActive);
		void OnSetEffect(bool bActive);
		void SetNameTagText(const class FString& Text);
		void SetNameTagIcon(const class FString& IconName);
		void SetNameTagAnimation(EMirQuestProgressHUDAnimationType AnimationType);
		void ButtonClickEvent();
		void OnStartProgress();
		void OnCompleteProgress();
		void OnStopProgress();
		void ExecuteUbergraph_BP_ObjectTriggerQuestObjectControl(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
