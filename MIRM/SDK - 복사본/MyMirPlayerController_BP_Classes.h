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
	 * BlueprintGeneratedClass MyMirPlayerController_BP.MyMirPlayerController_BP_C
	 * Size -> 0x0034 (FullSize[0x0814] - InheritedSize[0x07E0])
	 */
	class AMyMirPlayerController_BP_C : public AMyMirPlayerController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x07E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       IsPlayerAttackState;                                     // 0x07E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7U7K[0x7];                                   // 0x07E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             BindOnSetAutoProcess;                                    // 0x07F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UUserWidget*                                         Camerawidget;                                            // 0x0800(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsCamRot;                                                // 0x0808(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_80TU[0x3];                                   // 0x0809(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PinchValue;                                              // 0x080C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TempPinchZoom;                                           // 0x0810(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetPlayerAttackState(bool isattack);
		void InpActEvt_Android_Back_K2Node_InputKeyEvent_2(const struct FInputCore_FKey& Key);
		void InpActEvt_Touch1_K2Node_InputActionEvent_1(const struct FInputCore_FKey& Key);
		void InpActEvt_BackSpace_K2Node_InputKeyEvent_1(const struct FInputCore_FKey& Key);
		void OnTouchMove(bool ControlTouchMove);
		void OnGamePadMove(bool ControlTouchMove);
		void InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_1(float AxisValue);
		void InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_2(float AxisValue);
		void OnSetAutoProcessToUI(const struct FAutoPlayProcessUnit& AutoPlayProcessUnit);
		void BeginPlayEnd();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void InpAxisEvt_PinchZoom_K2Node_InputAxisEvent_1(float AxisValue);
		void ExecuteUbergraph_MyMirPlayerController_BP(int32_t EntryPoint);
		void BindOnSetAutoProcess__DelegateSignature(const struct FAutoPlayProcessUnit& AutoPlayProcessUnit);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
