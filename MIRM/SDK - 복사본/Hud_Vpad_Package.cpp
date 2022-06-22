/**
 * Name: MIRM
 * Version: 0623
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Vpad.Hud_Vpad_C.CheckStoryDungeonBlock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bLock                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_Vpad_C::CheckStoryDungeonBlock(bool* bLock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Vpad.Hud_Vpad_C.CheckStoryDungeonBlock");
		
		UHud_Vpad_C_CheckStoryDungeonBlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bLock != nullptr)
			*bLock = params.bLock;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Vpad.Hud_Vpad_C.SetScanButton
	 * 		Flags  -> ()
	 */
	void UHud_Vpad_C::SetScanButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Vpad.Hud_Vpad_C.SetScanButton");
		
		UHud_Vpad_C_SetScanButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Vpad.Hud_Vpad_C.ToggleNormalAttack
	 * 		Flags  -> ()
	 */
	void UHud_Vpad_C::ToggleNormalAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Vpad.Hud_Vpad_C.ToggleNormalAttack");
		
		UHud_Vpad_C_ToggleNormalAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Vpad.Hud_Vpad_C.GetScreenPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   position                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_Vpad_C::GetScreenPosition(class UUserWidget* Widget, struct FVector2D* position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Vpad.Hud_Vpad_C.GetScreenPosition");
		
		UHud_Vpad_C_GetScreenPosition_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (position != nullptr)
			*position = params.position;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Vpad.Hud_Vpad_C.SetSkillWaitingState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_Vpad_C::SetSkillWaitingState(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Vpad.Hud_Vpad_C.SetSkillWaitingState");
		
		UHud_Vpad_C_SetSkillWaitingState_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Vpad.Hud_Vpad_C.PlayWidgetAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      AniName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UHud_Vpad_C::PlayWidgetAnimation(const class FString& AniName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Vpad.Hud_Vpad_C.PlayWidgetAnimation");
		
		UHud_Vpad_C_PlayWidgetAnimation_Params params {};
		params.AniName = AniName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Vpad.Hud_Vpad_C.BndEvt__SK_KyungrakSkill_Icon_K2Node_ComponentBoundEvent_17_OnSlotClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            slotArrIdx                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_Vpad_C::BndEvt__SK_KyungrakSkill_Icon_K2Node_ComponentBoundEvent_17_OnSlotClicked__DelegateSignature(int32_t slotArrIdx)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Vpad.Hud_Vpad_C.BndEvt__SK_KyungrakSkill_Icon_K2Node_ComponentBoundEvent_17_OnSlotClicked__DelegateSignature");
		
		UHud_Vpad_C_BndEvt__SK_KyungrakSkill_Icon_K2Node_ComponentBoundEvent_17_OnSlotClicked__DelegateSignature_Params params {};
		params.slotArrIdx = slotArrIdx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Vpad.Hud_Vpad_C.BndEvt__Target_Change_btn_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_Vpad_C::BndEvt__Target_Change_btn_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Vpad.Hud_Vpad_C.BndEvt__Target_Change_btn_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature");
		
		UHud_Vpad_C_BndEvt__Target_Change_btn_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Vpad.Hud_Vpad_C.OnFearState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFear                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_Vpad_C::OnFearState(bool IsFear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Vpad.Hud_Vpad_C.OnFearState");
		
		UHud_Vpad_C_OnFearState_Params params {};
		params.IsFear = IsFear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Vpad.Hud_Vpad_C.Keypresscheck
	 * 		Flags  -> ()
	 */
	void UHud_Vpad_C::Keypresscheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Vpad.Hud_Vpad_C.Keypresscheck");
		
		UHud_Vpad_C_Keypresscheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Vpad.Hud_Vpad_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_Vpad_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Vpad.Hud_Vpad_C.Tick");
		
		UHud_Vpad_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Vpad.Hud_Vpad_C.BndEvt__MirButton_0_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_Vpad_C::BndEvt__MirButton_0_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Vpad.Hud_Vpad_C.BndEvt__MirButton_0_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");
		
		UHud_Vpad_C_BndEvt__MirButton_0_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Vpad.Hud_Vpad_C.OnChangeCflag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCFlagValues                                CFlagValues                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UHud_Vpad_C::OnChangeCflag(const struct FCFlagValues& CFlagValues)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Vpad.Hud_Vpad_C.OnChangeCflag");
		
		UHud_Vpad_C_OnChangeCflag_Params params {};
		params.CFlagValues = CFlagValues;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Vpad.Hud_Vpad_C.Destruct
	 * 		Flags  -> ()
	 */
	void UHud_Vpad_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Vpad.Hud_Vpad_C.Destruct");
		
		UHud_Vpad_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Vpad.Hud_Vpad_C.OnSkill
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsSkillActivate                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_Vpad_C::OnSkill(int32_t Index, bool IsSkillActivate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Vpad.Hud_Vpad_C.OnSkill");
		
		UHud_Vpad_C_OnSkill_Params params {};
		params.Index = Index;
		params.IsSkillActivate = IsSkillActivate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Vpad.Hud_Vpad_C.BndEvt__HUD_Skill_Quick_Slot_Group_K2Node_ComponentBoundEvent_6_ClickDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_Vpad_C::BndEvt__HUD_Skill_Quick_Slot_Group_K2Node_ComponentBoundEvent_6_ClickDispatcher__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Vpad.Hud_Vpad_C.BndEvt__HUD_Skill_Quick_Slot_Group_K2Node_ComponentBoundEvent_6_ClickDispatcher__DelegateSignature");
		
		UHud_Vpad_C_BndEvt__HUD_Skill_Quick_Slot_Group_K2Node_ComponentBoundEvent_6_ClickDispatcher__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Vpad.Hud_Vpad_C.OnInitailizeWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Parameters                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UHud_Vpad_C::OnInitailizeWidget(const class FString& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Vpad.Hud_Vpad_C.OnInitailizeWidget");
		
		UHud_Vpad_C_OnInitailizeWidget_Params params {};
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Vpad.Hud_Vpad_C.Construct
	 * 		Flags  -> ()
	 */
	void UHud_Vpad_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Vpad.Hud_Vpad_C.Construct");
		
		UHud_Vpad_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Vpad.Hud_Vpad_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_Vpad_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Vpad.Hud_Vpad_C.PreConstruct");
		
		UHud_Vpad_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Vpad.Hud_Vpad_C.BndEvt__Hud_Vpad_HUD_Skill_Quick_Slot_Group_K2Node_ComponentBoundEvent_0_OnSkillPresetDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Preset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_Vpad_C::BndEvt__Hud_Vpad_HUD_Skill_Quick_Slot_Group_K2Node_ComponentBoundEvent_0_OnSkillPresetDispatcher__DelegateSignature(int32_t Preset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Vpad.Hud_Vpad_C.BndEvt__Hud_Vpad_HUD_Skill_Quick_Slot_Group_K2Node_ComponentBoundEvent_0_OnSkillPresetDispatcher__DelegateSignature");
		
		UHud_Vpad_C_BndEvt__Hud_Vpad_HUD_Skill_Quick_Slot_Group_K2Node_ComponentBoundEvent_0_OnSkillPresetDispatcher__DelegateSignature_Params params {};
		params.Preset = Preset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Vpad.Hud_Vpad_C.OnSetVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_Vpad_C::OnSetVisible(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Vpad.Hud_Vpad_C.OnSetVisible");
		
		UHud_Vpad_C_OnSetVisible_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Vpad.Hud_Vpad_C.BndEvt__Hud_Vpad_Targeting_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_Vpad_C::BndEvt__Hud_Vpad_Targeting_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Vpad.Hud_Vpad_C.BndEvt__Hud_Vpad_Targeting_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UHud_Vpad_C_BndEvt__Hud_Vpad_Targeting_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Vpad.Hud_Vpad_C.OnApplyOpacitySteetStallBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsApply                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_Vpad_C::OnApplyOpacitySteetStallBtn(bool IsApply)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Vpad.Hud_Vpad_C.OnApplyOpacitySteetStallBtn");
		
		UHud_Vpad_C_OnApplyOpacitySteetStallBtn_Params params {};
		params.IsApply = IsApply;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Vpad.Hud_Vpad_C.BndEvt__Hud_Vpad_StreetShop_btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_Vpad_C::BndEvt__Hud_Vpad_StreetShop_btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Vpad.Hud_Vpad_C.BndEvt__Hud_Vpad_StreetShop_btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UHud_Vpad_C_BndEvt__Hud_Vpad_StreetShop_btn_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Vpad.Hud_Vpad_C.OnApplyGaugeSteetStallBtn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Percent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_Vpad_C::OnApplyGaugeSteetStallBtn(float Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Vpad.Hud_Vpad_C.OnApplyGaugeSteetStallBtn");
		
		UHud_Vpad_C_OnApplyGaugeSteetStallBtn_Params params {};
		params.Percent = Percent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Vpad.Hud_Vpad_C.BndEvt__Hud_Vpad_MirButton_83_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_Vpad_C::BndEvt__Hud_Vpad_MirButton_83_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Vpad.Hud_Vpad_C.BndEvt__Hud_Vpad_MirButton_83_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UHud_Vpad_C_BndEvt__Hud_Vpad_MirButton_83_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Vpad.Hud_Vpad_C.OnSkillLockState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFear                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_Vpad_C::OnSkillLockState(bool IsFear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Vpad.Hud_Vpad_C.OnSkillLockState");
		
		UHud_Vpad_C_OnSkillLockState_Params params {};
		params.IsFear = IsFear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_Vpad.Hud_Vpad_C.ExecuteUbergraph_Hud_Vpad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_Vpad_C::ExecuteUbergraph_Hud_Vpad(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_Vpad.Hud_Vpad_C.ExecuteUbergraph_Hud_Vpad");
		
		UHud_Vpad_C_ExecuteUbergraph_Hud_Vpad_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHud_Vpad_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHud_Vpad_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Hud_Vpad.Hud_Vpad_C");
		return ptr;
	}

}


