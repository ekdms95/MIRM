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
	 * WidgetBlueprintGeneratedClass CM_Btn_Plus_R.CM_Btn_Plus_R_C
	 * Size -> 0x0048 (FullSize[0x0428] - InheritedSize[0x03E0])
	 */
	class UCM_Btn_Plus_R_C : public UButtonPrefab
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    UIAni_Btn;                                               // 0x03E8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UMirButton*                                          Plus_btn;                                                // 0x03F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirTextBlock*                                       PlusTitle_txt;                                           // 0x03F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             ClickDispatcher;                                         // 0x0400(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             PressedDispatcher;                                       // 0x0410(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      PressTime;                                               // 0x0420(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Initvalue;                                               // 0x0424(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetNumberText(int32_t NewParam);
		void BtnImgStatus(const class FName& ImgStatus);
		void GetButton(class UMirButton** Button);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__MirButton_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__MirButton_0_K2Node_ComponentBoundEvent_29_OnButtonPressedEvent__DelegateSignature();
		void BndEvt__MirButton_0_K2Node_ComponentBoundEvent_56_OnButtonReleasedEvent__DelegateSignature();
		void BndEvt__MirButton_0_K2Node_ComponentBoundEvent_63_OnButtonHoverEvent__DelegateSignature();
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void OnChangeEnableState(bool IsDisabled);
		void ExecuteUbergraph_CM_Btn_Plus_R(int32_t EntryPoint);
		void PressedDispatcher__DelegateSignature();
		void ClickDispatcher__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
