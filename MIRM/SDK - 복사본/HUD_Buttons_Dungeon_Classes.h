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
	 * WidgetBlueprintGeneratedClass HUD_Buttons_Dungeon.HUD_Buttons_Dungeon_C
	 * Size -> 0x019B (FullSize[0x0493] - InheritedSize[0x02F8])
	 */
	class UHUD_Buttons_Dungeon_C : public UHUDSecondMBtnGroupPrefab
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UMirCanvasPanel*                                     Blocking_can;                                            // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirImage*                                           Blocking_img;                                            // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirButton*                                          Close_btn;                                               // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_Alarm_C*                                         CM_Alarm;                                                // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_Web_Guide_Btn_C*                                 CM_Web_Guide_Btn;                                        // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirTextBlock*                                       CM_Web_Guide_Btn_txt;                                    // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHUD_Buttons_Dummy_C*                                Dummy_Beauty;                                            // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHUD_Buttons_Dummy_C*                                Dummy_Boss;                                              // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHUD_Buttons_Dummy_C*                                Dummy_Collection;                                        // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHUD_Buttons_Dummy_C*                                Dummy_Demon;                                             // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHUD_Buttons_Dummy_C*                                Dummy_Illusion;                                          // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHUD_Buttons_Dummy_C*                                Dummy_Secret;                                            // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHUD_Buttons_Dummy_C*                                Dummy_Siege;                                             // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHUD_Buttons_Dummy_C*                                Dummy_Storage;                                           // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHUD_Buttons_Dummy_C*                                Dummy_Worship;                                           // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHUD_Buttons_Dummy_C*                                HUD_Buttons_Dummy;                                       // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHUD_Buttons_Dummy_C*                                HUD_Buttons_Dummy_2;                                     // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHUD_Buttons_Dummy_C*                                HUD_Buttons_Dummy_3;                                     // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHUD_Buttons_Dummy_C*                                HUD_Buttons_Dummy_4;                                     // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHUD_Buttons_Dummy_C*                                HUD_Buttons_Dummy_5;                                     // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHUD_Buttons_Dummy_C*                                HUD_Buttons_Dummy_11;                                    // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHUD_New_MenuBtn_Group_Slot_C*                       HUD_New_MenuBtn_Group_Slot;                              // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirCanvasPanel*                                     Inventory_can;                                           // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirTextBlock*                                       Inventory_Percentage_txt;                                // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirCanvasPanel*                                     MirCanvasPanel_1;                                        // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirButton*                                          Open_btn;                                                // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHUD_Buttons_Dummy_C*                                PartyDungeon;                                            // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_New_MenuBtn_C*                                  Top_Mbtn_Alarm;                                          // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_Bg_MenuBtn_C*                                   Top_Mbtn_Dragon_Stone;                                   // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_New_MenuBtn_C*                                  Top_Mbtn_Event;                                          // 0x03E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_New_MenuBtn_C*                                  Top_Mbtn_Exit;                                           // 0x03F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_New_MenuBtn_C*                                  Top_Mbtn_Friend;                                         // 0x03F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_New_MenuBtn_C*                                  Top_Mbtn_Inven;                                          // 0x0400(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_New_MenuBtn_C*                                  Top_Mbtn_Keyboard;                                       // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_New_MenuBtn_C*                                  Top_Mbtn_Mail;                                           // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_New_MenuBtn_C*                                  Top_Mbtn_Mentor;                                         // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_New_MenuBtn_C*                                  Top_Mbtn_MirPass;                                        // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_New_MenuBtn_C*                                  Top_Mbtn_Option;                                         // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_Bg_MenuBtn_C*                                   Top_Mbtn_Pet;                                            // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_New_MenuBtn_C*                                  Top_Mbtn_PowerOff;                                       // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_New_MenuBtn_C*                                  Top_Mbtn_PVP;                                            // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_New_MenuBtn_C*                                  Top_Mbtn_Ranking;                                        // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_New_MenuBtn_C*                                  Top_Mbtn_Shop;                                           // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_Bg_MenuBtn_C*                                   Top_Mbtn_Skill;                                          // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_Bg_MenuBtn_C*                                   Top_Mbtn_Tool;                                           // 0x0460(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_Bg_MenuBtn_C*                                   Top_Mbtn_Transform;                                      // 0x0468(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_New_MenuBtn_C*                                  Top_Mbtn_UserTitle;                                      // 0x0470(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_Bg_MenuBtn_C*                                   Top_Mbtn_Vehicle;                                        // 0x0478(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             ExitDispatcher;                                          // 0x0480(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bStoryIntro;                                             // 0x0490(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bStoryIndun;                                             // 0x0491(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       bIndunClear;                                             // 0x0492(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void Check_Battle_Indun();
		void SetDungeonIntroStoryUI();
		void CheckStoryIndun();
		void BndEvt__Top_Mbtn_Inven_K2Node_ComponentBoundEvent_0_MenuBtn_Click__DelegateSignature();
		void BndEvt__Top_Mbtn_Skill_K2Node_ComponentBoundEvent_1_MenuBtn_Click__DelegateSignature();
		void BndEvt__Top_Mbtn_Tool_K2Node_ComponentBoundEvent_2_MenuBtn_Click__DelegateSignature();
		void BndEvt__Top_Mbtn_Vehicle_K2Node_ComponentBoundEvent_6_MenuBtn_Click__DelegateSignature();
		void BndEvt__Top_Mbtn_Option_K2Node_ComponentBoundEvent_13_MenuBtn_Click__DelegateSignature();
		void BndEvt__Top_Mbtn_Mail_K2Node_ComponentBoundEvent_15_MenuBtn_Click__DelegateSignature();
		void OnInitailizeWidget(const class FString& Parameters);
		void OnClosedSecondButtonsState();
		void OnOpenedSecondButtonsState();
		void BndEvt__Top_Mbtn_Dragon_Stone_K2Node_ComponentBoundEvent_21_MenuBtn_Click__DelegateSignature();
		void BndEvt__Top_Mbtn_PVP_K2Node_ComponentBoundEvent_23_MenuBtn_Click__DelegateSignature();
		void BndEvt__Top_Mbtn_Master_K2Node_ComponentBoundEvent_24_MenuBtn_Click__DelegateSignature();
		void BndEvt__Top_Mbtn_Ranking_K2Node_ComponentBoundEvent_25_MenuBtn_Click__DelegateSignature();
		void BndEvt__Top_Mbtn_Friend_K2Node_ComponentBoundEvent_26_MenuBtn_Click__DelegateSignature();
		void BndEvt__Top_Mbtn_UserTitle_K2Node_ComponentBoundEvent_27_MenuBtn_Click__DelegateSignature();
		void BndEvt__Top_Mbtn_PowerOff_K2Node_ComponentBoundEvent_30_MenuBtn_Click__DelegateSignature();
		void BndEvt__Top_Mbtn_Pet_K2Node_ComponentBoundEvent_3_MenuBtn_Click__DelegateSignature();
		void BndEvt__Top_Mbtn_Exit_K2Node_ComponentBoundEvent_4_MenuBtn_Click__DelegateSignature();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__Top_Mbtn_Keyboard_K2Node_ComponentBoundEvent_7_MenuBtn_Click__DelegateSignature();
		void BndEvt__HUD_Buttons_Dungeon_Close_btn_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__HUD_Buttons_Dungeon_Open_btn_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__HUD_Buttons_Dungeon_Top_Mbtn_Shop_K2Node_ComponentBoundEvent_5_MenuBtn_Click__DelegateSignature();
		void BndEvt__HUD_Buttons_Dungeon_Top_Mbtn_Alarm_K2Node_ComponentBoundEvent_8_MenuBtn_Click__DelegateSignature();
		void BndEvt__HUD_Buttons_Dungeon_Top_Mbtn_Event_K2Node_ComponentBoundEvent_11_MenuBtn_Click__DelegateSignature();
		void BndEvt__HUD_Buttons_Dungeon_Top_Mbtn_Keyboard_1_K2Node_ComponentBoundEvent_14_MenuBtn_Click__DelegateSignature();
		void BndEvt__HUD_Buttons_Dungeon_Top_Mbtn_Transform_K2Node_ComponentBoundEvent_19_MenuBtn_Click__DelegateSignature();
		void OnPreSet();
		void KeyPress();
		void KeyPress_OpenInven();
		void KeyPress_OpenAlarm();
		void ExecuteUbergraph_HUD_Buttons_Dungeon(int32_t EntryPoint);
		void ExitDispatcher__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
