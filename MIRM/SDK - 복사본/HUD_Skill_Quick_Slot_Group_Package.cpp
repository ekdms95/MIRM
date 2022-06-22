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
	 * 		Name   -> Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.GetButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UHud_SkillBtn_C*                             Button                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Skill_Quick_Slot_Group_C::GetButton(int32_t Index, class UHud_SkillBtn_C** Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.GetButton");
		
		UHUD_Skill_Quick_Slot_Group_C_GetButton_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Button != nullptr)
			*Button = params.Button;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.OnSwipe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UHUD_Skill_Quick_Slot_Group_C::OnSwipe(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.OnSwipe");
		
		UHUD_Skill_Quick_Slot_Group_C_OnSwipe_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.OnMouseButtonUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UHUD_Skill_Quick_Slot_Group_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.OnMouseButtonUp");
		
		UHUD_Skill_Quick_Slot_Group_C_OnMouseButtonUp_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.OnMouseMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UHUD_Skill_Quick_Slot_Group_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.OnMouseMove");
		
		UHUD_Skill_Quick_Slot_Group_C_OnMouseMove_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.OnMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UHUD_Skill_Quick_Slot_Group_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.OnMouseButtonDown");
		
		UHUD_Skill_Quick_Slot_Group_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.OnPreSet
	 * 		Flags  -> ()
	 */
	void UHUD_Skill_Quick_Slot_Group_C::OnPreSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.OnPreSet");
		
		UHUD_Skill_Quick_Slot_Group_C_OnPreSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.OnSetSKillPreSetEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Preset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Skill_Quick_Slot_Group_C::OnSetSKillPreSetEvent(int32_t Preset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.OnSetSKillPreSetEvent");
		
		UHUD_Skill_Quick_Slot_Group_C_OnSetSKillPreSetEvent_Params params {};
		params.Preset = Preset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.OnSwipeAniEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isRight                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isSuccess                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Skill_Quick_Slot_Group_C::OnSwipeAniEvent(bool isRight, bool isSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.OnSwipeAniEvent");
		
		UHUD_Skill_Quick_Slot_Group_C_OnSwipeAniEvent_Params params {};
		params.isRight = isRight;
		params.isSuccess = isSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.BndEvt__HUD_Skill_Quick_Slot_Elem_K2Node_ComponentBoundEvent_0_ClickDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Skill_Quick_Slot_Group_C::BndEvt__HUD_Skill_Quick_Slot_Elem_K2Node_ComponentBoundEvent_0_ClickDispatcher__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.BndEvt__HUD_Skill_Quick_Slot_Elem_K2Node_ComponentBoundEvent_0_ClickDispatcher__DelegateSignature");
		
		UHUD_Skill_Quick_Slot_Group_C_BndEvt__HUD_Skill_Quick_Slot_Elem_K2Node_ComponentBoundEvent_0_ClickDispatcher__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Skill_Quick_Slot_Group_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.Tick");
		
		UHUD_Skill_Quick_Slot_Group_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.BndEvt__HUD_Skill_Quick_Slot_Group_HUD_Skill_Quick_Slot_Elem_K2Node_ComponentBoundEvent_1_OnSwipeAnimPivot__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_Skill_Quick_Slot_Group_C::BndEvt__HUD_Skill_Quick_Slot_Group_HUD_Skill_Quick_Slot_Elem_K2Node_ComponentBoundEvent_1_OnSwipeAnimPivot__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.BndEvt__HUD_Skill_Quick_Slot_Group_HUD_Skill_Quick_Slot_Elem_K2Node_ComponentBoundEvent_1_OnSwipeAnimPivot__DelegateSignature");
		
		UHUD_Skill_Quick_Slot_Group_C_BndEvt__HUD_Skill_Quick_Slot_Group_HUD_Skill_Quick_Slot_Elem_K2Node_ComponentBoundEvent_1_OnSwipeAnimPivot__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.BndEvt__HUD_Skill_Quick_Slot_Group_HUD_Skill_Quick_Slot_Elem_K2Node_ComponentBoundEvent_2_OnFinishSwipeAnim__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_Skill_Quick_Slot_Group_C::BndEvt__HUD_Skill_Quick_Slot_Group_HUD_Skill_Quick_Slot_Elem_K2Node_ComponentBoundEvent_2_OnFinishSwipeAnim__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.BndEvt__HUD_Skill_Quick_Slot_Group_HUD_Skill_Quick_Slot_Elem_K2Node_ComponentBoundEvent_2_OnFinishSwipeAnim__DelegateSignature");
		
		UHUD_Skill_Quick_Slot_Group_C_BndEvt__HUD_Skill_Quick_Slot_Group_HUD_Skill_Quick_Slot_Elem_K2Node_ComponentBoundEvent_2_OnFinishSwipeAnim__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.OnMouseLeave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UHUD_Skill_Quick_Slot_Group_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.OnMouseLeave");
		
		UHUD_Skill_Quick_Slot_Group_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.OnMouseEnter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UHUD_Skill_Quick_Slot_Group_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.OnMouseEnter");
		
		UHUD_Skill_Quick_Slot_Group_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.ExecuteUbergraph_HUD_Skill_Quick_Slot_Group
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Skill_Quick_Slot_Group_C::ExecuteUbergraph_HUD_Skill_Quick_Slot_Group(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.ExecuteUbergraph_HUD_Skill_Quick_Slot_Group");
		
		UHUD_Skill_Quick_Slot_Group_C_ExecuteUbergraph_HUD_Skill_Quick_Slot_Group_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.OnSkillPresetDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Preset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Skill_Quick_Slot_Group_C::OnSkillPresetDispatcher__DelegateSignature(int32_t Preset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.OnSkillPresetDispatcher__DelegateSignature");
		
		UHUD_Skill_Quick_Slot_Group_C_OnSkillPresetDispatcher__DelegateSignature_Params params {};
		params.Preset = Preset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.ClickDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Skill_Quick_Slot_Group_C::ClickDispatcher__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C.ClickDispatcher__DelegateSignature");
		
		UHUD_Skill_Quick_Slot_Group_C_ClickDispatcher__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHUD_Skill_Quick_Slot_Group_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Skill_Quick_Slot_Group_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Skill_Quick_Slot_Group.HUD_Skill_Quick_Slot_Group_C");
		return ptr;
	}

}


