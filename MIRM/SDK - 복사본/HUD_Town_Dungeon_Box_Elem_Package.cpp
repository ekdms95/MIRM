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
	 * 		Name   -> Function HUD_Town_Dungeon_Box_Elem.HUD_Town_Dungeon_Box_Elem_C.Construct
	 * 		Flags  -> ()
	 */
	void UHUD_Town_Dungeon_Box_Elem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Town_Dungeon_Box_Elem.HUD_Town_Dungeon_Box_Elem_C.Construct");
		
		UHUD_Town_Dungeon_Box_Elem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Town_Dungeon_Box_Elem.HUD_Town_Dungeon_Box_Elem_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUD_Town_Dungeon_Box_Elem_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Town_Dungeon_Box_Elem.HUD_Town_Dungeon_Box_Elem_C.PreConstruct");
		
		UHUD_Town_Dungeon_Box_Elem_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Town_Dungeon_Box_Elem.HUD_Town_Dungeon_Box_Elem_C.WidgetAnimationEvt_Wave_Complete_ani_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UHUD_Town_Dungeon_Box_Elem_C::WidgetAnimationEvt_Wave_Complete_ani_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Town_Dungeon_Box_Elem.HUD_Town_Dungeon_Box_Elem_C.WidgetAnimationEvt_Wave_Complete_ani_K2Node_WidgetAnimationEvent_1");
		
		UHUD_Town_Dungeon_Box_Elem_C_WidgetAnimationEvt_Wave_Complete_ani_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Town_Dungeon_Box_Elem.HUD_Town_Dungeon_Box_Elem_C.AnimState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_ANIMSTATE                                        States                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Town_Dungeon_Box_Elem_C::AnimState(E_ANIMSTATE States)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Town_Dungeon_Box_Elem.HUD_Town_Dungeon_Box_Elem_C.AnimState");
		
		UHUD_Town_Dungeon_Box_Elem_C_AnimState_Params params {};
		params.States = States;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Town_Dungeon_Box_Elem.HUD_Town_Dungeon_Box_Elem_C.OnMouseEnter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UHUD_Town_Dungeon_Box_Elem_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Town_Dungeon_Box_Elem.HUD_Town_Dungeon_Box_Elem_C.OnMouseEnter");
		
		UHUD_Town_Dungeon_Box_Elem_C_OnMouseEnter_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Town_Dungeon_Box_Elem.HUD_Town_Dungeon_Box_Elem_C.OnMouseLeave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UHUD_Town_Dungeon_Box_Elem_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Town_Dungeon_Box_Elem.HUD_Town_Dungeon_Box_Elem_C.OnMouseLeave");
		
		UHUD_Town_Dungeon_Box_Elem_C_OnMouseLeave_Params params {};
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Town_Dungeon_Box_Elem.HUD_Town_Dungeon_Box_Elem_C.ExecuteUbergraph_HUD_Town_Dungeon_Box_Elem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHUD_Town_Dungeon_Box_Elem_C::ExecuteUbergraph_HUD_Town_Dungeon_Box_Elem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Town_Dungeon_Box_Elem.HUD_Town_Dungeon_Box_Elem_C.ExecuteUbergraph_HUD_Town_Dungeon_Box_Elem");
		
		UHUD_Town_Dungeon_Box_Elem_C_ExecuteUbergraph_HUD_Town_Dungeon_Box_Elem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HUD_Town_Dungeon_Box_Elem.HUD_Town_Dungeon_Box_Elem_C.ClickDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHUD_Town_Dungeon_Box_Elem_C::ClickDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUD_Town_Dungeon_Box_Elem.HUD_Town_Dungeon_Box_Elem_C.ClickDispatcher__DelegateSignature");
		
		UHUD_Town_Dungeon_Box_Elem_C_ClickDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHUD_Town_Dungeon_Box_Elem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUD_Town_Dungeon_Box_Elem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUD_Town_Dungeon_Box_Elem.HUD_Town_Dungeon_Box_Elem_C");
		return ptr;
	}

}


