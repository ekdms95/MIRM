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
	 * 		Name   -> Function CM_Quest_HighLight.Quest_HighLight_C.SetHighlight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bActive                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuest_HighLight_C::SetHighlight(bool bActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Quest_HighLight.Quest_HighLight_C.SetHighlight");
		
		UQuest_HighLight_C_SetHighlight_Params params {};
		params.bActive = bActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Quest_HighLight.Quest_HighLight_C.Point_play_Function
	 * 		Flags  -> ()
	 */
	void UQuest_HighLight_C::Point_play_Function()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Quest_HighLight.Quest_HighLight_C.Point_play_Function");
		
		UQuest_HighLight_C_Point_play_Function_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Quest_HighLight.Quest_HighLight_C.Scale_Ani_Finish
	 * 		Flags  -> ()
	 */
	void UQuest_HighLight_C::Scale_Ani_Finish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Quest_HighLight.Quest_HighLight_C.Scale_Ani_Finish");
		
		UQuest_HighLight_C_Scale_Ani_Finish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Quest_HighLight.Quest_HighLight_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UQuest_HighLight_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Quest_HighLight.Quest_HighLight_C.PreConstruct");
		
		UQuest_HighLight_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Quest_HighLight.Quest_HighLight_C.OnReceivePrefabMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        PrefabMessage                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      PrefabParameters                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UQuest_HighLight_C::OnReceivePrefabMessage(const class FName& PrefabMessage, const class FString& PrefabParameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Quest_HighLight.Quest_HighLight_C.OnReceivePrefabMessage");
		
		UQuest_HighLight_C_OnReceivePrefabMessage_Params params {};
		params.PrefabMessage = PrefabMessage;
		params.PrefabParameters = PrefabParameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Quest_HighLight.Quest_HighLight_C.BndEvt__Quest_HighLight_Click_btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UQuest_HighLight_C::BndEvt__Quest_HighLight_Click_btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Quest_HighLight.Quest_HighLight_C.BndEvt__Quest_HighLight_Click_btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UQuest_HighLight_C_BndEvt__Quest_HighLight_Click_btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CM_Quest_HighLight.Quest_HighLight_C.ExecuteUbergraph_Quest_HighLight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UQuest_HighLight_C::ExecuteUbergraph_Quest_HighLight(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CM_Quest_HighLight.Quest_HighLight_C.ExecuteUbergraph_Quest_HighLight");
		
		UQuest_HighLight_C_ExecuteUbergraph_Quest_HighLight_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UQuest_HighLight_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuest_HighLight_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CM_Quest_HighLight.Quest_HighLight_C");
		return ptr;
	}

}


