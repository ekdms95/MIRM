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
	 * 		Name   -> Function Chat_Hud_Small.Chat_Hud_Small_C.CheckDungeonStoryUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bChecked                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChat_Hud_Small_C::CheckDungeonStoryUI(bool* bChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chat_Hud_Small.Chat_Hud_Small_C.CheckDungeonStoryUI");
		
		UChat_Hud_Small_C_CheckDungeonStoryUI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bChecked != nullptr)
			*bChecked = params.bChecked;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chat_Hud_Small.Chat_Hud_Small_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChat_Hud_Small_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chat_Hud_Small.Chat_Hud_Small_C.PreConstruct");
		
		UChat_Hud_Small_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chat_Hud_Small.Chat_Hud_Small_C.BndEvt__Btn_Open_L_Chat_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChat_Hud_Small_C::BndEvt__Btn_Open_L_Chat_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chat_Hud_Small.Chat_Hud_Small_C.BndEvt__Btn_Open_L_Chat_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UChat_Hud_Small_C_BndEvt__Btn_Open_L_Chat_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chat_Hud_Small.Chat_Hud_Small_C.EnableNotiAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnable                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChat_Hud_Small_C::EnableNotiAnimation(bool IsEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chat_Hud_Small.Chat_Hud_Small_C.EnableNotiAnimation");
		
		UChat_Hud_Small_C_EnableNotiAnimation_Params params {};
		params.IsEnable = IsEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chat_Hud_Small.Chat_Hud_Small_C.ChatOpacityAnimation
	 * 		Flags  -> ()
	 */
	void UChat_Hud_Small_C::ChatOpacityAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chat_Hud_Small.Chat_Hud_Small_C.ChatOpacityAnimation");
		
		UChat_Hud_Small_C_ChatOpacityAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chat_Hud_Small.Chat_Hud_Small_C.BndEvt__Chat_Hud_Small_Btn_Open_L_Chat_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChat_Hud_Small_C::BndEvt__Chat_Hud_Small_Btn_Open_L_Chat_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chat_Hud_Small.Chat_Hud_Small_C.BndEvt__Chat_Hud_Small_Btn_Open_L_Chat_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UChat_Hud_Small_C_BndEvt__Chat_Hud_Small_Btn_Open_L_Chat_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chat_Hud_Small.Chat_Hud_Small_C.ChatOpacityAnimFinish
	 * 		Flags  -> ()
	 */
	void UChat_Hud_Small_C::ChatOpacityAnimFinish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chat_Hud_Small.Chat_Hud_Small_C.ChatOpacityAnimFinish");
		
		UChat_Hud_Small_C_ChatOpacityAnimFinish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Chat_Hud_Small.Chat_Hud_Small_C.ExecuteUbergraph_Chat_Hud_Small
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChat_Hud_Small_C::ExecuteUbergraph_Chat_Hud_Small(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Chat_Hud_Small.Chat_Hud_Small_C.ExecuteUbergraph_Chat_Hud_Small");
		
		UChat_Hud_Small_C_ExecuteUbergraph_Chat_Hud_Small_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UChat_Hud_Small_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChat_Hud_Small_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Chat_Hud_Small.Chat_Hud_Small_C");
		return ptr;
	}

}


