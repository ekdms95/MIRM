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
	 * 		Name   -> Function MyMirPlayerCameraManager_BP.MyMirPlayerCameraManager_BP_C.IsZoomState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isZoom                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMyMirPlayerCameraManager_BP_C::IsZoomState(bool* isZoom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyMirPlayerCameraManager_BP.MyMirPlayerCameraManager_BP_C.IsZoomState");
		
		AMyMirPlayerCameraManager_BP_C_IsZoomState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isZoom != nullptr)
			*isZoom = params.isZoom;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyMirPlayerCameraManager_BP.MyMirPlayerCameraManager_BP_C.InpActEvt_Tab_K2Node_InputKeyEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputCore_FKey                             Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AMyMirPlayerCameraManager_BP_C::InpActEvt_Tab_K2Node_InputKeyEvent_1(const struct FInputCore_FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyMirPlayerCameraManager_BP.MyMirPlayerCameraManager_BP_C.InpActEvt_Tab_K2Node_InputKeyEvent_1");
		
		AMyMirPlayerCameraManager_BP_C_InpActEvt_Tab_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyMirPlayerCameraManager_BP.MyMirPlayerCameraManager_BP_C.InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMyMirPlayerCameraManager_BP_C::InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyMirPlayerCameraManager_BP.MyMirPlayerCameraManager_BP_C.InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1");
		
		AMyMirPlayerCameraManager_BP_C_InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyMirPlayerCameraManager_BP.MyMirPlayerCameraManager_BP_C.OnSetCharacterZoom
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isZoom                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMyMirPlayerCameraManager_BP_C::OnSetCharacterZoom(bool isZoom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyMirPlayerCameraManager_BP.MyMirPlayerCameraManager_BP_C.OnSetCharacterZoom");
		
		AMyMirPlayerCameraManager_BP_C_OnSetCharacterZoom_Params params {};
		params.isZoom = isZoom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyMirPlayerCameraManager_BP.MyMirPlayerCameraManager_BP_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AMyMirPlayerCameraManager_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyMirPlayerCameraManager_BP.MyMirPlayerCameraManager_BP_C.ReceiveBeginPlay");
		
		AMyMirPlayerCameraManager_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyMirPlayerCameraManager_BP.MyMirPlayerCameraManager_BP_C.OnTestUIHideEvent
	 * 		Flags  -> ()
	 */
	void AMyMirPlayerCameraManager_BP_C::OnTestUIHideEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyMirPlayerCameraManager_BP.MyMirPlayerCameraManager_BP_C.OnTestUIHideEvent");
		
		AMyMirPlayerCameraManager_BP_C_OnTestUIHideEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyMirPlayerCameraManager_BP.MyMirPlayerCameraManager_BP_C.OnSetEditCameraRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isZoom                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMyMirPlayerCameraManager_BP_C::OnSetEditCameraRotation(bool isZoom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyMirPlayerCameraManager_BP.MyMirPlayerCameraManager_BP_C.OnSetEditCameraRotation");
		
		AMyMirPlayerCameraManager_BP_C_OnSetEditCameraRotation_Params params {};
		params.isZoom = isZoom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyMirPlayerCameraManager_BP.MyMirPlayerCameraManager_BP_C.ExecuteUbergraph_MyMirPlayerCameraManager_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMyMirPlayerCameraManager_BP_C::ExecuteUbergraph_MyMirPlayerCameraManager_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyMirPlayerCameraManager_BP.MyMirPlayerCameraManager_BP_C.ExecuteUbergraph_MyMirPlayerCameraManager_BP");
		
		AMyMirPlayerCameraManager_BP_C_ExecuteUbergraph_MyMirPlayerCameraManager_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyMirPlayerCameraManager_BP.MyMirPlayerCameraManager_BP_C.TestUIHideDispather__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsHide                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMyMirPlayerCameraManager_BP_C::TestUIHideDispather__DelegateSignature(bool IsHide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyMirPlayerCameraManager_BP.MyMirPlayerCameraManager_BP_C.TestUIHideDispather__DelegateSignature");
		
		AMyMirPlayerCameraManager_BP_C_TestUIHideDispather__DelegateSignature_Params params {};
		params.IsHide = IsHide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyMirPlayerCameraManager_BP.MyMirPlayerCameraManager_BP_C.CharacterZoomDispatcher__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isZoom                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMyMirPlayerCameraManager_BP_C::CharacterZoomDispatcher__DelegateSignature(bool isZoom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyMirPlayerCameraManager_BP.MyMirPlayerCameraManager_BP_C.CharacterZoomDispatcher__DelegateSignature");
		
		AMyMirPlayerCameraManager_BP_C_CharacterZoomDispatcher__DelegateSignature_Params params {};
		params.isZoom = isZoom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction AMyMirPlayerCameraManager_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMyMirPlayerCameraManager_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MyMirPlayerCameraManager_BP.MyMirPlayerCameraManager_BP_C");
		return ptr;
	}

}


