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
	 * 		Name   -> Function Hud_TProfile_New.Hud_TProfile_New_C.SetTeamTag
	 * 		Flags  -> ()
	 */
	bool UHud_TProfile_New_C::SetTeamTag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_TProfile_New.Hud_TProfile_New_C.SetTeamTag");
		
		UHud_TProfile_New_C_SetTeamTag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_TProfile_New.Hud_TProfile_New_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_TProfile_New_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_TProfile_New.Hud_TProfile_New_C.Tick");
		
		UHud_TProfile_New_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_TProfile_New.Hud_TProfile_New_C.BndEvt__MirButton_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_TProfile_New_C::BndEvt__MirButton_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_TProfile_New.Hud_TProfile_New_C.BndEvt__MirButton_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UHud_TProfile_New_C_BndEvt__MirButton_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_TProfile_New.Hud_TProfile_New_C.OnPreSet
	 * 		Flags  -> ()
	 */
	void UHud_TProfile_New_C::OnPreSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_TProfile_New.Hud_TProfile_New_C.OnPreSet");
		
		UHud_TProfile_New_C_OnPreSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_TProfile_New.Hud_TProfile_New_C.OnSetVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_TProfile_New_C::OnSetVisible(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_TProfile_New.Hud_TProfile_New_C.OnSetVisible");
		
		UHud_TProfile_New_C_OnSetVisible_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_TProfile_New.Hud_TProfile_New_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_TProfile_New_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_TProfile_New.Hud_TProfile_New_C.PreConstruct");
		
		UHud_TProfile_New_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_TProfile_New.Hud_TProfile_New_C.BndEvt__Hud_ProfileMenu_K2Node_ComponentBoundEvent_5_InvitePartyDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_TProfile_New_C::BndEvt__Hud_ProfileMenu_K2Node_ComponentBoundEvent_5_InvitePartyDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_TProfile_New.Hud_TProfile_New_C.BndEvt__Hud_ProfileMenu_K2Node_ComponentBoundEvent_5_InvitePartyDispatcher__DelegateSignature");
		
		UHud_TProfile_New_C_BndEvt__Hud_ProfileMenu_K2Node_ComponentBoundEvent_5_InvitePartyDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_TProfile_New.Hud_TProfile_New_C.BndEvt__Hud_ProfileMenu_K2Node_ComponentBoundEvent_10_PersonalTradeDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_TProfile_New_C::BndEvt__Hud_ProfileMenu_K2Node_ComponentBoundEvent_10_PersonalTradeDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_TProfile_New.Hud_TProfile_New_C.BndEvt__Hud_ProfileMenu_K2Node_ComponentBoundEvent_10_PersonalTradeDispatcher__DelegateSignature");
		
		UHud_TProfile_New_C_BndEvt__Hud_ProfileMenu_K2Node_ComponentBoundEvent_10_PersonalTradeDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_TProfile_New.Hud_TProfile_New_C.BndEvt__Hud_ProfileMenu_K2Node_ComponentBoundEvent_11_InviteGuildDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_TProfile_New_C::BndEvt__Hud_ProfileMenu_K2Node_ComponentBoundEvent_11_InviteGuildDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_TProfile_New.Hud_TProfile_New_C.BndEvt__Hud_ProfileMenu_K2Node_ComponentBoundEvent_11_InviteGuildDispatcher__DelegateSignature");
		
		UHud_TProfile_New_C_BndEvt__Hud_ProfileMenu_K2Node_ComponentBoundEvent_11_InviteGuildDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_TProfile_New.Hud_TProfile_New_C.BndEvt__Hud_ProfileMenu_K2Node_ComponentBoundEvent_12_WhisperDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_TProfile_New_C::BndEvt__Hud_ProfileMenu_K2Node_ComponentBoundEvent_12_WhisperDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_TProfile_New.Hud_TProfile_New_C.BndEvt__Hud_ProfileMenu_K2Node_ComponentBoundEvent_12_WhisperDispatcher__DelegateSignature");
		
		UHud_TProfile_New_C_BndEvt__Hud_ProfileMenu_K2Node_ComponentBoundEvent_12_WhisperDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_TProfile_New.Hud_TProfile_New_C.BndEvt__Hud_ProfileMenu_K2Node_ComponentBoundEvent_13_WhisperBlockDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_TProfile_New_C::BndEvt__Hud_ProfileMenu_K2Node_ComponentBoundEvent_13_WhisperBlockDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_TProfile_New.Hud_TProfile_New_C.BndEvt__Hud_ProfileMenu_K2Node_ComponentBoundEvent_13_WhisperBlockDispatcher__DelegateSignature");
		
		UHud_TProfile_New_C_BndEvt__Hud_ProfileMenu_K2Node_ComponentBoundEvent_13_WhisperBlockDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_TProfile_New.Hud_TProfile_New_C.BndEvt__Hud_ProfileMenu_K2Node_ComponentBoundEvent_14_DetailViewDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_TProfile_New_C::BndEvt__Hud_ProfileMenu_K2Node_ComponentBoundEvent_14_DetailViewDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_TProfile_New.Hud_TProfile_New_C.BndEvt__Hud_ProfileMenu_K2Node_ComponentBoundEvent_14_DetailViewDispatcher__DelegateSignature");
		
		UHud_TProfile_New_C_BndEvt__Hud_ProfileMenu_K2Node_ComponentBoundEvent_14_DetailViewDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_TProfile_New.Hud_TProfile_New_C.BndEvt__Hud_ProfileMenu_K2Node_ComponentBoundEvent_15_AddFriendDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_TProfile_New_C::BndEvt__Hud_ProfileMenu_K2Node_ComponentBoundEvent_15_AddFriendDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_TProfile_New.Hud_TProfile_New_C.BndEvt__Hud_ProfileMenu_K2Node_ComponentBoundEvent_15_AddFriendDispatcher__DelegateSignature");
		
		UHud_TProfile_New_C_BndEvt__Hud_ProfileMenu_K2Node_ComponentBoundEvent_15_AddFriendDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_TProfile_New.Hud_TProfile_New_C.BndEvt__Hud_TProfile_New_MirButton_176_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_TProfile_New_C::BndEvt__Hud_TProfile_New_MirButton_176_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_TProfile_New.Hud_TProfile_New_C.BndEvt__Hud_TProfile_New_MirButton_176_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UHud_TProfile_New_C_BndEvt__Hud_TProfile_New_MirButton_176_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_TProfile_New.Hud_TProfile_New_C.BndEvt__Hud_TProfile_New_CM_Btn_Close_K2Node_ComponentBoundEvent_4_Click__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_TProfile_New_C::BndEvt__Hud_TProfile_New_CM_Btn_Close_K2Node_ComponentBoundEvent_4_Click__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_TProfile_New.Hud_TProfile_New_C.BndEvt__Hud_TProfile_New_CM_Btn_Close_K2Node_ComponentBoundEvent_4_Click__DelegateSignature");
		
		UHud_TProfile_New_C_BndEvt__Hud_TProfile_New_CM_Btn_Close_K2Node_ComponentBoundEvent_4_Click__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_TProfile_New.Hud_TProfile_New_C.CloseEvent
	 * 		Flags  -> ()
	 */
	void UHud_TProfile_New_C::CloseEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_TProfile_New.Hud_TProfile_New_C.CloseEvent");
		
		UHud_TProfile_New_C_CloseEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_TProfile_New.Hud_TProfile_New_C.ExecuteUbergraph_Hud_TProfile_New
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_TProfile_New_C::ExecuteUbergraph_Hud_TProfile_New(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_TProfile_New.Hud_TProfile_New_C.ExecuteUbergraph_Hud_TProfile_New");
		
		UHud_TProfile_New_C_ExecuteUbergraph_Hud_TProfile_New_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHud_TProfile_New_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHud_TProfile_New_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Hud_TProfile_New.Hud_TProfile_New_C");
		return ptr;
	}

}


