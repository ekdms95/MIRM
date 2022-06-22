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
	 * WidgetBlueprintGeneratedClass HUD_BuffBox_Pop.HUD_BuffBox_Pop_C
	 * Size -> 0x0090 (FullSize[0x0460] - InheritedSize[0x03D0])
	 */
	class UHUD_BuffBox_Pop_C : public UMyBuff_Popup
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCM_TabBtn_C*                                        Buff_tab_btn;                                            // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        BuffBox;                                                 // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirCanvasPanel*                                     BuffPanel;                                               // 0x03E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_TabBtn_C*                                        DeBuff_tab_btn;                                          // 0x03F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        DeBuffBox;                                               // 0x03F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirCanvasPanel*                                     DeBuffPanel;                                             // 0x0400(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_Tab_Popup_Set_C*                                 HUD_BuffBox_Pop;                                         // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHUD_BuffBox_Pop_Elem_C*                             HUD_BuffBox_Pop_Elem;                                    // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHUD_BuffBox_Pop_Elem_C*                             HUD_BuffBox_Pop_Elem_2;                                  // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHUD_BuffBox_Pop_Elem_C*                             HUD_BuffBox_Pop_Elem_3;                                  // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_TabBtn_C*                                        Passive_tab_btn;                                         // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        PassiveBuffBox;                                          // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirCanvasPanel*                                     PassivePanel;                                            // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             NewEventDispatcher_1;                                    // 0x0440(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             CLoseDispather;                                          // 0x0450(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void BndEvt__HUD_BuffBox_Pop_K2Node_ComponentBoundEvent_0_PopClose__DelegateSignature();
		void OnPreSet();
		void BndEvt__Buff_tab_btn_K2Node_ComponentBoundEvent_1_OnTabStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__DeBuff_tab_btn_K2Node_ComponentBoundEvent_2_OnTabStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__Passive_tab_btn_K2Node_ComponentBoundEvent_3_OnTabStateChanged__DelegateSignature(bool bIsChecked);
		void OnSetActive(bool IsOn);
		void ExecuteUbergraph_HUD_BuffBox_Pop(int32_t EntryPoint);
		void CLoseDispather__DelegateSignature();
		void NewEventDispatcher_0__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
