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
	 * WidgetBlueprintGeneratedClass Hud_PkStatus_Profile.Hud_PkStatus_Profile_C
	 * Size -> 0x0039 (FullSize[0x0319] - InheritedSize[0x02E0])
	 */
	class UHud_PkStatus_Profile_C : public UHUDPkStatusProfilePrefab
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UMirImage*                                           PK_Status_Arrow_img;                                     // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirImage*                                           Pk_Status_Color_img;                                     // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirTextBlock*                                       PK_Status_txt;                                           // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirButton*                                          PksStatus_Open_btn;                                      // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             ClickDispatcher;                                         // 0x0308(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       isImg_;                                                  // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void Btn_Color_set(const struct FVector2D& Image_Size, class UObject* Nor, class UObject* Over, class UObject* Press, class UObject* Dis);
		void Pk_Status_Color_Tint(class UObject* Image);
		void SetText(int32_t stringindex, const class FName& Style);
		void BndEvt__MirButton_88_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void OnSetPkStatusProfile(E_PK_TYPE pk_type);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_Hud_PkStatus_Profile(int32_t EntryPoint);
		void ClickDispatcher__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
