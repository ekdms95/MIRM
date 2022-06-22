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
	 * 		Name   -> Function TalkBox_Quest_Btn.TalkBox_Quest_Btn_C.OnPreSet
	 * 		Flags  -> ()
	 */
	void UTalkBox_Quest_Btn_C::OnPreSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TalkBox_Quest_Btn.TalkBox_Quest_Btn_C.OnPreSet");
		
		UTalkBox_Quest_Btn_C_OnPreSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TalkBox_Quest_Btn.TalkBox_Quest_Btn_C.BndEvt__NPC_Tabcan_K2Node_ComponentBoundEvent_1_OnTabCanvasStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTalkBox_Quest_Btn_C::BndEvt__NPC_Tabcan_K2Node_ComponentBoundEvent_1_OnTabCanvasStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TalkBox_Quest_Btn.TalkBox_Quest_Btn_C.BndEvt__NPC_Tabcan_K2Node_ComponentBoundEvent_1_OnTabCanvasStateChanged__DelegateSignature");
		
		UTalkBox_Quest_Btn_C_BndEvt__NPC_Tabcan_K2Node_ComponentBoundEvent_1_OnTabCanvasStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TalkBox_Quest_Btn.TalkBox_Quest_Btn_C.OnReceivePrefabMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        PrefabMessage                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      PrefabParameters                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UTalkBox_Quest_Btn_C::OnReceivePrefabMessage(const class FName& PrefabMessage, const class FString& PrefabParameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TalkBox_Quest_Btn.TalkBox_Quest_Btn_C.OnReceivePrefabMessage");
		
		UTalkBox_Quest_Btn_C_OnReceivePrefabMessage_Params params {};
		params.PrefabMessage = PrefabMessage;
		params.PrefabParameters = PrefabParameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TalkBox_Quest_Btn.TalkBox_Quest_Btn_C.ExecuteUbergraph_TalkBox_Quest_Btn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTalkBox_Quest_Btn_C::ExecuteUbergraph_TalkBox_Quest_Btn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TalkBox_Quest_Btn.TalkBox_Quest_Btn_C.ExecuteUbergraph_TalkBox_Quest_Btn");
		
		UTalkBox_Quest_Btn_C_ExecuteUbergraph_TalkBox_Quest_Btn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function TalkBox_Quest_Btn.TalkBox_Quest_Btn_C.ClickDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UTalkBox_Quest_Btn_C::ClickDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TalkBox_Quest_Btn.TalkBox_Quest_Btn_C.ClickDispatcher__DelegateSignature");
		
		UTalkBox_Quest_Btn_C_ClickDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UTalkBox_Quest_Btn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTalkBox_Quest_Btn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TalkBox_Quest_Btn.TalkBox_Quest_Btn_C");
		return ptr;
	}

}


