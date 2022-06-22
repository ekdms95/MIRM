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
	 * 		Name   -> Function Hud_PaProfile_New.Hud_PaProfile_New_C.PartyPf_Status
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESlateVisibility                                   User_Basic_visi                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              User_Basic_render                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESlateVisibility                                   NoChannel_visi                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESlateVisibility                                   UserWating_visi                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_PaProfile_New_C::PartyPf_Status(ESlateVisibility User_Basic_visi, float User_Basic_render, ESlateVisibility NoChannel_visi, ESlateVisibility UserWating_visi)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_PaProfile_New.Hud_PaProfile_New_C.PartyPf_Status");
		
		UHud_PaProfile_New_C_PartyPf_Status_Params params {};
		params.User_Basic_visi = User_Basic_visi;
		params.User_Basic_render = User_Basic_render;
		params.NoChannel_visi = NoChannel_visi;
		params.UserWating_visi = UserWating_visi;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_PaProfile_New.Hud_PaProfile_New_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_PaProfile_New_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_PaProfile_New.Hud_PaProfile_New_C.Tick");
		
		UHud_PaProfile_New_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_PaProfile_New.Hud_PaProfile_New_C.ConnectCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               online                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_PaProfile_New_C::ConnectCheck(int32_t ID, bool online)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_PaProfile_New.Hud_PaProfile_New_C.ConnectCheck");
		
		UHud_PaProfile_New_C_ConnectCheck_Params params {};
		params.ID = ID;
		params.online = online;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_PaProfile_New.Hud_PaProfile_New_C.OnExileVoteState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isTarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            allowed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            denied                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_PaProfile_New_C::OnExileVoteState(bool isTarget, int32_t allowed, int32_t denied)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_PaProfile_New.Hud_PaProfile_New_C.OnExileVoteState");
		
		UHud_PaProfile_New_C_OnExileVoteState_Params params {};
		params.isTarget = isTarget;
		params.allowed = allowed;
		params.denied = denied;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_PaProfile_New.Hud_PaProfile_New_C.OnInitialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOwner                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            zoneid                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsOnLine                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_PaProfile_New_C::OnInitialize(bool IsOwner, int32_t zoneid, bool IsOnLine)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_PaProfile_New.Hud_PaProfile_New_C.OnInitialize");
		
		UHud_PaProfile_New_C_OnInitialize_Params params {};
		params.IsOwner = IsOwner;
		params.zoneid = zoneid;
		params.IsOnLine = IsOnLine;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_PaProfile_New.Hud_PaProfile_New_C.OnSetEmpty
	 * 		Flags  -> ()
	 */
	void UHud_PaProfile_New_C::OnSetEmpty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_PaProfile_New.Hud_PaProfile_New_C.OnSetEmpty");
		
		UHud_PaProfile_New_C_OnSetEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_PaProfile_New.Hud_PaProfile_New_C.OnSetInviteUser_2
	 * 		Flags  -> ()
	 */
	void UHud_PaProfile_New_C::OnSetInviteUser_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_PaProfile_New.Hud_PaProfile_New_C.OnSetInviteUser_2");
		
		UHud_PaProfile_New_C_OnSetInviteUser_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_PaProfile_New.Hud_PaProfile_New_C.RegResource
	 * 		Flags  -> ()
	 */
	void UHud_PaProfile_New_C::RegResource()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_PaProfile_New.Hud_PaProfile_New_C.RegResource");
		
		UHud_PaProfile_New_C_RegResource_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_PaProfile_New.Hud_PaProfile_New_C.OnSetHpGauge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Percent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_PaProfile_New_C::OnSetHpGauge(float Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_PaProfile_New.Hud_PaProfile_New_C.OnSetHpGauge");
		
		UHud_PaProfile_New_C_OnSetHpGauge_Params params {};
		params.Percent = Percent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_PaProfile_New.Hud_PaProfile_New_C.BndEvt__Hud_PaProfile_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_PaProfile_New_C::BndEvt__Hud_PaProfile_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_PaProfile_New.Hud_PaProfile_New_C.BndEvt__Hud_PaProfile_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UHud_PaProfile_New_C_BndEvt__Hud_PaProfile_btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_PaProfile_New.Hud_PaProfile_New_C.BndEvt__MirButton_121_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_PaProfile_New_C::BndEvt__MirButton_121_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_PaProfile_New.Hud_PaProfile_New_C.BndEvt__MirButton_121_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UHud_PaProfile_New_C_BndEvt__MirButton_121_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_PaProfile_New.Hud_PaProfile_New_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_PaProfile_New_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_PaProfile_New.Hud_PaProfile_New_C.PreConstruct");
		
		UHud_PaProfile_New_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_PaProfile_New.Hud_PaProfile_New_C.OnDeadState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isDead                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_PaProfile_New_C::OnDeadState(bool isDead)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_PaProfile_New.Hud_PaProfile_New_C.OnDeadState");
		
		UHud_PaProfile_New_C_OnDeadState_Params params {};
		params.isDead = isDead;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_PaProfile_New.Hud_PaProfile_New_C.ExecuteUbergraph_Hud_PaProfile_New
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_PaProfile_New_C::ExecuteUbergraph_Hud_PaProfile_New(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_PaProfile_New.Hud_PaProfile_New_C.ExecuteUbergraph_Hud_PaProfile_New");
		
		UHud_PaProfile_New_C_ExecuteUbergraph_Hud_PaProfile_New_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_PaProfile_New.Hud_PaProfile_New_C.List_Click_Dispatch__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_PaProfile_New_C::List_Click_Dispatch__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_PaProfile_New.Hud_PaProfile_New_C.List_Click_Dispatch__DelegateSignature");
		
		UHud_PaProfile_New_C_List_Click_Dispatch__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHud_PaProfile_New_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHud_PaProfile_New_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Hud_PaProfile_New.Hud_PaProfile_New_C");
		return ptr;
	}

}


