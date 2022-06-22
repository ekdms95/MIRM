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
	 * BlueprintGeneratedClass MyMirPlayerCameraManager_BP.MyMirPlayerCameraManager_BP_C
	 * Size -> 0x0038 (FullSize[0x2D18] - InheritedSize[0x2CE0])
	 */
	class AMyMirPlayerCameraManager_BP_C : public AMirPlayerCameraManager
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x2CE0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FScriptMulticastDelegate                             CharacterZoomDispatcher;                                 // 0x2CE8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       isZoom;                                                  // 0x2CF8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsHide;                                                  // 0x2CF9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EZJB[0x6];                                   // 0x2CFA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             TestUIHideDispather;                                     // 0x2D00(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UUserWidget*                                         camerawidet;                                             // 0x2D10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void IsZoomState(bool* isZoom);
		void InpActEvt_Tab_K2Node_InputKeyEvent_1(const struct FInputCore_FKey& Key);
		void InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1(float AxisValue);
		void OnSetCharacterZoom(bool isZoom);
		void ReceiveBeginPlay();
		void OnTestUIHideEvent();
		void OnSetEditCameraRotation(bool isZoom);
		void ExecuteUbergraph_MyMirPlayerCameraManager_BP(int32_t EntryPoint);
		void TestUIHideDispather__DelegateSignature(bool IsHide);
		void CharacterZoomDispatcher__DelegateSignature(bool isZoom);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
