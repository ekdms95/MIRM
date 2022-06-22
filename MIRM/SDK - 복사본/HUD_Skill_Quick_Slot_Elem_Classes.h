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
	 * WidgetBlueprintGeneratedClass HUD_Skill_Quick_Slot_Elem.HUD_Skill_Quick_Slot_Elem_C
	 * Size -> 0x0090 (FullSize[0x02F0] - InheritedSize[0x0260])
	 */
	class UHUD_Skill_Quick_Slot_Elem_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Skill_Right_Shake_ani;                                   // 0x0268(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Skill_Left_Shake_ani;                                    // 0x0270(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Left_2_Right_ani;                                        // 0x0278(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    Right_2_Left_ani;                                        // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UMirImage*                                           HUD_Skill_Quick_Slot_Elem_Bg_img;                        // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_SkillBtn_C*                                     Hud_SkillBtn_Elem_01;                                    // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_SkillBtn_C*                                     Hud_SkillBtn_Elem_02;                                    // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_SkillBtn_C*                                     Hud_SkillBtn_Elem_03;                                    // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_SkillBtn_C*                                     Hud_SkillBtn_Elem_04;                                    // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_SkillBtn_C*                                     Hud_SkillBtn_Elem_05;                                    // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHud_SkillBtn_C*                                     Hud_SkillBtn_Elem_06;                                    // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             ClickDispatcher;                                         // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSwipeAnimPivot;                                        // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnFinishSwipeAnim;                                       // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void SequenceEvent__ENTRYPOINTHUD_Skill_Quick_Slot_Elem_2(class UHorizontalBox* HUD_Skill_Quick_Slot_Elem_hor);
		void SequenceEvent__ENTRYPOINTHUD_Skill_Quick_Slot_Elem_1(class UHorizontalBox* HUD_Skill_Quick_Slot_Elem_hor);
		void Skill_Shake_ani(bool isRight);
		void Skill_InOut_ani(bool IsOut);
		void HUD_Skill_Quick_Slot_Anim_Pivot(class UHorizontalBox* HUD_Skill_Quick_Slot_Elem_hor);
		void BndEvt__Hud_SkillBtn_Elem_01_K2Node_ComponentBoundEvent_0_ClickDispatcher__DelegateSignature(int32_t Index);
		void BndEvt__Hud_SkillBtn_Elem_02_K2Node_ComponentBoundEvent_1_ClickDispatcher__DelegateSignature(int32_t Index);
		void BndEvt__Hud_SkillBtn_Elem_03_K2Node_ComponentBoundEvent_2_ClickDispatcher__DelegateSignature(int32_t Index);
		void BndEvt__Hud_SkillBtn_Elem_04_K2Node_ComponentBoundEvent_3_ClickDispatcher__DelegateSignature(int32_t Index);
		void BndEvt__Hud_SkillBtn_Elem_05_K2Node_ComponentBoundEvent_4_ClickDispatcher__DelegateSignature(int32_t Index);
		void BndEvt__Hud_SkillBtn_Elem_06_K2Node_ComponentBoundEvent_5_ClickDispatcher__DelegateSignature(int32_t Index);
		void WidgetAnimationEvt_Left_2_Right_ani_K2Node_WidgetAnimationEvent_1();
		void WidgetAnimationEvt_Right_2_Left_ani_K2Node_WidgetAnimationEvent_2();
		void ExecuteUbergraph_HUD_Skill_Quick_Slot_Elem(int32_t EntryPoint);
		void OnFinishSwipeAnim__DelegateSignature();
		void OnSwipeAnimPivot__DelegateSignature();
		void ClickDispatcher__DelegateSignature(int32_t Index);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
