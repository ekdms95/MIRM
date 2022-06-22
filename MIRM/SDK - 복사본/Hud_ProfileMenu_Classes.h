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
	 * WidgetBlueprintGeneratedClass Hud_ProfileMenu.Hud_ProfileMenu_C
	 * Size -> 0x00C8 (FullSize[0x0328] - InheritedSize[0x0260])
	 */
	class UHud_ProfileMenu_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UMirImage*                                           Arrow_img;                                               // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_Simple_Btn_C*                                    Block_btn_2;                                             // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_Simple_Btn_C*                                    DetailView_btn_2;                                        // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_Simple_Btn_C*                                    FriendAdd_btn_2;                                         // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_Simple_Btn_C*                                    GuildInvite_btn_2;                                       // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirImage*                                           MenuBG_img;                                              // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_Simple_Btn_C*                                    PartyInvite_btn_2;                                       // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_Simple_Btn_C*                                    PersonalTrade_btn_2;                                     // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMirCanvasPanel*                                     ProfileMenu_can;                                         // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCM_Simple_Btn_C*                                    Whisper_btn_2;                                           // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             InvitePartyDispatcher;                                   // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             PersonalTradeDispatcher;                                 // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             InviteGuildDispatcher;                                   // 0x02D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             WhisperDispatcher;                                       // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             WhisperBlockDispatcher;                                  // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             DetailViewDispatcher;                                    // 0x0308(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             AddFriendDispatcher;                                     // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void BndEvt__DetailView_btn_1_K2Node_ComponentBoundEvent_7_Simple_Btn_Dispatch__DelegateSignature();
		void BndEvt__FriendAdd_btn_1_K2Node_ComponentBoundEvent_8_Simple_Btn_Dispatch__DelegateSignature();
		void BndEvt__PartyInvite_btn_1_K2Node_ComponentBoundEvent_9_Simple_Btn_Dispatch__DelegateSignature();
		void BndEvt__GuildInvite_btn_1_K2Node_ComponentBoundEvent_10_Simple_Btn_Dispatch__DelegateSignature();
		void BndEvt__PersonalTrade_btn_1_K2Node_ComponentBoundEvent_11_Simple_Btn_Dispatch__DelegateSignature();
		void BndEvt__Whisper_btn_1_K2Node_ComponentBoundEvent_12_Simple_Btn_Dispatch__DelegateSignature();
		void BndEvt__Block_btn_1_K2Node_ComponentBoundEvent_13_Simple_Btn_Dispatch__DelegateSignature();
		void ExecuteUbergraph_Hud_ProfileMenu(int32_t EntryPoint);
		void AddFriendDispatcher__DelegateSignature();
		void DetailViewDispatcher__DelegateSignature();
		void WhisperBlockDispatcher__DelegateSignature();
		void WhisperDispatcher__DelegateSignature();
		void InviteGuildDispatcher__DelegateSignature();
		void PersonalTradeDispatcher__DelegateSignature();
		void InvitePartyDispatcher__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
