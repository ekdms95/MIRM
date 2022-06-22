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
	 * 		Name   -> Function MyMirPlayerController_BP.MyMirPlayerController_BP_C.SetPlayerAttackState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isattack                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMyMirPlayerController_BP_C::SetPlayerAttackState(bool isattack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyMirPlayerController_BP.MyMirPlayerController_BP_C.SetPlayerAttackState");
		
		AMyMirPlayerController_BP_C_SetPlayerAttackState_Params params {};
		params.isattack = isattack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyMirPlayerController_BP.MyMirPlayerController_BP_C.InpActEvt_Android_Back_K2Node_InputKeyEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputCore_FKey                             Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMyMirPlayerController_BP_C::InpActEvt_Android_Back_K2Node_InputKeyEvent_2(const struct FInputCore_FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyMirPlayerController_BP.MyMirPlayerController_BP_C.InpActEvt_Android_Back_K2Node_InputKeyEvent_2");
		
		AMyMirPlayerController_BP_C_InpActEvt_Android_Back_K2Node_InputKeyEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyMirPlayerController_BP.MyMirPlayerController_BP_C.InpActEvt_Touch1_K2Node_InputActionEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputCore_FKey                             Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMyMirPlayerController_BP_C::InpActEvt_Touch1_K2Node_InputActionEvent_1(const struct FInputCore_FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyMirPlayerController_BP.MyMirPlayerController_BP_C.InpActEvt_Touch1_K2Node_InputActionEvent_1");
		
		AMyMirPlayerController_BP_C_InpActEvt_Touch1_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyMirPlayerController_BP.MyMirPlayerController_BP_C.InpActEvt_BackSpace_K2Node_InputKeyEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputCore_FKey                             Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMyMirPlayerController_BP_C::InpActEvt_BackSpace_K2Node_InputKeyEvent_1(const struct FInputCore_FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyMirPlayerController_BP.MyMirPlayerController_BP_C.InpActEvt_BackSpace_K2Node_InputKeyEvent_1");
		
		AMyMirPlayerController_BP_C_InpActEvt_BackSpace_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyMirPlayerController_BP.MyMirPlayerController_BP_C.OnTouchMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ControlTouchMove                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMyMirPlayerController_BP_C::OnTouchMove(bool ControlTouchMove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyMirPlayerController_BP.MyMirPlayerController_BP_C.OnTouchMove");
		
		AMyMirPlayerController_BP_C_OnTouchMove_Params params {};
		params.ControlTouchMove = ControlTouchMove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyMirPlayerController_BP.MyMirPlayerController_BP_C.OnGamePadMove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ControlTouchMove                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMyMirPlayerController_BP_C::OnGamePadMove(bool ControlTouchMove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyMirPlayerController_BP.MyMirPlayerController_BP_C.OnGamePadMove");
		
		AMyMirPlayerController_BP_C_OnGamePadMove_Params params {};
		params.ControlTouchMove = ControlTouchMove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyMirPlayerController_BP.MyMirPlayerController_BP_C.InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMyMirPlayerController_BP_C::InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_1(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyMirPlayerController_BP.MyMirPlayerController_BP_C.InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_1");
		
		AMyMirPlayerController_BP_C_InpAxisKeyEvt_Gamepad_LeftX_K2Node_InputAxisKeyEvent_1_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyMirPlayerController_BP.MyMirPlayerController_BP_C.InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMyMirPlayerController_BP_C::InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_2(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyMirPlayerController_BP.MyMirPlayerController_BP_C.InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_2");
		
		AMyMirPlayerController_BP_C_InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_2_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyMirPlayerController_BP.MyMirPlayerController_BP_C.OnSetAutoProcessToUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAutoPlayProcessUnit                        AutoPlayProcessUnit                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void AMyMirPlayerController_BP_C::OnSetAutoProcessToUI(const struct FAutoPlayProcessUnit& AutoPlayProcessUnit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyMirPlayerController_BP.MyMirPlayerController_BP_C.OnSetAutoProcessToUI");
		
		AMyMirPlayerController_BP_C_OnSetAutoProcessToUI_Params params {};
		params.AutoPlayProcessUnit = AutoPlayProcessUnit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyMirPlayerController_BP.MyMirPlayerController_BP_C.BeginPlayEnd
	 * 		Flags  -> ()
	 */
	void AMyMirPlayerController_BP_C::BeginPlayEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyMirPlayerController_BP.MyMirPlayerController_BP_C.BeginPlayEnd");
		
		AMyMirPlayerController_BP_C_BeginPlayEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyMirPlayerController_BP.MyMirPlayerController_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AMyMirPlayerController_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyMirPlayerController_BP.MyMirPlayerController_BP_C.ReceiveBeginPlay");
		
		AMyMirPlayerController_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyMirPlayerController_BP.MyMirPlayerController_BP_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMyMirPlayerController_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyMirPlayerController_BP.MyMirPlayerController_BP_C.ReceiveTick");
		
		AMyMirPlayerController_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyMirPlayerController_BP.MyMirPlayerController_BP_C.InpAxisEvt_PinchZoom_K2Node_InputAxisEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMyMirPlayerController_BP_C::InpAxisEvt_PinchZoom_K2Node_InputAxisEvent_1(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyMirPlayerController_BP.MyMirPlayerController_BP_C.InpAxisEvt_PinchZoom_K2Node_InputAxisEvent_1");
		
		AMyMirPlayerController_BP_C_InpAxisEvt_PinchZoom_K2Node_InputAxisEvent_1_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyMirPlayerController_BP.MyMirPlayerController_BP_C.ExecuteUbergraph_MyMirPlayerController_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMyMirPlayerController_BP_C::ExecuteUbergraph_MyMirPlayerController_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyMirPlayerController_BP.MyMirPlayerController_BP_C.ExecuteUbergraph_MyMirPlayerController_BP");
		
		AMyMirPlayerController_BP_C_ExecuteUbergraph_MyMirPlayerController_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyMirPlayerController_BP.MyMirPlayerController_BP_C.BindOnSetAutoProcess__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAutoPlayProcessUnit                        AutoPlayProcessUnit                                        (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void AMyMirPlayerController_BP_C::BindOnSetAutoProcess__DelegateSignature(const struct FAutoPlayProcessUnit& AutoPlayProcessUnit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyMirPlayerController_BP.MyMirPlayerController_BP_C.BindOnSetAutoProcess__DelegateSignature");
		
		AMyMirPlayerController_BP_C_BindOnSetAutoProcess__DelegateSignature_Params params {};
		params.AutoPlayProcessUnit = AutoPlayProcessUnit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AMyMirPlayerController_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMyMirPlayerController_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MyMirPlayerController_BP.MyMirPlayerController_BP_C");
		return ptr;
	}

}


