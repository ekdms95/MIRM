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
	 * WidgetBlueprintGeneratedClass Page_Talkbox.Page_Talkbox_C
	 * Size -> 0x00D9 (FullSize[0x0429] - InheritedSize[0x0350])
	 */
	class UPage_Talkbox_C : public UTalkboxPage
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    FadeIn;                                                  // 0x0358(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UMirButton*                                          BtnTalk_Next_btn;                                        // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_Btn_C*                                           Close_btn;                                               // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirCanvasPanel*                                     Close_Btn_can;                                           // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_SkipBtn_C*                                       CM_SkipBtn;                                              // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirCanvasPanel*                                     Next_btn_can;                                            // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirButton*                                          NorTalk_Next_btn;                                        // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTB_Box_Group_C*                                     NpcName;                                                 // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPage_Talkbox_Slot_C*                                Page_Talkbox_Slot;                                       // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTB_BtnMenu_C*                                       TB_BtnMenu;                                              // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTB_Quest_Image_Box_C*                               TB_Quest_Image_Box;                                      // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bclick;                                                  // 0x03B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VPAT[0x3];                                   // 0x03B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ContentsIndex;                                           // 0x03B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bEndOfContents;                                          // 0x03B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YSZM[0x7];                                   // 0x03B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FText>                                        ContentsList_Copy;                                       // 0x03C0(0x0010) Edit, BlueprintVisible
		int32_t                                                    ContentsCount_Copy;                                      // 0x03D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SelectedQuestID;                                         // 0x03D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FText>                                        ContentsList_Copy2;                                      // 0x03D8(0x0010) Edit, BlueprintVisible
		int32_t                                                    ContentsCount_Copy2;                                     // 0x03E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TJVA[0x4];                                   // 0x03EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AMirCharacter*                                       TargetMirCharacter;                                      // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FString>                                      NameListCopy;                                            // 0x03F8(0x0010) Edit, BlueprintVisible
		TArray<bool>                                               NpcTalkListCopy;                                         // 0x0408(0x0010) Edit, BlueprintVisible
		TArray<class FString>                                      ImagePathListCopy;                                       // 0x0418(0x0010) Edit, BlueprintVisible
		ETalkboxType                                               CurrentTalkboxType;                                      // 0x0428(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ClearVoiceSound(bool bVisible);
		void ResetText();
		void GetImagePath(int32_t Index, TArray<class FString>* ImagePathList);
		void SkipContents();
		void SetName(TArray<class FString>* NameList, TArray<bool>* NpcTalkList, int32_t count);
		bool OnTestAutoClick();
		void InitContentsBox();
		void SetContents(TArray<class FText>* Text, TArray<class FString>* ImagePath, int32_t ContentsCount);
		void OnInit(class UTalkboxPageInitial* InitialData);
		void BndEvt__MirButton_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void OnClosePageAction(float delaytime);
		void OnAcceptPageAction();
		void BndEvt__MirButton_NextText_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void CameraPosessEvent(class AMirCharacter* Character, ETalkboxCameraType CameraType);
		void OnSetVisible(bool IsVisible);
		void OnSetNPCTalkStatus(bool bnpctalk);
		void OnSetActive(bool IsActive, const class FString& Parameters);
		void BndEvt__Close_Btn_K2Node_ComponentBoundEvent_2_ClickDispatcher__DelegateSignature();
		void OnPreSet();
		void SetTalkboxVisibility(bool bVisibility);
		void OnUpdateFavorabilityType();
		void BndEvt__Page_Talkbox_CM_SkipBtn_K2Node_ComponentBoundEvent_5_ClickDispatch__DelegateSignature();
		void ExecuteUbergraph_Page_Talkbox(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
