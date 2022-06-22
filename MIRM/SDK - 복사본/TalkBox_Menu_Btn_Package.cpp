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
	 * 		Name   -> Function TalkBox_Menu_Btn.TalkBox_Menu_Btn_C.SetImageBrushWithLock
	 * 		Flags  -> ()
	 */
	void UTalkBox_Menu_Btn_C::SetImageBrushWithLock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TalkBox_Menu_Btn.TalkBox_Menu_Btn_C.SetImageBrushWithLock");
		
		UTalkBox_Menu_Btn_C_SetImageBrushWithLock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TalkBox_Menu_Btn.TalkBox_Menu_Btn_C.SetImageBrush
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETalkSelectType                                    selecttype                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Alpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTalkBox_Menu_Btn_C::SetImageBrush(ETalkSelectType selecttype, float Alpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TalkBox_Menu_Btn.TalkBox_Menu_Btn_C.SetImageBrush");
		
		UTalkBox_Menu_Btn_C_SetImageBrush_Params params {};
		params.selecttype = selecttype;
		params.Alpha = Alpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TalkBox_Menu_Btn.TalkBox_Menu_Btn_C.BndEvt__Qmenu_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTalkBox_Menu_Btn_C::BndEvt__Qmenu_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TalkBox_Menu_Btn.TalkBox_Menu_Btn_C.BndEvt__Qmenu_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UTalkBox_Menu_Btn_C_BndEvt__Qmenu_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TalkBox_Menu_Btn.TalkBox_Menu_Btn_C.OnPreSet
	 * 		Flags  -> ()
	 */
	void UTalkBox_Menu_Btn_C::OnPreSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TalkBox_Menu_Btn.TalkBox_Menu_Btn_C.OnPreSet");
		
		UTalkBox_Menu_Btn_C_OnPreSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TalkBox_Menu_Btn.TalkBox_Menu_Btn_C.OnSetTalkSelectBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ETalkSelectType                                    Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SetIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            stringindex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTalkBox_Menu_Btn_C::OnSetTalkSelectBox(bool result, ETalkSelectType Type, int32_t SetIndex, int32_t stringindex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TalkBox_Menu_Btn.TalkBox_Menu_Btn_C.OnSetTalkSelectBox");
		
		UTalkBox_Menu_Btn_C_OnSetTalkSelectBox_Params params {};
		params.result = result;
		params.Type = Type;
		params.SetIndex = SetIndex;
		params.stringindex = stringindex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TalkBox_Menu_Btn.TalkBox_Menu_Btn_C.OnReceivePrefabMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        PrefabMessage                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      PrefabParameters                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UTalkBox_Menu_Btn_C::OnReceivePrefabMessage(const class FName& PrefabMessage, const class FString& PrefabParameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TalkBox_Menu_Btn.TalkBox_Menu_Btn_C.OnReceivePrefabMessage");
		
		UTalkBox_Menu_Btn_C_OnReceivePrefabMessage_Params params {};
		params.PrefabMessage = PrefabMessage;
		params.PrefabParameters = PrefabParameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TalkBox_Menu_Btn.TalkBox_Menu_Btn_C.ExecuteUbergraph_TalkBox_Menu_Btn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTalkBox_Menu_Btn_C::ExecuteUbergraph_TalkBox_Menu_Btn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TalkBox_Menu_Btn.TalkBox_Menu_Btn_C.ExecuteUbergraph_TalkBox_Menu_Btn");
		
		UTalkBox_Menu_Btn_C_ExecuteUbergraph_TalkBox_Menu_Btn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TalkBox_Menu_Btn.TalkBox_Menu_Btn_C.ClickDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTalkBox_Menu_Btn_C::ClickDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TalkBox_Menu_Btn.TalkBox_Menu_Btn_C.ClickDispatcher__DelegateSignature");
		
		UTalkBox_Menu_Btn_C_ClickDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTalkBox_Menu_Btn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTalkBox_Menu_Btn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TalkBox_Menu_Btn.TalkBox_Menu_Btn_C");
		return ptr;
	}

}


