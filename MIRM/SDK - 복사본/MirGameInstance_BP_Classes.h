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
	 * BlueprintGeneratedClass MirGameInstance_BP.MirGameInstance_BP_C
	 * Size -> 0x0078 (FullSize[0x0A00] - InheritedSize[0x0988])
	 */
	class UMirGameInstance_BP_C : public UMirGameInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0988(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FText                                                ToastText;                                               // 0x0990(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bIsActiveToast;                                          // 0x09A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIsDisableTime;                                          // 0x09A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CFJ4[0x6];                                   // 0x09AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBlackCurtainWidget*                                 CurtainWidget;                                           // 0x09B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ATeleportLoadingActor*                               TeleportEffectActor;                                     // 0x09B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FText>                                        ToastMessageStackArray;                                  // 0x09C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UToastMessageWidget*                                 ToastMessageWidget;                                      // 0x09D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUserWidget*                                         LoadingServerWidget;                                     // 0x09D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     sound;                                                   // 0x09E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUserWidget*                                         ResetOptionWidget;                                       // 0x09E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             ToastEventDispatcehr;                                    // 0x09F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, BlueprintAssignable, BlueprintCallable

	public:
		void BGM_Sound(class USoundBase* sound, float VolumeMultiplier, bool bPersistAcrossLevelTransition);
		void SetNoticeAddItemWithImage(int32_t ItemIndex);
		void SetNoticeWorldBossMessageWithText(const class FText& Text);
		void OnEventToastMsgDelayTime();
		void SetNoticeBossMessageWithText(const class FText& Text);
		void CallBlackCurtain(bool IsOn, ESlateVisibility slateVisibility);
		void BeginServerReconnectScreenEvent();
		void EndServerReconnectScreenEvent();
		void OnChekToastStack(const class FText& ToastMsg);
		void BeginLoadingScreenEvent(int32_t MapIndex, bool IsTeleport, bool IsEditor);
		void ToastMessageArrayClear(bool bIsClearMessage);
		void OnToastMessage(const class FText& Text, bool bIsUIEvent);
		void OnToastMessageWithoutDuplicate(const class FText& Text);
		void BeginResetOptionScreenEvent();
		void EndResetOptionEvent();
		void OnSetToastMessageWithText(const class FText& Text, bool bIsoverlap, bool bIsClearMessage, bool bIsUIEvent);
		void OnSetToastMessageWithIndex(int32_t Index, bool bIsoverlap, bool bIsClearMessage, bool bIsUIEvent);
		void EndLoadingScreenEvent();
		void ExecuteUbergraph_MirGameInstance_BP(int32_t EntryPoint);
		void ToastEventDispatcehr__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
