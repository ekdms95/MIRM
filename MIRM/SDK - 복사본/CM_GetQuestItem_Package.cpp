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
	 * 		Name   -> Function CM_GetQuestItem.CM_GetQuestItem_C.OnMouseButtonDown_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UCM_GetQuestItem_C::OnMouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_GetQuestItem.CM_GetQuestItem_C.OnMouseButtonDown_1");
		
		UCM_GetQuestItem_C_OnMouseButtonDown_1_Params params {};
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
	 * 		Name   -> Function CM_GetQuestItem.CM_GetQuestItem_C.OnPlayAnimation
	 * 		Flags  -> ()
	 */
	void UCM_GetQuestItem_C::OnPlayAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_GetQuestItem.CM_GetQuestItem_C.OnPlayAnimation");
		
		UCM_GetQuestItem_C_OnPlayAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_GetQuestItem.CM_GetQuestItem_C.OnSetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Title                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemNameId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            MaxCount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_GetQuestItem_C::OnSetData(int32_t Title, int32_t ItemId, int32_t ItemNameId, int32_t count, int32_t MaxCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_GetQuestItem.CM_GetQuestItem_C.OnSetData");
		
		UCM_GetQuestItem_C_OnSetData_Params params {};
		params.Title = Title;
		params.ItemId = ItemId;
		params.ItemNameId = ItemNameId;
		params.count = count;
		params.MaxCount = MaxCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_GetQuestItem.CM_GetQuestItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UCM_GetQuestItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_GetQuestItem.CM_GetQuestItem_C.Construct");
		
		UCM_GetQuestItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_GetQuestItem.CM_GetQuestItem_C.WidgetAnimationEvt_Message_Ani_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UCM_GetQuestItem_C::WidgetAnimationEvt_Message_Ani_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_GetQuestItem.CM_GetQuestItem_C.WidgetAnimationEvt_Message_Ani_K2Node_WidgetAnimationEvent_1");
		
		UCM_GetQuestItem_C_WidgetAnimationEvt_Message_Ani_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_GetQuestItem.CM_GetQuestItem_C.WidgetAnimationEvt_Message_Ani_K2Node_WidgetAnimationEvent_2
	 * 		Flags  -> ()
	 */
	void UCM_GetQuestItem_C::WidgetAnimationEvt_Message_Ani_K2Node_WidgetAnimationEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_GetQuestItem.CM_GetQuestItem_C.WidgetAnimationEvt_Message_Ani_K2Node_WidgetAnimationEvent_2");
		
		UCM_GetQuestItem_C_WidgetAnimationEvt_Message_Ani_K2Node_WidgetAnimationEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_GetQuestItem.CM_GetQuestItem_C.ExecuteUbergraph_CM_GetQuestItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCM_GetQuestItem_C::ExecuteUbergraph_CM_GetQuestItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_GetQuestItem.CM_GetQuestItem_C.ExecuteUbergraph_CM_GetQuestItem");
		
		UCM_GetQuestItem_C_ExecuteUbergraph_CM_GetQuestItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UCM_GetQuestItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCM_GetQuestItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CM_GetQuestItem.CM_GetQuestItem_C");
		return ptr;
	}

}


