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
	 * WidgetBlueprintGeneratedClass TalkBox_Menu_Btn.TalkBox_Menu_Btn_C
	 * Size -> 0x00C8 (FullSize[0x03E0] - InheritedSize[0x0318])
	 */
	class UTalkBox_Menu_Btn_C : public UTalkSelectBox
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0318(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCM_RedDot_C*                                        CM_RedDot;                                               // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirImage*                                           Icon_Img;                                                // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirTextBlock*                                       Menu_txt;                                                // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirButton*                                          Qmenu_btn;                                               // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UQuest_HighLight_C*                                  Quest_HighLight;                                         // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             ClickDispatcher;                                         // 0x0348(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FSlateBrush                                         ImageBrush;                                              // 0x0358(0x0088) Edit, BlueprintVisible

	public:
		void SetImageBrushWithLock();
		void SetImageBrush(ETalkSelectType selecttype, float Alpha);
		void BndEvt__Qmenu_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void OnPreSet();
		void OnSetTalkSelectBox(bool result, ETalkSelectType Type, int32_t SetIndex, int32_t stringindex);
		void OnReceivePrefabMessage(const class FName& PrefabMessage, const class FString& PrefabParameters);
		void ExecuteUbergraph_TalkBox_Menu_Btn(int32_t EntryPoint);
		void ClickDispatcher__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
