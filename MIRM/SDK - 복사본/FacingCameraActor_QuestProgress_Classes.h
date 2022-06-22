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
	 * BlueprintGeneratedClass FacingCameraActor_QuestProgress.FacingCameraActor_QuestProgress_C
	 * Size -> 0x0048 (FullSize[0x02A0] - InheritedSize[0x0258])
	 */
	class AFacingCameraActor_QuestProgress_C : public AFacingCameraActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0258(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBoxComponent*                                       Box;                                                     // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    Widget;                                                  // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UHUD_QuestEvent_C*                                   UI_Widget;                                               // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             ButtonClickEventDispatcher;                              // 0x0280(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             CompleteEventDispatcher;                                 // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void SetIconImage(const class FString& IconName);
		void StopProgress();
		void OnSetActor(bool bActive);
		void ReadyProgress();
		void ButtonActive(bool bActive);
		void CompleteProgress();
		void PlayAnimation(EMirQuestProgressHUDAnimationType AnimationType);
		void SetNameTagText(const class FString& Text);
		void ReceiveBeginPlay();
		void ReceiveActorOnInputTouchBegin(ETouchIndex FingerIndex);
		void CompleteEventDispatcher_Event_1();
		void ExecuteUbergraph_FacingCameraActor_QuestProgress(int32_t EntryPoint);
		void CompleteEventDispatcher__DelegateSignature();
		void ButtonClickEventDispatcher__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
