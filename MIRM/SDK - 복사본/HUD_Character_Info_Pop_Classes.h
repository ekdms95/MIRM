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
	 * WidgetBlueprintGeneratedClass HUD_Character_Info_Pop.HUD_Character_Info_Pop_C
	 * Size -> 0x0061 (FullSize[0x0561] - InheritedSize[0x0500])
	 */
	class UHUD_Character_Info_Pop_C : public UHUD_CharacterStatusPop
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0500(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCM_TabBtn_C*                                        Basic_Info_Tab_btn;                                      // 0x0508(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCh_Info_Basic_Tab_C*                                Ch_Info_Basic_Tab;                                       // 0x0510(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCh_Info_Goods_Tab_C*                                Ch_Info_Goods_Tab;                                       // 0x0518(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCh_Info_Status_Tab_C*                               Ch_Info_Status_Tab;                                      // 0x0520(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_TabBtn_C*                                        Goods_Tab_btn;                                           // 0x0528(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_Tab_Popup_Set_C*                                 HUD_Character_Info_Pop;                                  // 0x0530(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_ToolTip_C*                                       HUD_Character_Info_ToolTip;                              // 0x0538(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirCanvasPanel*                                     HUD_Character_Info_ToolTip_Can;                          // 0x0540(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_TabBtn_C*                                        Status_Tab_btn;                                          // 0x0548(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             CloseDispatch;                                           // 0x0550(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       ShowToolTipCloseButton;                                  // 0x0560(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void SetChangeTab(int32_t tabIdx);
		void OnPreSet();
		void BndEvt__Basic_Info_Tab_btn_K2Node_ComponentBoundEvent_0_OnTabStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__Status_Tab_btn_K2Node_ComponentBoundEvent_1_OnTabStateChanged__DelegateSignature(bool bIsChecked);
		void OnInitailizeWidget(const class FString& Parameters);
		void OnSetActive();
		void BndEvt__HUD_Character_Info_Pop_K2Node_ComponentBoundEvent_3_PopClose__DelegateSignature();
		void BndEvt__Goods_Tab_btn_K2Node_ComponentBoundEvent_4_OnTabStateChanged__DelegateSignature(bool bIsChecked);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__HUD_Character_Info_Pop_HUD_Character_Info_ToolTip_K2Node_ComponentBoundEvent_2_CloseDispatcher__DelegateSignature();
		void ExecuteUbergraph_HUD_Character_Info_Pop(int32_t EntryPoint);
		void CloseDispatch__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
