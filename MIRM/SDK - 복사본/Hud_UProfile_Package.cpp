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
	 * 		Name   -> Function Hud_UProfile.Hud_UProfile_C.IsSleepMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSleepMode                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_UProfile_C::IsSleepMode(bool* IsSleepMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_UProfile.Hud_UProfile_C.IsSleepMode");
		
		UHud_UProfile_C_IsSleepMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsSleepMode != nullptr)
			*IsSleepMode = params.IsSleepMode;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_UProfile.Hud_UProfile_C.Keypresscheck
	 * 		Flags  -> ()
	 */
	void UHud_UProfile_C::Keypresscheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_UProfile.Hud_UProfile_C.Keypresscheck");
		
		UHud_UProfile_C_Keypresscheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_UProfile.Hud_UProfile_C.Construct
	 * 		Flags  -> ()
	 */
	void UHud_UProfile_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_UProfile.Hud_UProfile_C.Construct");
		
		UHud_UProfile_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_UProfile.Hud_UProfile_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_UProfile_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_UProfile.Hud_UProfile_C.Tick");
		
		UHud_UProfile_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_UProfile.Hud_UProfile_C.BndEvt__Character_Info_Open_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_UProfile_C::BndEvt__Character_Info_Open_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_UProfile.Hud_UProfile_C.BndEvt__Character_Info_Open_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UHud_UProfile_C_BndEvt__Character_Info_Open_btn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_UProfile.Hud_UProfile_C.BndEvt__HUD_Buff_Icon_Box_K2Node_ComponentBoundEvent_2_BuffPopupDelegate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_UProfile_C::BndEvt__HUD_Buff_Icon_Box_K2Node_ComponentBoundEvent_2_BuffPopupDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_UProfile.Hud_UProfile_C.BndEvt__HUD_Buff_Icon_Box_K2Node_ComponentBoundEvent_2_BuffPopupDelegate__DelegateSignature");
		
		UHud_UProfile_C_BndEvt__HUD_Buff_Icon_Box_K2Node_ComponentBoundEvent_2_BuffPopupDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_UProfile.Hud_UProfile_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHud_UProfile_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_UProfile.Hud_UProfile_C.PreConstruct");
		
		UHud_UProfile_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_UProfile.Hud_UProfile_C.OnCharacterStatusByKeypress
	 * 		Flags  -> ()
	 */
	void UHud_UProfile_C::OnCharacterStatusByKeypress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_UProfile.Hud_UProfile_C.OnCharacterStatusByKeypress");
		
		UHud_UProfile_C_OnCharacterStatusByKeypress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_UProfile.Hud_UProfile_C.OnPkStatusProfileByKeypress
	 * 		Flags  -> ()
	 */
	void UHud_UProfile_C::OnPkStatusProfileByKeypress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_UProfile.Hud_UProfile_C.OnPkStatusProfileByKeypress");
		
		UHud_UProfile_C_OnPkStatusProfileByKeypress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_UProfile.Hud_UProfile_C.PowerCalculate
	 * 		Flags  -> ()
	 */
	void UHud_UProfile_C::PowerCalculate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_UProfile.Hud_UProfile_C.PowerCalculate");
		
		UHud_UProfile_C_PowerCalculate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_UProfile.Hud_UProfile_C.OnChangeCflag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCFlagValues                                CFlagValues                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UHud_UProfile_C::OnChangeCflag(const struct FCFlagValues& CFlagValues)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_UProfile.Hud_UProfile_C.OnChangeCflag");
		
		UHud_UProfile_C_OnChangeCflag_Params params {};
		params.CFlagValues = CFlagValues;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_UProfile.Hud_UProfile_C.OnInitailizeWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Parameters                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UHud_UProfile_C::OnInitailizeWidget(const class FString& Parameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_UProfile.Hud_UProfile_C.OnInitailizeWidget");
		
		UHud_UProfile_C_OnInitailizeWidget_Params params {};
		params.Parameters = Parameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_UProfile.Hud_UProfile_C.BndEvt__Hud_PkStatus_Profile_K2Node_ComponentBoundEvent_36_ClickDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_UProfile_C::BndEvt__Hud_PkStatus_Profile_K2Node_ComponentBoundEvent_36_ClickDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_UProfile.Hud_UProfile_C.BndEvt__Hud_PkStatus_Profile_K2Node_ComponentBoundEvent_36_ClickDispatcher__DelegateSignature");
		
		UHud_UProfile_C_BndEvt__Hud_PkStatus_Profile_K2Node_ComponentBoundEvent_36_ClickDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_UProfile.Hud_UProfile_C.SetGradeBG
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_GRADE                                            grade                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_UProfile_C::SetGradeBG(E_GRADE grade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_UProfile.Hud_UProfile_C.SetGradeBG");
		
		UHud_UProfile_C_SetGradeBG_Params params {};
		params.grade = grade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_UProfile.Hud_UProfile_C.OnReceivePrefabMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        PrefabMessage                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      PrefabParameters                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UHud_UProfile_C::OnReceivePrefabMessage(const class FName& PrefabMessage, const class FString& PrefabParameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_UProfile.Hud_UProfile_C.OnReceivePrefabMessage");
		
		UHud_UProfile_C_OnReceivePrefabMessage_Params params {};
		params.PrefabMessage = PrefabMessage;
		params.PrefabParameters = PrefabParameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_UProfile.Hud_UProfile_C.BndEvt__Hud_UProfile_HUD_Vitality_Btn_K2Node_ComponentBoundEvent_0_Click_Dispatch__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_UProfile_C::BndEvt__Hud_UProfile_HUD_Vitality_Btn_K2Node_ComponentBoundEvent_0_Click_Dispatch__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_UProfile.Hud_UProfile_C.BndEvt__Hud_UProfile_HUD_Vitality_Btn_K2Node_ComponentBoundEvent_0_Click_Dispatch__DelegateSignature");
		
		UHud_UProfile_C_BndEvt__Hud_UProfile_HUD_Vitality_Btn_K2Node_ComponentBoundEvent_0_Click_Dispatch__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_UProfile.Hud_UProfile_C.ExecuteUbergraph_Hud_UProfile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHud_UProfile_C::ExecuteUbergraph_Hud_UProfile(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_UProfile.Hud_UProfile_C.ExecuteUbergraph_Hud_UProfile");
		
		UHud_UProfile_C_ExecuteUbergraph_Hud_UProfile_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Hud_UProfile.Hud_UProfile_C.ClickDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UHud_UProfile_C::ClickDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hud_UProfile.Hud_UProfile_C.ClickDispatcher__DelegateSignature");
		
		UHud_UProfile_C_ClickDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UHud_UProfile_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHud_UProfile_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Hud_UProfile.Hud_UProfile_C");
		return ptr;
	}

}


