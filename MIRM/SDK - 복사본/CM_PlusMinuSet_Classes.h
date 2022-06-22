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
	 * WidgetBlueprintGeneratedClass CM_PlusMinuSet.CM_PlusMinuSet_C
	 * Size -> 0x00AA (FullSize[0x030A] - InheritedSize[0x0260])
	 */
	class UCM_PlusMinuSet_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCM_RoundBtn_C*                                      Max_btn;                                                 // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_RoundBtn_C*                                      Min_btn;                                                 // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_Btn_Minus_R_C*                                   Minus_btn;                                               // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirButton*                                          NumPadOpen_btn;                                          // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTutorialHighlightPrefab_C*                          NumValue_Tuto;                                           // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirTextBlock*                                       NumValue_txt;                                            // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirImage*                                           NumValueBg_img;                                          // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_Btn_Plus_R_C*                                    Plus_btn;                                                // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirTextBlock*                                       Second_Num_txt;                                          // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FVector2D                                           Bg_Size;                                                 // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             MinusBtn;                                                // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             PlusBtn;                                                 // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             NumpadOpenBtn;                                           // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             MinBtn;                                                  // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             MaxBtn;                                                  // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       ShowMinMax;                                              // 0x0308(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		ESlateVisibility                                           _2nd_Num_visi;                                           // 0x0309(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetMoveBtnText(int32_t Number);
		void SetButtonState(unsigned char State);
		void GetNumberText(class UMirTextBlock** Text);
		void BndEvt__CM_Btn_Plus_K2Node_ComponentBoundEvent_2_ClickDispatcher__DelegateSignature();
		void BndEvt__NumPadOpen_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__CM_Btn_Minus_R_K2Node_ComponentBoundEvent_0_ClickDispatcher__DelegateSignature();
		void BndEvt__CM_Btn_Minus_K2Node_ComponentBoundEvent_5_PressedDispatcher__DelegateSignature();
		void BndEvt__CM_Btn_Plus_K2Node_ComponentBoundEvent_6_PressedDispatcher__DelegateSignature();
		void BndEvt__Max_btn_K2Node_ComponentBoundEvent_3_ClickDispatcher__DelegateSignature();
		void BndEvt__Max_btn_K2Node_ComponentBoundEvent_4_PressedDispatcher__DelegateSignature();
		void BndEvt__Min_btn_K2Node_ComponentBoundEvent_7_ClickDispatcher__DelegateSignature();
		void BndEvt__Min_btn_K2Node_ComponentBoundEvent_8_PressedDispatcher__DelegateSignature();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_CM_PlusMinuSet(int32_t EntryPoint);
		void MaxBtn__DelegateSignature();
		void MinBtn__DelegateSignature();
		void NumpadOpenBtn__DelegateSignature();
		void PlusBtn__DelegateSignature();
		void MinusBtn__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
