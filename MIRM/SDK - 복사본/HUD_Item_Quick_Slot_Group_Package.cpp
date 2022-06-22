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
	 * 		Name   -> Function HUD_Item_Quick_Slot_Group.HUD_Item_Quick_Slot_Group_C.OnSwipe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UHUD_Item_Quick_Slot_Group_C::OnSwipe(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Item_Quick_Slot_Group.HUD_Item_Quick_Slot_Group_C.OnSwipe");
		
		UHUD_Item_Quick_Slot_Group_C_OnSwipe_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Item_Quick_Slot_Group.HUD_Item_Quick_Slot_Group_C.OnMouseButtonUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UHUD_Item_Quick_Slot_Group_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Item_Quick_Slot_Group.HUD_Item_Quick_Slot_Group_C.OnMouseButtonUp");
		
		UHUD_Item_Quick_Slot_Group_C_OnMouseButtonUp_Params params {};
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
	 * 		Name   -> Function HUD_Item_Quick_Slot_Group.HUD_Item_Quick_Slot_Group_C.OnMouseMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UHUD_Item_Quick_Slot_Group_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Item_Quick_Slot_Group.HUD_Item_Quick_Slot_Group_C.OnMouseMove");
		
		UHUD_Item_Quick_Slot_Group_C_OnMouseMove_Params params {};
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
	 * 		Name   -> Function HUD_Item_Quick_Slot_Group.HUD_Item_Quick_Slot_Group_C.OnMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UHUD_Item_Quick_Slot_Group_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Item_Quick_Slot_Group.HUD_Item_Quick_Slot_Group_C.OnMouseButtonDown");
		
		UHUD_Item_Quick_Slot_Group_C_OnMouseButtonDown_Params params {};
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
	 * 		Name   -> Function HUD_Item_Quick_Slot_Group.HUD_Item_Quick_Slot_Group_C.OnMouseLeave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UHUD_Item_Quick_Slot_Group_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Item_Quick_Slot_Group.HUD_Item_Quick_Slot_Group_C.OnMouseLeave");
		
		UHUD_Item_Quick_Slot_Group_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Item_Quick_Slot_Group.HUD_Item_Quick_Slot_Group_C.OnSwipeAniEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isRight                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isSuccess                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Item_Quick_Slot_Group_C::OnSwipeAniEvent(bool isRight, bool isSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Item_Quick_Slot_Group.HUD_Item_Quick_Slot_Group_C.OnSwipeAniEvent");
		
		UHUD_Item_Quick_Slot_Group_C_OnSwipeAniEvent_Params params {};
		params.isRight = isRight;
		params.isSuccess = isSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Item_Quick_Slot_Group.HUD_Item_Quick_Slot_Group_C.OnSetQuickSlotItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Item_Quick_Slot_Group_C::OnSetQuickSlotItems(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Item_Quick_Slot_Group.HUD_Item_Quick_Slot_Group_C.OnSetQuickSlotItems");
		
		UHUD_Item_Quick_Slot_Group_C_OnSetQuickSlotItems_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Item_Quick_Slot_Group.HUD_Item_Quick_Slot_Group_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Item_Quick_Slot_Group_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Item_Quick_Slot_Group.HUD_Item_Quick_Slot_Group_C.Tick");
		
		UHUD_Item_Quick_Slot_Group_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Item_Quick_Slot_Group.HUD_Item_Quick_Slot_Group_C.BndEvt__HUD_Item_Quick_Slot_Group_HUD_Item_Quick_Slot_Elem_K2Node_ComponentBoundEvent_1_SlotAnimPivot__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_Item_Quick_Slot_Group_C::BndEvt__HUD_Item_Quick_Slot_Group_HUD_Item_Quick_Slot_Elem_K2Node_ComponentBoundEvent_1_SlotAnimPivot__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Item_Quick_Slot_Group.HUD_Item_Quick_Slot_Group_C.BndEvt__HUD_Item_Quick_Slot_Group_HUD_Item_Quick_Slot_Elem_K2Node_ComponentBoundEvent_1_SlotAnimPivot__DelegateSignature");
		
		UHUD_Item_Quick_Slot_Group_C_BndEvt__HUD_Item_Quick_Slot_Group_HUD_Item_Quick_Slot_Elem_K2Node_ComponentBoundEvent_1_SlotAnimPivot__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Item_Quick_Slot_Group.HUD_Item_Quick_Slot_Group_C.BndEvt__HUD_Item_Quick_Slot_Group_HUD_Item_Quick_Slot_Elem_K2Node_ComponentBoundEvent_2_SlotAnimFinish__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_Item_Quick_Slot_Group_C::BndEvt__HUD_Item_Quick_Slot_Group_HUD_Item_Quick_Slot_Elem_K2Node_ComponentBoundEvent_2_SlotAnimFinish__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Item_Quick_Slot_Group.HUD_Item_Quick_Slot_Group_C.BndEvt__HUD_Item_Quick_Slot_Group_HUD_Item_Quick_Slot_Elem_K2Node_ComponentBoundEvent_2_SlotAnimFinish__DelegateSignature");
		
		UHUD_Item_Quick_Slot_Group_C_BndEvt__HUD_Item_Quick_Slot_Group_HUD_Item_Quick_Slot_Elem_K2Node_ComponentBoundEvent_2_SlotAnimFinish__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Item_Quick_Slot_Group.HUD_Item_Quick_Slot_Group_C.OnPreSet
	 * 		Flags  -> ()
	 */
	void UHUD_Item_Quick_Slot_Group_C::OnPreSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Item_Quick_Slot_Group.HUD_Item_Quick_Slot_Group_C.OnPreSet");
		
		UHUD_Item_Quick_Slot_Group_C_OnPreSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Item_Quick_Slot_Group.HUD_Item_Quick_Slot_Group_C.OnMouseEnter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UHUD_Item_Quick_Slot_Group_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Item_Quick_Slot_Group.HUD_Item_Quick_Slot_Group_C.OnMouseEnter");
		
		UHUD_Item_Quick_Slot_Group_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Item_Quick_Slot_Group.HUD_Item_Quick_Slot_Group_C.ExecuteUbergraph_HUD_Item_Quick_Slot_Group
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Item_Quick_Slot_Group_C::ExecuteUbergraph_HUD_Item_Quick_Slot_Group(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Item_Quick_Slot_Group.HUD_Item_Quick_Slot_Group_C.ExecuteUbergraph_HUD_Item_Quick_Slot_Group");
		
		UHUD_Item_Quick_Slot_Group_C_ExecuteUbergraph_HUD_Item_Quick_Slot_Group_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHUD_Item_Quick_Slot_Group_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Item_Quick_Slot_Group_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Item_Quick_Slot_Group.HUD_Item_Quick_Slot_Group_C");
		return ptr;
	}

}


