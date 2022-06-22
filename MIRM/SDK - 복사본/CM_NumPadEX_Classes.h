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
	 * WidgetBlueprintGeneratedClass CM_NumPadEX.CM_NumPadEX_C
	 * Size -> 0x00FC (FullSize[0x0414] - InheritedSize[0x0318])
	 */
	class UCM_NumPadEX_C : public UMirNumberPadPrefab
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0318(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCM_NumPadElements_C*                                Back_btn;                                                // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirImage*                                           Blocking_img;                                            // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_NumPadElements_C*                                Clear_btn;                                               // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_PlusMinuSet_C*                                   CM_NumPadEX_Plus_Minus_Set;                              // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_NumPadElements_C*                                Max_btn;                                                 // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_NumPadElements_C*                                NumpadBtn_1;                                             // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_NumPadElements_C*                                NumpadBtn_11;                                            // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_NumPadElements_C*                                NumpadBtn_51;                                            // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_NumPadElements_C*                                NumpadBtn_101;                                           // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_NumPadElements_C*                                NumpadBtn_01;                                            // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_NumPadElements_C*                                NumpadBtn_02;                                            // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_NumPadElements_C*                                NumpadBtn_03;                                            // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_NumPadElements_C*                                NumpadBtn_04;                                            // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_NumPadElements_C*                                NumpadBtn_05;                                            // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_NumPadElements_C*                                NumpadBtn_06;                                            // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_NumPadElements_C*                                NumpadBtn_07;                                            // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_NumPadElements_C*                                NumpadBtn_08;                                            // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_NumPadElements_C*                                NumpadBtn_09;                                            // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             SetMaximuState_DP;                                       // 0x03B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnOverValueEvent_DP;                                     // 0x03C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnChangeCurrNumberValue_DP;                              // 0x03D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OninitStateDispatcher;                                   // 0x03E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnMaxStateDispatcher;                                    // 0x03F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnMinStateDispatcher;                                    // 0x0400(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       UseInitDispatcher;                                       // 0x0410(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       UseMinDispatcher;                                        // 0x0411(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       UseMaxDispatcher;                                        // 0x0412(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       HidePlusMinusSet;                                        // 0x0413(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void NumValue_Set_Function(const class FText& InText);
		void SetAddButtonEnable(bool NewParam);
		void BndEvt__NumpadBtn_09_K2Node_ComponentBoundEvent_10_OnClickNumBtn__DelegateSignature();
		void BndEvt__NumpadBtn_08_K2Node_ComponentBoundEvent_9_OnClickNumBtn__DelegateSignature();
		void OnOverValueEvent();
		void OnChangeCurrNumberValue(int32_t currValue);
		void BndEvt__NumpadBtn_07_K2Node_ComponentBoundEvent_8_OnClickNumBtn__DelegateSignature();
		void BndEvt__NumpadBtn_06_K2Node_ComponentBoundEvent_7_OnClickNumBtn__DelegateSignature();
		void BndEvt__NumpadBtn_05_K2Node_ComponentBoundEvent_6_OnClickNumBtn__DelegateSignature();
		void BndEvt__NumpadBtn_04_K2Node_ComponentBoundEvent_5_OnClickNumBtn__DelegateSignature();
		void BndEvt__NumpadBtn_03_K2Node_ComponentBoundEvent_4_OnClickNumBtn__DelegateSignature();
		void BndEvt__NumpadBtn_02_K2Node_ComponentBoundEvent_3_OnClickNumBtn__DelegateSignature();
		void BndEvt__NumpadBtn_01_K2Node_ComponentBoundEvent_2_OnClickNumBtn__DelegateSignature();
		void BndEvt__NumpadBtn_0_K2Node_ComponentBoundEvent_0_OnClickNumBtn__DelegateSignature();
		void BndEvt__CM_NumPadEX_Plus_Minus_Set_K2Node_ComponentBoundEvent_12_MinusBtn__DelegateSignature();
		void BndEvt__CM_NumPadEX_Plus_Minus_Set_K2Node_ComponentBoundEvent_15_PlusBtn__DelegateSignature();
		void BndEvt__NumpadBtn_10_K2Node_ComponentBoundEvent_17_OnClickNumBtn__DelegateSignature();
		void BndEvt__NumpadBtn_50_K2Node_ComponentBoundEvent_18_OnClickNumBtn__DelegateSignature();
		void BndEvt__NumpadBtn_100_K2Node_ComponentBoundEvent_19_OnClickNumBtn__DelegateSignature();
		void BndEvt__Max_btn_K2Node_ComponentBoundEvent_20_OnClickNumBtn__DelegateSignature();
		void BndEvt__Clear_btn_K2Node_ComponentBoundEvent_21_OnClickNumBtn__DelegateSignature();
		void BndEvt__Back_btn_K2Node_ComponentBoundEvent_22_OnClickNumBtn__DelegateSignature();
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_CM_NumPadEX(int32_t EntryPoint);
		void OnMinStateDispatcher__DelegateSignature();
		void OnMaxStateDispatcher__DelegateSignature();
		void OninitStateDispatcher__DelegateSignature();
		void OnChangeCurrNumberValue_DP__DelegateSignature(int32_t currNumberValue);
		void OnOverValueEvent_DP__DelegateSignature();
		void SetMaximuState_DP__DelegateSignature(bool ismaximumState);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
