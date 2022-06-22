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
	 * WidgetBlueprintGeneratedClass Page_Talkbox_Profession.Page_Talkbox_Profession_C
	 * Size -> 0x0028 (FullSize[0x0328] - InheritedSize[0x0300])
	 */
	class UPage_Talkbox_Profession_C : public UTalkBox_ProfessionPage
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0300(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Bg_img;                                                  // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTB_Craftsman_Already_C*                             TB_Craftsman_Already;                                    // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTB_Craftsman_Reset_C*                               TB_Craftsman_Reset;                                      // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTB_Craftsman_Upgrade_C*                             TB_Craftsman_Upgrade;                                    // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		struct FEventReply On_BG_MouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnSetAlram_Already(const class FString& Title, const class FString& upgrade);
		void OnPreSet();
		void BndEvt__TB_Craftsman_Reset_K2Node_ComponentBoundEvent_1_CloseDispatcher__DelegateSignature();
		void BndEvt__TB_Craftsman_Upgrade_K2Node_ComponentBoundEvent_2_CloseDispatcher__DelegateSignature();
		void BndEvt__TB_Craftsman_Reset_K2Node_ComponentBoundEvent_3_ResetDispatcher__DelegateSignature();
		void BndEvt__TB_Craftsman_Upgrade_K2Node_ComponentBoundEvent_4_UpgradeDispatcher__DelegateSignature();
		void BndEvt__TB_Craftsman_Already_K2Node_ComponentBoundEvent_0_CloseDispatcher__DelegateSignature();
		void OnSetSelectType(int32_t Type);
		void OnSetAlram_Reset(const class FString& Title, const class FString& upgrade);
		void CancelPopup();
		void ExecuteUbergraph_Page_Talkbox_Profession(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
