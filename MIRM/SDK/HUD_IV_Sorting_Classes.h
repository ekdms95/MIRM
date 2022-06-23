#pragma once

/**
 * Name: MIRM
 * Version: 0623-2
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
	 * WidgetBlueprintGeneratedClass HUD_IV_Sorting.HUD_IV_Sorting_C
	 * Size -> 0x00D9 (FullSize[0x03D9] - InheritedSize[0x0300])
	 */
	class UHUD_IV_Sorting_C : public UListSortModulePrefab
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0300(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCM_Btn_C*                                           Algn_btn;                                                // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_Radio_Tab_C*                                     Amount_Tabbtn;                                           // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_Radio_Tab_C*                                     Ascending_Tabbtn;                                        // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpacer*                                             Bottom_Spacer;                                           // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirCanvasPanel*                                     Bottom_Spacer_can;                                       // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_Btn_Close_C*                                     CM_Btn_Close;                                            // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_Radio_Tab_C*                                     Descending_Tabbtn;                                       // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_Radio_Tab_C*                                     ETCGrade_Tabbtn;                                         // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_Radio_Tab_C*                                     Grade_Tabbtn;                                            // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        IV_Middle_ver;                                           // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpacer*                                             IV_SlotZone_OnOff_spacer;                                // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirCanvasPanel*                                     IV_SortingZne_can;                                       // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirImage*                                           IV_SortingZneBg_img;                                     // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirCanvasPanel*                                     IV_SortingZone_can;                                      // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_Radio_Tab_C*                                     Level_Tabbtn;                                            // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTabGroup*                                           orderTabGroup;                                           // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_Radio_Tab_C*                                     Power_Tabbtn;                                            // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_Radio_Tab_C*                                     Sort_Tabbtn;                                             // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirWrapBox*                                         Sorting_01_wrap;                                         // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirWrapBox*                                         Sorting_02_wrap;                                         // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTabGroup*                                           sorttypeTabGroup;                                        // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirImage*                                           Title_Line_img;                                          // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirTextBlock*                                       Title_txt;                                               // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnActiveDispatcher;                                      // 0x03C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FVector2D                                           Bottom_Spacer_Set;                                       // 0x03D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isHIUD_;                                                 // 0x03D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void PreConstruct(bool IsDesignTime);
		void BndEvt__Ascending_Tabbtn_K2Node_ComponentBoundEvent_0_OnTabStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__Descending_Tabbtn_K2Node_ComponentBoundEvent_3_OnTabStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__Level_Tabbtn_K2Node_ComponentBoundEvent_6_OnTabStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__Grade_Tabbtn_K2Node_ComponentBoundEvent_7_OnTabStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__Power_Tabbtn_K2Node_ComponentBoundEvent_8_OnTabStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__ETCGrade_Tabbtn_K2Node_ComponentBoundEvent_10_OnTabStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__Amount_Tabbtn_K2Node_ComponentBoundEvent_11_OnTabStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__Sort_Tabbtn_K2Node_ComponentBoundEvent_12_OnTabStateChanged__DelegateSignature(bool bIsChecked);
		void OnSetInventoryTapType(E_InventorySortOrder order, E_InventorySortType Type);
		void OnPreSet();
		void BndEvt__Algn_btn_K2Node_ComponentBoundEvent_1_ClickDispatcher__DelegateSignature();
		void OnActivePopupEvent(bool IsOn);
		void BndEvt__HUD_IV_Sorting_CM_Btn_Close_K2Node_ComponentBoundEvent_2_Click__DelegateSignature();
		void ExecuteUbergraph_HUD_IV_Sorting(int32_t EntryPoint);
		void OnActivedispatcher__DelegateSignature(bool IsOn);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
