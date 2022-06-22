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
	 * WidgetBlueprintGeneratedClass Page_Hud_Recommand.Page_Hud_Recommand_C
	 * Size -> 0x0028 (FullSize[0x0370] - InheritedSize[0x0348])
	 */
	class UPage_Hud_Recommand_C : public UHUDEquipmentRecommandPage
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0348(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCM_Num_Item_Regi_Pop_C*                             CM_Num_Item_Regi_Pop;                                    // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_Recommend_Icon_C*                                CM_Recommend_Icon;                                       // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        MirCanvasPanel;                                          // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirCanvasPanel*                                     Recommended_can;                                         // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void PreConstruct(bool IsDesignTime);
		void OnCreateMirPage(const class FString& Parameters);
		void OnSetPopup(bool IsEnable);
		void BndEvt__CM_Recommend_Icon_K2Node_ComponentBoundEvent_0_EquipEventDispatcher__DelegateSignature();
		void BndEvt__CM_Recommend_Icon_K2Node_ComponentBoundEvent_1_CloseEventDispatcher__DelegateSignature();
		void OnEquipItemFail(int32_t reason);
		void OnSetButtonText(const class FText& ButtonText);
		void BndEvt__CM_Num_Item_Regi_Pop_K2Node_ComponentBoundEvent_2_ConfirmDispatcher__DelegateSignature();
		void BndEvt__CM_Num_Item_Regi_Pop_K2Node_ComponentBoundEvent_3_CloseDispatcher__DelegateSignature();
		void BndEvt__CM_Num_Item_Regi_Pop_K2Node_ComponentBoundEvent_4_OnChangeCurrNumberValue__DelegateSignature(int32_t Value);
		void OnSetTitleText(const class FText& TitleText);
		void ExecuteUbergraph_Page_Hud_Recommand(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
