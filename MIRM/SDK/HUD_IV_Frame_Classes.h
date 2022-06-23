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
	 * WidgetBlueprintGeneratedClass HUD_IV_Frame.HUD_IV_Frame_C
	 * Size -> 0x007A (FullSize[0x03F2] - InheritedSize[0x0378])
	 */
	class UHUD_IV_Frame_C : public UInventoryItemListPrefab
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0378(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCM_Btn_C*                                           AutoEquip_btn;                                           // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_IV_Frame_C*                                      CM_IV_Frame;                                             // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_Slot_Value_set_C*                                CM_Slot_Value_set;                                       // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_Weight_Value_set_C*                              CM_Weight_Value_set;                                     // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNamedSlot*                                          HUD_IV_Bottom_slot;                                      // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             CloseDispatcher;                                         // 0x03A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       ShowCloseButton;                                         // 0x03B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		ESlateVisibility                                           ETC_visi;                                                // 0x03B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HUD_;                                                    // 0x03BA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_C9EP[0x1];                                   // 0x03BB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           Bottom_Spacer_Size;                                      // 0x03BC(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5WB3[0x4];                                   // 0x03C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnWeightDispatcher;                                      // 0x03C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSlotDispatcher;                                        // 0x03D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FVector2D                                           NewVar_1;                                                // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowAutoEquipButton;                                     // 0x03F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       UseRedDot;                                               // 0x03F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void Init();
		void BndEvt__CM_IV_Frame_K2Node_ComponentBoundEvent_0_ClosePopupDispatch__DelegateSignature();
		void BndEvt__CM_IV_Frame_K2Node_ComponentBoundEvent_4_EtcDispatcher__DelegateSignature();
		void OnPreSet();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__CM_IV_Frame_K2Node_ComponentBoundEvent_5_CostumeDispatcher__DelegateSignature();
		void BndEvt__CM_IV_Frame_K2Node_ComponentBoundEvent_6_AllTabDispatcher__DelegateSignature();
		void BndEvt__CM_IV_Frame_K2Node_ComponentBoundEvent_7_EquipmentTabDispatcher__DelegateSignature();
		void BndEvt__CM_IV_Frame_K2Node_ComponentBoundEvent_8_DragonstoneTabDispatcher__DelegateSignature();
		void BndEvt__CM_Weight_Value_set_K2Node_ComponentBoundEvent_1_Weight_press__DelegateSignature();
		void BndEvt__CM_Slot_Value_set_K2Node_ComponentBoundEvent_2_Slot_Value_Press__DelegateSignature();
		void BndEvt__AutoEquip_btn_K2Node_ComponentBoundEvent_3_ClickDispatcher__DelegateSignature();
		void Destruct();
		void ExecuteUbergraph_HUD_IV_Frame(int32_t EntryPoint);
		void OnSlotDispatcher__DelegateSignature();
		void OnWeightDispatcher__DelegateSignature();
		void CloseDispatcher__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
