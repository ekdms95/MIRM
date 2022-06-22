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
	 * WidgetBlueprintGeneratedClass Hud_Noti_Element.Hud_Noti_Element_C
	 * Size -> 0x00C8 (FullSize[0x03C8] - InheritedSize[0x0300])
	 */
	class UHud_Noti_Element_C : public UHudNotificationElement
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0300(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Out_ani;                                                 // 0x0308(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    In_ani;                                                  // 0x0310(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UMirImage*                                           Bg_img;                                                  // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_Btn_Close_C*                                     CM_Btn_Close;                                            // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirButton*                                          Guide_btn;                                               // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirImage*                                           Icon_Img;                                                // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirImage*                                           Square_img;                                              // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirTextBlock*                                       Title_txt;                                               // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FSlateColor                                         MiocnColor;                                              // 0x0348(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         IconBackimg;                                             // 0x0370(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSlateColor                                         MIconRec_Color;                                          // 0x0398(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FVector2D                                           MarginSize;                                              // 0x03C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnPreSet();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void BndEvt__MirButton_64_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void OnShow();
		void OnDestroyElement();
		void BndEvt__CM_Btn_Close_K2Node_ComponentBoundEvent_1_Click__DelegateSignature();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_Hud_Noti_Element(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
